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

int main() {
    remoteLampu LampuRumah;

    LampuRumah.setSaklarNo(0, "Lampu Teras Ruamh");
    LampuRumah.setSaklarNo(1, "Lampu Kamar Tamu");
    LampuRumah.setSaklarNo(2, "Lampu Kamar Tidur");
    LampuRumah.setSaklarNo(3, "Lampu Dapur");

    cout << LampuRumah.setSaklarNo(0) << endl;
    cout << LampuRumah.setSaklarNo(1) << endl;
    cout << LampuRumah.setSaklarNo(2) << endl;
    cout << LampuRumah.setSaklarNo(3) << endl;

    return 0;
}