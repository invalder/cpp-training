#include <iostream>
#include <vector>
#include <deque>
#include <chrono>
#include <cstdlib>

// Merge two sorted subarrays into one sorted array
void merge(std::vector<int>& arr, int left, int mid, int right) {
    if (arr[mid] <= arr[mid + 1])
        return; // No need to merge, as the two arrays are already sorted

    std::vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    // Use swap instead of copying elements
    for (int p = 0; p < k; p++)
        std::swap(arr[left + p], temp[p]);
}

// Merge Insertion Sort using std::vector
void mergeInsertionSort(std::vector<int>& arr, int left, int right) {
    const int threshold = 8; // Threshold for using insertion sort

    if (left >= right)
        return;

    if (right - left + 1 <= threshold) {
        // Use insertion sort for small subarrays
        for (int i = left + 1; i <= right; i++) {
            int key = arr[i];
            int j = i - 1;

            while (j >= left && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }
    } else {
        int mid = left + (right - left) / 2;
        mergeInsertionSort(arr, left, mid);
        mergeInsertionSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Merge Insertion Sort using std::deque
void mergeInsertionSort(std::deque<int>& arr, int left, int right) {
    const int threshold = 8; // Threshold for using insertion sort

    if (left >= right)
        return;

    if (right - left + 1 <= threshold) {
        // Use insertion sort for small subarrays
        for (int i = left + 1; i <= right; i++) {
            int key = arr[i];
            int j = i - 1;

            while (j >= left && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }
    } else {
        int mid = left + (right - left) / 2;
        mergeInsertionSort(arr, left, mid);
        mergeInsertionSort(arr, mid + 1, right);

        // Merge two sorted subarrays using temporary deque
        std::deque<int> temp;
        int i = left, j = mid + 1;

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j])
                temp.push_back(arr[i++]);
            else
                temp.push_back(arr[j++]);
        }

        while (i <= mid)
            temp.push_back(arr[i++]);

        while (j <= right)
            temp.push_back(arr[j++]);

        // Copy the sorted elements back to the original deque
        for (int k = left; k <= right; k++)
            arr[k] = temp[k - left];
    }
}

void printArray(const std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void printArray(const std::deque<int>& arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    const int size = 5; // Size of the array to be sorted
    std::vector<int> vec(size);
    std::deque<int> deq(size);

    // Fill the containers with random values
    for (int i = 0; i < size; ++i) {
        int value = rand() % size;
        vec[i] = value;
        deq[i] = value;
    }

	std::cout << "Original vector: ";
    printArray(vec);

    std::cout << "Original deque: ";
    printArray(deq);

    // Measure time for sorting using std::vector
    auto startVec = std::chrono::high_resolution_clock::now();
    mergeInsertionSort(vec, 0, size - 1);
    auto endVec = std::chrono::high_resolution_clock::now();
    auto durationVec = std::chrono::duration_cast<std::chrono::nanoseconds>(endVec - startVec).count();

	std::cout << "Sorted vector: ";
    printArray(vec);


    // Measure time for sorting using std::deque
    auto startDeq = std::chrono::high_resolution_clock::now();
    mergeInsertionSort(deq, 0, size - 1);
    auto endDeq = std::chrono::high_resolution_clock::now();
    auto durationDeq = std::chrono::duration_cast<std::chrono::nanoseconds>(endDeq - startDeq).count();

	std::cout << "Sorted deque: ";
    printArray(deq);

    // Output the execution times
    std::cout << "Merge Insertion Sort using std::vector took: " << durationVec << " nanoseconds.\n";
    std::cout << "Merge Insertion Sort using std::deque took: " << durationDeq << " nanoseconds.\n";

    return 0;
}
