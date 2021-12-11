least = int(input("Enter a value: "))
greatest = int(input("Enter a greater value than the previous: ")) 

odds = []
for i in range(least, greatest):
    if i % 2 == 1: 
        odds.append(i)
print(odds)
