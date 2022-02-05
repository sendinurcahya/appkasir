#include<iostream>
using namespace std;
int main(){
	int kode,pri,jml,tot,byr,kbl;
	char mad;
	do
	{
		cout<<"                     RUMAH MAKAN             "<<endl;
		cout<<"                  NASI BALAP PUYUNG          "<<endl;
		cout<<"              Aplikasi Kasir Rumah Makan     "<<endl;
		cout<<"====================================================="<<endl;
		cout<<""<<endl;
		cout<<"Menu Makanan		 Harga"<<endl;
		cout<<"1. AYAM GORENG           Rp. 10.000"<<endl;
		cout<<"2. NASI GORENG           Rp.  8.000"<<endl;
		cout<<"3. MIE PANGSIT           Rp. 10.000"<<endl;
		cout<<"4. NASI BALAP PUYUNG     Rp. 12.000"<<endl;
		cout<<"5. NASI CAMPUR           Rp.  8.000"<<endl;
		cout<<"6. JUS JERUK             Rp.  6.000"<<endl;
		cout<<"7. AIR GELAS             Rp.    500"<<endl;
		cout<<"MASUKKAN PILIHAN ANDA :";
			cin>>kode;
		switch (kode) {
			case 1:
					cout<<"AYAM GORENG"<<endl;
				pri=10000;
				cout<<"Masukkan Jumlah :";
				cin>>jml;
					tot=pri*jml;
				cout<<"Total harganya yaitu : Rp.  "<<tot<<endl;
				cout<<"DIBAYAR : Rp.  ";
				cin>>byr;
					kbl=byr-tot;
				cout<<"KEMBALI : Rp.  "<<kbl<<endl;
				cout<<"Masih ada Y/T :";
				cin>>mad;
				break;
			case 2:
					cout<<"NASI GORENG"<<endl;
				pri=8000;
				cout<<"Masukkan Jumlah :";
				cin>>jml;
					tot=pri*jml;
				cout<<"Total harganya yaitu Rp.  "<<tot<<endl;
				cout<<"DIBAYAR : Rp.  ";
				cin>>byr;
					kbl=byr-tot;
				cout<<"KEMBALI : Rp.  "<<kbl<<endl;
				cout<<"Masih ada Y/T :";
				cin>>mad;
				break;
			case 3:
					cout<<"MIE PANGSIT"<<endl;
				pri=10000;
				cout<<"Masukkan Jumlah :";
				cin>>jml;
					tot=pri*jml;
				cout<<"Total harganya yaitu : Rp.  "<<tot<<endl;
				cout<<"DIBAYAR : Rp.  ";
				cin>>byr;
					kbl=byr-tot;
				cout<<"KEMBALI : Rp.  "<<kbl<<endl;
				cout<<"Masih ada Y/T :";
				cin>>mad;
				break;
			case 4:
					cout<<"NASI BALAP PUYUNG"<<endl;
				pri=12000;
				cout<<"Masukkan Jumlah :";
				cin>>jml;
					tot=pri*jml;
				cout<<"Total harganya yaitu : Rp.  "<<tot<<endl;
				cout<<"DIBAYAR : Rp.  ";
				cin>>byr;
					kbl=byr-tot;
				cout<<"KEMBALI : Rp.  "<<kbl<<endl;
				cout<<"Masih ada Y/T :";
				cin>>mad;
				break;
			case 5:
					cout<<"NASI CAMPUR"<<endl;
				pri=8000;
				cout<<"Masukkan Jumlah :";
				cin>>jml;
					tot=pri*jml;
				cout<<"Total harganya yaitu : Rp.  "<<tot<<endl;
				cout<<"DIBAYAR : Rp.  ";
				cin>>byr;
					kbl=byr-tot;
				cout<<"KEMBALI : Rp.  "<<kbl<<endl;
				cout<<"Masih ada Y/T :";
				cin>>mad;
				break;
			case 6:
					cout<<"JUS JERUK"<<endl;
				pri=6000;
				cout<<"Masukkan Jumlah :";
				cin>>jml;
					tot=pri*jml;
				cout<<"Total harganya yaitu : Rp.  "<<tot<<endl;
				cout<<"DIBAYAR : Rp.  ";
				cin>>byr;
					kbl=byr-tot;
				cout<<"KEMBALI : Rp.  "<<kbl<<endl;
				cout<<"Masih ada Y/T :";
				cin>>mad;
				break;
			case 7:
					cout<<"AIR GELAS"<<endl;
				pri=500;
				cout<<"Masukkan Jumlah :";
				cin>>jml;
					tot=pri*jml;
				cout<<"Total harganya yaitu : Rp.  "<<tot<<endl;
				cout<<"DIBAYAR : Rp.  ";
				cin>>byr;
					kbl=byr-tot;
				cout<<"KEMBALI : Rp.  "<<kbl<<endl;
				cout<<"Masih ada Y/T :";
				cin>>mad;
				break;
			default:
			cout<<"Kode yang anda masukan tidak ada";
		}
	}
	while (mad/='Y');
	cout<<"Terima Kasih Atas Kunjungan Anda WARUNG NASI BALAP PUYUNG";
	return 0;
}
