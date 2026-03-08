'''26.	Problem Statement – 
You have to write a function that accepts a string whose length is “len”, the string has some “#” in it; you have to move all the hashes to the front of the string and return the whole string back and print it. 
Example: 
Input: 
Move#Hash#to#Front Output: 
MoveHashtoFront 
'''

s = input("Enter string: ")

count_hash = 0
result = ""

for ch in s:
    if ch == '#':
        count_hash += 1
    else:
        result += ch

print("#" * count_hash + result)