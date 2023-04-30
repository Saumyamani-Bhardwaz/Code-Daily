// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int num,count=0,arr[10]={45,32,65,76,32,87,21,9,43,77};
    cout<<"Number to be searched is: ";
    cin>>num;
    for(int i=0;i<sizeof(arr);i++)
    {
        if(arr[i]==num)
        {
            cout << "\nThe Number is at Index: "<<i;
            count++;
        }
    }
    if(count>0)
    {
    cout << "\nNumber of Occurences: "<<count;
    }
    else
    {
    cout << "\nNumber not found";
    }
    return 0;
}
