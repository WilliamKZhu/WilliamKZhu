#include <iostream>
using namespace std;
int main() {
string Name("");
cout << "Name" << endl;
cin >> Name;
/**********************************************************/
cout << "-----------------------------------------" << endl;
cout << Name << endl;
cout << "FILE: " << __FILE__ << " Date: " __DATE__ << endl;
cout << "-----------------------------------------" << endl;
 /**********************************************************/
                cout<<"Enter the rain fall in inches for each month"<<endl;
                double sum = 0, n = 0;
                string Month[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September",
                                "October", "November", "December" };
                double array[12];
                // reading the rains fall for each month
                for (int i = 0; i < 12;++i) {
                        cout<<"Enter the rain fall for month " << Month[i]<<": ";
                        cin>>array[i];
                        // if it is negative, reading again the for same month
                        if (array[i] < 0) {
                                i--;
                                cout<<"value must be 0 or more. Please re-enter"<<endl;
                        } 
                    sum += array[i];
                }
                
                // finding the Minimumimum 
                int Minimum = 0;
                for (int i = 1; i < 12; i++)
                        if (array[Minimum] > array[i])
                                Minimum = i;
                int Maximum = 0;
                //finding the Maximum
                for (int i = 1; i < 12; i++)
                        if (array[Maximum] < array[i])
                                Maximum = i;
            cout<<"Total rainfall for the year is " << sum<<endl;
                cout<<"Average rainfall: " << (sum / 12)<<endl;
                cout<<"Largest rainfall:" << array[Maximum] << " inches in " << Month[Maximum]<<endl;
                cout<<"Smallest rainfall: " << array[Minimum] << " inches in " << Month[Minimum]<<endl;

        }