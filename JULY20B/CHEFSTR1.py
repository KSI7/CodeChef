result = []

for i in range(int(input())):

    N = map(int, input().split())

    strings = list(map(int, input().split()))

    skips = 0

    for j in range(len(strings) - 1):
        if strings[j] > strings[j+1]:
            skips += ((strings[j]-strings[j+1])-1)
        else:
            skips += ((strings[j+1]-strings[j])-1)

    result.append(skips)

for k in result:
    print(k)
