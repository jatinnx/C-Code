#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;


void sortOZ(vector<int> &v) {
    int zCount = 0;
    for(int var : v){
        if(var == 0){
            zCount++;
        }
    }
    for(int i = 0; i < v.size();i++) {
        if(i<zCount){
            v[i] = 0;
        }
        else {
            v[i] =1;
        }
    }
}

int main() {
    // Initialize the vector with the given values
    vector<int> v = {1, 1, 0, 1, 0, 0, 1, 0, 1};

    sortOZ(v);

    // Print the vector
    for (int ele : v) {
        cout << ele << " ";
    }
    cout << endl; // To ensure the output ends with a newline

    return 0;
}
