import math
squares = []

for value in range (1,120):
    square = math.pow(value, 2)
    squares.append(square)

print(squares)
