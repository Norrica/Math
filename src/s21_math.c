#include "s21_math.h"

int s21_abs(int x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}
long double s21_acos(double x) { return 0; }
long double s21_asin(double x) { return 0; }
long double s21_atan(double x) { return 0; }
long double s21_ceil(double x) { return (long double)((int)x + 1); }
long double s21_cos(double x) { return 0; }
long double s21_exp(double x) { return 0; }
long double s21_fabs(double x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}
long double s21_floor(double x) { return (long double)((int)x); }
long double s21_fmod(double x, double y) {
    int isneg = 0;
    if (x < 0 && y < 0) {
        isneg = 1;
    }
    x = s21_fabs(x);
    y = s21_fabs(y);
    // printf("x :>> %f\n", x);
    // printf("y :>> %f\n", y);
    while (x > y) {
        x -= y;
    }

    if (isneg) x = -x;
    return x;
}
long double s21_log(double x) { return 0; }
long double s21_pow(double base, double exp) { return 0; }
long double s21_sin(double x) { return 0; }
long double s21_sqrt(double x) { return 0; }
long double s21_tan(double x) { return 0; }
