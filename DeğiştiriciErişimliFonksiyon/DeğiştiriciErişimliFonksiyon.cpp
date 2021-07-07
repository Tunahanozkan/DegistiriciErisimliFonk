// DeğiştiriciErişimliFonksiyon.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
#define SINIF_MEVCUDU 4
class Ogrenci
{
    int no, vize, final;
public:
    int noAl() { return no; }
    int vizeAl() { return vize; }
    int finalAl() { return final; }
    void noAta(int _no) { no = _no; }
    void vizeAta(int _vize) { vize = _vize; }
    void finalAta(int _final) { final = _final; }
};

int main()
{
    Ogrenci Sinif[SINIF_MEVCUDU];
    int no, vize, final;
    double ortalama;
    for (int i = 0; i < SINIF_MEVCUDU; i++)
    {
        cout << endl << "Ogrenci numarasi, Vize ve Final Giriniz:";
        cin >> no >> vize >> final;
        Ogrenci ogrenci;
        ogrenci.noAta(no);
        ogrenci.vizeAta(vize);
        ogrenci.finalAta(final);
        Sinif[i] = ogrenci;
    }
    for (int i = 0; i < SINIF_MEVCUDU; i++)
    {
        ortalama = 0.4 * Sinif[i].vizeAl() + 0.6 * Sinif[i].finalAl();
        cout << Sinif[i].noAl()<< "numarali ogrencinin ortalamasi:" << ortalama << endl;
    }
    return 0;
}


