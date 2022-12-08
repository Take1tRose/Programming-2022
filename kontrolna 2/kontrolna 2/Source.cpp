#include <iostream>
#include <string>
using namespace std;
class Phone {
private:
	string name;
	string color;
	int price;
public:
	Phone(): name(" "), color(" "), price(0) {};
	Phone(string n, string c, int p) :name(n), color(c), price(p){};
	friend istream& operator>>(istream& is, Phone& phone)
	{
		is >> phone.name >> phone.color >> phone.price;
		return is;
	}
	friend ostream& operator<<(ostream& os, Phone& phone)
	{
		os << "Name - " << phone.name << "; color - " << phone.color << "; price - " << phone.price << endl;
		return os;
	}
	string GetName() {
		return name;
	}
	string GetColor() {
		return color;
	}
	int GetPrice() {
		return price;
	}
	void SetPrice(int new_price) {
		price = new_price;
	}
	void Input() {
		cout << "Enter name " << endl;
		getline(cin, name);
		cout << "Enter color " << endl;
		getline(cin, color);
		cout << "Enter price " << endl;
		cin >> price;
	}
	void Print() {
		cout << "Name--" << name << endl;
		cout << "Color--" << color << endl;
		cout << "Price--" << price << endl;
	}
};
void main() {
	/*Phone phone1;
	Phone phone2("IPhone Xr", "Red", 1000);
	Phone phone3("Samsung Galaxy S20", "Green", 300);
	Phone phone4("Xiaomi", "white", 100);
	Phone phone5("Oppo", "Black", 200);
	Phone phone6("Nokia", "Purple", 350);
	Phone phone7("Huawei", "White", 400);*/
	const int n = 10;
	Phone* array = new Phone[n];
	for (int i = 0; i < 2; i++)
	{
		cin >> array[i];
	}
}