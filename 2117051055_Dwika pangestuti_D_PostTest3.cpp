#include <iostream>
using namespace std;

int main(){
	float keliling, volume, r, tinggi, pass;
	
	cout<< "masukan (1) jika ingin mencari keliling alas tabung	= ";
	cout<< "masukan (2) jika ingin mencari volume kubus	= ";
	cout<< "pass";
	cin >> pass;
	
	if (pass == 1){
		cout<<"masukan jari jari	= ";
		cin >> r;
		cout<< "Hasil keliling alas tabung adalah " << 2*(22/7)*r;
	
	}else if (pass == 2);{
		cout<< "Masukan Jari jari	= ";
		cin >> r;
		cout<<"Masukan Tinggi Tabung	= ";
		cin >> tinggi;
		
		cout<< "Hasil Volume Tabung adalah " << (22/7)*r*r*tinggi <<endl;
		
		}if else  (pass == 3);{
		cout<< "syntax Error" <<endl;
	}
	 return 0;
}
