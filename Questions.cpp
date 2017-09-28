/*
Christopher Hartsfield - September 26 2017 1
Program Problem 2
Create a New Project to display to the user questions to take
in data and create variables to store the aforementioned data*/
//Libraries
#include<iostream>
#include<conio.h>
// Namespace
using namespace std; //*
// functions ()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN


// MAIN
void main() {
	// Variables
	int woodchuck;
	float pie;
	double eyelash;
	bool bully = false;
	char sans;
	int calc_1, calc_2, calc_3;

	cout << "How much wood would a woodchuck chuck if a woodchuck could chuck wood? ";
	cin >> woodchuck;
	cout << "How much pie did you eat in ounces? ";
	cin >> pie;
	cout << "How long is your eyelash in nanometers? ";
	cin >> eyelash;
	cout << "Are you a bully? : Y/N ";
	cin >> sans;
	if (sans == 'Y' || sans == 'y') {
		bully = true;
		cout << "A woodchuck would chuck " << woodchuck << " number of wood. \n";
		cout << "You ate " << pie << " ounces of pie." << endl; // different type new line
		cout << "Your eyelash is " << eyelash << " nanometers long." << '\n';
		cout << boolalpha << "The answer evaluation of you are a bully is " << bully << endl;
	}
	pause();
}