double recursive_pow(double base, unsigned int exponent)
{
    if (exponent == 0) {
        return 1.0;
    }

    double result = recursive_pow(base * base, exponent / 2);
    return (exponent % 2 == 0) ? result : result * base;
}

double my_pow(double base, int exponent)
{
    if (base == 0) {
        return 0.0;
    }

    if (base == 1) {
        return 1.0;
    }

    if (base == -1) {
        return (exponent % 2 == 0) ? 1.0 : -1.0;
    }

    unsigned int abs_exponent = (exponent >= 0) ? exponent : -(unsigned int)exponent;
    double result = recursive_pow(base, abs_exponent);

    return (exponent >= 0) ? result : 1.0 / result;
}
