// Örnek 5 if-else kullanımı / if - else if kullanımı ***************************************************************************

#include<iostream>

using namespace std;
int main()
{
    

    int sifre;
    int kullanicigirisi;
    cout << "Sifreyi Belirleyiniz : ";
    cin >> sifre; 
    cout << "Sifre Belirlendi." << endl ;

    cout << "Sifreyi Giriniz ;"; 
    cin >> kullanicigirisi; 

    if (kullanicigirisi == sifre) // ilk kontrol edilecek durum 
    { 

        cout << endl<<  "Sifre Dogru : :/ " <<endl;
    }
    else if (kullanicigirisi != sifre) // if durumu gerçekleşmez ise else if durumunu kontol eder 
        // else // => sadece else olursa if durumu doğru değil ise direkt olarak else durumunu gerçekleştirir
    {
        cout << endl<<  "Sifre Yalnis : X "<< endl ;
    }
    //

    int sayi1, sayi2; // hesaplanacak sayi tanımlamasi yapıldı
    float secilenislem, sonuc; // yapılacak işlem değişkeni tanımlandı, ve işlem sonucu değişkeni atandı 

    cout << " 1. Sayiyi Giriniz :";  // ilk sayıyı girin ibaresini ekrana yazdırdık
    
    cin >> sayi1; // 1. sayı girişini sayi1 aldık
    cout << "2. Sayiyi giriniz :"; // ikinci sayıyı girin ibaresini ekrana yazdırdık 

    cin >> sayi2; // 2. sayı girişini sayi2 aldık
    cout << "Yapmak istediginiz islemi secin; 1: + , 2: - , 3:* , 4: / "; // yapılmak istenen işlemin seçilecek  işlem rakamı ekrana yazdırılır
    cin >> secilenislem; // yapılan işlem seçimi için değişkene karakter girilir
    cout << endl;

    if (secilenislem == 1)  // eğer işlem için bir rakamı seçilirse toplama 
    {
        sonuc = sayi1 + sayi2;
        cout << " Birinci Sayi :" << sayi1 << endl << " ikinci Sayi :" << sayi2 << endl;
        cout << " Toplam : " << sonuc << endl;

    }
    else if (secilenislem == 2) // eğer işlem için 2 rakamı seçilise çıkarma 
    {
        sonuc = sayi1 - sayi2;
        cout << " Birinci Sayi :" << sayi1 << endl << " ikinci Sayi :" << sayi2 << endl;
        cout << "Cikarma :" << sonuc << endl;
    }
    else if (secilenislem == 3) // eğer işlem için 3 rakamı seçilirse çarpma 
    {
        sonuc = sayi1 * sayi2; 
        cout << " Birinci Sayi :" <<sayi1 << endl << " ikinci Sayi :" << sayi2 << endl;

        cout << " Carpim :" << sonuc << endl;

    }
    else if (secilenislem == 4) // eğer işlem için 4 rakamı seçilirse bölme
    {
        sonuc = sayi1 / sayi2;
        cout << " Birinci Sayi :"<<sayi1<< endl <<" ikinci Sayi :" << sayi2 << endl;
        cout << " Bolum :" << sonuc << endl;
    }
    else // eğer atanan rakamlar dığında başka bir girdi olursa ise tanımsız yazsınızı ekrana yazdırır
        // if () !=-1 hata yoksa anlamında 
    {
       cout<< " islemlerin Tanimli Oldugu, 1 ile 4 arasinda sayi girin. " ;
    }
    return 0; 
}
