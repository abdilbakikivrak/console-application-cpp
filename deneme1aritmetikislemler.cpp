// Örnek 2  artimetik işlemler **************************************************************************************************

#include <iostream>

using namespace std;
int main() {
    int x = 20; // ondalık olarak sonuc elde etmek için en bir tane tanımı float yaparız bir de işlemi tanımladığımız değişkeni float yaparız
    int y = 63;
    int z = y % 10; // mod operatörü yani 4'ün 10a bölümünden kalan değer

    x++; // x = x+1 'e eşittir anlamında
    y--; // y= y-1 'e eşittir anlamında 

    cout << x << endl; // x++ olan yeni  değerini yazar
    cout << y << endl; // y-- olan yeni y değerni yazar
    cout << z << endl; // tanımlanan z mod operatörü değerni yazar
    int a = (x * 40 / 100) + (y * 60 / 100); // a değişkeninde x y işlemi tanımladım. 

    cout << x * y << endl ;  // tanımlanan x ve y değişkenlerini çarpma işlemi yapar
    cout << x - y<< endl; // tanımlanan x ve y değerlerini çıkarma işlemi yapar
    cout << x / y<< endl ; // tanımlanan x ve y değişkenlerini bölme işlemi yapar
    cout << x + y<< endl; // tanımlanan  x ve y değişkenlerini toplama işlemi yapar
    cout << "a islemi sonucu ;"<< a << endl;

   

    return 0;//gerek yok aslında 

}