#include "../base.h"
using namespace std;

int SKS::rekursif_matkul(int n)
{
  if (n == 0)
  {
    cout<<"Jumlah harga SKS : "<<total;
    return total;
  }
  else {
    cout<<"Masukkan Jumlah Mata Kuliah : "; cin>>matkul;
    cout<<"Masukkan Jumlah SKS : "; cin>>jumlah;
    total=+jumlah;
    return rekursif_matkul(n-1);
  }
}

void SKS::proses()
{
  total = hargasks * jumlah;
  diskon = total*0.25;
  bayar = total - diskon;
}

int main ()
{
  SKS sks;
  sks.proses();
}