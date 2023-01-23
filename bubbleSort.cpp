#include <bits/stdc++.h>
#include <ctime>

using namespace std;


void bubbleSort(int arr[], int &n) {
	int temp;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}


void array(int arr[], int &n) {
	cout << endl;
	cout << "Tablica nieposortowana: " << endl;
	
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
	cout << "Podaj liczbê elementów: ";
	cin >> n;
	
	int arr[n];

	array(arr, n);
	
	cout << endl;
	cout << endl;
	cout << "Tablica posortowana: " << endl;
	for (int i = 0; i<n; i++) {
		cout << arr[i] << " "; 
	}

    return(0);
}
