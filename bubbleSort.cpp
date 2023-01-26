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