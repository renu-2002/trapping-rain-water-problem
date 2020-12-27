//time : O(n)
//space : O(1)
#include <iostream>
using namespace std;
 
int maximuwatertrtrap(int arr[], int n)
{
    // this will store the output 
    int total = 0;
 
    //for storing maximum in left and maximum in right
    int leftmaximum = 0, rightmaximum = 0;
 
    //starting and ending index of array
    int start = 0, end = n - 1;
 
    while (start <= end) {
        if (arr[start] < arr[end]) {
            if (arr[start] > leftmaximum)
                 // for updating left maximum
                leftmaximum = arr[start];
            else
               
                //water on that particular index is maximum in left minus array at that particular index
                total += leftmaximum - arr[start];
            start++;
        }
        else {
            if (arr[end] > rightmaximum)
                // for updating right maximum
                rightmaximum = arr[end];
            else
            //water on that particular index is maximum in right minus array at that particular index
                total += rightmaximum - arr[end];
            end--;
        }
    }
 
    return total;
}
int main() 
{ 
    int n;
    cout<<"ENTER THE SIZE OF ARRAY."<<endl;
    
    cin>>n;
    cout<<"ENTER THE ELEMENTS OF ARRAY"<<endl;
     int array[n];
     for(int i=0;i<n;i++){
     	cin>>array[i];
	 }
    cout << maximuwatertrtrap(array, n); 
     
    return 0; 
}
