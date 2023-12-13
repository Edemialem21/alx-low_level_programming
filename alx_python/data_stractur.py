# More on Lists
'''list.append(x) ist.sort()
list.extend(iterable)   list.reverse()
list.insert(i, x)       list.copy()
list.remove(x)
list.pop([i])
list.clear()
list.count(x)
'''
# List Comprehensions 
square = []
for i in range(10):
    square.append(i**2)

# or, equivalently
square = [x**2 for x in range(10)]

# we can also include for and if cluse in square brackets

a = [(x, y) for x in [1,2,3] for y in [3,1,4] if x != y]
# [(1, 3), (1, 4), (2, 3), (2, 1), (2, 4), (3, 1), (3, 4)]
print(a)

# and this expressison is equivalent to this double for looop
alx = []
for i in range(10):
    for j in range(10):
        if i != j:
            alx.append((i, j))

# print(alx)
# If the expression is a tuple (e.g. the (x, y) in the previous example), it must be parenthesized.
vec = [-4, -2, 0, 1, 3, 2]
# a new list with the values doubled
[x*2 for x in vec]
print(vec)

# filter the list to exclude negative numbers
positive = [x for x in vec if x > 0]
print(positive)
# apply a funtion to all the elements
abso = [abs(x) for x in vec]
print(abso)

# creating the tuble in paratesizes
tuble = [(x, x**2) for x in range(10)]
print(tuble)

# flatten a list using a listomp with two for 
vec = [[3, 4, 5], [2, 3, 4], [1, 2, 4]]
elem = [num for elm in vec for num in elm]
print(elem)

# Nested List Comprehensions
matrix = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12],
]
#  list comprehension will transpose rows and columns:
[[row[i] for row in matrix] for i in range(4)]

# The del statement
a = [-1, 1, 66.25, 333, 333, 1234.5]
del a[0]
print(a)
del a[2:4]

# del can also be used to delete entire variables:
del a

# string and lists are two examples  for sequence data types
# Tuples and Sequences
# tuples are immutable
# can be nested
# unlike tubles lists are mutable and their elements are usually homogenous and accessed by iterating over the list 
t = 12345, 54321, 'hello!'
print(t)
# empty tuples are constracted by an empty pair of parenthesies
empty = ()
# reverse operation is also possible
x, y, z = t
#   set is an unordered collection with no duplicate elements
# Curly braces or the set() function can be used to create sets.
# to create an empty set set() not {}

basket = {'apple', 'orange', 'apple', 'pear', 'orange', 'banana'}
print(basket)
age = 'orange' in basket                 # fast membership testing
print(age)
# Demonstrate set operations on unique letters from two words
a = set('abracadabra')
b = set('alacazam')
print(a)
a - b                              # letters in a but not in b
a | b                              # letters in a or b or both
a & b                              # letters in both a and b
a ^ b                              # letters in a or b but not both
# Similarly to list comprehensions, set comprehensions are also supported:
a = {x for x in 'abracadabra' if x not in 'abc'}

# Dictionaries
# it is another built in python data type
# unlike sequences, which are indexed by a range of numbers dictionaries are indexed by keys, which an be any immutaale types: stringa nd numbers can always be  used to as keye
# unlike tuples, list can't be used as key, since list can be modified in place using index assighnments, slice assighnmesnts or methods like appent() and extend()

# It is best to think of a dictionary as a set of key: value pairs, with the requirement that the keys are unique (within one dictionary). 

tel = {'jack': 4098, 'sape': 4139}
print(tel)

tel['guido'] = 4127
print(tel)
key = list(tel)  #returns a list of all keys used in the dictionatry
print(key)

sort = sorted(tel)  #sort the key values
print(sort) 

'guido' in tel

# The dict() constructor builds dictionaries directly from sequences of key-value pairs:
dicc = dict([('sape', 4139), ('guido', 4127), ('jack', 4098)])

print(dicc)

{x: x**2 for x in (2, 4, 6)}
dict(sape=4139, guido=4127, jack=4098)

# Looping Techniques
staff = {'gallahad': 'the pure', 'robin': 'the brave', 'age': 34, 'alemu': 'dge', 'kal' : 18}
for i, j in staff.items():
    print(i, j)


# the position index and corresponding value can be retrieved at the same time using the enumerate() function.
for i, j in enumerate(staff):
    print(i, j)
# To loop over two or more sequences at the same time, the entries can be paired with the zip() function.
questions = ['name', 'quest', 'favorite', 'color']
answers = ['edemialem', 'orto', 'coding', 'black']

for i, j in zip(questions, answers):
    print('what is your {0}? It is {1}.'.format(i,j))

# To loop over a sequence in reverse, first specify the sequence in a forward direction and then call the reversed() function.
# 
for i in reversed(range(1, 10, 2)):
    print(i)
# the sorted() function which returns a new sorted list while leaving the source unaltered.
basket = ['apple', 'orange', 'apple', 'pear', 'orange', 'banana']
for i in sorted(basket):
    print(i)

# The use of sorted() in combination with set() over a sequence is an idiomatic way to loop over unique elements of the sequence in sorted order.
# whrer in the set() method removes any duplicet while the  sort() method sort each uniques seqquence
basket = ['apple', 'orange', 'apple', 'pear', 'orange', 'banana']
for i in sorted(set(basket)):
    print(i)
so = sorted(basket)
print(set(so))
# it is often simpler and safer to create a new list instead.
import math
raw_data = [56.2, float('NaN'), 51.7, 55.3, 52.5, float('NaN'), 47.8]
filtered_data = []
for value in raw_data:
    if not math.isnan(value):
        filtered_data.append(value)

# The comparison operators in and not in are membership tests that determine whether a value is in (or not in)
# The operators is and is not compare whether two objects are really the same object. 
string1, string2, string3 = '', 'Trondheim', 'Hammer Dance'
non_null = string1 or string2 or string3


# Lambda Operator, filter, reduce and map
# The lambda operator or lambda function is a way to create small anonymous functions
#  i.e. functions without a name. These functions are throw-away functions, i.e. they are just needed where they have been created. 
# syntax 
# lambda argument_list: expression ==> wherein argument_list is the arguments which are comma separeted and argument is the matematical expressin

sum = lambda x, y : x + y
sum(3,4)


# alternatively
def sum(x,y):
    return x + y
sum(3,4)

# The map() Function

# map() is a function which takes two arguments:

# r = map(func, seq)
# where func is name of the function and the second a sequence(list)
# map() applies the function func to all the elements of the sequesnce 


def fahrenheit(T):
    return ((float(9)/5)*T + 32)
def celsius(T):
    return (float(5)/9)*(T-32)
temperatures = (36.5, 37, 37.5, 38, 39)
F = map(fahrenheit, temperatures)
C = map(celsius, F)
temperatures_in_Fahrenheit = list(map(fahrenheit, temperatures))
temperatures_in_Celsius = list(map(celsius, temperatures_in_Fahrenheit))
print(temperatures_in_Fahrenheit)
print(temperatures_in_Celsius)
print(F)
print(C)
C = [39.2, 36.5, 37.3, 38, 37.8] 
F = list(map(lambda x: (float(9)/5)*x + 32, C))

a = [1, 2, 3, 4]
b = [17, 12, 11, 10]
c = [-1, -4, 5, 9] 
lam = list(map(lambda x, y, z : x+y+z, a, b, c))
print(lam)
