#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // Declare a vector of vectors to represent the 2D array
    vector<vector<int>> arrays;

    // Input the variable-length arrays
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;

        vector<int> tempArray;

        for (int j = 0; j < k; j++) {
            int element;
            cin >> element;
            tempArray.push_back(element);
        }

        arrays.push_back(tempArray);
    }

    // Process queries
    for (int i = 0; i < q; i++) {
        int arrayIndex, elementIndex;
        cin >> arrayIndex >> elementIndex;

        // Print the value of the element in the specified array and index
        cout << arrays[arrayIndex][elementIndex] << endl;
    }

    return 0;
}
