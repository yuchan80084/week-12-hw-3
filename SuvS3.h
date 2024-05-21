#pragma once
#include "CarS3.h"
class SUV : public Car {
private:
	int spareWheels;
	int man; //new private member
public:
	void klaxon(int);
	void setSparewheels(int);
	void setMan(int);
	int getSparewheels();
	int getMan();
	float getTotalPrice();
};

