// project3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    class Car {
    public:
        string make;
        string model;
        int year;

        Car(string m, string mo, int y) {
            make = m;
            model = mo;
            year = y;
        }

        void print() {

            cout << "Марка автомобиля: " << make << endl;
            cout << "Модель автомобиля: " << model << endl;
            cout << "Год автомобиля: " << year << endl;
        }
    };

    Car oneCar("Toyota", "Corolla", 2023);
    Car twoCar("Audi", "A6", 2009);
    Car threeCar("BMW", "X5", 2018);

    oneCar.print();
    cout << "-----------------------------------------" << endl;
    twoCar.print();
    cout << "-----------------------------------------" << endl;
    threeCar.print();

    return 0;
}


