#include <bits/stdc++.h>
#include <ctime>

using namespace std;

float add(float a, float b) {
	return a+b;
}

double substraction(double *a, double *b) {
	return a-b;
}

int main() {
	srand(time(NULL));
	setlocale(LC_CTYPE, "Polish");
	system("title Switch");
	system("color ce");
	
	double a, b;
	char x;
	
	cout << "Wpisz pierwsz� liczb�, kt�r� chcesz obliczy�: ";
	cin >> a;
	
	cout << "Wpisz drug� liczb�, kt�r� chcesz obliczy�: ";
	cin >> b;
	
	cout << endl;
	
	cout << "Dost�pne znaki to: '+', '-', '/'." << endl;
	cout << "Wpisz znak umo�liwjaj�cy wykonanie dzia�ania: ";
	cin >> x;
	
	switch (x) {
		case '+': 
			cout << add(a, b) << endl;
		break;
		
		case '-': 
			cout << substraction(&a, &b) << endl;
		break;
		
		case '/': 
			cout << add(a, b) << endl;
		break;
	}

    return(0);
}
