class Solution {
public:
 int strStr(string haystack, string needle)
 {
 int index=INT_MAX, j=0;
 for(int i=0;i<haystack.length() && j<needle.length();i++)
 {
 if(haystack[i]==needle[j])
 {
 index=min(index,i);
 j++;

 } else {
 if(index!=INT_MAX) i=index;
 index=INT_MAX;
 j=0;
 }
 }
 if(j==needle.length()) return index;
 return -1;
 }
};
