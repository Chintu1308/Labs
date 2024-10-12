def medicineDetais():
    medicine_name = input("Enter the medicine name: ")
    quantity = int(input("Enter the quantity available: "))
    expiry_year = int(input("Enter the expiry year: "))

    if expiry_year < 2024:
        print("Warning: This medicine is expired or close to expiry!")
    else:
        print("Medicine details are successfully added")

def display_medicines():
    medicine = input("Enter the medicine name: ")
    available_medicines = ["Crocin", "Paracetamol", "Dolo", "Aspirin", "Disprin"]

    if medicine not in available_medicines:
        print("This medicine is not available in this pharmacy.")
        print("The available medicines are: ", available_medicines)
    else:
        print("The medicine is available")