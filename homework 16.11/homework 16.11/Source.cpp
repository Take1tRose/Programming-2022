#include<iostream>
#include <cstdlib>
#include <string>
using namespace std;

//int findMax(int arr[], int n)
//{
//    int i, max = arr[0], cnt = 0;
//    for (i = 1; i < n; i++)
//    {
//        if (arr[i] > max)
//            max = arr[i];
//    }
//    while (max > 0)
//    {
//        cnt++;
//        max = max / 10;
//    }
//    return cnt;
//}
//
//void bucketSort(int arr[], int* bucket[], int n)
//{
//    int i, j[10], k, l, d = 1, c;
//    c = findMax(arr, n);
//
//    for (int m = 0; m < c; m++)
//    {
//        for (i = 0; i < 10; i++)
//            j[i] = 0;
//        for (i = 0; i < n; i++)
//        {
//            k = (arr[i] / d) % 10;
//            bucket[k][j[k]] = arr[i];
//            j[k]++;
//        }
//
//        l = 0;
//        for (i = 0; i < 10; i++)
//        {
//            for (k = 0; k < j[i]; k++)
//            {
//                arr[l] = bucket[i][k];
//                l++;
//            }
//        }
//        d *= 10;
//    }
//}
//int main()
//{
//    int n, * arr, i;
//    int* bucket[10];
//    cout << "How many elemets?: ";
//    cin >> n;
//    arr = new int[n + 1];
//    for (i = 0; i < 10; i++)
//    {
//        bucket[i] = new int[n];
//    }
//    srand(time(NULL));
//    for (i = 0; i < n; i++)
//    {
//        arr[i] = rand() / 65.5;
//
//    }
//    bucketSort(arr, bucket, n);
//
//    cout << "Sorted array : ";
//    for (i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    return 0;
//}





//void inputMatrix(int arr, int size)
//{
//    cout << "Enter your Matrix: " << endl;
//
//    for (int i = 0; i < size; i++)
//    {
//        for (int j = 0; j < size; j++)
//        {
//            cout << "Input" << "[" << i << "] [" << j << "]: ";
//            cin >> arr[i][j];
//        }
//        cout << endl;
//    }
//}
//
//void outputMatrix(int arr, int size)
//{
//    cout << "Your Matrix: " << endl;
//
//    for (int i = 0; i < size; i++)
//    {
//        for (int j = 0; j < size; j++)
//        {
//            cout << " " << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//bool check(int** arr, int size)
//{
//    bool check = true;
//    int sumOfRow = 0;
//    int sumOfCol = 0;
//    for (int i = 0; i < size; i++)
//    {
//        for (int j = 0; j < size; j++)
//        {
//            sumOfRow += arr[i][j];
//        }
//        for (int k = 0; k < size; k++)
//        {
//            for (int l = 0; l < size; l++)
//            {
//                sumOfCol += arr[l][k];
//            }
//            if (sumOfRow != sumOfCol)
//            {
//                check = false;
//            }
//            sumOfCol = 0;
//        }
//        sumOfRow = 0;
//    }
//    return check;
//
//}
//int main()
//{
//    cout << "Size of matrix nxn: ";
//    int n;
//    cin >> n;
//
//    int** arr = new int* [n];
//
//    for (int i = 0; i < n; i++)
//    {
//        arr[i] = new int[n];
//    }
//
//    inputMatrix(arr, n);
//    outputMatrix(arr, n);
//    if (check(arr, n))
//    {
//        cout << "True";
//    }
//    else
//    {
//        cout << "False";
//    }
//    for (int i = 0; i < n; i++)
//    {
//        delete[] arr[i];
//    }
//
//    delete[] arr;
//}



//int main()
//{
//    string t, words[10000];
//    long long n;
//    getline(cin, t);
//    n = t.size();
//    int flag = 0;
//    int wordsnum = 1;
//    for (int i = 0; i < n; i++) {
//        if (t[i] == ' ' || t[i] == '.') {
//            wordsnum++;
//            flag = 0;
//        }
//        else {
//            flag++;
//            words[wordsnum].resize(flag);
//            words[wordsnum][flag - 1] = t[i];
//        }
//    }
//    for (int i = 1; i <= wordsnum; i++) {
//        if (words[i].size() > i)
//            cout << words[i] << endl;
//    }
//
//    return 0;
//}