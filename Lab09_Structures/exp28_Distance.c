#include <stdio.h>

struct Distance {
    int feet;
    int inch;
};

int main() {
    struct Distance d1, d2, sum;
    printf("Enter first distance (feet and inches): ");
    scanf("%d %d", &d1.feet, &d1.inch);
    printf("Enter second distance (feet and inches): ");
    scanf("%d %d", &d2.feet, &d2.inch);
    sum.inch = d1.inch + d2.inch;
    sum.feet = d1.feet + d2.feet;
    if (sum.inch >= 12) {
        sum.feet += sum.inch / 12;
        sum.inch = sum.inch % 12;
    }
    printf("Sum of distances = %d feet %d inches\n", sum.feet, sum.inch);
    return 0;
}
