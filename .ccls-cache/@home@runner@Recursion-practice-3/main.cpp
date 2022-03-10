#include <iostream>
using namespace std;
// bool issorted(int arr[], int size){
//   //base case
//   if(size==1||size==0){
//     return true;
//   }
//   if(arr[0]>arr[1]){
//     return false;
//   }
//   else{
//     return(issorted(arr+1,size-1));
//   }}

// int sumArray(int arr[], int size){
//   //base case
//   if(size==1){
//     return arr[0];}
//   else{
//       return arr[0]+ sumArray(arr+1,size-1);
//     }

  
// }

// bool LinearSearch(int arr[], int size, int key){
// //base case
//     if(size== 0){
//       return false;
//     }
//     if(arr[0]==key){
//       return true;
//     }
//     else{
//       return LinearSearch(arr+1, size-1, key);
//     }
  
    
  

  
// }
bool BinarySearch(int arr[], int start, int end, int size, int key){
  
  int mid= (start-  (start-end)/2);
  if(start>end){
    return false;
  }
  if(arr[mid]==key){
    return true;
  }
  if(arr[mid]>=key){
    return BinarySearch(arr, start , mid-1 , size, key);
  }
  else{
    return BinarySearch(arr, mid+1 , end , size, key);
  }
  

  
}

  


// int main() {
//   //checking if area is sorted using recursion
//   int my_array[5]={1,2,3,6,5};
//   cout<<issorted(my_array,5);
// }
// int main() {
//   //sum of array using recursion
//   int my_array[5]={1,2,3,4,5};
//   cout<<sumArray(my_array,5);
// }

// int main() {
//   //sum of array using recursion
//   int my_array[5]={1,2,3,4,5};
//   cout<<LinearSearch(my_array,5, 8);
// }
int main() {
  //sum of array using recursion
  int my_array[5]={1,2,3,4,5};
   
  cout<<BinarySearch(my_array,0, 4, 5, 3);
}