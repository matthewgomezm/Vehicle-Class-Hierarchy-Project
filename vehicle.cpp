#include "vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle()
{
    year = DEFAULTYEAR;
    fueltype = DEFAULTFUELTYPE;
    color = DEFAULTCOLOR;
    mileage = DEFAULTMILEAGE;
}

// **************************************************************
// Function Name: Vehicle()                                     *
// Description: Default constructor for the vehicle class.      *
// Date: 3/12/25                                                *
// Author: Matthew Gomez                                        *
// **************************************************************

Vehicle::Vehicle (string ma, string mo, int ye, char fu, char co, int mi)
{
    make = ma;
    model = mo;
    year = ye;
    fueltype = fu;
    color = co;
    mileage = mi;

}

// **************************************************************
// Function Name: Vehicle(parameters)                           *
// Description: Parameterized constructor for the vehicle class.*
// Date: 3/12/25                                                *
// Author: Matthew Gomez                                        *
// **************************************************************

void Vehicle::setmake (const string m)
{
    make = m;

}

// *******************************************
// Function Name: setmake(const string m)    *           
// Description: Sets make variable to input. *
// Date: 3/12/25                             *
// Author: Matthew Gomez                     *
// *******************************************


void Vehicle::setmodel (const string m)
{
    model = m;
}

// **************************************
// Function Name: setmodel(const string m)                       
// Description: Sets model variable.    *
// Date: 3/12/25                        *
// Author: Matthew Gomez                *
// **************************************

void Vehicle::setyear (const int y)
{
    if (y < 1900)
        year = DEFAULTYEAR;
    else
        year = y;
}

// **************************************
// Function Name: setyear(cosnt int y)  *           
// Description: Checks if year is below default, then sets. 
// Date: 3/12/25                        *
// Author: Matthew Gomez                *
// **************************************

void Vehicle::setfueltype (const char f)
{
    if (f == 'E' || f == 'D' || f == 'G' || f == 'W' || f == 'P')
        fueltype = f;
    else 
        fueltype = DEFAULTFUELTYPE;
}


// **************************************
// Function Name: setfueltype(cosnt char f)             
// Description: Checks if fueltype is valid, then sets.
// Date: 3/12/25                        *
// Author: Matthew Gomez                *
// **************************************

void Vehicle::setcolor (const char c)
{
    
    if (c == 'R' || c == 'O' || c == 'G' || c == 'I' || c == 'V' || c == 'B' || c == 'Y' || c == 'E')
        color = c;
    else 
        color = DEFAULTCOLOR;
    
}

// **************************************
// Function Name: setcolor(cosnt char c)             
// Description: Checks if color is valid, then sets.
// Date: 3/12/25                        *
// Author: Matthew Gomez                *
// **************************************


void Vehicle::setmileage (const int m)
{
    if (m < 0)
        mileage = DEFAULTMILEAGE;
    else 
        mileage = m;
}

// **************************************
// Function Name: setmileage(const int m)             
// Description: Checks if mileage is below default, then sets.
// Date: 3/12/25                        *
// Author: Matthew Gomez                *
// **************************************

string Vehicle::getmake()
{
    return make;
}

// **************************************
// Function Name: getmake()		           
// Description: Returns make variable.  *
// Date: 3/12/25                        *
// Author: Matthew Gomez                *
// **************************************


string Vehicle::getmodel()
{
    return model;
}

// **************************************
// Function Name: getmodel()            *           
// Description: Returns model variable. *
// Date: 3/12/25                        *
// Author: Matthew Gomez                *
// **************************************

int Vehicle::getyear()
{
    return year;
}

// **************************************
// Function Name: getyear()		*           
// Description: Returns year variable.  *
// Date: 3/12/25                        *
// Author: Matthew Gomez                *
// **************************************

string Vehicle::getfueltype() 
{
    return { fueltype };
}


// **********************************************************************************************
// Function Name: getfueltype()									*           
// Description: Returns fueltype variable. Brackets allows conversion from a char to string. 	*
// Date: 3/12/25                        							*
// Author: Matthew Gomez                							*
// **********************************************************************************************

string Vehicle::getcolor() 
{
    return { color };
}

// **********************************************************************************************
// Function Name: getcolor()                                                                    *
// Description: Returns color variable. Brackets allows conversion from a char to string.       *
// Date: 3/12/25                                                                                *
// Author: Matthew Gomez                                                                        *
// **********************************************************************************************

int Vehicle::getmileage()
{
    return mileage;
}

// *****************************************
// Function Name: getmileage()             *
// Description: Returns mileage variable.  *
// Date: 3/12/25                           *
// Author: Matthew Gomez                   *
// *****************************************

void Vehicle::PrintData(const string s) 
{
    cout << s << endl;
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << "Fuel Type: " << fueltype << endl;
    cout << "Color: " << color << endl;
    cout << "Mileage: " << mileage << " miles" << endl;
}

// **************************************
// Function Name: PrintData(const string)            
// Description: Virtual function that prints header and data for the class.
// Date: 3/12/25                        *
// Author: Matthew Gomez                *
// **************************************
