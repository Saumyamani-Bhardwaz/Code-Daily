#include <iostream>
using namespace std;
    struct teacher{
        int age;
        int salary;
        string name;
        string gender;
        bool knowsEnglish;
        
         void teacherDetails(string name, int age, int salary)
         {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
        cout << "Knows English: " << (knowsEnglish ? "Yes" : "No") << endl;
        cout << "Gender: " << gender << endl << endl;
        }
        
    };
    int main() {
        
        teacher x;
        x.age=25;
        x.salary= 10000;
        x.name= "Gomu";
        x.gender= "Male";
        x.knowsEnglish= 1;
        
       // teacher = {"Gomu", 25, 10000};
        x.teacherDetails(x.name, x.age,x.salary);
        cout<<endl;
   
}
