'''35.	Longest Palindromic Substring 
Longest Palindromic Substring 
Given a string s, return the longest palindromic substring in s. 
 
Example 1: 
Input: s = "babad" 
Output: "bab" 
Explanation: "aba" is also a valid answer. 
'''

s = input()

start = 0
max_len = 1

for i in range(len(s)):

    # Odd length palindrome
    l = r = i
    while l >= 0 and r < len(s) and s[l] == s[r]:
        if r - l + 1 > max_len:
            start = l
            max_len = r - l + 1
        l -= 1
        r += 1

    # Even length palindrome
    l = i
    r = i + 1
    while l >= 0 and r < len(s) and s[l] == s[r]:
        if r - l + 1 > max_len:
            start = l
            max_len = r - l + 1
        l -= 1
        r += 1

print(s[start:start + max_len])