#include <iostream>

using namespace std;

 main()
{
    float pem,pen,hsl;
    cout << "                Mengubah Bilangan Pecahan Ke Bilangan Bulat" << endl << endl;
    cout << "Masukan pembilang  : "; cin >> pem;
    cout << "Masukan penyebut   : "; cin >> pen;
    cout << endl;
    cout << "Bentuk bilangan desimal dari ";
    cout << pem;
    cout <<"/";
    cout << pen;
    cout << " adalah ";
    hsl = pem/pen;
    cout << hsl;

    cin.get ();
    return 0;
}
