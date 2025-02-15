#include "ProxyImage.cpp"

int main() {
    Image* img1 = new ProxyImage("dog.png");
    Image* img2 = new ProxyImage("cat.png");

    // The image is loaded lazily when needed,
    // saving time and resources if the image is never displayed.
    img1->display();
    img1->display();

    delete img1;
    delete img2;

    return 0;
} 