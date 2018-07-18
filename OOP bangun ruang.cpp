#include <iostream>
#define pi 3.14
using namespace std;

class Bangunruang

{
public :
      int luas, volume, s, la, jst, r; // la=luas alas,jst=jumlah sisi tegak,r=jari jari
      void kubus ()
      {
            cout<<"---Luas dan Volume Kubus---"<<endl<<endl;
            cout<<"Masukkan Sisi Kubus	= ";cin>>s;
            luas = 6 * s * s;
            volume = s * s * s;
            cout<<"Luas Kubus		= "<<luas<<endl;
            cout<<"Volume Kubus    	= "<<volume<<endl;
            cout<<endl;
      }

      void limas ()
      {
            cout<<" Luas dan Volume Limas "<<endl;
            cout<<" --------------------- "<<endl;
            cout<<"Input Luas Alas		= ";cin>>la;
            cout<<"Input Jumlah Sisi Tegak	= ";cin>>jst;
            luas = la * jst;
            volume = 0.33 * jst;
            cout<<"Luas Limas		= "<<luas<<endl;
            cout<<"Volume Limas		= "<<volume<<endl;
            cout<<endl;
      }

};
int main()
{
      int pilihan;
      atas :
      Bangunruang x;
      cout<<"------ Menu Pilihan ------"<<endl;
      cout<<" 1. Luas dan Volume Kubus "<<endl;
      cout<<" 2. Luas dan Volume Limas "<<endl;
      cout<<" 0. Exit Program "<<endl;
      cout<<endl;
      cout<<"*Input Nomor Menu Pilihan = ";cin>>pilihan;
      cout<<endl;
           
      switch (pilihan)
      {
      case 1 : x.kubus ();
            goto atas;
            break;
      case 2 : x.limas ();
            goto atas;
            break;
      case 0 : exit:
            cout<<" Anda Kembali ke Halaman Program "<<endl;
            break;
      default: cout <<"Warning!, Anda Salah Input Pilihan "<<endl;
            goto atas;
     
      }
      system ("pause");
      return 0;
}

