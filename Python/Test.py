# --------------------------
# VGU Selected Problems from the ACM Programming Contest WS 2019/2020
# *Problem: carrots Solving for Carrots
# *Link: https://open.kattis.com/problems/factovisors;
# @author Nguyen Truong Thanh Hung - CS2016 - No. 11376
# @version 1.0, 27/11/2019
# *Method: compare prime factors of n! and m
# *Status: Accepted
# *Runtime: 0.00s
# *Programming language: C++
# --------------------------

def main():
    n = int(input())
    nums = list()
    possible = false

    line = input().split()
    for i in range(n):
        nums[i] = line[i]

    sort(nums)

    for i in range(n - 2):
        if nums[i] + nums[i + 1] > nums[i + 2]
            possible = true
            break

    if possible:
        print("Possible")
    else:
        print("Impossible")

