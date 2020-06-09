#pragma once
#include <vector>


class resistor {
public:

    float R;
    std::vector<float> V;
    int n;
    resistor() {};
    resistor(const std::vector<float> &v1) {
        n = v1.size();

        for (int i = 0; i < n; i++) {
            V.push_back(v1[i]);
        };
    }
    
    virtual void resist() {};
    virtual void print() {};
    void printresult();


};



void resistor::printresult() {
    std::cout << R; 
};