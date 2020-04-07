/* Mike Jasiczek; Professor George; CIS Summer Advanced OOP; Assignment Week 2
GPAClassCalOOP.cpp I really had some trouble with this concept and assignment at the beginning, but as I wrapped my head around it, I can now see
how important classes are and how useful they can be.  I had trouble with my header file and I didn't realize that I had to add 
iostream and namespace to the header file as well.  After I did that, it worked very well.  
*/



#include "pch.h"
#include <iostream>
#include <string>
#include "student.h" //Class Student created. All variables and set and get functions are declared here

using namespace std;

int main()
{
	Student Mike; //Instance of Student Class Created
	string option, first, last, address, city, state; // variables create to set and get
	int zip;
	float tpgpap, ec;
	cout << "This is a student information data entry program\n\n\n"; 
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n"; 

	while (true) {
		cout << "Enter students first name: " << endl; // Get users input
		//cin.ignore(); 
		getline(cin, first);
		Mike.set_fName(first);
		cout << "Enter students last name: " << endl;
		//cin.ignore();
		getline(cin, last); 
		Mike.set_lName(last);
		cout << "Enter students street address: " << endl;
		//cin.ignore(); 
		getline(cin, address);
		Mike.set_streetAddress(address);
		cout << "Enter students city:" << endl;
		//cin.ignore();
		getline(cin, city); 
		Mike.set_city(city);
		cout << "Enter students state:" << endl;
		//cin.ignore();
		getline(cin, state); 
		Mike.set_state(state);
		cout << "Enter students ZIP Code:" << endl;
		cin >> zip;
		while (zip < 10000 || zip > 99999) {
			cout << "Zipcodes must be five digits.  Please re-enter zipcode: " << endl; //Exception handling Accurate Zip
			cin >> zip; 
		}
		Mike.set_zipCode(zip);
		cout << "Enter students total number of credit hours attempted: " << endl; 
		cin >> ec;
		while (ec < 1|| ec > 999) {
			cout << "Credit hours must be positive.  Please re-enter credits attempted: " << endl; //Exception handling.  Positive
			cin >> ec;
		}
		Mike.set_earnedCredits(ec);
		cout << "Enter students GPA points earned (A = 4; B = 3; C = 2; D= 1; F = 0): " << endl;
		cin >> tpgpap;
		while (tpgpap < 1 || tpgpap > 999) {
			cout << "GPA points must be positive.  Please re-enter GPA points earned: " << endl;//Exception handling.  Positive
			cin >> tpgpap;
		}
		Mike.set_totalGPAPoints(tpgpap);
		cout << "Students Information is: \n\n\n"; 
		cout << Mike.get_fName() << " " << Mike.get_lName() << endl; //Output information.  Also could be sent to a file
		cout << Mike.get_streetAddress() << endl;
		cout << Mike.get_city() << ", " << Mike.get_state() << ", " << Mike.get_zipCode() << endl;
		cout << "Total credit hours taken: " << Mike.get_earnedCredits() << endl;
		cout << "Total possible GPA points: " << Mike.get_totalGPAPoints() << endl;
		cout << "GPA: " << Mike.get_GPA() << endl;
		cout << "" << endl;
		cout << "Enter another student? (Y or N) " << endl;
		cin >> option; 
		if (!(option[0] == 'Y' || option[0] == 'y'))
			break;
	


	}
	return 0;


	/*Mike.set_fName("Mike");
	Mike.set_lName("Jasiczek");
	Mike.set_streetAddress("16313 S. Brentwood Street");
	Mike.set_city("Olathe");
	Mike.set_state("Kansas");
	Mike.set_zipCode(66062);
	Mike.set_earnedCredits(24);
	Mike.set_totalGPAPoints(24); */







}

void Student::set_fName(string new_fName) { //Defining all the functions
	fName = new_fName;

}

void Student::set_lName(string new_lName) {
	lName = new_lName;

}

void Student::set_streetAddress(string new_streetAddress) {
	streetAddress = new_streetAddress;

}



void Student::set_city(string new_city) {
	city = new_city;

}

void Student::set_state(string new_state) {
	state = new_state;

}

void Student::set_zipCode(int new_zipCode) {
	zipCode = new_zipCode;

}

void Student::set_earnedCredits(float new_eC) {
	earnedCredits = new_eC;


}

void Student::set_totalGPAPoints(float new_totalGPAPoints) {
	totalGPAPoints = new_totalGPAPoints;

}
float Student::get_earnedCredits() {
	return earnedCredits;

}

float Student::get_totalGPAPoints() {
	return totalGPAPoints;

}

string Student::get_fName() {
	return fName;
}
string Student::get_lName() {
	return lName;
}

string Student::get_streetAddress() {
	return streetAddress;
}

string Student::get_city() {
	return city;
}
string Student::get_state() {
	return state;
}
int Student::get_zipCode() {
	return zipCode;
}

float Student::get_GPA() { // Calculate the GPA
	GPA = totalGPAPoints / earnedCredits;
	return GPA;
}