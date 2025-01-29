#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // ternary operation
    int age;
    qInfo()<<"Enter age:";
    cin >> age;

    age>=0 && age<101? qInfo("You are alive"): qFatal("Something wrong with your age");

    //switch
    switch (age) {
    case 0:
        qInfo("Just born");
        break;
    case 18:
        qInfo("Just starting adulting");
        break;
    default:
        qInfo("whatevess");
        break;
    }
    return a.exec();
}
