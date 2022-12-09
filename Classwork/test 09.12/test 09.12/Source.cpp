#include <iostream>
#include <string>
using namespace std;
class A {
private: 
	int a;
public:
	A() :a(0) { cout << '1' << a; }
	A(int y) :a(y) { cout << '2' << a; }
	A(const A& x) :a(x.a) { cout << '3' << a; }

	};
void main() {
	A b;
	b=4;
}