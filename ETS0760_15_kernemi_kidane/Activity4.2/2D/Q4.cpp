#include <iostream>
using namespace std;
int main(){ 
    int array[3][4];
cout << "Enter elements for the 3x4 array:\n";
    for (int i = 0; i <3; ++i) {
        for (int j = 0; j <4; ++j) {
            cout << "Element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> array[i][j];
        }
    }
int sumEven = 0;
    cout << "\nEven elements with '*' for odd numbers:\n";
    for (int i = 0; i <3; ++i) {
        for (int j = 0; j <4; ++j) {
            if (array[i][j] % 2 == 0) {
                sumEven += array[i][j];
                cout << array[i][j] << "\t";
            } else {
                cout << "*\t";
            }
        }
        cout << "\n";
    }

    cout << "\nSum of even elements: " << sumEven << "\n";
     return 0;
}
   
    

