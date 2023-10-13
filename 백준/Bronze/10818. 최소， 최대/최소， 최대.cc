#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int max, min, a;
    
	cin >> a;
	max = a;
	min = a;
	for (int i = 1; i < n; i++) {
		cin >> a;
		if (a > max) max = a;
		if (a < min) min = a;
	}
	cout << min << ' ' << max;
}