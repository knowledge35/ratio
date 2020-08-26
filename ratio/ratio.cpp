// ratio.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int esayi = 0, asayi = 0, ssayi = 0;
    cout << "lütfen kac sayi gireceginizi yaziniz" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int g;//gecici olarak her dondugunde okunan sayi
        cin >> g;
        if (g > 0)
        {
            asayi++;
        }
        else if (g < 0)
        {
            esayi++;
        }
        else
            ssayi++;

    }

    cout << "Pozitifler:" << (float)asayi / n << endl;
    cout << "Negatifler:" << (float)esayi / n << endl;
    cout << "sifilar: " << (float)ssayi / n << endl;
}

