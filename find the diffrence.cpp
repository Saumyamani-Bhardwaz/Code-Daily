class Solution {
public:
    char findTheDifference(string s, string t) {
     for(int i=0;i<s.size();i++)
		t[i+1]+=t[i]-s[i]; 

    cout<<"Saumyamani Bhardwaz_20BCS1682"<<endl;
      return t[t.size()-1]; 
    }
};
