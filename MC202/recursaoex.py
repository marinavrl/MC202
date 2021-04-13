def adiciona(x):
    print(x)
    x = x + 1
    if x <= 15:
        adiciona(x)
    else:
        return True
x = 10
a = adiciona(x)
