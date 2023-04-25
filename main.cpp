#include <iostream>
#include <vector>
#include "funcs.h"

int main(){
    std::vector<int> a = makeVector(10);
    for(int i = 0;i < a.size();i++){
        std::cout << a[i] << "\n";
    }
    return 0;
}