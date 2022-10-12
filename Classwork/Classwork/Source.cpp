#include <iostream>
using namespace std;
int main() {
	/*for (int i = 0; i <= 100; i = i + 1)   задача 1
	{
		cout << i << "G " << 9.0 / 5 * i + 32 << "F" << endl;
	}*/
	
	/*int m;     задача 2
	cout << "Enter m" << endl;
	cin >> m;
	int k = 0;
	while (pow(4, k) < m)
	{
		k = k + 1;
	}
	cout << "k= " << k - 1 << endl;
	cout << pow(4, k-1) << endl;
	cout << pow(4, k);*/

	/*int n;   задача 3
	cout << "Enter n " << endl;
	cin >> n;
	int u0 = 0, u1 = 1, u;
	cout << u0 << endl;
	cout << u1 << endl;
	for (int i = 2; i <= n; i++)
	{
		u = u0 + u1;
		cout << u << endl;
		u0 = u1;
		u1 = u;
	}*/

	/*unsigned long long n, b;   задача 4
	long long a;
	cin >> n;
	b = 0;
	while (n > 0)
	{
		a = n % 10;
		n /= 10;
		b *= 10;
		b += a;
	}
	cout << b << endl;*/

	/*long long a, b;   задача 5
	cin >> a >> b;
	while (a != 0 and b != 0)
	{
		if (a > b) {
			a = a % b;
		}
		else {
			b = b % a;
		}
	}
	cout << a + b << endl;*/
	return 0;

}