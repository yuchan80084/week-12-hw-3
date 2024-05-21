#include <iostream>
using namespace std;
#include "CarS3.h"
#include "SUVS3.h"
int main() {
	SUV* newSUV = new SUV();
	newSUV->setPrice(5000);

	cout << " price " << newSUV->getPrice() << "\n";

	newSUV->speedChange(10.0);

	newSUV->setSparewheels(2);
	std::cout << "Spare wheels are " << newSUV->getSparewheels() << std::endl;
	newSUV->setMan(4);
	cout << "Mans in SUV are " << newSUV->getMan() << endl; //cout private member
	cout << "Doors on the SUV are " << newSUV->door << endl; //cout public member
	
	//cout << "This SUV's fuel efficiency is " << newSUV->fuel_efficiency << endl; 
	//raise error cout protected member

	delete newSUV;
	return 0;
}
