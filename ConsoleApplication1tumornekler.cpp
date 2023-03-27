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
/*
#include <iostream>

using namespace std;

int main() //'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
{
    string isim = "abdilbaki"; // metin değişkenini tutuyor 
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
*/
// Örnek 2  artimetik işlemler **************************************************************************************************
/*
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
*/
//Örnek 3 Kullanıcıdan Değer alma ve alınan değerleri hesaplama *****************************************************************
/*
#include <iostream>

using namespace std;

int main() {
    float alan, en, boy;
   /*
    cout << " cismin enini girin ; ";
    cin >> en ; 
    cout << " cismin boyunu girin ;";
    cin >> boy;
    alan = en * boy;
    cout <<"alani ;"<<  alan << endl; */ 
    /*

     float not1, not2;
     int ort;    
     cout << " 1. notu giriniz :";
     cin >> not1;
     cout << " 2. notu giriniz :";
     cin >> not2;
    ort = not1 + not2;
    ort = (not1 * 40 / 100) + (not2 * 60 / 100);

   cout << "ortalama;" << ort;

   return 0;
}
*/
// Örnek 4 Kütüphane Kullanımı ***********************************************************************************************
/*
 #include <iostream>
 #include <cmath> // matematik kütüphanesi matematiksel işlemleri içerir

using namespace std;
int main()
{
    cout <<   "**************************" << endl;
    cout <<   "*                        *" << endl;
    cout <<   "*                        *" << endl;
    cout <<   "*    Cpp calismalari     *" << endl;
    cout <<   "*                        *" << endl;
    cout <<   "*                        *" << endl;
    cout <<   "**************************" << endl << endl << endl;

    int y;
    int x;
    int a;
    int h;

    y = pow(3,3); // pow üssü anlamına gelmekte, yani y = iki üzeri sekiz işlemi yapılır
    x = floor(28.8); // ondalıklı sayıyı en yakın alttaki tam sayıya çeker  2< 2.5< 3 sayısımı 2 ye çeker
    a = ceil(75.4); // ondalıklı sayıyı en yakın üsütündeki tam sayıya çeker 2< 2.5 < 3 sayısını 3 'e çeker
    h = round(85.53); // ondalıklı sayıyı en yakın sayıya yuvarlama işlemini yapar

    cout << y << endl; // pow işlemi yapılan y değişkeninin değerini yazdırır
    cout << x << endl; // floor işlemi yapılan x değişkenin yakın olduğu  küçük tam sayıyı yazdırır
    cout << a << endl; // ceil işlemi yapılan a değişkenin yakın olduğu  büyük tam sayıyı yazdırır
    cout << h << endl;// round işlemi yapılan h değişkenin en yakın olduğu tam sayıyı yazdırır

    return 0;
}
 */
// Örnek 5 if-else kullanımı / if - else if kullanımı ***************************************************************************
/*
#include<iostream>

using namespace std;
int main()
{
    cout << " ****************************" << endl;
    cout << " ****************************" << endl;
    cout << " **                        **" << endl;
    cout << " **                        **" << endl;
    cout << " **    Cpp calismalari     **" << endl;
    cout << " **                        **" << endl;
    cout << " **                        **" << endl;
    cout << " ****************************" << endl;
    cout << " ****************************" << endl << endl << endl;
/*
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

        cout << " Carpım :" << sonuc << endl;

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

*/
/*
#include<iostream>

using namespace std;
int main()
{ 
    int sayi1, sayi2;
    cout << "1. sayiyi giriniz" << endl;
    cin >> sayi1;
    cout << "2.sayiyi giriniz "<<endl;
    cin >> sayi2;

    if (sayi1 > 0 && sayi2 > 0) // '&&' kuralı ve anlamında gelmektedir && yerine 'and' de kullanılabilir
    {
        cout << "Her iki sayi da pozitiftir. "<< endl ;
    }
    else if (sayi1 > 0 && sayi2 < 0)
    {
        cout << "1. sayi pozitif , ikinci sayi negatiftir. " << endl;
    }
    else if (sayi1 < 0 && sayi2 > 0)
    {
        cout << "1. sayi negatif , ikinci sayi pozitiftir. " << endl;
    }
    else if (sayi1 < 0 && sayi2 < 0)
    {
        cout << " her iki  sayi da negatiftir. " << endl;
    }
    if (sayi1 < 0 || sayi2 < 0) // || yada anlamına gelmektedir "or" da kıullanılabilir 
    {
        cout << "sayilardan birisi negatif "<< endl; // bu satırı if ile kullanırsak üssteki else if durumu ile birlite bu durumu da sırayla ekrana yazdırır.

    }

}

*/

// kullanıcıdan üç tane tam sayi alınız
// bu tam sayiyinin en büyüğünü bulup ekrana yazdırınız
// bunları yaparken en az sayida kod yazarak yapmaya çalışınız
/*
#include<iostream>

using namespace std;
int main() {
    int sayi1, sayi2, sayi3, sonuc;
    cout << "Lutfen Uc farkli sayi giriniz." <<endl;
    cin >> sayi1 >> sayi2 >> sayi3;
    cout << endl;

    if (sayi1 >= sayi2 && sayi1 >= sayi3)
    {
       // cout << "en buyuk sayi :" << sayi1 << endl;
        sonuc = sayi1;
    }
    else if (sayi2 >= sayi1 && sayi2 >= sayi3)
    {
        //cout << "en buyuk sayi :" << sayi2 << endl;
        sonuc = sayi2;

    }
    else // if (sayi3 >= sayi1 && sayi3 >= sayi2) // diğer durumlar tanımlandığı için tek durum için else kullanılır 
    {
       // cout << "en buyuk sayi : " << sayi3 << endl;
        sonuc = sayi3;

    }
    cout << "En buyuk sayi :" << sonuc << endl;
}
*/ /*
// while döngüsü / while loop içerisindeki kod blogunu sürekli döngü olarak çalıştırmasıdır****************************************************************************
// 1'den kullanıcının girdiği sayıya kadar 7 nin katlarınnı yadıran kodu yazınız
#include<iostream>

using namespace std;
int main()
{
    int index = 1;
    int girilensayi;
    cout << "lütfen max değerini giriniz :";
    cin >> girilensayi;

    //parantez içindeki koşul durumu sağlandığı sürece parantez içindeki kod blogu döngü şeklinde çalışır
    while (index <=girilensayi)//index girilensaydan küçükse while döngüsü içindeki kod blogunu çalıştırır ve doögü bitince loop yapar ve while döngüsünü yeniden kontrol eder 
    {
        if (index % 7 == 0)
        {
            cout << index <<".";
           
        }
        index = index++;
    }
    cout << endl;
    return 0;

} */
/*
#include<iostream>
#include<cmath>

using namespace std;
int main() 
{
    int index = 1;  //başlangıç değerini tanımladık
    int girilensayi; // maksimum sayacağı sayi girdisini tanımladık
    cout << "lutfen max degeri giriniz :"; // ekrana girilen değer için yazdırdık 
    cin >> girilensayi; // kullanıcıdan max girilen sayiyi aldık 

    while (index <= girilensayi) // while döngüsü kullanarak bize gerekli olan girilen sayiya kadar olan küçük sayilar koşulunu tanımladık
    {
        if (index % 7 == 0) // girilen sayıya kadar olan sayıların sadece 7 ye tam bölünenleri if yapısı ile ayıkladık 
        {
            cout << index << endl; // girilen sayısan küçükeşit ve 7 ye tam bölünen sayilari ekrana yazdırdık 
        }
        index++; //her bir döngüde indexi bir arttırarak 1'den girilen sayiya kadar olan sayiları while döngüsünden geçirmiş olduk 
    }
    return 0;

 } 
 */
// do while döngüsü   
/*do
{
    / code /
} while (/ condition /);
*/
/*
#include<iostream>

using namespace std;
int main()
{
    string sifre= "123456";// string içinde bir tanımlama yapılırken tanımlaması yapılan örnekteki gibi "123456" tırnak içinde tanımı yapılır
    string girilensifre; //string cinsinden girilen sifrenin 

    do {  //her zaman while döngüsü başlangıcında çalışan kod 
        cout << "Lutfen sifreyi girin :"; // döngü başladığında while döngüsü içerisindeki durumu kontrol etmeden önce döndüde çalıştırılan kodları içerir
        cin >> girilensifre;
    } while (sifre != girilensifre); // do while döngüsünde while durumundan önce döngü başında alından parametreleri istenen koşulu sağlaması kontrol edilir koşul sağlanmaz ise döngü do'dan tekrar başlar 
           //!= eşit değise yani durum sağlanmıyorsa anlamına gelmektedir.
        cout << "Welcome to Darkweb.. "; // while koşulu sağlanırsa kod devam eder ve ekrana yazdırılır
}
*/
// for loop döngüsü 
/*
{
for (size_t i = 0; i < count; i++)
{
    / code /
}

} 
*/
/*
#include<iostream>

using namespace std;
int main()
{
    for (int i = 1; i <= 40; i++)// açtığımız for döngüsü içinde i değişkenini tanımlarız ve i değişkeninin alabileceği değer aralğını belirleriz ve değişkenin for döngüsü içinde sürekli bir artmasını da tanımları<
    { // böylece tanımladıüımız i değişkeni birden 40'a kadar birer artarak sayacaktır
        if (i % 2 == 0) // for döngüsünün yaptığı sayma işleminde ise bir if koşulu açarak bu sayılan sayılardan sadece '%' modulus 2 ye kalansız bölünen değerleri ayıklarız
        {
            cout << i << endl; // ve for döngüsünde artarak 40 'a kadar olan ikiye kalansız bölünen sayıları ekrana yazdırır.

        }
       /* Bu kod, for döngüsü kullanarak 1'den 20'ye kadar olan sayıları i değişkenine atar
            ve her bir sayı için if koşuluyla i'nin 2'ye tam bölünüp bölünmediğini kontrol eder.
            Eğer sayı 2'ye tam bölünüyorsa, cout fonksiyonuyla sayı konsola yazdırılır.
       *"/
    }
    int a = 1;// benzer problemin while döngüsü ile çözülmesi
    while (a <= 40)
    {
        if ( a%2 == 0)
        {
            cout << a << endl;
        }
     
        a++;
    }
}       */
//Kulanıcının konsoldan girdiği sayının faktöriyelini hesaplayan bir cpp programı yazın************************************************************
/*
#include<iostream>
using namespace std;
int main()
{
    int sayi; //faktöriyel hesaplanacak sayiyi tanimladik
    int sonuc =1; // fatörtiyel hesaplaması için değeri 1'den başlayan bir sonuc değişkeni tanımladık 
    cout << "Faktöriyel Hesaplanacak sayiyi giriniz:"; // sayi girdisi için ekrana yazdırdık
    cin >> sayi; // kullanıcıdan sayi girdisini aldık 
    for (int i = 1; i <= sayi; i= i++)// for döngüsü içerisinde tanımladığımız i değiikeni kullanıcının girdiği sayi değişkenine kadar hesaplayacağı için küçük eşit ile sınırlandırdık 
    { // daha sonra i değişkenini birer artırdık yani i değişkeni 1 den sayi değişkeninin değerine kadar bir artırarak saydırdık
        sonuc=sonuc * i ; // burada ise faktöriyel sonucumuz sonuc değişkeninde bir önceki adımdaki sonuc ile bir artırılmış i değeri çarpılarak sayi değişkenine kadar hesaplanır 
    }
    //tersten hesaplama da ise 
    for (int i = sayi; i >0 ; i= i--)// girilen sayi değerinden birer azalan döngüyü oluşturduk
    {
        sonuc = sonuc * i;//her adımda bir azalan i değeri ile çarpılan sonuc değeri i>0 eşitliğine kadar çarpılmaya devam eder
    }
    cout << sonuc; // sayi değişkenine kadar faktöriyel hesaplandıktan sonra döngü biter ve son hesaplanan sonuc değeri ekrana yazdırılır
}  
*/
/*
//Cpp Break Continue kullanımı ********************************************************************************************************
// Break döngüyü sonlandırır (döngüyü sonlandırır)
// Continue = continue'nin altında kalan kısım altlanır ve tekrar döngünün başına dönülür
#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i <=20; i++)
    {
        if (i==12)
        {
            break; //continue ; break ile for döngüsü if koşulu sağlanınca sonlanır countinue ile if koşulu sağlanırsa continue komutu for döngüsünün başından devam eder sonraki adımı atlamış olur
        }
        
        cout << i<<endl;
    }
}
*/
//iç içe for döngüsü kullanımı
//kullanıcının konsoldan girdiği sayiya göre ekrana aşağıdaki şekilde çıktı veren programı yazınız
//  lutfen bie sayi girinzi :5
//1
//2 2
//3 3 3 
//4 4 4 4 
//5 5 5 5 5 
/*
#include<iostream>
using namespace std;
int main()
{
    int sayi;
    cout << "bir sayi giriniz: ";
    cin >> sayi;
    for (int a = 1; a <=sayi; a++)
    {
        for (int i = 1; i <=a ; i++)
        {
            cout <<" "<< a << "";
        }
        cout << endl;
    }


}
*/
//Switch Case Kullanımı*************************************************************
/**
#include<iostream>
using namespace std;
int main() {
    int sayi;
    cout << "bir sayi girin:";
    cin >> sayi;
    switch (sayi) //tanımlanan switch yapısı içerisindeki değeri if else durumunun benzeri olarak sorgulamaya yarar
    {
    case 1: // case 1 yani switch içindeki sayi değişkeni sayi==1 mi durumunu kontrol eder sağlanırsa alt satırdaki kod parçasını çalışıtır
            cout << "seciminiz 1."; //eğer case1 yani sayi== 1 olursa bu satırı çalıştırır ekrana seçim 1 diye yazdırır
            break; // switch case yapısı tamamlandığınınd abreak komutu ile döngü kapatılır 
    case 2:
             cout << "seciminiz 2.";
             break;
    case 3:
             cout << "seciminiz 3.";
            break;
    case 4:
           cout << "seciminiz 4.";
            break;
    case 5:
            cout << "seciminiz 5.";
            break;
    default:
        cout << "1-5 arasinda sayi giriniz.!";
        break;
    }
} */
//Arrays -Diziler array kullanımı
//********* Tek boyutlu Diziler ************* ******************************
/*
#include<iostream>
using namespace std;
int main()
{
   float arr[5];//arrayin hangi veri tipinde tutulacağını belirleyerek memory'de 5 tane veri tutacak yer ayırdık 
    arr[0] = 20.1; // ilk index 0'ıncı değerimizi 20 olarak tanımladık 
    arr[1] = 33.2; //ikinci index 1'inci değerimizi 33 olarak tanımladık 
    arr[2] = 45.4;//üçüncü index 2'inci değerimizi 45 olarak tanımladık 
    arr[3] = 06.5;//dördüncü index 3'üncü değerimizi 06 olarak tanımladık 
    arr[4] = 35.7;//beşinci index 4'üncü değerimizi 35 olarak tanımladık 

    int dizi[] = { 52, 63, 45 };
    for (int i = 0; i < 3; i++) //yukarıdaki dizi tanımında üç değer 0,1,2 olarak sıralandığından 3'ten küçük şeklinde saydırırz
    {
        cout << dizi[i] << endl;
    }
   // cout << arr[3]; // tuttuğuz array dizindeki arr[3] birimindeki tutulan değeri ekrana yazdırıyoruz
    cout << "Array'in ilk değerini(idex0) giriniz:"; //arrayin ilk değerini değiştirmek için istiyyoruz
    cin >> arr[0] ; //yeni arr[0] array değerini kullanıcıdan alıyoruz 
    for (int i = 0;  i < 5;  i++)// 0'dan 4'e kadar olan arraylerin birer array artırarak dizideki tutulan değerleri sırayla yazdırmış oluyoruz
    {
        cout << arr[i] << endl;// tutulan array yapısındaki verileri sırasıyla for döngüsü ile birer artırarak ekrana yazıyoruz
    }

}
*/
// Array -Dizi kullanımı
// ********Çok Boyutlu diziler ****************************************************
/*
#include<iostream>
using namespace std;
int main()
{
    int dizi[2][3] = { {21, 15, 45}, //dizi[2][3] diyerek iki satır 3 sütundan oluşan bir matris dizi yapısı tanımladım
                    {84, 63 ,74 } };
   // cout << dizi[1][2];//birinci satır ikinci sütundaki değeri ekrana yazdırdık
    //şimdi sütun şeklinde değerleri yazdıracak olursak
    for (int i = 0; i < 2; i++) //satırları gezmek için tanımladığımız i değeri 0 ve 1. satırda sırayla bir artarak değişir
    {
        for (int j = 0; j < 3; j++)// sütunları gezmek için tanımladığımız j degeri 0,1,2 sütunlarda sırayla birer artarak döndürür
        {
            cout << dizi[i][j] << "  "; // tanımlanan matris dizisinde ilk önce for döngüsünün birinci satır değerine sahip olan i değeri ile il satırın sütunlarını sayan j degeri sırayla ilk satırdaki degerleri ekrana yazdırır
            //sonra loop ikinci satır için devam eder 

        }
        cout << endl; // ilk döngü bittikten sonra içerideki döngünün bitiminde bir satır atlaması için iç döngü bitimine endl koyarız.
    }
}*/
/*
#include<iostream>

using namespace std;
int main()
{
    int dizi[2][3] = { {25,45,36},{45, 56 ,06} };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << dizi[i][j] << " " ;
        }
        cout << endl;
    }



}*/
// Fonksiyonların kullanımı ****************************************
/*
#include<iostream>
using namespace std;

int alanhesapla(int x, int y) {
    int alan = x * y;
    return alan;
}

void ekranayaziyaz() {
    cout << "sen aklina koydugun her seyi basarirsinn.. "<< endl;
}

void yashesapla(int dogumyili) {
    int yas;
    yas = 2023 - dogumyili;
    cout << "yası: " << yas<<endl;
}

int main() {
    int sonuc = 0;
    sonuc = alanhesapla(4, 5);
    cout << "alann: " << sonuc << endl;
    ekranayaziyaz();
    yashesapla(2001);
}
*/
/*
// Static nedir- Const kullanımı 
#include<iostream>
using namespace std;
void fonksiyon1() { // void işlem yapan bir fonksiyon tanımlarız
   static int sayac = 0; //static yani program life time olarak çalışacak bir int sayac değeri tanımlarız bu static değer program boyunca son degerini saklayacak anlamına geliyor
    sayac++; //sayac değişkeninin değerini bir artırıyoruz ve static olarak tanımlanan sayac degeri artık her adımda sayac degerini bir artıracak 
    cout << sayac << endl; //sayacı ekrana yazdırıyoruz

}
void fonksiyon2() { //aynı sayac değerini farklı bir fonsiyonda da tanımlarsak bu degerlerin bellekte farklı yerlerde tutulduğu için karılmadığını görebiliriz
   static int sayac = 0;
    sayac++;
    cout << sayac << endl;

}
const int x = 5;// programın devamında x değerini değiştrilemez olarak 5 değerinde tutar
int main() {
    fonksiyon1();
    fonksiyon1();
    fonksiyon1();
    cout << endl;
    fonksiyon2();
    cout << endl;
    fonksiyon1();

}
*/
/*
// Pointerlar-pointers/memory 
#include<iostream>
using namespace std;
 int ucaginyonuhesapla(int x_) {
    // karmaşık yön hesaplama kodları 
    x_ = 24;
    return x_ ;
}
 void ucaginyonunuhesapla2(int *p) {
    // yogun hesaplamalar kodları *p (pointer ) kullanarak direkt değişkenin kendi üzerinde yapıyor
     *p = 06; 
 }
 


int main() {
    int x = 7;
    int *ptr;
    ptr = &x; // &: Adress of variable / yani & değişkenin adresini tanımlar 
    cout << *ptr << endl; // burada  *ptr pointer tuttuğu adresteki içerini çağırıp ekrana yazar
    cout << ptr << endl; // burada ise direkt olarak pointer ptr tuttuğu adresi ekrana yazar 
    cout << &x << endl; // &x demek x değişkenin adresi demektir ve x'in adresini yazdırır 

     // x= ucaginyonuhesapla(x); // x değerini tanımladığımız yön hesaplama fonsiyonunda işleme koyduk ve yeni çıkan değeri yeni x değeri olarak tanımladık 
     //cout << "yeni x degeri : " << *ptr << endl; // *ptr ile tutulan adresteki yeni x değerini ekrana yazdırırz

    ucaginyonunuhesapla2(ptr); // kulandığımıx ve pointer ile adresini tuttuğumuz x'i ucagınyönünü hesapla fonsiyonunda işleme koyup fonsiyonda oluşan yeni değeri x'in adresine tanımlarız 
    cout << x << endl; // x'in fonsiyonda işlenmiş  yeni degerini yazdırırz
     
    // burada amaç hesaplamayı bir kopya üzerinde değil doğrudan tutulan deger üzerinden yaparak anlık olarak yeni degeri adrese işlemek


}
*/
// Pointerler ile Arrayler arasındaki ilişki 

#include<iostream>
using namespce std;
int main() {
    int arr[] = {45, 06, 35};

    cout<< arr[0] ;
    int* p;// pointer oluşturduk
    int* p = arr; // oluşturduğumuz pointeri arr dizisine tanımladık

   cout << p << endl; // pointerin tuttuğu adresi yazdırır
    cout << arr << endl; // arr dizisinin bulunduğu adresi yazdırır

    cout << *p << endl; // pointerin tuttuğu adrese gidip ilk sıradaki içerigi yazdırır
    cout << *(p++) << endl; // pointerin tuttuğu adresin içindeki ikinci degeri yazdırır
    cout << p[1] << endl; // yine aynı tanımlanan içeriği yazdırır - dizilerdeki gibi sıradakini yazar



    return 0;
}