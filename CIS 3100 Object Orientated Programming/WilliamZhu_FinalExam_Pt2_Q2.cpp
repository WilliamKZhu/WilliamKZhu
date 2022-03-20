#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

int WordCnt(char phrase[]){ //counts # of words
    int count =1;
    for (int i=0; i< strlen(phrase) ; i++){
        if (phrase[i]== ' '|| phrase[i]== '.'){
        count ++;
        }
    }
    cout<< "The word count for this char array is: "<< count<< endl;
    return count;
};


int CapitalCnt(char phrase[]){ //count # of uppercase symbols
    int count =0;
    for (int i = 0; i <strlen(phrase);i++){
        if (phrase[i] >= 65 && phrase[i]<= 90){
            count ++;
        }
    }
    cout<< "The capitalization count for this char array is: "<< count<< endl;
    return count;
}
int BlankCnt(char phrase[]){ //counts the number of white spaces
        int count =0;
    for (int i = 0; i < strlen(phrase);i++){
        if (phrase[i]== 32){
            count ++;
        }
    }
    cout<< "The blank character count for this char array is: "<< count<< endl;
    return count;
}

int PunctuationCnt(char phrase[]){
    int count =0;
    for (int i = 0; i <strlen(phrase);i++){
        if (phrase[i] >= 44 && phrase[i]<= 59){
            count ++;
        }
    }
    cout<< "The punctuation count for this char array is: "<< count<< endl;
    return count;
}
//decrypt function would not work properly
void Decrypt(char phrase[], int V){
    for (int i = 0; i < strlen(phrase); i++){
        if (phrase[i] != 32){
        phrase[i] = phrase[i]+V;
        cout<< phrase[i];}

    }
    
 }

int main(){

    string Name("");                                //heading
    cout << "Name" << endl;
    cin >> Name;
    /**********************************************************/
    cout << "-----------------------------------------" << endl;
    cout << Name << endl;
    cout << "FILE: " << __FILE__ << " Date: " __DATE__ << endl;
    cout << "-----------------------------------------" << endl;
    /**********************************************************/


char Phrase[ ] = "Gpvstdpsf boe tfwfo zfbst bhp pvs gbuifst cspvhiu gpsui po uijt dpoujofou b ofx obujpo- dpodfjwfe jo mjcfsuz boe efejdbufe up uif qspqptjujpo uibu bmm nfo bsf dsfbufe frvbm/ Opx xf bsf fohbhfe jo b hsfbu djwjm xbs- uftujoh xifuifsuibu obujpo- ps boz obujpo tp dpodfjwfe boe tp efejdbufe- dbo mpoh foevsf/ Xf bsf nfupo b hsfbu cbuumfgjfme pg uibu xbs/ Xf ibwf dpnf up efejdbuf b qpsujpo pg uibu gjfmebt b gjobm sftujoh.qmbdf gps uiptf xip ifsf hbwf uifjs mjwft uibu uibu obujpo njhiumjwf/";
WordCnt(Phrase);
CapitalCnt(Phrase);
BlankCnt(Phrase);
PunctuationCnt(Phrase);
 Decrypt(Phrase,1);



}