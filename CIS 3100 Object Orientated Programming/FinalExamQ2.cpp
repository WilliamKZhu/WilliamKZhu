#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;




int WordCount(string Ernest[], int length){

    int count = 0;                                  // initializing variables
    for (int i = 0; i< length; i++){                //for loop to break down array into individual strings
        string n = Ernest[i];
        
        for (int x=0 ; x< n.length(); x++)          //for loop to iterate through each string
            if (n[x] == '.' || n[x] == ' '){        // using ' ' and '.' to define a word. 
                count++;                            
        }
    }
   cout<< "The word count in this array is: " << count<<endl;       //prints word count
   return 0;
}

int charCount(string Ernest[], int length){         //counts the number of alphabet letters (a-z; A-Z)

    int  sum(0);
    for (int i = 0; i < length; i++){           
        string &n = Ernest[i];                      //referencing n to use in strlen function
        sum += strlen( & n[i]); 
    }  
    cout<< " \n\nThe character count in this array is: "<< sum<< endl;      //print character count
    return 0;
}; 

void StringCap(string Ernest[], int length){        //Provides a function, Cap(Ernest) that capitalizes the first letter of each word.

    for (int i = 0; i < length; i++){               //for loop. iterating through the array of strings
        string n = Ernest[i];

    for (int x = 0; x < n.length(); x++){           // for loop. iterating through each string
        if (x == 0 || n [x-1] == ' '){              // if a word is right after a space or if it is the first word in the array, it will be capitalized
            n[x] = toupper(n[x]);
            }
        }
    cout << n << endl;                              //prints capitalized text
    }
}

int main(){
//Heading
string Name("");
cout << "Name" << endl;
cin >> Name;
/**********************************************************/
cout << "-----------------------------------------" << endl;
cout << Name << endl;
cout << "FILE: " << __FILE__ << " Date: " __DATE__ << endl;
cout << "-----------------------------------------" << endl;
 /**********************************************************/

    // string provided in question 2
    string Ernest[ ]   =
{
     "He was an old man who fished alone in a skiff in the Gulf Stream and he had gone eighty-four days now without taking a fish." ,
    "In the first forty days a boy had been with him. " ,
    "But after forty days without a fish the boy's parents had told him that the old man was now definitely and finally salao, which is the worst form of unlucky, and the boy had gone at their orders in another boat which caught three good fish the first week. ",
    "It made the boy sad to see the old man come in each day with his skiff empty and he always went down to help him carry either the coiled lines or the gaff and harpoon and the sail that was furled around the mast.",
    "The sail was patched with flour sacks and, furled, it looked like the flag of permanent defeat."
};
    cout<< "Beginning of each word capitalized: \n\n";
    StringCap(Ernest,5);                            // capitalizing each word in the array function.

    charCount(Ernest,5);                            // character count  function

    WordCount(Ernest,5);                            // word count function
    
}
