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

int sumArray(int arr[], int size){
  //base case
  if(size==1){
    return arr[0];}
  else{
      return arr[0]+ sumArray(arr+1,size-1);
    }

  
}


  


// int main() {
//   //checking if area is sorted using recursion
//   int my_array[5]={1,2,3,6,5};
//   cout<<issorted(my_array,5);
// }
int main() {
  //sum of array using recursion
  int my_array[5]={1,2,3,4,5};
  cout<<sumArray(my_array,5);
}