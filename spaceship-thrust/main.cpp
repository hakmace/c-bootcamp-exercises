#include <iostream>

typedef enum {
    NONE = 0,
    LOW = 5,
    MEDIUM = 9,
    HIGH = 12,
    MAXIMUM = 20,
} Thrust;

int main() {

    Thrust rocketThrust = NONE;
    printf("Ready to go! Thrust is at level %d\n", rocketThrust);
    rocketThrust = MAXIMUM;
    printf("Taking off! Thrust is at level %d\n", rocketThrust);
    rocketThrust = MEDIUM;
    printf("Entering ionosphere! Thrust is at level %d\n", rocketThrust);
    rocketThrust = LOW;
    printf("Traveling to deep space! Thrust is at level %d\n", rocketThrust);
}
