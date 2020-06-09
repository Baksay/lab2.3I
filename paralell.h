#pragma once

class paralell : public resistor {
public:
    void resist() override;
    void print() override;
};

void paralell::resist() {
    R = 0;
    float a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        a = a * sopr[i];
        b = b + sopr[i];
    }
    R = a / b;
}

void paralell::print() {
    for (int i = 0; i < n; i++) {
        std::cout << sopr[i];
    }
}