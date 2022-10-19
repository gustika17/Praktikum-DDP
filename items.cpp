#include <iostream>
using namespace std;

int main (){
	int a,b,c,d;
	
	cin >> a;
	
	for (int i=0; i!=a; i++){
		cin >> b;
		d=0;
		
		while (b--){
			cin >> c;
			d+=c;
		}
		cout << "case #" << i+1 << ": " << d << endl;
	}
	return 0;
}
