#include <iostream>
#include <string>

using namespace std;

// Клас Customer зберігає інформацію про клієнта
class Customer {
private:
    string name;
    string address;
    string phoneNumber;

public:
    Customer(string name, string address, string phoneNumber): name(name), address(address), phoneNumber(phoneNumber) {}

    // Функції отримання доступу до закритих змінних
    string getName() const {
        return name;
    }

    string getAddress() const {
        return address;
    }

    string getPhoneNumber() const {
        return phoneNumber;
    }
};

// Клас BankAccount представляє банківський рахунок, і клієнта з класу Customer
class BankAccount {
private:
    Customer client;
    string accountNumber;
    double balance;

// баланс за замовчуванням дорівнює 0.0, якщо не вказано
public:
    BankAccount(Customer client, string accountNumber, double balance = 0.0): client(client), accountNumber(accountNumber), balance(balance) {}

    Customer getClient() const {
        return client;
    }

    string getAccountNumber() const {
        return accountNumber;
    }

    double getBalance() const {
        return balance;
    }

    // Додає вказану суму до балансу
    void deposit(double amount) {
        balance += amount;
    }

    // Віднімає вказану суму від балансу, якщо баланс більший або дорівнює сумі
    // Повертає true, якщо зняття коштів пройшло успішно, інакше - false
    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return true;
        }
        return false;
    }

    // Виводить назву, номер рахунку та баланс
    void display() const {
        cout << "Client: " << client.getName() << std::endl;
        cout << "Account Number: " << accountNumber << std::endl;
        cout << "Balance: $" << balance << std::endl;
    }
};
