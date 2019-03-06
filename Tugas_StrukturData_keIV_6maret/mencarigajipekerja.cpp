#include <iostream>
using namespace std;
struct duit
{
	int jam_kerja,gaji,gaji_awal,gaji_lembur,gaji_total;
}kerja;
int main()
{
cout<<"|################################################|\n";
cout<<"|             Tugas Struktur Data                |\n";
cout<<"|          copyright_dardiri_project             |\n";
cout<<"|        Program Mencari  Gaji Pekerja           |\n";
cout<<"|################################################|\n";
	kerja.gaji=500;
	kerja.gaji_lembur=15*kerja.gaji;
	kerja.gaji_awal=7*500;
	cout<<"masukkan jumlah jam kerja : ";
	cin>>kerja.jam_kerja;
	if (kerja.jam_kerja<=7)
		cout<<"gaji anda : "<<kerja.gaji*kerja.jam_kerja;
	else if (kerja.jam_kerja>7)
		cout<<"gaji anda : "<<((kerja.jam_kerja-7)*(kerja.gaji_lembur)+kerja.gaji_awal);

}
