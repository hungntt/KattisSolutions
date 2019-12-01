import math


def Cantor(num):
    if num == 1:
        return True
    else:
        cantorSet = dict()
        while num not in cantorSet.keys():
            cantorSet.update({num: 0})
            num = round(num*3, 6)
            print(num)
            head = int(math.floor(num))
            if head == 1:
                return False
            else:
                num -= head
        return True


def main():
    while True:
        input_ = input()
        if input_ == 'END':
            break
        else:
            input_ = float(input_)
            if Cantor(input_):
                print("MEMBER")
            else:
                print("NON-MEMBER")


main()
