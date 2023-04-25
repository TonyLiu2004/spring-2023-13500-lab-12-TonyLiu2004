#include <iostream>
#include "funcs.h"
#include <vector>

std::vector<int> makeVector(int n){
    std::vector<int> ret = {};
    for(int i = 0;i < n;i++){
        ret.push_back(i);
    }
    return ret;
}