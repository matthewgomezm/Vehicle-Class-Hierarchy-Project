#include "car.h"
#include <iostream>
using namespace std;


Car::Car(string make, string model, int year, char fueltype, char color, int mileage, string cartype) 
{
    setmake(make);
    setmodel(model);
    setyear(year);
    setfueltype(fueltype);
    setcolor(color);
    setmileage(mileage);    
    cartype = cartype;
}

// **********************************************************************************************
// Function Name: Car(string make, string model, int year, ...					
// Description: Parameterized constructor initializing variables from, vehicle and cartype	
// Date: 3/12/25										
// Author: Matthew Gomez									
// **********************************************************************************************


void Car::setcartype(const string c)
{
	cartype = c;
}

// **********************************************
// Function Name: setcartype (const string c)	
// Description: Sets cartype to inputted string	
// Date: 3/12/25				
// Author: Matthew Gomez			
// **********************************************

string Car::getcartype()
{
	return cartype;
}
// **************************************
// Function Name: getcartype() 		     *     
// Description: Returns cartype variable *
// Date: 3/12/25                        *
// Author: Matthew Gomez                *
// **************************************

void Car:: PrintData(const string s)
{
	cout << s  << endl;
	Vehicle::PrintData("");
	cout << "Car Type: " << cartype << endl;	
}

// **************************************
// Function Name: PrintData(const string)            
// Description: Virtual function that prints header and data for the class.
// Accomodated to also show car type.
// Date: 3/12/25                        *
// Author: Matthew Gomez                *
// **************************************
	

