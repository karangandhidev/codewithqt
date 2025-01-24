#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

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

    signed int dogs = -1;
    qInfo()<<"Dogs:"<<dogs;
    unsigned int cats = -10;
    qInfo()<<"Out of bounds value. Cats:"<<cats;
    return a.exec();
}
