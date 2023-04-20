#include <stdio.h>

int main() {
    int i, TD2, TDFG, TD, FG, Safety;
    while (1) {
        printf("\nEnter 0 or 1 to STOP: ");
        printf("\nEnter the NFL score: ");
        scanf("%d", & i);
        if (i > 1) {
            printf("\nPossible combinations of scoring plays: \n");
            int count = 0;
            for (TD2 = 0; TD2 <= i; TD2++) {
                for (TDFG = 0; TDFG <= i; TDFG++) {
                    for (TD = 0; TD <= i; TD++) {
                        for (FG = 0; FG <= i; FG++) {
                            for (Safety = 0; Safety <= i; Safety++) {
                                if ((8 * TD2) + (7 * TDFG) + (6 * TD) + (3 * FG) + (2 * Safety) == i) {
                                    printf("\n%d TD + 2pt | %d TD + FG | %d TD | %d 3pt FG | %d Safety", TD2, TDFG, TD, FG, Safety);
                                    count++;
                                }
                            }
                        }
                    }
                }
            }
            printf("\n\nTotal combinations: %d\n", count);
        }
        if (i < 1) {
            break;
        }
    }
}

