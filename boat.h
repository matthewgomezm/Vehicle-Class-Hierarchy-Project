#ifndef BOAT_H
#define BOAT_H
#include "vehicle.h"
#include <string>
using namespace std;

class Boat : public Vehicle 
{
	public: 
		Boat(string make, string model, int year, char fueltype, char color, int mileage, string boattype); // Parameterized constructor
		void setboattype(const string btype); // Setter function for boat type
		string getboattype(); // Get function for variable
		virtual void PrintData (const string s) override; // PrintData function dynamically called
	private:
		string boattype; // Private string variable for boat type
};

#endif

