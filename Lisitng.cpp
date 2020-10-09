/* Shane Kanyi -136899
   Asher Yisrael - 137187
   137179 Twahir Rashid Mohammed
   Ngala Renuad - 137285
   Samuel Kyalo -137258
   Gabriel Katumba - 136636
   Virginia Ochola - 136669
   Brian Kiunuhe -  136983
  
  */

#include <iostream>
using namespace std;
cout.precision(100);


int main ()  {
	
	string fName,lName;
	
	double Lstax, Lcom, sp;
	double lPrice ;
	Lstax = 0.16*lPrice; //sales tax
        Lcom  = 0.065*lPrice; //comsission
	sp= lPrice - Lstax -Lcom; //selling price 
	
	
	//User Input 

        cout<< "Please enter your first name :"; 
        cin>>fName;
    
        cout<< "Please enter your last name :";
        cin>>lName;
		
	cout<< "Please enter your listing price :";
        cin>>lPrice;
    
    //user output
	cout<< "Real estate agent Calculator \n"; //Heading
	cout<<"Hello"<< fName << lName<<endl;
        cout<<"The Selling Price   is: "<<sp<<endl;
        cout<<"The agents commission is :"<<Lcom<<endl;
        cout<<"The sales tax is :"<<Lstax<<endl;
        return 0;
		
	}
	

	
	
	
	

