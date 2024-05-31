#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

// Function to calculate the prefix sum of the vector
void PrefixSum(vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        v[i] = v[i] + sum;  // Add the running sum to the current element
        sum = v[i];         // Update the running sum
    }
}

int main() {
    // Prompt the user to enter the size of the array
    cout << "Enter the array size: ";
    int n;
    cin >> n;

    // Declare a vector of size n
    vector<int> v(n);
    
    // Prompt the user to enter the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
    
    // Calculate the prefix sum of the array
    PrefixSum(v);
   
    // Sort the array in ascending order
    sort(v.begin(), v.end());

    // Output the sorted array
    cout << "Sorted array after prefix sum: ";
    for (int ele : v) {
        cout << ele << " ";
    }
    cout << endl;
    
    return 0;
}
