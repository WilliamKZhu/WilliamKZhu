#include <iostream>
using namespace std;
#include <math.h>
double PresentValue (double Fvalue,double AnnualInterest,int years);
int main(){

string Name("");
cout << "Name" << endl;
cin >> Name;
/**********************************************************/
cout << "-----------------------------------------" << endl;
cout << Name << endl;
cout << "FILE: " << __FILE__ << " Date: " __DATE__ << endl;
cout << "-----------------------------------------" << endl;
 /**********************************************************/
    double Fvalue, AnnualInterest, Pvalue;
    int years; 
    char option;
    do{
        cout<< "Enter the desired future value." <<endl;
        cin>> Fvalue ;
        cout <<"Enter Annual Interest Rate as a decimal."<< endl;
        cin>> AnnualInterest;
        cout<< "How many years are you willing to compound?" <<endl;
        cin>> years;
        Pvalue = PresentValue(Fvalue, AnnualInterest, years);
        cout << "You will need to deposit a total of " << Pvalue << " today to receive a future value of " <<Fvalue << " for " <<years <<" years at an annual rate of "<< AnnualInterest*100 <<"%" <<endl;
        cout<< "would you like to run this formula again? Y or N";
        cin >> option;
    } while (option == 'Yes' || option =='yes');
return 0;
    
}

double PresentValue (double Fvalue,double AnnualInterest,int years)
{
    double Pvalue;
    Pvalue = Fvalue/ pow((1+AnnualInterest),years);
    return Pvalue;

}