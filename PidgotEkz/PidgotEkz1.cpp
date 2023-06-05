#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
template <typename T>
T Func(T a, vector<T> &v)
{

    int num = count(v.cbegin(), v.cend(), a);
    cout << v.size() - num;
    return a;
}

int main()
{
    vector<int> vec;
    int a;
    cout << "Enter size of arr: ";
    cin >> a;
    cout << "Enter your numbers: " << endl;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        vec.push_back(b);
    }
    cout << "Enter position of element: ";
    int n;
    cin >> n;
    int r = vec.at(n - 1);
    try
    {
        if (a < vec.size() && a >= 0)
        {
            cout << "All is OK :)\n";
        }
    }
    catch (const exception &e)
    {
        cout << "Error: " << e.what() << endl;
    }
    Func(r, vec);
}
