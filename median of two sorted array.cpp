double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()<nums2.size())
            return findMedianSortedArrays(nums2,nums1);
        int t,j,k,l,n,m,i;
        n=nums1.size();
        m=nums2.size();
    if(m==0&&n%2==0)
        return 1.0*(nums1[n/2]+nums1[n/2-1])/2;
        l=0;
        k=n-1;
        while(true)
        {
           // cout<<l<<" "<<k<<endl;
            i=(l+k)/2;
            j=(m+n)/2-i;
           // cout<<i<<" "<<j<<endl;
            int ma1=i==n?INT_MAX:nums1[i];
            int mi1=i==0?INT_MIN:nums1[i-1];
            int ma2=j==m?INT_MAX:nums2[j];
            int mi2=j==0?INT_MIN:nums2[j-1];
          // cout<<mi1<<" "<<ma1<<" "<<mi2<<" "<<ma2<<endl;
            if(mi2>ma1)
                l++;
            else
            if(mi1>ma2)
                k--;
            else
            {
                if((m+n)%2)
                    return min(ma1,ma2);
                else
                    return 1.0*(max(mi1,mi2)+min(ma1,ma2))/2;
            }
            
        }
        return -1;
    }
