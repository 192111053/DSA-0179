#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
    char gender;
public:
    Person(string n, int a, char g) : name(n), age(a), gender(g) {}

    string getName() const { return name; }
    int getAge() const { return age; }
    char getGender() const { return gender; }

    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setGender(char g) { gender = g; }
};
class Student : public Person {
private:
    int rollNumber;
    string className;
public:
    Student(string n, int a, char g, int roll, string cls) : Person(n, a, g), rollNumber(roll), className(cls) {}

    int getRollNumber() const { return rollNumber; }
    string getClassName() const { return className; }

    void setRollNumber(int roll) { rollNumber = roll; }
    void setClassName(string cls) { className = cls; }
};
class Teacher : public Person {
private:
    string subject;
    double salary;
public:
    Teacher(string n, int a, char g, string subj, double sal) : Person(n, a, g), subject(subj), salary(sal) {}

    string getSubject() const { return subject; }
    double getSalary() const { return salary; }

    void setSubject(string subj) { subject = subj; }
    void setSalary(double sal) { salary = sal; }
};

int main() {
    Student student("Alice", 20, 'F', 101, "Class X");
    Teacher teacher("Mr. Smith", 35, 'M', "Mathematics", 50000);

    cout << "Student Name: " << student.getName() << ", Age: " << student.getAge() << ", Gender: " << student.getGender() << endl;
    cout << "Roll Number: " << student.getRollNumber() << ", Class: " << student.getClassName() << endl;

    cout << "\nTeacher Name: " << teacher.getName() << ", Age: " << teacher.getAge() << ", Gender: " << teacher.getGender() << endl;
    cout << "Subject: " << teacher.getSubject() << ", Salary: $" << teacher.getSalary() << endl;

    return 0;
}

