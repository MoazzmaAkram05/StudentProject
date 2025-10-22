#include"STUDENT.h"
using namespace std;
int main(){
	//default
	student s1;
	//parameterized
	student s2("Moazzma", 20, 3214, 3.5);
	student s3;
	student s4;
	//setter
	s3.setName("Ali");
	s3.setAge(19);
	s3.setRoll_no(6547);
	s3.setGPA(2.4);
	s4.inputStudentInfo();

	cout << "\t------Student Records------\n";
	s1.display();
	s2.display();
	s3.display();
	s4.display();
	//display grades
	cout << "\t------Student Grades------\n";
	s1.displayGrades();
	s2.displayGrades();
	s3.displayGrades();
	s4.displayGrades();
	system("pause");
	return 0;
}
