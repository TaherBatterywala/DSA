#include <iostream>
#include <vector>
#include <numeric>   // Required for std::accumulate (sum)
#include <algorithm> // Required for std::max_element

using namespace std;

// Function to count how many partitions are needed for a given maxSum
int countPartitions(const vector<int>& a, int maxSum) {
    int partitions = 1; 
    long long subarraySum = 0; // using long long is safer for intermediate sums

    for (int num : a) {
        if (subarraySum + num <= maxSum) {
            subarraySum += num;
        } else {
            partitions++;
            subarraySum = num;
        }
    }
    return partitions;
}

// Finds the minimum largest subarray sum possible for at most k partitions
int largestSubarraySumMinimized(vector<int>& a, int k) {
    // *max_element gets the largest value in the vector
    int low = *max_element(a.begin(), a.end()); 
    
    // accumulate calculates the sum of all elements (starts with 0)
    int high = accumulate(a.begin(), a.end(), 0); 

    // Binary search for the smallest maxSum
    while (low <= high) {
        int mid = low + (high - low) / 2; // Safer mid calculation to avoid overflow
        int partitions = countPartitions(a, mid);

        if (partitions > k) {
            low = mid + 1; // too many partitions -> increase maxSum
        } else {
            high = mid - 1; // valid but try smaller maxSum
        }
    }
    return low;
}

int main() {
    vector<int> a = {10, 20, 30, 40};
    int k = 2;
    
    int ans = largestSubarraySumMinimized(a, k);
    cout << "The answer is: " << ans << endl;
    
    return 0;
}