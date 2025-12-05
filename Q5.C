#include <stdio.h>

int main() {
    float x, y;

    printf("Enter the coordinates (x y): ");
    scanf("%f %f", &x, &y);

    // Check for origin
    if (x == 0 && y == 0) {
        printf("The point lies at the Origin.\n");
    }
    // Check for x-axis
    else if (x == 0) {
        printf("The point lies on the Y-axis.\n");
    }
    // Check for y-axis
    else if (y == 0) {
        printf("The point lies on the X-axis.\n");
    }
    // Quadrant checks
    else if (x > 0 && y > 0) {
        printf("The point lies in Quadrant I.\n");
    }
    else if (x < 0 && y > 0) {
        printf("The point lies in Quadrant II.\
