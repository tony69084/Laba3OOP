#include <iostream>
#include <conio.h>
#include "../func.h"
using namespace std;
using namespace whileLoop;
int main() {
Nachalo:
    int n, k;
    double eps;
    cout << "Choose a task" << endl;
    cout << "1 - Task1" << endl;
    cout << "2 - Task2" << endl;
    cout << "3 - Task3" << endl;
    cout << "4 - Task4" << endl;
    cout << "5 - Task5" << endl;
    cout << "6 - Exit" << endl;
    switch (_getch()) {
    case '1':
        system("cls");
        cout << "n="; cin >> n;
        cout << "Summa n slagaemih " << sum(n) << endl;
        system("pause");
        system("cls");
        goto Nachalo;
    case '2':
        system("cls");
        cout << "eps="; cin >> eps;
        cout << "Summa n slagaemih " << sum2(eps) << endl;
        system("pause");
        system("cls");
        goto Nachalo;
    case '3':
        system("cls");
        cout << "n = "; cin >> n;
        cout << "k = "; cin >> k;
        print(n, k);
        cout <<'\n';
        system("pause");
        system("cls");
        goto Nachalo;
    case '4':
        system("cls");
        cout << "eps = "; cin >> eps;
        cout << "Nomer perwogo elementa " << findFirstElement(eps) << endl;
        system("pause");
        system("cls");
        goto Nachalo;
    case '5':
        system("cls");
        cout << "eps = "; cin >> eps;
        cout << "Nomer perwogo otrizatelnogo elementa " << findFirstNegativeElement(eps) << endl;
        system("pause");
        system("cls");
        goto Nachalo;
    case '6':
        break;
    default:
        cout << "Wrong enter" << endl;
        break;
    }
}