#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
T Func(vector<T> &ve1, vector<T> &ve2)
{
    vector<int> ve3;
    ve3 = ve1;
    vector<int> ve4;
    ve4 = ve2;
    sort(ve3.begin(), ve3.end());
    sort(ve4.begin(), ve4.end());
    if (ve3 == ve1 && ve4 == ve2)
    {
        ve1.insert(ve1.end(), ve2.begin(), ve2.end());
        sort(ve1.begin(), ve1.end());
        for (int i1 = 0; i1 < ve1.size(); i1++)
        {
            cout << ve1[i1] << " ";
        }
    }
    else
    {
        if (ve1.size() > ve2.size())
        {
            for (int i2 = 0; i2 < ve1.size(); i2++)
            {
                cout << ve1[i2] << " ";
            }
        }
        else
        {
            for (int i2 = 0; i2 < ve2.size(); i2++)
            {
                cout << ve2[i2] << " ";
            }
        }
    }
    return 0;
}

int main()
{
    vector<int> v1;
    vector<int> v2;
    int a;
    int b;
    cout << "Enter size of first vector\n";
    cin >> a;
    cout << "Enter numbers to first vector\n";
    for (int i = 0; i < a; i++)
    {
        int c;
        cin >> c;
        v1.push_back(c);
    }
    cout << "Enter size of second vector\n";
    cin >> b;
    cout << "Enter numbers to second vector\n";
    for (int it = 0; it < b; it++)
    {
        int d;
        cin >> d;
        v2.push_back(d);
    }
    // for (int i1 = 0; i1 < v1.size(); i1++)
    // {
    //     cout << v1[i1] << " ";
    // }
    Func(v1, v2);
}