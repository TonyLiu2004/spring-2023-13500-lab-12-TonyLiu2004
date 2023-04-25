#include <iostream>
#include <vector>
#include "funcs.h"

int main(){
    std::cout << "TASK A:" << "\n";
    std::vector<int> a = makeVector(10);
    for(int i = 0;i < a.size();i++){
        std::cout << a[i] << "\n";
    }
    std::cout << "-------------------------" << "\n";

    std::cout << "TASK B: " << "\n";
    std::vector<int> a = {-1,-2,3,4,-5,-6,7};
    std::vector<int> b = goodVibes(a);
    for(int i =0;i < b.size();i++){
        cout << b[i] << "\n";
    }
    std::cout << "-------------------------" << "\n";

    std::cout << "TASK C: " << "\n";
    std::vector<int> a = {1,2,3,20};
    std::vector<int> b = {4,5,6};
    gogeta(a,b);
    for(int i = 0;i < a.size();i++){
        std::cout << a[i] << " ";
    }    
    std::cout << "--------------------------" << "\n";

    std::cout << "TASK D: " << "\n";
    std::vector<int> a = {1,2,3,10,11};
    std::vector<int> b = {3,2,1};
    std::vector<int> sum = sumPairWise(a,b);
    for(int i = 0;i < sum.size();i++){
        cout << sum[i] << "\n";
    }
    return 0;
}