// Pointers -Referance 
#include <iostream>
using namespace std;

void fonsiyon1(int &x_) { // & ampersand ile fonsiyonda tanımlı olan değikenin ( burada x olarak tanımladım) adresine git ve bu fonsiyon işlemini tanımlı olan değişkenin (x) üzerinde yap 
    x_ = x_ * 2; // fonsiyonun yapacağı işlemi tanımladık 
    cout << "fonsiyon 1 icindeki x degeri :" << x_<< endl ; // değişkenin adresteki degere fonksiyon işleminin sonucunu yazdırdık

}

int main() {
    int x = 5; // main blogumuzda x' i tanımladık 
    fonsiyon1(x); // oluşturduğumuz fonsiyondaki işlemde x yani 5 degerini kullanmasını istedik  
    cout <<"main icindeki  x degeri : "<< x << endl; // gerçek x değerimizin adresine fonsiyon ile işlem yaptırdığımız için main'deki x degerimiz de fonksiyon1'in sonucunu alır 
}