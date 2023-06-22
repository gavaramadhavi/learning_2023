#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};
double calculateVolume(struct Box* box) {
    return box->length * box->width * box->height;
}

double calculateSurfaceArea(struct Box* box) {
    return 2 * (box->length * box->width + box->width * box->height + box->height * box->length);
}

int main() {
    struct Box myBox;
    myBox.length = 5.0;
    myBox.width = 3.0;
    myBox.height = 4.0;

    struct Box* boxPtr = &myBox;

    double volume = (*boxPtr).length * (*boxPtr).width * (*boxPtr).height;
    double surfaceArea = 2 * ((*boxPtr).length * (*boxPtr).width + (*boxPtr).width * (*boxPtr).height + (*boxPtr).height * (*boxPtr).length);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    double volumePtr = boxPtr->length * boxPtr->width * boxPtr->height;
    double surfaceAreaPtr = 2 * (boxPtr->length * boxPtr->width + boxPtr->width * boxPtr->height + boxPtr->height * boxPtr->length);

    printf("Volume using pointer: %.2f\n", volumePtr);
    printf("Surface Area using pointer: %.2f\n", surfaceAreaPtr);

    return 0;
}

