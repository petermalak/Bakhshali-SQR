#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float number;
    float x = 0;
    float z = 1;
    cout << "Enter the number: ";
    cin >> number;
    cout << endl;

    while (number < 0){
        cout << "Sorry, negative number"<<endl;
        cout << "Enter the number again: ";
        cin >> number;
        if (number > 0 || number==0){
            break;
        }
    }
    if (number == 0){
        cout << "The Square root is: 0";
    }
    else {
        while (abs (x - z) > 0.000001) {
            x = z;
            z  = 0.5*(z + number / z);
            cout << x << " , ";
        }
        cout << endl << endl;
        cout << endl << "The calculated square root is: " << x;
        cout << endl << endl;
        cout << endl << "The real square root is: " << sqrt(number);
        cout << endl << endl;
    }
}
