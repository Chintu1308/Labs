#Set and its methods
#create the set
set1 = {1,4,6,7,8,9}
#print the set
print(set1)
#add the element
set1.add(10)
#len of the set
print(len(set1))
#remove the element
set1.remove(4)
#sum of the set
print(sum(set1))
#sort the set
set1.sort()
#union of the set
set2 = {1,2,3,4,5}
print(set1.union(set2))
#intersection of the set
print(set1.intersection(set2))
#difference of the set
print(set1.difference(set2))
#clear the set
set1.clear()