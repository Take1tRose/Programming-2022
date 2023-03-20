#include <iostream>
#include <time.h>
#include <string>
using namespace std;


double Sum(double arr[], int n);

int main()
{
    int n = 0;
    cout << "Enter number of elements" << endl;
    cin >> n;
    cout << "Enter An" << endl;
    double* arr = new double[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << endl;
    cout << endl << "Your array" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "Sum " << Sum(arr, n) << endl;
    cout << endl;

    return 0;

}
double Sum(double arr[], int n) {
    double sum = 0;
    int N;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            N = i;
        }
    }
    for (int i = 1; i < N; i++) {
        sum += arr[i - 1] * arr[i];
    }
    sum += arr[0] * arr[N - 1];
    return sum;
}