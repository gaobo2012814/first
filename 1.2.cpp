#include<iostream>
//#include <windows.h>
//#include <cstdlib >
using namespace std;
 int b[12000][12000];
  int a[12000];
int main()
{
    int n = 12000;
long long head, tail , freq ;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = i + j;
        }
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    int sum[12000];
    for (int i = 0; i < n; i++)
    {
        sum[i] = 0.0;
    }
   // QueryPerformanceFrequency((LARGE_INTEGER *)&freq );

//QueryPerformanceCounter((LARGE_INTEGER *)&head);


    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            sum[i] += b[j][i] * a[j];
        }

    }

    //QueryPerformanceCounter((LARGE_INTEGER *)&tail );
  //cout << "Col: " << ( tail -head) * 1000.0 / freq
 //<< "ms" << endl;
    system("pause");
    return 0;

}
