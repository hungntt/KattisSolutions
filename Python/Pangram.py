cases = int(input())
for i in range(cases):
    string = input()
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    missing = []
    pangram = True
    for char in alphabet:
        if char not in string.lower():
            missing.append(char)
            pangram = False

    if pangram == True:
        print("pangram")
    else:
        print('missing ' + ''.join(missing))


