#include <stdio.h>

char read_sensor();

int main() {
    read_sensor();
   
}

char read_sensor() {
    char i = 0;
    char tam = 0, ret = 0;
    char pin[8];
    pin[0] = 1;
    pin[1] = 0;
    pin[2] = 0;
    pin[3] = 0;
    pin[4] = 0;
    pin[5] = 1;
    pin[6] = 0;
    pin[7] = 1;
  
    for (i = 0; i < 8; i++) {
        tam = (tam | pin[i]);
        printf("%d", tam);

        if (i == 7) {
            ret = tam;
            printf("%d", ret);
            break;
        } else {
            tam = (tam << 1);
        }
    }
    ret = ~ret;
  
  
}
