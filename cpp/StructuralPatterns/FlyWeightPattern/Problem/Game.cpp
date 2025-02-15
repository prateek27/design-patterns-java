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

    // Problems
    // Memory Overhead : Every bullet stores redundant data like Color, Image
    // Performance : Slow performance when many bullets are created
    
    return 0;
} 