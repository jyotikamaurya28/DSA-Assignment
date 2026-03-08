'''34.	Palindrome String:- 
Given a string s, the task is to check if it is palindrome or not. 
Example: 
Input: s = "abba" 
Output: true 
'''

s = input()

rev = ""

for ch in s:
    rev = ch + rev

if s == rev:
    print("true")
else:
    print("false")