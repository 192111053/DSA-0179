#include <iostream>
#include <string>
using namespace std;
class Animal {
protected:
    string name;
    string species;
    int age;
public:
    Animal(string n, string sp, int a) : name(n), species(sp), age(a) {}

    string getName() const { return name; }
    string getSpecies() const { return species; }
    int getAge() const { return age; }

    void setName(string n) { name = n; }
    void setSpecies(string sp) { species = sp; }
    void setAge(int a) { age = a; }
};
class Cat : public Animal {
private:
    string color;
    string breed;
public:
    Cat(string n, string sp, int a, string col, string br) : Animal(n, sp, a), color(col), breed(br) {}

    string getColor() const { return color; }
    string getBreed() const { return breed; }

    void setColor(string col) { color = col; }
    void setBreed(string br) { breed = br; }
};

class Dog : public Animal {
private:
    double weight;
    string breed;
public:
    Dog(string n, string sp, int a, double w, string br) : Animal(n, sp, a), weight(w), breed(br) {}

    double getWeight() const { return weight; }
    string getBreed() const { return breed; }

    void setWeight(double w) { weight = w; }
    void setBreed(string br) { breed = br; }
};

int main() {
    Cat myCat("Fluffy", "Cat", 5, "White", "Persian");
    Dog myDog("Buddy", "Dog", 3, 25.5, "Labrador");

    cout << "Cat Name: " << myCat.getName() << ", Species: " << myCat.getSpecies() << ", Age: " << myCat.getAge() << endl;
    cout << "Color: " << myCat.getColor() << ", Breed: " << myCat.getBreed() << endl;

    cout << "\nDog Name: " << myDog.getName() << ", Species: " << myDog.getSpecies() << ", Age: " << myDog.getAge() << endl;
    cout << "Weight: " << myDog.getWeight() << " lbs, Breed: " << myDog.getBreed() << endl;

    return 0;
}

