# サイコロゲーム
import random
import itertools

class Dice:
    def __init__(self, face_values):
        self.faces = dict(zip(['top', 'front', 'right',
                            'left', 'back', 'bottom'], face_values))
        self.all_order = 'NNNNWNNNWNNNENNNENNNWNNN'

    def roll_n(self):
        self.faces['top'], self.faces['front'], self.faces['bottom'], self.faces['back'] = \
            self.faces['front'], self.faces['bottom'], self.faces['back'], self.faces['top']

    def roll_s(self):
        self.faces['top'], self.faces['front'], self.faces['bottom'], self.faces['back'] = \
            self.faces['back'], self.faces['top'], self.faces['front'], self.faces['bottom']

    def roll_e(self):
        self.faces['top'], self.faces['right'], self.faces['bottom'],self.faces['left'] = \
            self.faces['left'], self.faces['top'], self.faces['right'], self.faces['bottom']

    def roll_w(self):
        self.faces['top'], self.faces['right'], self.faces['bottom'], self.faces['left'] = \
            self.faces['right'], self.faces['bottom'], self.faces['left'], self.faces['top']

    def roll_direction(self, direction):
        if direction == 'N':
            self.roll_n()
        elif direction == 'S':
            self.roll_s()
        elif direction == 'E':
            self.roll_e()
        elif direction == 'W':
            self.roll_w()

    def roll_random_to_target(self, *target):
        top, front = target
        rolls = [self.roll_e, self.roll_n, self.roll_s, self.roll_w]

        while True:
            roll = random.choice(rolls)
            roll()
            if self.faces['top'] == top and self.faces['front'] == front:
                break

    def get_faces(self):
        return self.faces['top'], self.faces['front'], self.faces['right'], self.faces['left'], self.faces['back'], self.faces['bottom']


"""２つのサイコロが同じ物かどうか判定する
"""
face_values = map(int, input().split())
dice_a = Dice(face_values)
face_values = map(int, input().split())
dice_b = Dice(face_values)

is_same = False

for i in dice_a.all_order:
    dice_a.roll_direction(i)
    if dice_a.get_faces() == dice_b.get_faces():
        is_same = True

print('Yes' if is_same else 'No')

"""全て異なる場合Yes, 一つでも同じものがあればTrue
"""
is_different = True

n = int(input())
dices = [Dice(input().split()) for __ in range(n)]
# itertools.combinations を使うことでn個の組み合わせ全てを取得できる
dice_combinations = list(itertools.combinations(dices, 2))

for dice_base, dice_2 in dice_combinations:
    for order in dice_base.all_order:
        dice_2.roll_direction(order)
        if dice_base.get_faces() == dice_2.get_faces():
            is_different = False
            break

print('Yes' if is_different else 'No')
