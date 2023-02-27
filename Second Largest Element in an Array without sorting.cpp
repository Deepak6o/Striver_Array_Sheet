#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int rowans=-1,countans=0;
    for(int i=0;i<n;i++)
    {
        int count =0;
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1)
            {
                count++;
            }
        }
        if(count>countans)
        {
            countans = count;
            rowans = i;
        }
    }
    cout<<rowans<<endl;

}
