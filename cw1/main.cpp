#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int rok_urodzenia = 1996;
    int aktualny_rok = 2017;
    int wiek = aktualny_rok - rok_urodzenia;
    string imie = "Kuba";
    string nazwisko = "Orlowski";
    cout << "Nazywam sie " << imie << " " << nazwisko << " i mam " << wiek << " lat." << endl;
    return 0;
}
