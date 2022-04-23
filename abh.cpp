#include <iostream>
using namespace std;
class student
{
private:
    int age;
    string name;
public:
    void get_data()
    {
        cout<<"Enter age"<<endl;
        cin>>age;
        cout<<"Enter  Name"<<endl;
        cin>>name;
       
    }
    void display()
    {
        cout<<"age: "<<age<<endl;
        cout<<"Name: "<<name<<endl;
       
    }
};
int main()
{
    student s1;

    s1.get_data();
    
    s1.display();
    return 0;
}
