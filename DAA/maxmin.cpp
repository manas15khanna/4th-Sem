#include <iostream>
using namespace std;
class Result {
public:
    int max;
    int min;
};
Result maxMinNaive(int arr[], int n) {
    Result result;
    result.max = arr[0];
    result.min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > result.max) {
            result.max = arr[i];
        }
        if (arr[i] < result.min) {
            result.min = arr[i];
        }
    }
    return result;
}
int main() {
    int x;
    cout<<"Enter the Size of array:";
    cin>>x;
    int arr[x];
    cout<<"Enter Array:"<<endl;
    for(int i=0; i<x; i++){
      cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    Result result = maxMinNaive(arr, n);

    cout << "Maximum element is: " << result.max << endl;
    cout << "Minimum element is: " << result.min << endl;

    return 0;
}

