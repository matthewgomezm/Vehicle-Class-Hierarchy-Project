#ifndef TRUCK_H
#define TRUCK_H
#include "vehicle.h"
using namespace std;

class Truck: public Vehicle {
public:
	Truck(string make, string model, int year, char fueltype, char color, int mileage, int weight, int numaxles); // Parameterized constructor
	int getweight(); // Get function for private weight variable
	int getnumberofaxles(); // Get function returning private axle variable
	void setweight(const int w); // Sets weight from input
	void setnumberofaxles(const int n); // Sets number of axles from input
	virtual void PrintData(const string s) override; 
private:
	int weight;
	int numaxles;

};

#endif

// *************************
// * Author: Matthew Gomez *********
// * Florida State University 2025 *
// *********************************
