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
    std::vector<int> a2 = {-1,-2,3,4,-5,-6,7};
    std::vector<int> b2 = goodVibes(a2);
    for(int i =0;i < b2.size();i++){
        cout << b2[i] << "\n";
    }
    std::cout << "-------------------------" << "\n";

    std::cout << "TASK C: " << "\n";
    std::vector<int> a3 = {1,2,3,20};
    std::vector<int> b3 = {4,5,6};
    gogeta(a3,b3);
    for(int i = 0;i < a3.size();i++){
        std::cout << a3[i] << " ";
    }    
    std::cout << "--------------------------" << "\n";

    std::cout << "TASK D: " << "\n";
    std::vector<int> a4 = {1,2,3,10,11};
    std::vector<int> b4 = {3,2,1};
    std::vector<int> sum = sumPairWise(a4,b4);
    for(int i = 0;i < sum.size();i++){
        cout << sum[i] << "\n";
    }

    return 0;
}