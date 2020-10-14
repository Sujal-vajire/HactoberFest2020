/*
Given an array A of size N, find all combination of four elements in the array whose sum is equal to a given value K. For example, if the given array is {10, 2, 3, 4, 5, 9, 7, 8} and K = 23, one of the quadruple is “3 5 7 8” (3 + 5 + 7 + 8 = 23).

The output should contain only unique quadrples  For example, if input array is {1, 1, 1, 1, 1, 1} and K = 4, then output should be only one quadrple {1, 1, 1, 1}.

Note: Print -1 if no such quadruple is found. 
 

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains two lines. The first line of input contains two integers N and K. Then in the next line are N space separated values of the array.

Output:
For each test case in a new line print all the quadruples present in the array separated by space which sums up to value of K. Each quadruple is unique which are separated by a delimeter "$" and are in increasing order.
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findfour(int arr[],int n,int k)
{   vector<vector<int>> ans;
    if(n==0)
        return ans;
    
    sort(arr,arr+n);
    int i,j;
    
    for(i=0;i<n-3;i++)
    {   if(i>0 && arr[i]==arr[i-1])
            continue;
        for(j=i+1;j<n-2;j++)
        {   if(j>(i+1) && arr[j]==arr[j-1])
                continue;
            
            int l= j+1;
            int r = n-1;
            while(l<r)
            {
                int sum = arr[i]+arr[j]+arr[l]+arr[r];
                if(sum==k)
                {   vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[l]);
                    temp.push_back(arr[r]);
                    ans.push_back(temp);
                    
                    l++;
                    while(l<r && arr[l]==arr[l-1])
                        l++;
                }
                else if(sum<k)
                    l++;
                else
                    r--;
 
            }
        }
        
    }
    return ans;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{   int n,k;
	    cin>>n>>k;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	       
	    vector<vector<int>> ans = findfour(arr,n,k);    
	    if(ans.size()>0)
	    {
	        for(int i=0;i<ans.size();i++)
	        {
	            for(int j=0;j<ans[i].size();j++)
	                cout<<ans[i][j]<<" ";
	            cout<<"$";
	        }
	        cout<<endl;
	    }
	    else
	        cout<<-1<<endl;
	    
	}
	return 0;
}