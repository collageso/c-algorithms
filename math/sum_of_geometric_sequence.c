#include <math.h>

double sum_of_geometric_sequence(double a, double r, int n)
{
    if (r == 1) {
        return a * n;
    }

    return a * (1 - pow(r, n)) / (1 - r);
}
