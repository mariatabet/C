#include <stdio.h>

int mainl() {
    double x = 408855776;
    double y = 708158977;
    double nb1, nb2, nb3, resultat;

    // qst 1:   nb1 = 9 * x * x * x * x;
    // qst 1:   nb2 = y * y * y * y;
    // qst 1:   nb3 = 2 * y * y;
    // qst 1:   resultat = nb1 - nb2 + nb3;

    nb1 = (3*x*x)+(y*y)-1;
    nb2 = (3*x*x)-(y*y)+1;
    nb3 = 1;
    resultat = nb1 * nb2 + nb3;

    printf("nb1=%f\n", nb1);
    printf("nb2=%f\n", nb2);
    printf("nb3=%f\n", nb3);
    printf("resultat=%f\n", resultat);
    return 0;
}