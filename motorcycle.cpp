#include "motorcycle.h"
#include <iostream>
using namespace std;

Motorcycle::Motorcycle(string make, string model, int year, char fueltype, char color, int mileage, int cc)
{
	setmake(make);
    setmodel(model);
    setyear(year);
    setfueltype(fueltype);
    setcolor(color);
    setmileage(mileage);
	cubiccentimeters = cc;
}

//***********************************************************************
// Funciton Name: Motorcycle (parameters)					
// Description: Parameterized constructor; sets vehicle values		
// Date: 3/19/25							
// Author: Matthew Gomez						
// **********************************************************************

void Motorcycle::setcubiccentimeters(const int c)
{
	cubiccentimeters = c;
}

// **************************************  
// Function Name: setcubiccentimeters(const string c)
// Description: Sets variable to input. *
// Date: 3/19/25                        *
// Author: Matthew Gomez                *
// **************************************

int Motorcycle::getcubiccentimeters()
{
	return cubiccentimeters;
}

// **************************************  
// Function Name: getcubiccentimeters()			
// Description: Returns cubiccentimeters type       
// Date: 3/19/25                        *
// Author: Matthew Gomez                *
// **************************************

void Motorcycle::PrintData (const string s)
{
	cout << s << endl;
	Vehicle::PrintData("");
	cout << "Engine CC: " << cubiccentimeters << " cc" << endl;
}

// **************************************
// Function Name: PrintData(const string s)            
// Description: Virtual function that prints header and data for the class.
// Accomodated to also show CC for motorcycles 
// Date: 3/19/25                        *
// Author: Matthew Gomez                *
// **************************************

