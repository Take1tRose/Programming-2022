#include <iostream>
#include <string>
using namespace std;
/*class Car {
private:
	int price;
	string name;
	string color;
public:
	Car() :price(0), name(" "), color(" ") {};
	Car(int p, string n, string c) : price(p), name(n), color(c) {};
	int GetPrice() {
		return price;
	}
	string GetName() {
		return name;
	}
	string GetColor() {
		return color;
	}
	void SetPrice(int new_price) {
		price = new_price;
	}
	void Input() {
		cout << "Enter price " << endl;
		cin >> price;
		cout << "Enter name " << endl;
		getline(cin, name);
		cout << "Enter color " << endl;
		getline(cin, color);
	}
	void Print() {
		cout << "Price--" << price << endl;
		cout << "Name--" << name << endl;
		cout << "Color--" << color << endl;
	}
};
void main() {
	Car car1;
	Car car2(1000, "Opel", "red");
	int n;
	cout << "Enter cars amount" << endl;
	cin >> n;
	Car* array = new Car[n];
	array[0] = car1;
	array[1] = car2;
	for (int i = 2; i < n; i++) {
		array[i].Input();
	}
	cout << "Enter color" << endl;
	string color;
	cin >> color;
	for (int i = 0; i < n; i++) {
		if (array[i].GetColor() == color) {
			array[i].Print();
		}
	}
	for (int i = 0; i < n; i++) {
		if (array[i].GetColor() == "gold") {
			array[i].SetPrice(array[i].GetPrice() * 0.9);
		}
		array[i].Print();
	}
}*/
/*class Students {
private:
	int id;
	string group;
public:
	Students() : id(0), group(" ") {};
	Students(int _i, string _g) :id(_i), group(_g) {};
	int GetId() {
		return id;
	}
	string GetGroup() {
		return group;
	}
	void SetId(int new_id) {
		id = new_id;
	}
	void Input() {
		cout << "Enter id " << endl;
		cin >> id;
		cout << "Enter group " << endl;
		cin >> group;
	}
	void Print() {
		cout << "Id--" << id << endl;
		cout << "Group--" << group << endl;
		
	}
};
void main() {
	Students st1;
	Students st2(0001, "PmI-11");
	int n;
	cout << "Enter students amount" << endl;
	cin >> n;
	Students* array = new Students[n];
	array[0] = st1;
	array[1] = st2;
	for (int i = 2; i < n; i++) {
		array[i].Input();
	}
	cout << "Enter group" << endl;
	string group;
	cin >> group;
	for (int i = 0; i < n; i++) {
		if (array[i].GetGroup() == group) {
			array[i].Print();
		}
}*/
class Student
{
public:
    Student() : name("John"), group("pmi11"), id(10) {};
    Student(string _name, string _group, int _id) : name(_name), group(_group), id(_id)
    {
    }
    string getName()
    {
        return name;
    }
    string getGroup()
    {
        return group;
    }
    int getId()
    {
        return id;
    }

    void setName(string _name)
    {
        name = _name;
    }

    void setGroup(string _group)
    {
        group = _group;
    }
    void setId(int _id)
    {
        id = _id;
    }
    void Input()
    {
        cout << "Enter group: " << endl;
        cin >> group;
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter id: " << endl;
        cin >> id;
    }
    void Print()
    {
        cout << "Group -- " << group << endl;
        cout << "Name -- " << name << endl;
        cout << "Id -- " << id << endl;
    }

private:
    string name;
    string group;
    int id;
};

void ArraySort(Student array[], int length)
{
    int j = 0;
    Student tmp;
    for (int i = 0; i < length; i++)
    {
        j = i;
        for (int k = i; k < length; k++)
        {
            if (array[j].getId() > array[k].getId())
            {
                j = k;
            }
        }
        tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
    }
}
int main()
{
    // group all lower case (!)
    //  student1 = John PMI11 10
    Student student1();
    // student2:
    Student student2("Bob", "pmi12", 666);
    int n;
    cout << "Enter students amount: " << endl;
    cin >> n;
    Student* array = new Student[n];
    for (int i = 2; i < n; i++)
    {
        array[i].Input();
    }

    cout << "_________________________________________" << endl;
    string name;
    string group;
    cout << "Enter student group: " << endl;
    cin >> group;
    cout << "Students from this group: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (array[i].getGroup() == group)
        {
            array[i].Print();
        }
    }
    cout << "__________________________________" << endl;
    cout << "Enter student name: " << endl;
    cin >> name;
    cout << "Students with this name: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (array[i].getName() == name)
        {
            array[i].Print();
        }
    }
    cout << "__________________________________" << endl;

    array[0].setId(333);
    ArraySort(array, n);
    cout << "Sorting::::::" << endl;
    for (int i = 0; i < n; i++)
    {
        array[i].Print();
        cout << "__" << endl;
    }
    return 0;
}