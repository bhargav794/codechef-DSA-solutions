#include <stdio.h>

int main(void) {
    
    int n, i, j, cars, max = 1, x;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        scanf("%d", &cars);
        int speed[cars];

        for (int i = 0; i < cars; i++) {
            / code /

            scanf("%d", &speed[i]);
        }

        x = speed[0];

        for (j = 0; j < cars - 1; j++) {

            if(speed[j + 1] < x){
                x = speed[j + 1];
                max++;
            }

            else
                continue;
        }
        printf("%d", max);
        printf("\n");
        max = 1;
    }

    return 0;
}