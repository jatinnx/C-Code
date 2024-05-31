#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
void sq(vector<int> &v) {
    for(int i = 0; i<v.size(); i++) {
        v[i] = v[i]*v[i];
    }
}
int main() {
    vector<int> v = {4, 2, 5, 3, 1};

    // Sorting the vector in descending order
    sort(v.begin(), v.end());

    sq(v);

    // Output the sorted vector
    for(int ele : v) {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}
