#include "Bullet.cpp"

int main() {
    // 5 Red Bullet Objects
    for(int i = 0; i < 5; i++) {
        Bullet bullet("Red", i*10, i*12, 5);
    }

    // 5 Green Bullet Objects
    for(int i = 0; i < 5; i++) {
        Bullet bullet("Red", i*10, i*12, 5);
    }

    return 0;
} 