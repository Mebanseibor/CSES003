#include <iostream>

class Student{
    private:
    int id = 0;
    std::string name = "default name";
    unsigned int age = 0;

    public:
    Student(int id){ this->id = id; }
    Student(int id, std::string name){
        this->id = id;
        this->name = name;
    }
    Student(int id, std::string name, int age){
        this->id = id;
        this->name = name;
        this->age = age;
    }

    ~Student(){
        std::cout << "Deconstructing Student with id " << id << "\n";
    }

    void display(){
        std::cout << "ID:\t" << id << "\n";
        std::cout << "Name:\t" << name << "\n";
        std::cout << "Age:\t" << age << "\n";
    }

    int getAge(){ return age; }
    void setAge(int age){ this->age = age; }
};

int main(){
    Student s1 = Student(3, "Kevin");
    Student s2 = Student(5, "Leo", 37);

    s1.display();
    std::cout << "\n";

    s2.display();
    std::cout << "\n";

    std::cout << "\nUpdating the age of first student:\n";
    s1.setAge(31);
    s1.display();
    std::cout << "\n";

    std::cout << "\nGetting the age of the second student:\t" << s2.getAge() <<"\n";

    std::cout << "\n";
    return 0;
}
