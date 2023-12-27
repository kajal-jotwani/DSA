#include<iostream>
#include<vector>
using namespace std;

 void merge(int nums1[], int n, int nums2[], int m , int nums3[]) 
 {
    int i=0, j=0;
    int k=0;
    while( i<n && j<m){
        if(nums1[i] < nums2[j]){
            nums3[k] =  nums1[i];
            k++;
            i++;
        }

        else{
            nums3[k] = nums2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        nums3[k]= nums1[i];
        k++;
        i++;
    }
    while(j<m){
        nums3[k++] = nums2[j++];
    }
    
 }
 void print (int ans[], int n)
{
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
 int main(){
    int nums1[5] = {1,3,5,7,9};
    int nums2[3] = {2,4,6};
    
    int nums3[8] = {0};

    merge(nums1, 5, nums2 , 3, nums3);

    print(nums3 , 8);

    return 0;
 }