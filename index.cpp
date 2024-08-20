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

    Pet (string name, string type, int age) {
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
            cout<<"Name"<<this->name<<endl;
            cout<<"Type"<<this->type<<endl;
            cout<<"Age"<<this->age<<endl;
            cout<<"IsAdopted"<<this->isAdopted<<endl;
        }

};

class AdoptionCenter {
    private:
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
                cout<<"Adoption Center is full. Cannot add more pets."<<endl;
            }
        }

        void displayAvailablePets() {
            for (int i=0; i<petCount; i++) {
                if (!pets[i]->getIsAdopted()) {
                    cout<<"Pet "<<(i+1)<<":"<<endl;
                    pets[i]->displayPetDetails();
                    cout<<endl;
                }
            }
        }

};

int main()
{
    cout<<"Hello World"<<endl;

    return 0;
}