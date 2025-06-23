#include "boat.h"
#include <iostream>
using namespace std;

Boat::Boat(string make, string model, int year, char fueltype, char color, int mileage, string boattype)
{
	setmake(make);
    setmodel(model);
    setyear(year);
    setfueltype(fueltype);
    setcolor(color);
    setmileage(mileage);    
	boattype = boattype;
}

// ***********************************************************************
// Funciton Name: Boat(parameters)					
// Description: Parameterized constructor; sets vehicle values		
// Date: 3/19/25							
// Author: Matthew Gomez						
// **********************************************************************

void Boat::setboattype(const string btype)
{
	boattype = btype;
}

// **************************************  
// Function Name: setboattype(const string btype)
// Description: Sets variable to input. *
// Date: 3/19/25                        *
// Author: Matthew Gomez                *
// **************************************

string Boat::getboattype()
{
	return boattype;
}

// **************************************  
// Function Name: getboattype()			*
// Description: Returns boat type       *
// Date: 3/19/25                        *
// Author: Matthew Gomez                *
// **************************************


void Boat::PrintData (const string s)
{
	cout << s << endl;
	Vehicle::PrintData("");
	cout << "Boat Type: " << boattype << endl;
}

// **************************************
// Function Name: PrintData(const string)            
// Description: Virtual function that prints header and data for the class.
// Accomodated to also show boat type.
// Date: 3/19/25                        *
// Author: Matthew Gomez                *
// **************************************
