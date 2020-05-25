#include <iostream>

using namespace std;

void czy_liczba(int max, int min)
{

}

int czy_liczba_funkcja(int max, int min)
{
    int to_liczba = 0;
    int b = 0;
    while (to_liczba != 1)
    {
        cout << "Podaj liczbe z przedzialu: (" << max << " - " << min << ") " << endl;
        string liczba;
        cin >> liczba;
        cout << "Liczba: " << liczba << endl;
        cout << "D³ugosc stringu liczba: " << liczba.length() << endl;
        for (int i = 0; i < liczba.length(); i++)
        {
            cout << "i: " << i << endl;
            cout << "liczba[i]: " << liczba[i] << endl;
            if (liczba[i] == '0' || liczba[i] == '1' || liczba[i] == '2' || liczba[i] == '3' || liczba[i] == '4' || liczba[i] == '5' || liczba[i] == '6' || liczba[i] == '7' || liczba[i] == '8' || liczba[i] == '9')
            {
                cout << "To liczba: " << endl;
                to_liczba = 1;
            }
            else
            {
                cout << "To nie liczba: " << endl;
                to_liczba = 0;
                break;
            }
        }

        b = atoi(liczba.c_str());
        {
            if (b <= max && b >= min)
            {
                cout << "Liczba z przedzialu" << endl;
            }
            else
            {
                cout << "Liczba NIE z przedzialu" << endl;
                to_liczba = 0;
            }

        }
    }

    return b;
}

int main()
{

    int x = 50;
    int y = 10;
    int z;

    z = czy_liczba_funkcja(x, y);
    cout << "Z: " << z;

    return 0;
}
