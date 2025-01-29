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

    age>0 && age<101? qInfo("You are alive"): qFatal("Something wrong with your age");
    return a.exec();
}
