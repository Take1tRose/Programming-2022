#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	/*double a[100];
	int n;
	cout << "Vvedit' n " << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	double s = a[0];
	double b[100];
	for (int k = 0; k < n; k++) {
		b[k] = a[k] / (1 + s * s);
		s = s + a[k + 1];
		cout << "b[k]=" << b[k]<<endl;
	}*/
	/*int k;
	cout << "Vvedit' k" << endl;
	cin >> k;
	for (int i = 1; i < k; i++) {
		if (k % i == 0) {
			cout << i << endl;
		}
	}*/
	/*int m;
	cout << "Vvedit' chusla: " << endl;
	cin >> m;
	int array[100];
	for (int i = 0; i < m; i++) {
		cout << "Input x" << i << endl;
		cin >> array[i];
	}
	bool isSpadna = false;
	for (int i = 0; i < m - 1; i++) {
		if ((array[i] > array[i + 1])) {
			isSpadna = true;
		}
		else {
			isSpadna = false;
			break;
		}
	}
	string result = isSpadna ? "Spadna" : "Ne spadna";
	cout << result;*/
	
	int size;
	cout << "Input numbers amount:" << endl;
	cin >> size;
	int array[100];
	for (int i = 0; i < size; i++) {
		cout << "Input x" << i << endl;
		cin >> array[i];
	}
	int min[] = { array[0], 0 };
	for (int i = 0; i < size; i++) {
		if (array[i] < min[0]) {
			min[0] = array[i];
			min[1] = i;
		}
	}
	cout << "Min number = " << min[0] << "; Index: " << min[1] << endl;

	/*int size;
	cout << "Input numbers amount:" << endl;
	cin >> size;
	int* array = new int[size];
	for (int i = 0; i < size; i++) {
		cout << "Input x" << i << endl;
		cin >> array[i];
	}
	int minIndex = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] < array[minIndex]) {
			minIndex = i;
		}
	}

	cout << "Min number = " << array[minIndex] << "; Index: " << minIndex << endl;*/
}