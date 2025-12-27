#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



int main() {
    double N, N0, t, t_half;
char choice;

    printf("Choose what to calculate:\n");
    printf("N  - remaining quantity N(t)\n");
    printf("0  - initial quantity N0\n");
    printf("T  - elapsed time t\n");
    printf("H  - half-life t1/2\n");
    printf("Your choice: ");
    scanf(" %c", &choice);

    if (choice == 'N' || choice == 'n') {

        printf("Enter initial quantity N0: ");
        scanf("%lf", &N0);

        printf("Enter elapsed time t [s]: ");
        scanf("%lf", &t);

        printf("Enter half-life t1/2 [s]: ");
        scanf("%lf", &t_half);

        N = N0 * pow(0.5, t / t_half);
        printf("Remaining quantity N(t) = %.6f\n", N);
    }
    else if (choice == '0') {

        printf("Enter remaining quantity N(t): ");
        scanf("%lf", &N);

        printf("Enter elapsed time t [s]: ");
        scanf("%lf", &t);

        printf("Enter half-life t1/2 [s]: ");
        scanf("%lf", &t_half);

        N0 = N / pow(0.5, t / t_half);
        printf("Initial quantity N0 = %.6f\n", N0);
    }
    else if (choice == 'T' || choice == 't') {

        printf("Enter initial quantity N0: ");
        scanf("%lf", &N0);

        printf("Enter remaining quantity N(t): ");
        scanf("%lf", &N);

        printf("Enter half-life t1/2 [s]: ");
        scanf("%lf", &t_half);

        t = t_half * (log(N / N0) / log(0.5));
        printf("Elapsed time t = %.6f s\n", t);
    }
    else if (choice == 'H' || choice == 'h') {

        printf("Enter initial quantity N0: ");
        scanf("%lf", &N0);

        printf("Enter remaining quantity N(t): ");
        scanf("%lf", &N);

        printf("Enter elapsed time t [s]: ");
        scanf("%lf", &t);

        t_half = t / (log(N / N0) / log(0.5));
        printf("Half-life t1/2 = %.6f s\n", t_half);
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}
