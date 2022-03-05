//Bai 165
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void nhapxuat(int a[], int &n)
{
	cin >> n;
	for (int i = 0; i < n; i++)	{
		a[i] = rand();
		cout << a[i] << " ";
	}		
}

int chusodautien(int n)
{
	while (n >= 10) {
		n /= 10;
	}
	return n;
}

int main()
{
	srand(time(NULL));
	int n;
	int a[100];
	nhapxuat(a, n);
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (chusodautien(a[i]) % 2 == 1) {
			count++;
			cout << "\n Gia tri thoa man: " << a[i];
			break;
		}
	}
	if (count == 0) {
		cout << 0;
	}
	return 0;
}
