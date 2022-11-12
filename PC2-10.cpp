//Soji Thomas
//OCCC Late Spring 2022
//Professor John D. Goulden
//Beginning programming
//CS1143 MD01S
//Miles per Gallon
//error assistance by: Vinh Tran from SCC

#include <iostream>
using namespace std;

int main() {

	// MPG variables and inputs.
	double milesDriven;
	double gallonsOfGasUsed;
	double mpg;

	//Prompt for miles driven. 
	cout << "Enter miles driven\n";

	//Accept miles driven.
	cin >> milesDriven; 

	//Prompt for gallons used.
	cout << "Enter gallon use\n";

	//Accept gallons used.
	cin >> gallonsOfGasUsed;

	//Calculations for MPG

	mpg = milesDriven / gallonsOfGasUsed;

	//Display on screen
	cout << "The car gets " << mpg << " miles per gallon on a 15.5 gallon tank.\n";

	return 0;
}



