	int search(string pat, string txt) {
	    sort(pat.begin(),pat.end());
	    int i=0,count=0;
	    int k=pat.size(),siz=txt.size();
	   // j=k;
	    for(int j=k;j<=siz;j++)
	    {
	        string substr=txt.substr(i,j-i);
	        sort(substr.begin(),substr.end());
	        if(substr==pat) count++;
	        i++;
	    }
	    return count;
	}