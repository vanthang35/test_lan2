#include <iostream>

using namespace std;

class Person
{
    public: 
        int age;
        string hair_color;
        string Name;
        double Size;
        Person()
        {
            cout << "my name is" << Name << endl; 
        }
        void Walk(double distance)
        {
            cout << Name << "walked" << distance << "meters\n" <<endl;
        }
        void Eat(string food)
        {
            cout << Name << "is eating" << food << endl;
        }
        void Speak(string language)
        {
            cout << Name << "speak" << language << endl;
        }


};
class teacher: public Person
{
    public:
        void teach(string subject)
        {
            cout << Name << "teach" << subject<<endl;
        }
};
class student: public Person
{
    public:
        void study(string subject)
        {
            cout << Name << "study" << subject << endl;
        }
};

int main()
{
    student hocsinh;
    hocsinh.Name  = "Nguyem Van Thang";
    hocsinh.age = 15;
    hocsinh.Size = 42;
    hocsinh.hair_color = "Red";
    hocsinh.study("Math");
    hocsinh.Walk(30);

    return 0;
}