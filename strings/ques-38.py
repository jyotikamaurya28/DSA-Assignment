'''Longest Substring Without Repeating Characters 
Given a string s, find the length of the longest substring without duplicate characters. 
Example 1: 
Input: s = "abcabcbb" 
Output: 3 
Explanation: The answer is "abc", with the length of 3. 
'''

s = input()

char_set = set()
left = 0
max_length = 0

for right in range(len(s)):
    
    while s[right] in char_set:
        char_set.remove(s[left])
        left += 1
    
    char_set.add(s[right])
    max_length = max(max_length, right - left + 1)

print(max_length)