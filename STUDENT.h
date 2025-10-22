#pragma once
#include<iostream>
#include <string>
using namespace std;
class student{
	//encapsulation: private attribute
private:
	string name;
	int age;
	int roll_no;
	float gpa;
public:
	//constractor
	//default 
	student();
	//parameterized
	student(string n, int a, int r, float g);
	//destructor
	~student();
	//setter
	void setName(string n);
	void setAge(int a);
	void setRoll_no(int r);
	void setGPA(float p);
	//getter
	string getName()const;
	int getAge()const;
	int getRoll_no()const;
	float getGPA()const;
	//member function
	void inputStudentInfo();
	void display()const;
	void displayGrades()const;
};
