#include <iostream>
using namespace std;



string balancedSum(int a[],int n,int left,int right)
{
    int mid = 0;
    mid = left + (right-left)/2;

    int sum1 = 0;
    for(int i=0;i<mid;i++)
    {
        sum1 = sum1 + a[i];
    }
    int sum2=0;
    for(int j=mid+1;j<n;j++)
    {
        sum2 = sum2 + a[j];
    }

    if(sum1==sum2)
    {
        string y = "YES";
        return y;
    }
    else
    {
        string n = "NO";
        return n;
    }

}





int main()
{
    int t;
    int n;
    cin>>t;

    for(int i=0;i<t;++i)
    {
        cin>>n;
        int arr[n];
        for(int j=0;j<n;++j)
        {
            cin>>arr[j];  
        }
        string result;
        result =  balancedSum(arr,n,0,n-1);
        cout<<result;

    }

   



    return 0;
}