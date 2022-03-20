#include <iostream>
using namespace std;


int function1(int array[], int sizeArray, int n);       // introducint function
int main (){
string Name("");
cout << "Name" << endl;
cin >> Name;
/**********************************************************/
cout << "-----------------------------------------" << endl;
cout << Name << endl;
cout << "FILE: " << __FILE__ << " Date: " __DATE__ << endl;
cout << "-----------------------------------------" << endl;
 /**********************************************************/
    int a[10]= {1,2,3,4,5,6,7,8,9,10};
    int n = 3;
    function1(a,10,n);
}

int function1(int array[], int sizeArray, int n){           // defining function as print array[i] if > n
    for (int i =0; i< sizeArray; ++i){
        if (array[i] > n){
            cout <<array[i]<<endl;
        }
    }

}