// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
int arr[10]={22,33,44,55,66,77,88,99,100,110},min=0,max=sizeof(arr)-1,mid,key;
cout<<"Enter the Number to find: ";
cin>>key;
int begin=arr[min],end=arr[max];
while (begin<=end)
{
    mid=min+(max-min)/2;
    if(arr[mid]<key)
    min=mid+1;
    else if(arr[mid]>key)
    max=mid-1;
    else if(arr[mid]==key)
    {
    cout<<"\nFound at Index: "<<mid;
    break;
    }
    else
    {
        cout<<"\nNot Found";
    }
}
return 0;
}
