#include <iostream>
using namespace std; 

struct DetailAlamat {
	string desa;
	string kota; 
};

struct Mahasiswa {
	string nim; 
	string nama; 
	DetailAlamat alamat; 
	int umur; 
};

int main() {
	Mahasiswa mhs;
	cout << "Nomor MAhasiswa : "; 
	cin >> mhs.nim; 
	cout << "Nama Mahasiswa : "; 
	cin >> mhs.nama; 

	cout << "Alamat Mahasiswa : "<<endl; 
	cout << "\t Nama Desa : "; 
	cin >> mhs.alamat.desa; 
	cout << "\t Nama Kota : "; 
	cin >> mhs.alamat.kota; 

	cout << "Umur Mahasiswa : "; 
	cin >> mhs.umur; 

	cout << endl; 

}