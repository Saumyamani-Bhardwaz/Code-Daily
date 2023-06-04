#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int T;
	cin>>T;
	while(T--){
	    long long int N , M;
	    cin>>N>>M;
	    long long int ANS = 0;
	    for(long long int i = 0;i<N;i++){
	        long long int Min = INT_MAX  , Max = INT_MIN;
	        for(long long int j = 0;j<M;j++){
	            long long int t ;
	            cin>>t;
	            Min = min(t,Min);
	            Max = max(t,Max);
	        }
	        ANS = max(ANS , Max - Min);
	    }
	    cout<<ANS<<endl;
	}
	return 0;
}
