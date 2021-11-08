#include <iostream>
using namespace std;
int main()
{
 int tinggi,kolom,baris;
//UI
  cout<<"Masukkan nilai tinggi: ";
  cin >>tinggi;

//pembentukan segitga bolong
  for (baris = 1; baris <= tinggi; baris++)
  {
    for (kolom = 1; kolom <= baris; kolom++)
    {
      if(kolom==1||kolom==baris)cout<<"*";
           else if (baris==tinggi)
           {
               for (kolom = 1; kolom < tinggi; kolom++)
               {
                   cout<<"*";
               }
               
           }
           else
           {
               cout<<" ";
           }
    }
    cout << endl;
  }
 return 0;
}


