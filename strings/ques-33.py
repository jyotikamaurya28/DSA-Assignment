'''33.	Find the First Non-Repeated Character in a String: 
Problem: Given a string, find the first character that does not repeat. 
Input: String: "swiss" 
Output: w 
Explanation: 'w' is the first character that does not repeat in the string
'''

s = input()

for ch in s:
    if s.count(ch) == 1:
        print(ch)
        break
else:
    print("No unique character")