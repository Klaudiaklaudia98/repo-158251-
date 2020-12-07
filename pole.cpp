
#include <iostream> 
double wynik, liczba; //! double - liczba zmiennoprzecinkowa//!\
int main()
{
    using namespace std;
    cout << "Podaj liczbę: ";//! Wyślij liczbę w celu wyświetlenia strumienia znaków//!\
    cin >> liczba; //! Akceptacja wejścia ze standardowego urządzenia wejściowego//!\
    wynik = liczba*liczba;
        cout << "liczba " << liczba << " podniesiona do kwadratu wynosi " << wynik << endl;
    return wynik;
}
