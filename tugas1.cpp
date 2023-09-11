#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa 
{
    string nama;
    int nrp;
    float umur;
    string ttl;
    char gender;

};

void pendaftaran()
{
    int jumlah_mahasiswa = 10;
    Mahasiswa m[jumlah_mahasiswa];
    for(int i=1; i<=jumlah_mahasiswa; i++)
    {
    cout<<"Mahasiswa ke "<<i<<endl;
        
        cout <<"Nama        :"; cin>>m[i].nama;
        cout <<"nrp         :"; cin>>m[i].nrp;
        cout <<"umur        :"; cin>>m[i].umur;
        cout <<"ttl         :"; cin>>m[i].ttl;
        cout <<"Gender L/P  :"; cin>>m[i].gender;
    }
};

int main()
{
    cout <<"Registrasi"<<endl;
    pendaftaran();
    cout <<"Data selesai dibuat "<<endl;
    

};