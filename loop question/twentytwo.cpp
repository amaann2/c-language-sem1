#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j, n;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        int k = i;
        for (j = 1; j <= n - 1; j++)
        {
            cout << " ";
        }
        for (; j <=n; j++)
        {
            cout<<k-- <<" ";
        }
        
        cout << endl;
    }


return 0;
}