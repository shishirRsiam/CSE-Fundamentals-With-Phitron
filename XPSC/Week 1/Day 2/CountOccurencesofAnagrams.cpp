class Solution{
public:
	int search(string pat, string txt) 
	{
	    unordered_map<char, int>mp;
	    for(char c:pat) mp[c]++;
	    
	    int i = 0, j = 0, cnt = 0;
	    int n = txt.size(), k = pat.size();
	    while(j<n)
	    {
	       // cout<<txt[j];
	        mp[txt[j]]--;
	        if(j-i+1==k)
	        {
	           // cout<<j-i+1<<" "<<txt.substr(i, j)<<endl;
	            bool flag = true;
	            for(char c:pat)
	            {
	                if(mp[c] != 0)
	                {
	                    flag = false;
	                    break;
	                }
	            }
	            if(flag) cnt++;
	            mp[txt[i]]++;
	            i++, j++;
	           // mp[txt[j]]++;
	        }
	        else j++;
	    }
	    return cnt;
	}
};




// https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1