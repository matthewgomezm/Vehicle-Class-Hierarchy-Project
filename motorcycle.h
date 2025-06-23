#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include "vehicle.h"
using namespace std;

class Motorcycle: public Vehicle {
public: 
	Motorcycle(string make, string model, int year, char fueltype, char color, int mileage, int cc); // Parameterized Constructor
	void setcubiccentimeters(const int c); // Set function for cubic centimeters
	int getcubiccentimeters(); // Get function for the variable
	virtual void PrintData(const string s) override; //PrintData Dynamically Called
private:
	int cubiccentimeters;
};

#endif


