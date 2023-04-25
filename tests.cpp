#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <vector>
#include "funcs.h"

TEST_CASE("makeVector"){
    std::vector<int> a = makeVector(10);
    for(int i =0;i < a.size();i++){
        CHECK(a[i] == i);
    }
}

TEST_CASE("optimism"){
    std::vector<int> a = {-1,-2,3,4,-5,-6,7};
    std::vector<int> b = goodVibes(a);
    for(int i = 0;i < b.size();i++){
        CHECK(b[i] >= 0 );
    }
}

TEST_CASE("fusion"){
    std::vector<int> a = {1,2,3,20};
    std::vector<int> b = {4,5,6};
    gogeta(a,b);

    std::vector<int> answer = {1,2,3,20,4,5,6};
    CHECK(b.size() == 0);
    for(int i = 0;i < a.size();i++){
        CHECK(a[i] == answer[i]);
    }
}

TEST_CASE("pairwise"){
    std::vector<int> a = {1,2,3,10,11};
    std::vector<int> b = {3,2,1};
    std::vector<int> sum = sumPairWise(a,b);

    std::vector<int> answer = {4,4,4,10,11};
    for(int i = 0;i < sum.size();i++){
        CHECK(sum[i] == answer[i]);
    }
}