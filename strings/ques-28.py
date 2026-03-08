'''28.	Counting Valleys: 
Problem: Given a sequence of up and down steps during a hike, determine the number of valleys traversed. Input: 
8 
UDDDUDUU 
Output: 
1 
Explanation: A valley is a sequence of consecutive steps below sea level. The example describes a single valley. 
'''

n = int(input())
steps = input()

level = 0
valley = 0

for step in steps:
    
    if step == 'U':
        level += 1
        if level == 0:
            valley += 1
            
    elif step == 'D':
        level -= 1

print(valley)