#include "../base.h"
using namespace std;

void SKS::output(){
  cout <<"Total :" <<total<<endl;
  cout <<"Diskon :" <<diskon<<endl;
  cout <<"Total Bayar : " <<bayar<<endl;
}

int main ()
{
  SKS sks;
  sks.output();
}