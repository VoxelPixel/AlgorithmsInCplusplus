#include <iostream>

using namespace std;

int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    char search_for = 'e';
    for (int i = 0; i < sizeof(arr); ++i) {
        if (arr[i] == search_for){
            cout << "Found at index: " << i;
            break;
        }
    }
    return 0;
}