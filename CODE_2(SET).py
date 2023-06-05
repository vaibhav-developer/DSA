# create an two empty set and Check its data type
set1 = set()
set2 = set()
print('Empty_set Data type=', type(set1))
def read_set():
 #Accepting 1st and 2nd set data from user
 n=int(input("Enter how many element want to add in set A"))
 for i in range(n):
  element=int(input("Enter an number"))
  set1.add(element)

 n=int(input("Enter how many element want to add in set B"))
 for i in range(n):
  element=int(input("Enter an number"))
  set2.add(element)
  print("Set A=",set1) #print intial accepted set1
  print("Set B=",set2) #print intial accepted set2
read_set();
op=1;
while(op):
  print("---------- Menu ---------")
  print("1. Add (new Element) -Place a value into the set")
  print("2. Remove (element) Remove the value")
  print("3. Contains (element) Return true if element is in collection")
  print("4. Size () Return number of values in collection Iterator () Return an iterator used to loop over collection")
  print("5. Intersection of two sets")
  print("6. Union of two sets")
  print("7. Difference between two sets,")
  print("8. Subset")
  ch=int(input("Enter your choice to perform operation on set :"))
  if(ch==1):
    x=int(input("Enter an element to add into set A :"))
    set1.add(x)
    print("After adding new data \n Set A=",set1) #print set1
  elif ch==5:
    print(set1.intersection(set2), '----------',set1 & set2)
  elif ch==6:
    print(set1.union(set2), '----------', set1| set2)
  elif ch==7:
    print(set1.difference(set2), '----------', set1 - set2)
    print(set1.symmetric_difference(set2), '----------', set1 ^ set2)
  op=int(input("Press 0 to exit and 1 to cotinue :"))