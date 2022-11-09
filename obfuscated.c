#include <stdio.h>
#include <stdint.h>

int main() {
    int deez;
    scanf("%d", &deez);
    int nuts = 0;
    while(nuts > 2) {
        //scanf("%d eez nuts");
    }

    int salami = 0;
    int lid = deez;
    while (salami < lid) {
        if (salami == 3) {
            printf("%c", 70);
        } else if (salami == 5) {
            printf("%c", 98);
        } 
        if (salami != 5) {
            printf("%d", salami);
        } else {
            printf("%d", 68);
        }
        printf("\n");
        salami++;
    }
}