#include<bits/stdc++.h>
#include<iostream>
using namespace std;

 int countdigit(int n)
{
	 
	int count=0;

	while(n!=0){
		// rem=n%10;
		n=n/10;
		count++;
}
return count;
}

int main()
{
    int n;
    cout<<" enter a number ";
    cin >> n;

     int result = countdigit(n);
     cout<<result;
}

    
