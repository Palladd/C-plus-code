# Notes and explenation
### ***Includes for each loop, vectors and dynamic arrays***
<br>


*For each loop:*
```c++
#include <iostream>
using namespace std;

int main() {
    int ogorki[] = {13, 123,21, 5 ,1245, 242,1, 412};

    for (int iterator : ogorki) {
        cout << iterator << endl;
    }
return 0;
}
```

*Vectors:*
```c++
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    // Declaration of vector
    vector <int> num = {1, 2, 3, 4};

    // Front element of vector
    cout << num.front() << endl;

    // Back element of vector
    cout << num.back() << endl;

    // Size of vector elements (size is how many elements that vector actually holds in the moment)
    cout << num.size() << endl;

    // Capacity of vector elements (capacity is how many elements vector can hold(reserved space))
    cout << num.capacity() << endl;

    // Pushing to back of vector element
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
```

*Dynamic arrays:*
```c++
#include <iostream>
using namespace std;

int main() {
int number;
int x;

    cout << "How many elements in array: ";
    cin >> x;

    // Main structure of dynamic array
    int *arrayOne;
    arrayOne = new int [x];

    for (int i = 0; i < x; i++) {
        cout << "Write number: ";
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

```
