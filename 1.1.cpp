#include<iostream>


using namespace std;
int b[12000][12000];
 int a[12000];
int main()
{
    int n = 12000;


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
        sum[i] = 0;
        for (int j = 0; j < n; j++)
        {
            sum[i] += b[j][i] * a[j];

        }

    }

   for(int i=0;i<n;i++)
    {
    cout<<sum[i]<<" ";
    }
    system("pause");
    return 0;

}
