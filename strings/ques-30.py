'''30.	Reverse a String:- 
You are given a string s, and your task is to reverse the string. 
Examples: 
Input: s = "GLA" 
Output: "ALG" 
'''

s = input()

rev = ""

for ch in s:
    rev = ch + rev

print(rev)