def binaryNums(k):

    strs = ''

    flag = 0

    for i in range(39, -1, -1):

        if (final_str[i] <= k):

            flag = 1

            strs += '1'

            k -= final_str[i]

            continue

        if (flag == 1):

            strs += '0'


    return strs


final_str = [0]*40

final_str[0] = 1

final_str[1] = 2

for i in range(2, 40):

    final_str[i] = final_str[i - 1] + final_str[i - 2]


for _ in range(int(input())):

    k = int(input())

    ans = binaryNums(k)

    print(ans)
