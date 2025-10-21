#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;


void plusMinus(vector<int> arr) {
    int posCount = 0, negCount = 0, zerosCount = 0;
    int sz = arr.size();
    
    for (int i = 0; i < sz; i++) {
        if (arr[i] > 0) posCount++;
        else if (arr[i] < 0) negCount++;
        else zerosCount++;
    }
    
    cout << fixed << setprecision(6) << (double)posCount / sz << endl;
    cout << fixed << setprecision(6) << (double)negCount / sz << endl;
    cout << fixed << setprecision(6) << (double)zerosCount / sz << endl;
}
int main()
{
    vector<int> arr = {1,1,0,-1,-2};
    plusMinus(arr);
}