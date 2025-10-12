/*Experiment 3.4: WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are
collinear or not.*/

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, x3, y3;
    float ab, bc, ac;
    
    printf("Name - ARNAV SINGH\nSAP ID - 590027588\nCourse - B.Sc Computer Science.");

    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter coordinates of third point (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    ab = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    bc = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    ac = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    if ((ab + bc == ac) || (ab + ac == bc) || (bc + ac == ab)) {
        printf("The points are collinear.\n");
    } else {
        printf("The points are not collinear.\n");
    }

    return 0;
}
