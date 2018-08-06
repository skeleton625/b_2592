#include <iostream>
using namespace std;

int num, avg, c, j, m, mn;
int n[10], nc[10];

int main(){
	for (int i = 0; i < 10; i++) {
		cin >> num;
		avg += num;
		for (j = c; j >= 0; j--) {
			if (n[j] == num) {
				nc[j]++;
				break;
			}
		}
		if (j == -1) {
			nc[c]++;
			n[c++] = num;
		}
	}

	m = nc[0];
	mn = n[0];
	for (int i = 1; i < c; i++) 
		if (nc[i] > m) {
			mn = n[i];
			m = nc[i];
		}
	cout << avg / 10 << endl;
	cout << mn;
	return 0;
}