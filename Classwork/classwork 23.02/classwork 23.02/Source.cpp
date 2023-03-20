#include <iostream>
#include <string>
using namespace std;

class Twr
{
private:
    string name;

public:
    string getName(){
        return name;
    }
    void setName(string name){
        this->name = name;
    }
    friend istream& operator>>(istream& is, Twr& tow){
        cout << "Enter product name:" << endl;
        is >> tow.name;
        return is;
    }
    friend ostream& operator<<(ostream& os, const Twr& p){
        os << p.name;
        return os;
    }
};
class Skld
{
private:
    int amount;
    Twr* product_array;
    int storage_number;
    string address;

public:
    Skld() : amount(10), storage_number(0), address("") {};
    Skld(int amount, int storage_number, string address){
        this->amount = amount;
        this->storage_number = storage_number;
        this->address = address;
    };
    Skld(Skld& copy_storage){
        amount = copy_storage.amount;
        storage_number = copy_storage.storage_number;
        address = copy_storage.address;
    }
    friend istream& operator>>(istream& is, Skld& storage){
        cout << "Enter storage number:" << endl;
        is >> storage.storage_number;
        cout << "Enter storage address:" << endl;
        is >> storage.address;
        cout << "Enter products amount:" << endl;
        is >> storage.amount;
        storage.product_array = new Twr[storage.amount];
        for (int i = 0; i < storage.amount; i++){
            cin >> storage.product_array[i];
        }
        return is;
    }
    friend ostream& operator<<(ostream& os, const Skld& storage){
        os << "Number: " << storage.storage_number << "; Address: " << storage.address << "; Storage amount: " << storage.amount << endl;
        return os;
    }
    void operator=(Skld& storage){
        this->address = storage.address;
        this->amount = storage.amount;
        this->storage_number = storage.storage_number;
        this->product_array = storage.product_array;
        product_array = new Twr[amount];
        for (int i = 0; i < amount; i++){
            product_array[i] = storage.product_array[i];
        }
    }

    Twr operator[](int index){
        return product_array[index];
    }
    int getAmount(){
        return amount;
    }
    int getNumber(){
        return storage_number;
    }
    string getAddress(){
        return address;
    }
    void PrintProducts(){
        cout << "Product list:" << endl;
        for (int i = 0; i < amount; i++){
            cout << product_array[i] << endl;
        }
    }
    ~Skld(){
        cout << "Destructot";
    }
};

int main(){
    Skld storages_array[2];
    for (int i = 0; i < 2; i++){
        cin >> storages_array[i];
    }
   
    if (storages_array[0].getAddress().compare(storages_array[1].getAddress()) == -1){
        cout << storages_array[0];
        cout << storages_array[1];
    }
    else{
        cout << storages_array[1];
        cout << storages_array[0];
    }

    if (storages_array[0].getNumber() < storages_array[1].getNumber()){
        storages_array[0].PrintProducts();
    }
    else{
        storages_array[1].PrintProducts();
    }

    Skld storage_copy;
    storage_copy = storages_array[0];
    cout << "New copied class:" << endl;
    cout << storage_copy.getAddress();
    return 0;
}