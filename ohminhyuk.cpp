#include <iostream>

using namespace std;

int main() {
	
	int a[12][12] = {};
	
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cin >> a[i][j];
		}
		//cout << "\n";
	}
	int n = 0;
	int c = 2;
	int d = 2;


	for (int i = 1; i < 40; i++) {
		if (a[c][d + 1] != 1 & a[c][d] != 2) { // 오른쪽이 0인 경우
			a[c][d] = 9;
			d += 1;
		}
		else if (a[c][d + 1] == 1 & a[c][d] != 2 & a[c + 1][d] !=1) { // 오른쪽이 1이고 아래가 0인 경우
			a[c][d] = 9;
			c += 1;
		}
		else if (a[c][d] == 2) {   // 내가 2인 경우
			a[c][d] = 9;
			break;
		}
		else if (a[c][d + 1] == 1 & a[c + 1][d] == 1) { // 오른쪽 아래 둘다 1인 경우
			a[c][d] = 9;
			break;
		}
		
	}

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << a[i][j]<< " ";
		}
		cout << "\n";
	}

	
	return 0;
}
