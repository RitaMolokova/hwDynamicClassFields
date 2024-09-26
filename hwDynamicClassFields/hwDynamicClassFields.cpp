#include<iostream>
#include<Windows.h>
using namespace std;

class Car
{
    char* model;
    char* country;
    int year;
    double price;
public:
    Car() 
    {
        model = nullptr;
        country = nullptr;
        year = 0;
        price = 0.0;
    }
    Car(const char* Model, const char* Country, int Year, const double& Price) 
    {
        model = new char[strlen(Model) + 1];
        strcpy_s(model, strlen(Model) + 1, Model);
        country = new char[strlen(Country) + 1];
        strcpy_s(country, strlen(Country) + 1, Country);
        year = Year;
        price = Price;
    }
    void Input(const char* Model, const char* Country, int Year, const double& Price)
    {
        cout << "Введите модель автомобиля: ";
        model = new char[strlen(Model) + 1];
        strcpy_s(model, strlen(Model) + 1, Model);

        cout << "Введите страну-производителя: ";
        country = new char[strlen(Country) + 1];
        strcpy_s(country, strlen(Country) + 1, Country);

        cout << "Введите год выпуска: ";
        cin >> year;
        cout << "Введите цену: ";
        cin >> price;
    }
    void Output()
    {
        cout << "Model: " << model << endl
            << "Country: " << country << endl
            << "Year: " << year << endl
            << "Price: " << price << endl << endl;
    }
    ~Car()
    {
        delete[] model;
        delete[] country;
        cout << "Destruct\n";
    }
};

int main()
{
    //Car obj1("Nissan Juke", "Japonia", 21, 112238.0);
    //obj1.Output();

    /*Car obj1;
    obj1.Input();
    obj1.Output();*/
}



