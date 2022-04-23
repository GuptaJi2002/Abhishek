#include<iostream>
using namespace std;
class Student
{
	public:
		string name;
		int rollno;
		public:
			void printdetails()
			{ 
			cout<<"name"<<endl;
			cin>>name;
			cout<<"rollno"<<endl;
			cin>>rollno;
			}
 };
 int main(){
 
 Student student_1;
 student_1.name="abhi";
 student_1.rollno=6;
 student_1.printdetails();
 return 0;
}
 