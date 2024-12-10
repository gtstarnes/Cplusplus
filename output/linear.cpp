#include<iostream>

int linear(std::string t, std::string arr[]) {
    for(int i = 0; i <=  5; i++) {
        if (t == arr[i]){
            return 1;
        };
    };
    return -1;
}

int main() {
    std::string strings[5] = {
        "a","b","c","d","e",
    }; 
    std::cout << linear("a", strings);
}