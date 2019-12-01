import math

pre_define = {
    1: 1,
    2: 2,
    3: 6,
    4: 24,
    5: 120
}


def main():
    input_fact = input()
    input_fact = int(input_fact)
    input_digit = len(str(input_fact))
    print("Input: ", input_digit)
    if input_digit < 4:
        for key, val in pre_define.items():
            if input_fact == val:
                print(key)
    else:
        num = 6
        log_sum = 4 * math.log10(2) + 2 * math.log10(3) + math.log10(5)
        while True:
            num += 1
            log_sum += math.log10(num)
            print(num, log_sum)
            if log_sum > input_digit:
                print(num - 1)
                break


main()
