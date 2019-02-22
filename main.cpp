#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <windows.h>

using namespace std;

int mounthnr,year;

int main()
{

    while(true)
    {
        cout << "Wpisz numer miesiaca, ktorego ilosc dni chcesz poznac: " << endl << "Aby zakonczyc program wpisz 0" << endl << endl;

        if (!(cin >> mounthnr))
        {
            cerr << "To nie jest liczba!" << endl << "Program zostanie zamkniety po kliknieciu" << endl;        }

        switch(mounthnr)
        {
        case 0:
            cout << "Do zobaczenia :)!";
            Sleep(2000);
            exit(0);
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "Wybrany miesiac ma 31 dni.";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "Wybrany miesiac ma 30 dni.";
            break;
        case 2:
            cout << "Podaj rok: ";
            cin >> year;
            if (((year%4 == 0) && (year%100 != 0)) || (year%400 == 0))
                cout << "Wybrany miesiac ma 29 dni";
            else
                cout << "Wybrany miesiac ma 28 dni";
            break;
        default:
            cout << "Podano liczbe spoza zakresu 1-12 ;(" << endl << "Sprobuj jeszcze raz.";
        }
        getchar();getchar();
        system("cls");

    }

    return 0;
}
