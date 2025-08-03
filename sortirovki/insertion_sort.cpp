#include <iostream>
#include <vector>

void print_vector(std::vector<int> &vec, const char* sep) {
    int n = vec.size();
    for (int i = 0; i < n; ++i){
        std::cout << vec[i] << sep;
    }
    std::cout << "\n";
    
}

void insertion_sort(std::vector<int> &vec){
    int n = vec.size();
    for (int i = 1; i < n; ++i){
        int key = vec[i];
        int ptr = i - 1;
        while (ptr >= 0 && vec[ptr] > key){
            vec[ptr+1] = vec[ptr];
            --ptr;
        }
        vec[ptr+1] = key;
    }
    print_vector(vec, " ");
}

int main() {
    std::vector<int> vec = {7, 3, 4, 5, 6, 0};
    print_vector(vec, " ");
    insertion_sort(vec);

	return 0;
}
