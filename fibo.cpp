#include <iostream>
using namespace std;

int main()
{
    int n, x = 0, y = 1, berikutnya = 0;
    cin >> n;

    for (int a = 1; a <= n; ++a)
    {
        if(a == 1)
        {
            cout << " " << x <<" ";
            continue;
        }
        if(a == 2)
        {
            cout << x << " ";
            continue;
        }
        berikutnya = x + y;
        x = y;
        y = berikutnya;
        cout << berikutnya << " ";
    }
    return 0;
}
