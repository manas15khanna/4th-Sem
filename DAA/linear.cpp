#include <iostream>
using namespace std;

int main()
{
  int n,target,i;
  cout<<"Enter Size of Array:";
  cin>>n;
  int arr[n];
  cout<<"Enter Array:"<<endl;
  for (i=0; i<n; i++) {
    cin>>arr[i]; 
  }
  cout<<"Enter Value to search"<<endl;
  cin>>target;
  int found=0;
  for (i=0; i<sizeof(arr)/sizeof(int); i++) {
    if (target==arr[i]) {
      cout<<"Target found at location: "<<i<<endl;
      found=1;
    }
  }
  if(!found)
  {
    cout<<"Element Not Found"<<endl;
  }
}
