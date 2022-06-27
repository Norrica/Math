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
long double s21_cos(double x) {
    /*
      алгоритм вычисления косинуса через ряд тейлора
     */
    int sign = 1;
    x = s21_fmod(x, S21_PI * 2);
    /* if (s21_fabs(x - S21_1_PI) < 1e-17) { */
    /*     x -= S21_1_PI; */
    /*     sign = -1; */
    /* } */
    double x_2 = x * x;
    long double last_term = -1 * (x_2 / 2);
    long double result = 1 + last_term;
    for (int i = 2; i  <= NUM_OF_TERMS; i++) {
        last_term = last_term * ((x_2 * (-1)) / ((i * 2 - 1) * (i * 2)));
        result += last_term;
    }
    return sign * result;
}
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
    return ((x) - (int)((x) / (y)) * (y));
}
long double s21_log(double x) { return 0; }
long double s21_pow(double base, double exp) { return 0; }
long double s21_sin(double x) { return 0; }
long double s21_sqrt(double x) { return 0; }
long double s21_tan(double x) { return 0; }
