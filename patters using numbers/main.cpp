#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    for(i=1;i<=10;i++)
    {
        k=i;
        for(j=1;j<=i;j++,k++)
        {
            cout<<k;
        }
        cout<<"\n";
    }
    return 0;
}
