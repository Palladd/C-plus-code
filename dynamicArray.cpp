#include <iostream>
using namespace std;

int main() {
int liczba;
int x;

    cout << "Podaj ilosc elementow tablicy: ";
    cin >> x;

    // Main structure of dynamic array
    int *arrayOne;
    arrayOne = new int [x];

    for (int i = 0; i < x; i++) {
        cout << "Podaj liczbe: ";
        cin >> arrayOne[i];
    }

    // Writing on screen every value of dynamic array
    for (int i = 0; i < x; i++) {
        cout << arrayOne[i] << " ";
    }

    // Removing array from memory and giving it value NULL to prevent crashes
    delete [] arrayOne;
    arrayOne = NULL;
    
    return 0;
}
