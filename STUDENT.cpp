#include"STUDENT.h"
using namespace std;
//default constractor
student::student(){
	name = "unknown";
	age = 0;
	roll_no = 0;
	gpa = 0.0;
}
//parameterized constractor
student::student(string n, int a, int r, float g){
	name = n;
	age = a;
	roll_no = r;
	gpa = g;
}
//setter
void student::setName(string n){
	name = n;
}
void student::setAge(int a){
	age = a;
}
void student::setRoll_no(int r){
	roll_no = r;
}
void student::setGPA(float g){
	gpa = g;
}
//getter
string student::getName()const{
	return name;
}
int student::getAge()const{
	return age;
}
int student::getRoll_no()const{
	return roll_no;
}
float student::getGPA()const{
	return gpa;
}
//destruction
student::~student(){
	cout << "\nYour record has been deleted!" << endl;
}
//abstraction
//input student info
void student::inputStudentInfo(){
	cout << "Enter Student Name: ";
	cin >> name;
	cout << "Enter Student Age: ";
	cin >> age;
	cout << "Enter Student Roll no: ";
	cin >> roll_no;
	cout << "Enter Student GPA: ";
	cin >> gpa;
}
//display student info
void student::display()const{
	cout << "Name: " << name << "  ||AGE: " << age << "  ||Roll no: " << roll_no << "  ||GPA: " << gpa << endl;
}
//display grades
void student::displayGrades()const{
	char grade;
	if (gpa >= 3.8)
		grade = 'A';
	else if (gpa >= 3.0)
		grade = 'B';
	else if (gpa >= 2.5)
		grade = 'C';
	else if (gpa >= 2.0)
		grade = 'D';
	else
		grade = 'F';
	cout << "GRADES: " << grade << endl;
}
