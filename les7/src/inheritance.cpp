#include <string>
#include <iostream>

class Person{
    public:
    int age;
    std::string name;

    Person(int age, std::string name): age(age), name(name){}

    std::string getName(){
        return name;
    }

    void sayHello(){
        std::cout << "Hoi ik ben " << name << " ik ben " << age << " jaar oud \n";
    }
};

class Employee : public Person{
    public:
    int id;

    Employee(int age, std::string name, int ID): Person(age, name), id(id){};

    void sayHello(){
        std::cout << "Ik ben een employee met ID " << id << "\n";
    }
};

void rollCall(Person& p){
    p.sayHello();
}



int my_main(){
    Person p1 = Person(35, "Rianne");
    p1.sayHello();

    Employee e1 = Employee(42, "Jan", 12345);
    std::cout << e1.name <<"\n";
    e1.sayHello();

    Person employee = Employee(33, "Hanna", 12532);

    employee.sayHello();

    rollCall(e1);

    return 0;
}