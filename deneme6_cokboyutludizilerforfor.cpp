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



}