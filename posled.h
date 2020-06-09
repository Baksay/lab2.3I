#pragma once

class posled : public resistor {
    void resist() override;
    void print() override;
};

void posled::resist() {
    for (int i = 0; i < n; i++) {
        R = R + sopr[i];
    }
}

void posled::print() {
    for (int i = 0; i < n; i++) {
        std::cout << sopr[i];
    }
}