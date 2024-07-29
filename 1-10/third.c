#include <stdio.h>

int main() {
    char letterF[50];
    int lenOfStrF = 0;

    for(int i = 0; i < 7; i++) {
        switch (i)
        {
        case 0:
            for (int l = 0; l < 6; l++) {
                letterF[lenOfStrF] = '#';
                lenOfStrF++; 
            }
            letterF[lenOfStrF] = '\n';
            lenOfStrF++;
            break;
        case 3:
            for (int l = 0; l < 5; l++) {
                letterF[lenOfStrF] = '#';
                lenOfStrF++; 
            }
            letterF[lenOfStrF] = '\n';
            lenOfStrF++;
            break;
        default:
            letterF[lenOfStrF] = '#';
            lenOfStrF++;
            letterF[lenOfStrF] = '\n';
            lenOfStrF++;
            break;
        }
    }
    letterF[lenOfStrF] = '\0';
    printf("The following should be an F: \n%s\n", letterF);

    char letterC[75];
    int lenOfStrC = 0;

    for(int k = 0; k < 9; k++) {
        if (k == 0 || k == 8) {
            for (int j = 0; j < 10; j++) {
                if (j < 4) {
                    letterC[lenOfStrC] = ' ';
                    lenOfStrC++;
                } else {
                    letterC[lenOfStrC] = '#';
                    lenOfStrC++; 
                }
            }
            letterC[lenOfStrC] = '\n';
            lenOfStrC++;
            continue;
        }
        if (k == 1 || k == 7) {
            for (int j = 0; j < 12; j++) {
                if (j == 2 || j == 3 || j == 10 || j == 11) {
                    letterC[lenOfStrC] = '#';
                    lenOfStrC++;
                } else {
                    letterC[lenOfStrC] = ' ';
                    lenOfStrC++; 
                }
            }
            letterC[lenOfStrC] = '\n';
            lenOfStrC++;
            continue;
        }
        letterC[lenOfStrC] = ' ';
        lenOfStrC++;
        letterC[lenOfStrC] = '#';
        lenOfStrC++;
        letterC[lenOfStrC] = '\n';
        lenOfStrC++;
        continue;
    }
    letterC[lenOfStrC] = '\0';
    printf("The following should be a C: \n%s", letterC);

    return 0;
}