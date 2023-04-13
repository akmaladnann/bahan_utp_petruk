#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

//int penjumlahan(int a, int b)
//{
//	return a+b;
//}

//void absen(string nama, long int npm)
//{
//	cout<<"Nama : "<<nama<<"\n";
//	cout<<"NPM : "<<npm;
//}

//class data
//{
//	private: //biasanya untuk naro variabelnya
//		string nama;
//		
//	public:	//urutan nya biasanya dari fungsi tanpa pengembalian ke fungsi yang ada pemngembalian
//		void setNama(string nama)
//		{
//			this -> nama = nama; //nama yang pertama untuk string nama di void, nama yang kedua untuk nama di "private"
//		}
//		string getNama()
//		{
//			return nama;
//		}
//};

//class luaspersegi
//{
//	private:
//		float sisi;
//		
//	public:
//		void setSisi(float sisi)
//		{
//			this -> sisi = sisi;
//		}
//		float getSisi()
//		{
//			return sisi;
//		}
//		float getluasnya()
//		{
//			return sisi*4;
//		}
//};

int main()
{
//	data siswa; //panggil classnya, lalu kasih objek
//	string nama;
//	cout<<"Masukkan namamu : ";
//	cin>>nama;
//	siswa.setNama(nama); //untuk input pake set
//	cout<<"Nama mu adalah "<<siswa.getNama(); //untuk output pake get

//	luaspersegi p;
//	float sisi;
//	cout<<"Masukkan sisi : ";
//	cin>>sisi;
//	p.setSisi(sisi);
//	cout<<"Luas persegi dengan panjang sisi  "<<sisi<<" adalah "<<p.getluasnya();
	
//	int a,b,hasil;
//	cin>>a>>b;
//	hasil = penjumlahan(a,b);
//	cout<<hasil;

//	string nama;
//	long int npm;
//	cout<<"Nama : ";
//	cin>>nama;
//	cout<<"NPM : ";
//	cin>>npm;
//	cout<<"Nama saya adalah "<<nama<<" dengan NPM "<<npm;

//	int arr[5] = {1,2,3,4,5};
//	for (int i=0; i<5; i++)
//	{
//		cout<<"Nilai ke "<<i<<" adalah "<<arr[i]<<"\n";
//	}

//	int i,j;
//	int arr[3][4];
//	for (i=0; i<3; i++)
//	{
//		for (j=0; j<4; j++)
//		{
//			arr[i][j] = i*j;
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}

//	int a;
//	cin>>a;
//	int* ptr = &a;
//	cout<<*ptr<<" "<<ptr;
//	//*ptr = nilai nya, ptr aja = lokasi nya

//	int arr[5] = {1,2,3,4,5};
//	int* ptr = arr;
//	
//	for (int i=0; i<5; i++)
//	{
//		cout<<"Nilai array ke "<<i<<" adalah "<<*ptr<<endl;
//		ptr++;
//	}

//	ofstream buat_file("buat.txt");
//	buat_file<<"halo";
//	buat_file.close();
//
//	string teks;
//	ifstream baca_file("buat.txt");
//	while(getline(baca_file,teks))
//	{
//		cout<<teks;	
//	}

//	string teks[4];
//	
//	for (int i=0; i<4; i++)
//	{
//		cin>>teks[i];
//	}
//	ofstream buatt_file("tes.txt");
//	
//	for (int i=0; i<4; i++)
//	{
//		buatt_file<<teks[i]<<"\n";
//	}
//	
//	string t;
//	ifstream bacaa_file("tes.txt");
//	while (getline(bacaa_file,t))
//	{
//		cout<<t<<"\n";
//	}
}
