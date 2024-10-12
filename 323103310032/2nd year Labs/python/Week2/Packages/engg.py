def stuDetails():

    roll = int(input("Enter your roll number: "))
    name = input("Enter your name: ")
    year = int(input("Enter your year of study: "))
    
    if year == 1:
        print(f"Welcome, {name}!")

    elif year == 2:
        print(f"Keep up the good work, {name}!")
    elif year == 3:
        print(f"Stay focused, {name}.")

    elif year == 4:
        print(f"Good luck with your placements, {name}!")
    else:
        print("Invalid year.")

project_list = []
def add_project():
    project = input("Enter the project name: ")
    project_list.append(project)
    print("Project successfully added.")
    
def display_projects():
    print("The projects are: ", project_list)
