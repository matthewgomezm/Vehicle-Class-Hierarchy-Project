#include <iostream>
#include "car.h"
#include "truck.h"
#include "motorcycle.h"
#include "boat.h"
using namespace std;

int main() {
    Car mycar("Nissan","Mustang",1994,'G','Q',10000,"Sedan");
    mycar.setcartype("2door"); 
    

    cout<<"Testing the Truck Class"<<endl; 
    Truck mytruck("Ford","F350",2023,'E','O',2500,4000,3);
    mytruck.setweight(5000);
    mytruck.setnumberofaxles(6); 
    mytruck.PrintData("Truck Data");

    cout << "Second Truck: " << endl;
    Truck trucktwo ("Ram", "Dodge", 2019, 'G', 'F', 43000, 3000,3);
    trucktwo.setweight(6000);
    trucktwo.setnumberofaxles(7);
    trucktwo.PrintData("Second Truck");

    cout<<"Testing the Motorcycle Class"<<endl; 
    Motorcycle mymotorcycle("Harley-Davidson","Sportster",2020,'G','I',4500,1200);
    mymotorcycle.setcubiccentimeters(900); 
    mymotorcycle.PrintData("Bike Data");


     Motorcycle Yamaha ("Yamaha", "R15s", 2023, 'T', 'P', 9, 100);
     Yamaha.setcubiccentimeters(1000);
                Yamaha.PrintData("COOOOOL");
            


    cout<<"Testing the Boat Class"<<endl; 
    Boat myboat("Barletta","L23QCSS",2023,'G','E',10000,"Inboard"); 
    myboat.PrintData("Boat Data"); 
     

    return 0;
}

// Edited main code from Dr . Gaitros
