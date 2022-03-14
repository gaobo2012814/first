#include<iostream>
//#include <windows.h>
//#include <cstdlib >
using namespace std;
int a[16777216];

int main()
{
    //long long head, tail, freq ;
    int n = 16777216;

    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    int sum = 0;
   // QueryPerformanceFrequency((LARGE_INTEGER *)&freq );

    //QueryPerformanceCounter((LARGE_INTEGER *)&head);

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;

    //QueryPerformanceCounter((LARGE_INTEGER *)&tail );
    //cout << "Col: " << ( tail -head) * 1000.0 / freq
       //  << "ms" << endl;
    system("pause");
    return 0;

}
