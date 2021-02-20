#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
int main(){
    double temp=0;
    std::vector<double> results;

    for(int i=2;i<=100;i++){
        for(int j=2;j<=100;j++){
                temp=pow(i,j);
                results.emplace_back(temp);        
        }
    }
    std::sort(results.begin(),results.end());
    results.erase(std::unique(results.begin(),results.end()),results.end());

    std::cout << results.size() <<"\n";
}
