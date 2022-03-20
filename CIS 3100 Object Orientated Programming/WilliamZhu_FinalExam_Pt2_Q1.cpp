#include <iostream>
#include <cmath>
using namespace std;

class Complex{
    private:
        float x, y, R;
    
    public:
        Complex(): x(0), y(0) {
            cout<< "this is the default constructor"<<endl;
        };
        Complex(float X, float Y): x(X), y(Y){
            // x=X;
            // y=Y;
            // R=r;
            cout<< "This is the parametrized constructor"<< endl;   //parametrized constructor
        };      
        ~Complex( ){
        cout << "This is the destructor" << endl;
        };   
        Complex(const Complex &rhs){
            x= &rhs.x;
            y= &rhs.y;
            R= &rhs.R;
            cout<< "This is a copy constructor:"<<endl;
        };    
        float Overloaded assignment operator=(const Complex & rhs){
                *x= *rhs.x;
                *y= *rhs.y;
                *R= *rhs.R;
                return this;
        };
        float get_X() {
            return x;
            };

        float get_X() {
            return y;
            };
        float get_Radius( )  {         //returns the radial distance from center
            R = sqrt(x*x + y*y);
            return R;
            };
};
        void set_X(int u) {x = u;} //sets x = u

        void set_Y(int v) {y = v;} //sets y = v
        float operator-(const Complex &rhs){ //calculates the distance between two complex numbers, namely; float distance = C1 – C2
            Complex a;
            a.x= this-> x - rhs.x;
            a.y= this -> y - rhs.y;
            return a.x, a.y;
        }
};
void SetArrayComplex(Complex *ptr, int size){
    cout<< "select 5 coordinate points"<< endl;

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

    Complex C1(3,4);
    Complex C2(6,8);
    int n =5;
    Complex Num[5][2];
    Complex* ptr;
    SetArrayComplex(ptr,5);

    return 0;
    

}