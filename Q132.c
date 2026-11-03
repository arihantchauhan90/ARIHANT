#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight light;
    int choice;

    printf("Enter traffic light value (0-RED, 1-YELLOW, 2-GREEN): ");
    scanf("%d", &choice);

    light = choice;

    switch (light) {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;

        default:
            printf("Invalid traffic light value");
    }

    return 0;
}