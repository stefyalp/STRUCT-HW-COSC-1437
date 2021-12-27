/***************************************************
Name: Stefania Ascencio
* Lab: STRUCT HW
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

struct Student
{
	string studFirstName;

	string studLastName;

	double studExam1;

	double studExam2;

	double studExam3;

	double studAvg;

	char studGrade; //alphabetical grade

	double studScore;
};


//Submit source and run window as a zip file in assignment box.
int main() {

	Student stud1;

	

	
	{
		//Input data
		cout << "Enter student's First Name: ";
		cin  >> stud1.studFirstName;
		cout << "Enter student's Last Name: ";
		cin  >>  stud1.studLastName;
		cout << "Enter Exam's 1 score: ";
		cin >> stud1.studExam1;
		cout << "Enter Exam's 2 score: ";
		cin  >> stud1.studExam2;
		cout << "Enter Exam's 3 score: ";
		cin  >> stud1.studExam3;

		//Formulas
		
		stud1.studScore =( stud1.studExam1 + stud1.studExam2 + stud1.studExam3);
		stud1.studAvg = (stud1.studScore) / 3;
		
	
		
		//Print Student's Final Grade
		if (stud1.studAvg >= 90)
			stud1.studGrade = 'A';
		else if (stud1.studAvg >= 80)
			stud1.studGrade = 'B';
		else if (stud1.studAvg >= 70)
			stud1.studGrade = 'C';
		else if (stud1.studAvg >= 60)
			stud1.studGrade = 'D';
		else
			stud1.studGrade = 'F';
	
		
      
	
		

	//DISPLAY 
		cout << " " << endl;
		//cout << setw(10) <<" Student's Name: ";
		//cout << stud1.studFirstName << " " << stud1.studLastName << endl;
		//cout << setw(10) << " Student's Exam 1 Score: " << stud1.studExam1  << endl;	//I added this just to check that the information was correct
		//cout << setw(10) << " Student's Exam 2 Score: " << stud1.studExam2  << endl;
		//cout << setw(10) << " Student's Exam 3 Score: " <<stud1.studExam3 << endl;
		cout << setw(10) << " Student's Final Grade: "      <<stud1.studAvg  << endl;
		cout << setw(10) << " Student's Grade: "        << stud1.studGrade << endl;
		cout << " " << endl;
		system("pause");
		
	}
	
	system("pause");
	return 0;

	
}