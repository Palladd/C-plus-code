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
