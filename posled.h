#pragma once


class posled : public resistor {
public:
    posled(const std::vector<float> &v1) {
          n = v1.size();
          for (int i = 0; i < n; i++) {
              V.push_back(v1[i]);
          };
    }

    void resist() override;
    void print() override;
    
    
};

void posled::resist() {
    for (int i = 0; i < n; i++) {
        R = R + V[i];
    }
}

void posled::print() {
    for (int i = 0; i < n; i++) {
        std::cout << V[i];
    }
}