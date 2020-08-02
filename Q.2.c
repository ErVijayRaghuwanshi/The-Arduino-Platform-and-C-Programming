#include <stdio.h>
int main (){
    int x = 0, z = 2;
    while (x < 3) {
        printf("%i ", x);
        x = x + z;
    }
}