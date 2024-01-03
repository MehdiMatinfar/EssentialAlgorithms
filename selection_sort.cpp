#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int a[] = {9,1,-8,-2,3,7};
    int n = end(a) - begin(a);
    
    for (int i = 0; i < n; i++) {
        int temp = INT_MIN;
        int min_val = a[i];
        int min_place = INT_MIN;
        
        for (int j = i; j < n; j++) {
            if (a[j] < min_val) {
                min_val = a[j];
                min_place = j;
            }
        }
        
        temp = a[i];
        a[i] = min_val;
        
        if (min_place != INT_MIN) {
            a[min_place] = temp;
        }
    }
    
    for (int i = 0; i < n; i++) {
        std::cout << a[i];
        if (i != n - 1) {
            std::cout << ",";
        }
    }
    
    return 0;
}

