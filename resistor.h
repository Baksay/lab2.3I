#pragma once

class resistor {
public:
    float R;
    float *sopr = new float[n];//������ ����
    int n;

    virtual void resist();
    virtual void print();
    void printresult();

};

void resistor::printresult() {
    std::cout << R;
};
