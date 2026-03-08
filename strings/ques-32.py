'''32.	First Unique Character in a String 
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1. 
Example 1: 
Input: s = "leetcode" Output: 0 
Explanation: 
The character 'l' at index 0 is the first character that does not occur at any other index. 
'''

s = input()

for i in range(len(s)):
    if s.count(s[i]) == 1:
        print(i)
        break
else:
    print(-1)