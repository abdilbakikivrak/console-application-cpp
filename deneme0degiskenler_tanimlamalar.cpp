// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
// ConsoleApplication1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
/******************************************************************************************************************************************************/
// örnek 1 Değişken tanımlama ve ekrana yazdırma ************************************************************************************

#include <iostream>

using namespace std;

int main() //'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
{
    string isim = "baki"; // metin değişkenini tutuyor 
    int yas = 21;      // tam sayı değişkenlerini tutuyor
    char notort = 'A';  // tek bir karakter değişkenini tutuyor // ascıı tablosunda A'nın karşılık geldiği decimal sayı olan 65'i yazarsak da yine aynı A değerini görürüz 
    float sayisalnotort = 3.16; // ondalıklı sayı değişkenini tutuyor
    bool sinavagirdimi = true; // = 1; şeklinde de yazılabilir.  // bir bitlik 1 -0 doğru yada yalnış şeklinde değişkenleri tutar 
    double pi = 3.852746856238653256; /// double değişkeni tam sayıdan sonraki uzun kesirli değişkenleri tutar
    float not1 = 85; // buradaki değerler int olarak da tanımlanabilirdi ama virgüllü olarak ortalamayı görmek istediğimden float değişkeni kullandım
    float not2 = 93;
    float sinavlarortalamasi; // buradaki değerler int olarak da tanımlanabilirdi ama virgüllü olarak ortalamayı görmek istediğimden float değişkeni kullandım
    
    sinavlarortalamasi = (not1 * 40 / 100) + (not2 * 60 / 100); // not ortalaması hesaplayan aritmetik işlemi tanımladım

    std::cout << "cpp icin kollar sivandi !\n";  // tırnak içindeki metni cout komutu ile ekrana yazdırır

    cout << "Adi Soyadi;" << isim << endl;  // cout komutu ile isim değişkeninde tutulan metni yazırır

    cout << "yasi :" << yas << endl; // cout komutu ile integer olarak tanımlana tam sayıyı ekrana yazdırır

    cout << " Not Ortalamasi :"  << notort<< endl;  // cout komutu ile char değişkeninde tutulan bir baytlık karakteri ekrana yazdırır

    cout << " Sayisal Not Ortalamasi ; " << sayisalnotort << endl; // cout komutu ile float değişkeninde tutulan ondalıkllı sayıyı ekrana yazdırır
    
    cout << " Ogrenci Sinava Girdi Mi ;" << sinavagirdimi << endl; // cout komutu ile bool değişkeninde tutulan evet hayır/ 1-0 biligsini yazdırıyoruz 

    cout << "Sinav Ortalamasi ;" << sinavlarortalamasi << endl; // ortalaması hesaplanan not değişkenini yazdırır



    return 0; 
}