'''36.	Longest Common Prefix 
Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "". 
 
Example 1: 
Input: strs = ["flower","flow","flight"] Output: "fl" 
'''

strs = input().split()

prefix = strs[0]

for s in strs[1:]:
    
    while not s.startswith(prefix):
        prefix = prefix[:-1]
        
        if prefix == "":
            break

print(prefix)