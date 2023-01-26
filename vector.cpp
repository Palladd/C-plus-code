#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Dearation od vector
    vector <int> num = {1, 2, 3, 4};

    // Front element of vector
    cout << num.front() << endl;

    // Back element of vector
    cout << num.back() << endl;

    // Size of vector elements (size is how many elements that vector actually holds in the moment)
    cout << num.size() << endl;

    // Capacity of vector elements (capacity is how many elements vector can hold(reserved space))
    cout << num.capacity() << endl;

    // Pushing a number to back of vector element
    num.push_back(5);
    for (int i = 0; i < num.size(); i++) {
       cout << num[i] << endl;
    }

    // Deleting element from back of vector
    num.pop_back();
    for (int i = 0; i < num.size(); i++) {
        cout << num[i] << endl;
    }

    // Inserting element in vector at !!!BEGINNING!!! 
    num.insert(num.begin(), 30);
    cout << num.front() << endl;

    // Erasing element in !!!END!!! of vector
    num.erase(num.end());
    cout << num.back() << endl;
    
    return 0;
}
