#pragma once
#include <vector>

class paralell : public resistor {

public:
    void resist() override;
    void print() override;
    paralell(const std::vector<float> &v1) {
        n = v1.size();

        for (int i = 0; i < n; i++) {
            V.push_back(v1[i]);
        };
    }
};

void paralell::resist() {
    R = 0;
    float a = 1, b = 0;
    for (int i = 0; i < n; i++) {
        a = a * V[i];
        b = b + V[i];
    }
    R = a / b;
}

void paralell::print() {
    for (int i = 0; i < n; i++) {
        std::cout << V[i];
    }
}