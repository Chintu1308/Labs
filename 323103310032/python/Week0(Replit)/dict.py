#Dictionaary and its methods
#create the dictionary
dist1 = {"MJ": "USA": 23, "CR7": "Portugal": 7, "Messi": "Argentina": 10}
#print the dictionary
print(dist1)
#len of the dictionary
print(len(dist1))
#access the value
print(dist1["MJ"])
#update the value
dist1["CR7"] = "Brazil"
#remove the value
dist1.pop("Messi")
#keys of the dictionary
print(dist1.keys())
#values of the dictionary
print(dist1.values())
#items of the dictionary
print(dist1.items())
#updating the dictionary
dist1.update({"Ronaldo": "Portugal"})
#copie the dictionary
dist2 = dist1.copy()
#clear the dictionary
dist1.clear()