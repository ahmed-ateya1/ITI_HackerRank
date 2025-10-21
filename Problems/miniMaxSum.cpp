#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    long long minSum = 0, maxSum = 0;

    for (int i = 0; i < 4; i++) {
        minSum += arr[i];
    }

    for (int i = arr.size() - 4; i < arr.size(); i++) {
        maxSum += arr[i];
    }

    cout << minSum << " " << maxSum << endl;
}

int main()
{
    vector<int> arr = {1,3,5,7,9};
    miniMaxSum(arr);
    return 0;
}