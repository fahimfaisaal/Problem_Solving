while True:
    weight = int(input())

    if weight >= 1 and weight <= 100:
        if weight % 2 == 0 and weight > 2: print("YES")
        else: print("NO")
        break
