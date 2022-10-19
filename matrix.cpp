#include <iostream>
using namespace std;

int main (){
	int w,x,y,z;
	int a [100][100];
	int b [100][100];
	int c [100][100];
	
	cin >> w;
	cin >> x;
	
	for (int y=0; y<w; y++){
		for (int z=0; z<x; z++){
			cin >> a [y][z];
		}
	}
	for (int y=0; y<w; y++){
		for (int z=0; z<x; z++){
			cin >> b [y][z];
		}
	}

	if (w==0 || x==0 ){
		cout << "Input Tidak Valid"; 
	}
	
	
	for (int y=0; y<w; y++){
		for (int z=0; z<x; z++){
			c [y][z]= a[y][z] + b[y][z];
			cout << c [y][z]<< " ";
		}
		
		cout << endl;
	}
	
	return 0;
}
