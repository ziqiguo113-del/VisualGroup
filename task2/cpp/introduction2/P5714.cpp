#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
	double m, h;
	cin >> m >> h;
	double bmi = m /( h * h); 
	cout << setprecision(6) << bmi << endl;
	if (bmi, 18.5) {
		cout << "Underweight" << endl;
	}
	else if (bmi < 24) {
		cout << "Normal" << endl;
	}else{cout<<"Overweight" << endl;

	}
	return 0;
}