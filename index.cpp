#include <iostream>
#include <string>

using namespace std;

class Pet {
private:
    string name;
    string type;
    int age;
    bool isAdopted;

public:
    Pet(string name, string type, int age) {
        this->name = name;
        this->type = type;
        this->age = age;
        this->isAdopted = false;
    }

    string getName() {
        return name;
    }

    string getType() {
        return type;
    }

    int getAge() {
        return age;
    }

    bool getIsAdopted() {
        return isAdopted;
    }

    void adoptPet() {
        this->isAdopted = true;
    }

    void displayPetDetails() {
        cout << "Name: " << this->name << endl;
        cout << "Type: " << this->type << endl;
        cout << "Age: " << this->age << endl;
        cout << "Is Adopted: " << (this->isAdopted ? "Yes" : "No") << endl;
    }
};

class AdoptionCenter {
private:
    Pet* pets[5];
    int petCount;

public:
    AdoptionCenter() {
        petCount = 0;
    }

    void addPet(Pet* pet) {
        if (petCount < 5) {
            pets[petCount] = pet;
            petCount++;
        } else {
            cout << "Adoption Center is full. Cannot add more pets." << endl;
        }
    }

    void displayAvailablePets() {
        bool found = false;
        for (int i = 0; i < petCount; i++) {
            if (!pets[i]->getIsAdopted()) {
                cout << "Pet " << (i + 1) << ":" << endl;
                pets[i]->displayPetDetails();
                cout << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "No available pets at the moment." << endl;
        }
    }

    void adoptPet() {
        int choice;
        cout << "Enter the number of the pet you want to adopt: ";
        cin >> choice;

        if (choice < 1 || choice > petCount) {
            cout << "Invalid choice." << endl;
            return;
        }

        Pet* selectedPet = pets[choice - 1];
        if (selectedPet->getIsAdopted()) {
            cout << "This pet is already adopted." << endl;
        } else {
            selectedPet->adoptPet();
            cout << "Congratulations! You have adopted " << selectedPet->getName() << "." << endl;
        }
    }

    void addNewPet() {
        string name, type;
        int age;
        cout << "Enter the name of the pet: ";
        cin >> name;
        cout << "Enter the type of the pet: ";
        cin >> type;
        cout << "Enter the age of the pet: ";
        cin >> age;

        Pet* newPet = new Pet(name, type, age);
        addPet(newPet);
    }
};

int main() {
    AdoptionCenter adoptionCenter;

    Pet pet1("Faazil", "Hippo", 3);
    Pet pet2("Arun", "Cat", 2);
    Pet pet3("Nasir", "Lion", 1);

    adoptionCenter.addPet(&pet1);
    adoptionCenter.addPet(&pet2);
    adoptionCenter.addPet(&pet3);

    int choice;
    do {
        cout << "1. Display available pets" << endl;
        cout << "2. Adopt a pet" << endl;
        cout << "3. Add a new pet" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Available pets:" << endl;
                adoptionCenter.displayAvailablePets();
                break;
            case 2:
                adoptionCenter.adoptPet();
                break;
            case 3:
                adoptionCenter.addNewPet();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
