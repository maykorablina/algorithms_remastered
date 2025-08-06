#include <iostream>
#include <vector>

void print_vector(std::vector<int> &vec, const char* sep) {
    int n = vec.size();
    for (int i = 0; i < n; ++i){
        std::cout << vec[i] << sep;
    }
    std::cout << "\n";

}


void bubble_sort(std::vector<int> &arr) {
    print_vector(arr, " ");
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n-1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
        print_vector(arr, " ");
    }
    
}

int main() {
    std::vector<int> arr = {0, 6, 5, 4, 3, 2, 1};
    bubble_sort(arr);
    
}
