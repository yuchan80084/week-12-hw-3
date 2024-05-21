#include "SUVS3.h"
#include <iostream>
void SUV::setSparewheels(int ii) {
	spareWheels = ii;
}
void SUV::setMan(int i)
{
	man = i;
}
int SUV::getSparewheels() {
	return spareWheels;
};
int SUV::getMan()
{
	return man;
}
float SUV::getTotalPrice() {
	return (this->wheels * 100.0 + this->price);
}
void SUV::klaxon(int ii) {
	for (int i = 0; i < ii; i++) {
		std::cout << "Beep\n";
	}
}