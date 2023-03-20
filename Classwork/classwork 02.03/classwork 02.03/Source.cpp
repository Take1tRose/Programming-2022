#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
class Person {
protected:
	string name;
	int age;

public:
	virtual void input(istream& is) {
		is >> age >> name;

	}
	virtual void output(ostream& os) {
		os << "Age: " << age << "name: " << name;
	}
	friend istream& operator>>(istream& is, Person &data) {
		data.input(is);
		return is;
	}
	friend ostream& operator<<(ostream& is, Person &data) {

	}
};

class Student : public Person {
private:
	string group;
	int stip;
public:
	void input(istream &is) {
		Person::input(is);
		is >> group >> stip;
	}
	void output(ostream& os) {
		Person::output(os);
		os << "Group: " << group << "; Stipendia: " << stip;
	}
	string GetGroup() {
		return group;
	}
	int GetStip() {
		return stip;
	}
};

class Worker : public Person {
private:
	int wage;
public:
	void input(istream& is) {
		Person::input(is);
		is >> wage;
	}
	void output(ostream& os) {
		Person::output(os);
		os << "Income" << wage;
	}
	int GetWage() {
		return wage;
	}
};
int main() {
	vector<Person*> list;
	string data;
	ifstream myfile("data.txt");
	while (!myfile.eof()) {
		int num;
		Person *temp;
		myfile >> num;
		if (num == 1) {
			temp = new Student();
		}
		if (num == 2) {
			temp = new Worker();
		}
		cout << 1;
		temp->input(myfile);
	}
	if (myfile.is_open()) {
		myfile >> data;
		cout << data;
	}
}
