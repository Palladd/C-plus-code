# Notes and explenation
### ***Includes for each loop, vectors and dynamic arrays***
<br>


## *For each loop:*
*Code is writing to terminal items in array by **for each** loop.*
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

## *Vectors:*
*Code is presenting most vital informations about **vectors.***
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

## *Dynamic arrays:*
*Code is executing **dynamic array.***
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

## *Bubble Sort*
*Code contain alghoritm which is **sorting by bubble** method (from lowest to highest) random numbers (from 0 to 100 ) in array.*
```c++
#include <bits/stdc++.h>
#include <ctime>

using namespace std;


void bubbleSort(int arr[], int &n) {
	int temp;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
			}
		}
	}
}


void array(int arr[], int &n) {
	cout << endl;
	cout << "Unsorted array: " << endl;
	
	for (int i = 0; i<n; i++) {
		arr[i] = rand() % 100;
		cout << arr[i] << " "; 
	}
	
	bubbleSort(arr, n);
}


int main() {
	srand(time(NULL));
	setlocale(LC_CTYPE, "Polish");
	system("title Bubble Sort");
	system("color ce");
	
	int n;
	cout << "Enter number of elements: ";
	cin >> n;
	
	int arr[n];

	array(arr, n);
	
	cout << endl;
	cout << endl;
	cout << "Sorted array: " << endl;
	for (int i = 0; i<n; i++) {
		cout << arr[i] << " "; 
	}

    return(0);
}
```

## *Switch*
*Code is a very simple calculator which is operated by **switch loop**. It calculates addition, substraction and division.*
```c++
#include <bits/stdc++.h>
#include <ctime>

using namespace std;

float add(float a, float b) {
	return a+b;
}

double substraction(double *a, double *b) {
	return *a-(*b);
}

int division(int a, int b) {
	return a/b;
}

int main() {
	srand(time(NULL));
	setlocale(LC_CTYPE, "Polish");
	system("title Switch");
	system("color ce");
	
	double a, b;
	char x;
	
	cout << "Enter first number you want to calculate: ";
	cin >> a;
	
	cout << "Enter second number you want to calculate: ";
	cin >> b;
	
	cout << endl;
	
	cout << "Avaible characters are: '+', '-', '/'." << endl;
	cout << "Enter character that perform the calculation: ";
	cin >> x;
	
	switch (x) {
		case '+': 
			cout << add(a, b) << endl;
		break;
		
		case '-': 
			cout << substraction(&a, &b) << endl;
		break;
		
		case '/': 
			cout << division(a, b) << endl;
		break;
	}

    return(0);
}
```