//podnoszenie do kwadratu RRS
#include <iostream> //
double wynik, liczba; // double - liczba zmiennoprzecinkowa
int main()
{
    using namespace std;
    cout << "Podaj liczbę: ";
    cin >> liczba;
    wynik = liczba*liczba;
        cout << "liczba " << liczba << " podniesiona do kwadratu wynosi " << wynik << endl;
    return wynik;
}