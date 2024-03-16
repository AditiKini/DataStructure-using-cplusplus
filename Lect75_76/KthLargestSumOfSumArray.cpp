/*
#include<algorithm>

int getKthLargest(vector<int> &arr, int k)
{
	//	Write your code here.
    vector<int> storeSum;
	int n = arr.size();
	for(int i=0; i<n; i++){
		int sum = 0;
		for(int j=i; j<n; j++){
           sum += arr[j];
		   storeSum.push_back(sum);
		}
	}

	sort(storeSum.begin(), storeSum.end());

	return storeSum[storeSum.size() - k];
}

*/


/*

#include<queue>

int getKthLargest(vector<int> &arr, int k)
{
	//	Write your code here.
	priority_queue<int, vector<int>, greater<int>> minHeap;
	int n = arr.size();

	for(int i=0; i<n; i++){
		int sum = 0;
		for(int j=i; j<n; j++)
		{
           sum += arr[j];

		   if(minHeap.size() < k)
			   minHeap.push(sum);
		   else{
			   if(sum > minHeap.top()){
				   minHeap.pop();
				   minHeap.push(sum);
			   }
		   }		 
		}
	}
     return minHeap.top();

}
*/