class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, int sum)
	{
	    sort(arr,arr+n);
	    long long count=0;
	    for(int j=n-1;j>=2;j--)
	    {
	        int i=0;
	        int k=j-1;
	        while(i<k)
	        {
	            if(arr[i]+arr[j]+arr[k]<sum)
	            {
	                count+=k-i;
	                i++;//https://media.geeksforgeeks.org/img-practice/play-1596780125.svg
	                
	            }
	            else
	            {
	                k--;
	            }
	        }
	    }
	    return count;
	}
		 

};
