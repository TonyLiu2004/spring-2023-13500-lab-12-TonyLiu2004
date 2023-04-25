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