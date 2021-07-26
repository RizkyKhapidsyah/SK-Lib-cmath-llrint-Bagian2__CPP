
#include <cfenv>
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	int a = 15;
	long long int answer;

	fesetround(FE_DOWNWARD);
	answer = llrint(a);
	cout << "Downward rounding of " << a << " is " << answer << endl;

	_getch();
	return 0;
}
