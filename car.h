#ifndef CAR_H
#define CAR_H
#include "vehicle.h"
#include <string>
using namespace std;

class Car: public Vehicle {
public:
	Car(string make, string model, int year, char fueltype, char color, int mileage, string cartype); // Constructor with parameters
	void setcartype(const string c); // Set function for private variable cartype
	string getcartype(); // Returns private variable car type
	virtual void PrintData(const string s) override; // Same PrintData from original vehicle.h, except it is dynamically called 
private:
	string cartype;  // Private variable for the cartype
};

#endif 

// *************************
// * Author: Matthew Gomez *********
// * Florida State University 2025 *
// *********************************
