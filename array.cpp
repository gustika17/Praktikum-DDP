#include <iostream>
using namespace std;

int main(){
	int x, lulus;
    int total, rata2;
    cin >> x;
    
    int input[x];
    total = 0;

    for (int a = 0; a < x; ++a) {
        cin >> input[a];
        total += input[a];

    }
    rata2 = total / x;
    lulus = 0;
    for (int a = 0; a < x; ++a) {

        if (input[a] >= rata2)

            lulus++;

    }
    cout << rata2 << endl;
    cout << lulus << endl;
    
    return 0;
}


