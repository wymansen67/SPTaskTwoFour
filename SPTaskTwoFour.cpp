#include <iostream>
#include <string.h>
using namespace std;

class Car {
    private:
        string brand;
        string model;

    public:

        Car(string b, string m) { brand = b; model = m; }

        void info() {
            cout << "Марка машины: " << brand << endl << "Модель: " << model << endl;
        }

};

int main()
{
    setlocale(LC_ALL, "ru");

    string brand, model;

    cout << "Марка машины: ";
    cin >> brand;
    cout << endl;
    cout << "Модель: ";
    cin >> model;
    cout << endl;

    Car c1 { brand, model };

    c1.info();

}