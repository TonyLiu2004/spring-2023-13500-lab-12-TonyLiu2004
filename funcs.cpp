#include <iostream>
#include "funcs.h"
#include <vector>

std::vector<int> makeVector(int n){ // Task A
    std::vector<int> ret = {};
    for(int i = 0;i < n;i++){
        ret.push_back(i);
    }
    return ret;
}

std::vector<int> goodVibes(const std::vector<int> v){ // Task B
    std::vector<int> ret = {};
    for(int i =0;i < v.size();i++){
        if(v[i]>0){
            ret.push_back(v[i]);
        }
    }
    return ret;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){ // Task C
    for(int i =0;i < vegeta.size();i++){
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}

std::vector<int> sumPairWise(std::vector<int> &v1, std::vector<int> &v2){ // Task D
    int index = std::max(v1.size(),v2.size()); //the larger size() of v1 or v2
    std::vector<int> ret(index,0); //initializes a vector of size "index" with each value set at 0
    for(int i =0;i < index;i++){
        if(v1.size() > i){ //if i > vector.size(), we go over the number  of elements in the vector so don't add
            ret[i] += v1[i];
        }
        if(v2.size() > i){
            ret[i] += v2[i];
        }
    }
    return ret;
}