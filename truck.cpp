#include "truck.h"
#include <iostream>
using namespace std;


Truck::Truck(string make, string model, int year, char fueltype, char color, int mileage, int weight, int numaxles)
{
	
	    setmake(make);
    	setmodel(model);
    	setyear(year);
    	setfueltype(fueltype);
    	setcolor(color);
    	setmileage(mileage);
	  weight = weight;
	  numaxles = numaxles;	
}

//***********************************************************************
// Funciton Name: Truck (parameters)					*
// Description: Parameterized constructor; sets vehicle values		*
// Date: 3/12/25							*
// Author: Matthew Gomez						*
// **********************************************************************


int Truck::getweight()
{
	return weight;
}


// **************************************
// Function Name: getweight()		*
// Description: Returns weight variable.*
// Date: 3/12/25			*
// Author: Matthew Gomez		*
// **************************************
 

int Truck::getnumberofaxles()
{
	return numaxles;
}

// **************************************  
// Function Name: getnumberofaxles()    *
// Description: Returns axle variable.  *
// Date: 3/12/25                        *
// Author: Matthew Gomez                *
// **************************************


void Truck::setweight(const int w)
{
	weight = w;
}

// **************************************  
// Function Name: setweight(const int w)*
// Description: Sets variable to input. *
// Date: 3/12/25                        *
// Author: Matthew Gomez                *
// **************************************

void Truck::setnumberofaxles(const int n)
{
	numaxles = n;
}

// **********************************************
// Function Name: setnumberofaxles(const int n) *           
// Description: Sets variable to input. 	*
// Date: 3/12/25                        	*
// Author: Matthew Gomez                	*
// **********************************************

void Truck::PrintData(const string s)
{
	cout << s << endl;
	Vehicle::PrintData(" ");
	cout << "Weight: " << weight << endl;
	cout << "Number of axles: " << numaxles << endl;
}



// **************************************
// Function Name: PrintData(const string)            
// Description: Virtual function that prints header and data for the class.
// Accomodated to also show truck variables.
// Date: 3/12/25                        *
// Author: Matthew Gomez                *
// **************************************
