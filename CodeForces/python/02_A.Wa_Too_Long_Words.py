count = int(input())

if (count >= 1 and count <= 100):
    while (count):
        word = input()
        length = len(word)
        
        if (length > 10): print(word[0] + str(length - 2) + word[length - 1])
        else: print(word)

        count -= 1
