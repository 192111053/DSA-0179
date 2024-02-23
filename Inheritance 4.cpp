#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id; 
    double salary;
public:
    Employee(string n, int i, double sal) : name(n), id(i), salary(sal) {}

    string getName() const { return name; }
    int getId() const { return id; }
    double getSalary() const { return salary; }

    void setName(string n) { name = n; }
    void setId(int i) { id = i; }
    void setSalary(double sal) { salary = sal; }
};
class Manager : public Employee {
private:
    string department;
    double bonus;
public:
    Manager(string n, int i, double sal, string dept, double bon) : Employee(n, i, sal), department(dept), bonus(bon) {}

    string getDepartment() const { return department; }
    double getBonus() const { return bonus; }

    void setDepartment(string dept) { department = dept; }
    void setBonus(double bon) { bonus = bon; }
};
class Engineer : public Employee {
private:
    string specialty;
    int hours;
public:
    Engineer(string n, int i, double sal, string spec, int hrs) : Employee(n, i, sal), specialty(spec), hours(hrs) {}

    string getSpecialty() const { return specialty; }
    int getHours() const { return hours; }

    void setSpecialty(string spec) { specialty = spec; }
    void setHours(int hrs) { hours = hrs; }
};

int main() {
    Manager manager("John", 1001, 80000, "Sales", 5000);
    Engineer engineer("Alice", 2001, 70000, "Software Development", 40);

    cout << "Manager Name: " << manager.getName() << ", ID: " << manager.getId() << ", Salary: $" << manager.getSalary() << endl;
    cout << "Department: " << manager.getDepartment() << ", Bonus: $" << manager.getBonus() << endl;

    cout << "\nEngineer Name: " << engineer.getName() << ", ID: " << engineer.getId() << ", Salary: $" << engineer.getSalary() << endl;
    cout << "Specialty: " << engineer.getSpecialty() << ", Hours: " << engineer.getHours() << endl;

    return 0;
}

