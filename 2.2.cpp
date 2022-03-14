#include<iostream>
//#include <windows.h>
//#include <cstdlib >
using namespace std;
void  recursion(int n,int a[])
{
    if (n == 1)
        return;
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            a[i] += a[n - i -1];

        }
        n = n / 2;
        recursion(n, a);
    }
}
int a[16777216];

int main()
{
    int n = 16777216;
    //long long head, tail, freq ;

    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }


    int sum = 0;
   // QueryPerformanceFrequency((LARGE_INTEGER *)&freq );

    //QueryPerformanceCounter((LARGE_INTEGER *)&head);


    recursion(n,a);
    cout << a[0] << endl;
    //QueryPerformanceCounter((LARGE_INTEGER *)&tail );
    //cout << "Col: " << ( tail -head) * 1000.0 / freq
        // << "ms" << endl;

    system("pause");
    return 0;

}
