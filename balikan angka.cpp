#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	int c = 0;
	
	cin >> a;
	
	while (a>0){
		b = a%10;
		a = a/10;
		c = (c*10)+b;
	}cout << c;
	
	return 0;
}
