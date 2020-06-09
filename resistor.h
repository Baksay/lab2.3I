#pragma once

class resistor {
public:

    float R;
    float *sopr = new float[n];//массив сопр
    int n;
    std::vector<float> v1;

    resistor(v1);
    ~resistor() {};
    virtual void resist();
    virtual void print();
    void printresult();

    
};

resistor::resistor(v1){
    n = v1.size();
    for (int i = 0; i < n; i++) {
        sopr[i] = v1[i];
    };
}

void resistor::printresult() {
    std::cout << R;
};
