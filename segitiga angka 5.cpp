#include <iostream>
using namespace std;

int main (){
	int a,b,x;
    cin>> x;
    
    cout<<endl;
    
    for(a=1; a<=x; a--){
        for(b=a; b<=x; b++){
            cout<<b;
            if(b!=x)cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

