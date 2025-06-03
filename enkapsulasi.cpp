#include <iostream>
using namespace std;

class remoteLampu {
private: 
    string setsaklarNo[10];
public:
    void setsaklarNo(int i, string value) {
        saklarNo[i] = value;
    }
    string setsaklarNo(int i) {
        return saklarNo[i];
    }
};