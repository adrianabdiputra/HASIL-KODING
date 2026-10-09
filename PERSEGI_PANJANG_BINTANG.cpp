#include <iostream>
using namespace std;

int main()
{
    cout << "BIKIN PERSEGI PANJANG YIPPIEE" << endl;
    cout << "_____________________________" << endl;

    int panjang_persegi,lebar_persegi,i,j;

    cout << "Input panjang persegi : ";
    cin >> panjang_persegi;
    cout << "Input lebar persegi :";
    cin >> lebar_persegi;

    cout << endl;

    for(i=1;i<panjang_persegi;i++) {
        for(j=1;j<lebar_persegi;j++) {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}
