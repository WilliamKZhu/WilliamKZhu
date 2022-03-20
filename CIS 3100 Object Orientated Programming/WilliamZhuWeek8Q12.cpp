#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

int *shifter(int *arr, int n ){
    int *shift = new int[n +1];     // creating new array 
    shift[0] = 0;
    for (int i=0; i<n; i++){
        shift[i]= arr[i - 1];        // ?? experimental
    }
    return shift;
}

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








    int n, arr[n];

    cout << "size of your array (n):";
    cin >> n;

    cout<< "enter your array ";

    for (int i=0; i<n;i++){
        cin>> arr[i];
    }    
    
    cout << "the original array is ";
    display(arr, n);
    int *ArrayCopy = shifter(arr,n);
    cout << "the new array is ";
    display(ArrayCopy,n);
    delete [] arr;
    return 0;

    
    


}