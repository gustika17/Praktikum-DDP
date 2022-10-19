#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    x--;
    cout << "\n";

    for(int y = 1, y <= x; y++){
    	for (int z = x; z > y-1; z--){
    		cout << "";
		}
		for (int z = 1; z <= y; z++){
			cout << "*";
		}
		for (int z = 2; z <= y; z++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
   
}
