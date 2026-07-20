


named=(10,20,30,40,50)
single=(10,)
print(named)
print(single)
print(type(named))
print(type(single))
tup=("name", "age", "marks", False)
example=("munna",21,98,True)
print(tup)
print(type(tup))
print(example)
print(type(example))
empty=()
print(type(empty))
t = (5, 10, 15, 20, 25)
print(t[0])
print(t[-1])
print(t[2])
colors = ("red", "green", "blue", "yellow")
print(colors[0])
print(colors[-1])
print(colors[2])
nums = (1, 2, 3, 4, 5, 6, 7, 8)
print(nums[0:4])
print(nums[-1:-4])
print(nums[2:5])
nums = (10, 20, 30, 40, 50)
print(nums[::-1])
nums = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
print(nums[::2])
a = (1, 2, 3)
b = (4, 5, 6)
c = a + b
print(c)
tupl=("Python",)
print(tupl*5)
fruits = ("apple", "banana", "mango", "orange")
print("apple" in fruits)
print("grape" in fruits)
t = (1, 2, 3, 2, 4, 2, 5)
print(t.count(2))
t = ("a", "b", "c", "d", "b")
print(t.index("b"))
nums = (45, 12, 89, 34, 67)
print(max(nums))
print(min(nums))
print(sum(nums))
print(len(nums))
print(sorted(nums))
t = (10, 20, 30, 40)
l=list(t)
print(l)
t = (10, 20, 30, 40)
t=t+(50,)
print(t)
t = (10, 20, 30)
t=list(t)
t.insert(1, 15)
t=tuple(t)
print(t)
t = (10, 20, 30)
t=list(t)
t.remove(20)
t=tuple(t)
print(t)
subjects = ("Math", "Physics", "Chemistry", "English")
for i in subjects:
    print(i)
subjects = ("Math", "Physics", "Chemistry", "English")
for i in range(len(subjects)):
    print( i,subjects[i])

nums1 = (10, 20, 30, 40, 50)
total=0
for i in nums1:
    total=total+i
print(total)
nums2 = (11, 22, 33, 44, 55, 66)
even=0
odd=0
for i in nums2:
    if i % 2 == 0:
        even+=1
    else:
        odd+=1
print("Even numbers:", even)
print("Odd numbers:", odd)

name = "Aman"
age = 20
city = "Patna"
person = (name, age, city)
print(person)

student = ("Ravi", 18, "CSE")
name, age, course = student
print(name)
print(age)
print(course)
nums = (10, 20, 30, 40, 50)
a,*b,c=nums
print(a)
print(b)
print(c)
students = (
    ("Aman", 85),
    ("Ravi", 90),
    ("Sita", 78)
)
print(students[0][1])
for i in range(len(students)):
    print("Student",i+1,"scroed",students[i][1])
nums = (12, 67, 45, 89, 23, 90)
num2=[]
for i in nums:
    if i>50:
        num2.append(i)
print(num2)
nums = (34, 78, 12, 90, 56)
largest=nums[0]
for i in nums:
    if i > largest:
        largest = i
print(largest)


nums = (34, 78, 12, 90, 56)
smallest=nums[-1]
for i in nums:
    if i < smallest:
        smallest = i
print(smallest)
t = (1, 2, 2, 3, 4, 4, 5)
t2=()
for i in t:
    if i not in t2:
        t2= t2+(i,)
print(t2)
a = (1, 2, 3, 4, 5)
b = (4, 5, 6, 7, 8)
for i in a:
    if i in b:
        print(i)
nums = (10, -5, 20, -15, 30, -25)
positive=0
negative=0
for i in nums:
    if i < 0:
        negative+=1
    else:
        positive+=1
print("Positive numbers:", positive)
print("Negative numbers:", negative)
words = ("python", "tuple", "program")

for i in words:
    print(i[::-1])
nums = (45, 12, 89, 34, 67)
largest = nums[0]
second_largest = nums[0]
for i in nums:
    if i > largest:
        largest = i
    if i < largest and i > second_largest:
        second_largest = i
    
print(largest)
print(second_largest)
nums = (10, 25, 30, 45, 50, 65)
print(sum(nums))
print(max(nums))
print(min(nums))
print(len(nums))
print(sum(nums)/len(nums))
print(nums.count(10))
students = (
    ("Aman", 75),
    ("Ravi", 35),
    ("Sita", 90),
    ("Mohan", 40),
    ("Neha", 28)
)
print(students)
highest = 0
print(sum([i[1] for i in students]))
print(len([i[1] for i in students]))
print(sum([i[1] for i in students])/len([i[1] for i in students]))
print(["pass" if i[1] > 50 else "fail" for i in students])
for i in students:
    if i[1] > highest:
        highest = i[1]
        name = i[0]
print(name, highest)
lowest=100    
for i in students:
    if i[1] < lowest:
        lowest = i[1]
        name = i[0]
# print(name, lowest)
nums = (1, 2, 3, 2, 4, 3, 2, 5, 1)
nums2=[]
for i in nums:
    if i not in nums2:
        nums2.append(i)
        print(f"{i} appears {nums.count(i)} times")
items = ("pen", "book", "copy", "pencil", "eraser")
costemer=input("enter waht do you want:")
for i in items:
    if i == costemer:
        print("Item found")
        break
    else:
        print("Item not found")
        break
    



































































