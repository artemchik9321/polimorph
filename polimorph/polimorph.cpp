// polimorph.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Transport 
{
protected:
    string name;
    double weight;
    double razhodBenz;
public:
    Transport() = default;
    Transport(string _name, double _weiight, double _razhodBenz)
    {
        name = _name;
        weight = _weiight;
        razhodBenz = _razhodBenz;
    }
    void setAll(string _name, double _weiight, double _razhodBenz, double _klvoPass)
    {
        name = _name;
        weight = _weiight;
        razhodBenz = _razhodBenz;
    }
    virtual void costOfDelivery() 
    
    {
        cout << "NONE" << endl;
    }
};

class Car :public Transport 
{
    double klvoPass;
public:
    Car() = default;
    Car(string _name, double _weiight, double _razhodBenz, double _klvoPass) :Transport(_name, _weiight, _razhodBenz)
    {
        klvoPass = _klvoPass;
    }
    void setAll(string _name, double _weiight, double _razhodBenz, double _klvoPass)
    {
        name = _name;
        weight = _weiight;
        razhodBenz = _razhodBenz;
        klvoPass = _klvoPass;
    }
    void costOfDelivery() 
    {
        cout << "delivery = 52$";
    }
};

class Airplane :public Transport 
{
    double klvoPass;
public:
    Airplane() = default;
    Airplane(string _name, double _weiight, double _razhodBenz, double _klvoPass) :Transport(_name, _weiight, _razhodBenz)
    {
        klvoPass = _klvoPass;
    }
    void setAll(string _name, double _weiight, double _razhodBenz, double _klvoPass)
    {
        name = _name;
        weight = _weiight;
        razhodBenz = _razhodBenz;
        klvoPass = _klvoPass;
    }
    void costOfDelivery() 
    {
        cout << "delivery = 4780$";
    }
};

class waterShip :public Transport 
{
    double klvoPass;
public:
    waterShip() = default;
    waterShip(string _name, double _weiight, double _razhodBenz, double _klvoPass) :Transport(_name, _weiight, _razhodBenz)
    {
        klvoPass = _klvoPass;
    }
    void setAll(string _name, double _weiight, double _razhodBenz, double _klvoPass)
    {
        name = _name;
        weight = _weiight;
        razhodBenz = _razhodBenz;
        klvoPass = _klvoPass;
    }
    void costOfDelivery() 
    {
        cout << "delivery = 800$";
    }
};

class Gruz :public Transport 
{
    double klvoPass;
public:
    Gruz() = default;
    Gruz(string _name, double _weiight, double _razhodBenz, double _klvoPass) :Transport(_name, _weiight, _razhodBenz)
    {
        klvoPass = _klvoPass;
    }
    void setAll(string _name, double _weiight, double _razhodBenz, double _klvoPass)
    {
        name = _name;
        weight = _weiight;
        razhodBenz = _razhodBenz;
        klvoPass = _klvoPass;
    }
    void costOfDelivery() 
    {
        cout << "delivery = 520$";
    }
};


int main()
{
    Transport* transport = nullptr;
    cout << "1.Car" << endl;
    cout << "2.Airplane" << endl;
    cout << "3.Ship" << endl;
    cout << "4.Gruzovik" << endl;
    int ch = 0;
    cin >> ch;
    switch (ch)
    {
    case(1):
    {
        transport = new Car;
        transport->setAll("BMW", 900, 52, 4);
        break;
    }
    case(2):
    {
        transport = new Airplane;
        transport->setAll("Boing777", 900, 52, 4);
        break;
    }
    case(3):
    {
        transport = new waterShip;
        transport->setAll("Volga", 900, 52, 4);
        break;
    }
    case(4):
    {
        transport = new Gruz;
        transport->setAll("200", 900, 52, 4);
        break;
    }
    }
    transport->costOfDelivery();

}