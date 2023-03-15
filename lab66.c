#include <stdio.h>
#include <math.h>

struct Point {
    double x;
    double y;
};

int main() {
    int n;
    printf("Number of Points: ");
    scanf("%d", &n);
    struct Point points[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("P%d.X: ", i + 1);
        scanf("%lf", &points[i].x);
        printf("P%d.Y: ", i + 1);
        scanf("%lf", &points[i].y);
    }
    int j = n - 1;
    printf("Length:\n");
    for (i = 0; i < j; i++) {
        double dX = fabs(points[i + 1].x - points[i].x);
        double dY = fabs(points[i + 1].y - points[i].y);
        double length = sqrt((dX * dX) + (dY * dY));
        printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is %.2lf\n", i + 1, points[i].x, points[i].y, i + 2, points[i + 1].x, points[i + 1].y, length);
    }   
}