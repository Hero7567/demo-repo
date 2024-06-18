#include<iostream>
using namespace std;
int maxSubArraySum(int a[],int size){
    int max_so_far=INT8_MIN,max_ending_here=0;
    for(int i=0;i<size;i++){
        max_ending_here=max_ending_here+a[i];
        if(max_so_far<max_ending_here)
            max_so_far=max_ending_here;
        
        if(max_ending_here<0)
            max_ending_here=0;
        
        return max_so_far;
    }
}
/*int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT8_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}*/

int main(){
    int a[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int b;
    b=INT8_MIN;
    cout<<b<<endl;
    int n = sizeof(a) / sizeof(a[0]);

    // Function Call
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;



    return 0;
}
/*int kadaneAlgorithm(int arr[], int n)
{
	int sum = 0;
	
	int maxSum = INT_MIN;
    
    // Traverse the array.
	for(int currIndex = 0; currIndex < n; currIndex++)
	{
		sum += arr[currIndex];

		if(maxSum < sum)
		{
			maxSum = sum;
		}
		
		if(sum < 0)
		{
			sum = 0;
		}
	}

	return maxSum;
}

int maxSumRectangle(vector<vector<int>>& arr, int n, int m)
{
	int maxSum = INT_MIN;
	
    // Initialize a 1-D array.
	int temp[n];
    
    // heck for all possible left and right boundaries.
	for(int left = 0; left < m; left++)
	{
		for(int i = 0; i < n; i++)
		{
			temp[i] = 0;
		}

		for(int right = left; right < m; right++)
		{
			for(int i = 0; i < n; i++)
			{
				temp[i] += arr[i][right];
			}
            
            // Function to find maximum sum of sub array of array 'temp'.
			int sum = kadaneAlgorithm(temp, n);
            
            // Update 'maxSum'.
			if(sum > maxSum)
			{
				maxSum = sum;
			}
		}
	}

	return maxSum;
}*/