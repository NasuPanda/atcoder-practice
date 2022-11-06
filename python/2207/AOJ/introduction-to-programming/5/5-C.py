"""
5 6

#.#.#.
.#.#.#
#.#.#.
.#.#.#
#.#.#.
"""

import sys

while True:
    H, W = map(int, sys.stdin.readline().split())
    if H == W == 0:
        break
    output = ""

    for h in range(H):
        for w in range(W):
            if h % 2 == 0:
                if w % 2 == 0:
                    output += "#"
                else:
                    output += "."
            else:
                if w % 2 == 0:
                    output += "."
                else:
                    output += "#"
        output += "\n"
    print(output)
