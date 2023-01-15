a, b = map(int, input().split())


class Edge:
    def __init__(self, connects) -> None:
        self.connects = connects

    def has_edge(self, edge):
        return edge in self.connects


edges = [
    None,
    Edge([2, 3]),
    Edge([1, 4, 5]),
    Edge([1, 6, 7]),
    Edge([2, 8, 9]),
    Edge([2, 10, 11]),
    Edge([2, 12, 13]),
    Edge([2, 14, 15]),
    Edge([4]),
    Edge([4]),
    Edge([5]),
    Edge([5]),
    Edge([6]),
    Edge([6]),
    Edge([7]),
    Edge([7]),
]

if edges[a].has_edge(b):
    print("Yes")
else:
    print("No")
