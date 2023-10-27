#include<bits/stdc++.h>
using namespace std ;

int lowerBound(vector<int> arr, int x){
  int l = 0 ;
  int r = arr.size()-1 ;
  int lb = arr.size() ;
  while(l<=r){
    int mid = l+(r-l)/2 ;
    if(arr[mid]>=x){
      lb = mid ;
      r = mid-1 ;
    }
    else{
      l = mid+1 ;
    }
  }
  return lb ;
}

int upperBound(vector<int> arr, int x){
  int l = 0 ;
	int r = arr.size()-1 ;
	int ub = arr.size() ;
	while(l<=r){
		int mid = l+(r-l)/2 ;
		if(arr[mid]>x){
			ub = mid ;
			r = mid-1 ;
		}
		else{
			l = mid+1 ;
		}
	}
	return ub ;
}

void printBound(vector<int> arr, int x)
{
    int idx;
 
    // If lower_bound doesn't exists
    if (lowerBound(arr, x) == arr.size()) {
        cout<<"Lower Bound of "<<x<<" exists at "<<arr.size()<<endl ;
    }
    else {
 
        // Find lower_bound
        idx = lowerBound(arr, x);
        printf("Lower bound of %d is"
               "% d at index % d\n",
               x,
               arr[idx], idx);
    }
 
    // If upper_bound doesn't exists
    if (upperBound(arr, x) == arr.size()) {
        cout<<"Upper Bound of "<<x<<" exists at "<<arr.size()<<endl ;
    }
    else {
 
        // Find upper_bound
        idx = upperBound(arr, x);
        printf("Upper bound of %d is"
               "% d at index % d\n",
               x,
               arr[idx], idx);
    }
}

int main(){
  vector<int> arr = { 4, 6, 10, 12, 18, 20 };
  int x = 20;
  printBound(arr,x);
}
