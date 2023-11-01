#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={2,3,5,1,9};
    int ans= INT_MAX;
//min value
    for(int i=0;i<5;i++)
    {
        if(arr[i]<ans)
        ans=arr[i];
    }
cout<<ans<<endl;

ans=INT_MIN;
 for(int i=0;i<5;i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }
cout<<ans<<endl;

return 0;
}
