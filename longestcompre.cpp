string longestCommonPrefix(vector<string>& strs) {
        int t,i,j,k,l,n=strs.size();
        string str="";
        if(n==0)
            return str;
        for(i=0;i<strs[0].size();i++)
        {
            char ch=strs[0][i];
            for(j=1;j<n;j++)
                if(strs[j][i]!=ch)
                    break;
            if(j<n)
                break;
            str+=ch;
        }
        return str;
    }
