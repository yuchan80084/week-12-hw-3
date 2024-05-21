#pragma once
class Car {
public:
	Car() :speed(0.1), wheels(0), price(0.2),door(4) {};
	Car(float, int, float,int);
	void setPrice(float);
	float getPrice();
	float speed;
	void speedChange(float);
	int wheels;
	void setWheels(int);
	int getWheels();
	void klaxon(int);
	int door; //new public member
protected:
	float price;
	void speedUp(float);
	void speedDown(float);
	float fuel_efficiency=12.1; //new protected member
};
