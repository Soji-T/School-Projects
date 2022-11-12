// soji Thomas 
// Professor Goulden
// occc late spring 2022
// beginning programming CS-1143-MD01S
// The Trouble with Tribbles! NCC-1701A


#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {

	double trib;
	double hours;

	cout << "Welcome to The Trouble with Tribbles calculation Lab!!\n\n";
	cout << "I will perform calculations and determine if 1st Officer Spock's \n";
	cout << "assessment of Tribble growth aboard NCC-1701A was indeed logical!\n\n";

	cout << fixed << left << setprecision(0);
	int COL1 = 12,
		COL2 = 12;
	cout << setw(COL1) << "Hours: " << setw(COL2) << "Tribbles: \n\n";

	for (hours = 0, trib = 1; hours <= 72; hours += 12, trib = ((trib * 10) + trib)) {

		cout << setw(COL1) << hours << setw(COL2) << trib << endl << endl;
	}

	cout << "1st Officer Spock was indeed correct! His assessment was indeed logical! \n";

return 0;
}
