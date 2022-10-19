#include <iostream>

using namespace std;
int main (){
	
	int tahun;
	
	cout << "\t Menentukan Tahun Kabisat \n\n";
	
	cout << " Masukkan Tahun : ";
	cin >> tahun;
	
	if (tahun % 4 == 0 && tahun % 100 != 0 || tahun % 400 == 0){
		cout << "\n Tahun Kabisat";
		
	}
	
	else{
		
		cout << "\n Bukan Tahun Kabisat";
	}
}

