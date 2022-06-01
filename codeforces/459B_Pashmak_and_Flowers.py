"""
https://codeforces.com/problemset/problem/459/B

Pashmak and Flowers
Pashmak decided to give Parmida a pair of flowers from the garden. There are n flowers in the garden and the i-th of them has a beauty number bi. Parmida is a very strange girl so she doesn't want to have the two most beautiful flowers necessarily. She wants to have those pairs of flowers that their beauty difference is maximal possible!

Your task is to write a program which calculates two things:

The maximum beauty difference of flowers that Pashmak can give to Parmida.
The number of ways that Pashmak can pick the flowers. Two ways are considered different if and only if there is at least one flower that is chosen in the first way and not chosen in the second way.
"""
n = int(input())
nums = list(map(int, input().split()))
high = 0
low = nums[0]
count = 0

for i in range(len(nums)):
    if nums[i] > high:
        high = nums[i]
    elif nums[i] < low:
        low = nums[i]

dif = high - low

for j in range(len(nums)):
    if nums[j] == high:
        count += nums.count(low)

print (dif,count)