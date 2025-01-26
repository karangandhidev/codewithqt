#include <QCoreApplication>
#include <QDebug>
enum RGB {red,green,blue=10};

struct product {
    int weight;
    double value;
    RGB colors;
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // variables and data types
    bool LightSwitch = false;

    qInfo() << "Is on:" <<LightSwitch;

    LightSwitch = true;

    qInfo() << "Is on:" <<LightSwitch;

    int age = 27;
    double pi = 3.142;

    qInfo() <<"Age:"<<age;
    qInfo() <<"Pi:"<<pi;

    age = 39.2;
    qInfo()<<"Implicit conversion from double to int. Age:"<<age;

    // signed and unsigned variables
    signed int dogs = -1;
    qInfo()<<"Dogs:"<<dogs;
    unsigned int cats = -10;
    qInfo()<<"Out of bounds value. Cats:"<<cats;

    // enum
    enum Color {red,green,blue=10};
    Color objname = Color::blue;
    qInfo()<<objname;

    //structure
    product laptop; // no assignment.
    laptop.weight = 90;
    laptop.value = 10079;
    laptop.colors = RGB::green;

    qInfo()<<laptop.weight;
    qInfo()<<laptop.value;
    qInfo()<<laptop.colors;
    return a.exec();
}
