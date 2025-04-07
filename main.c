#include <stdio.h>
#include <stdint.h>

uint8_t modify_bits(uint8_t val, uint8_t mask, uint8_t data) {
    uint8_t new_val = 0;
    new_val = (val & ~mask) | (data & mask); 
    return new_val;
}

int get_bit(uint8_t val, int bit) {
    int result = 0;
    result = (val >> bit - 1) & 1;
    return result;
}

void print_binary(uint8_t val) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (val >> i) & 1);
    }
}

int main() {
    uint8_t val = 255;
    uint8_t mask = 15;
    uint8_t data = 170;

    print_binary(val);
    printf("\n");
    print_binary(mask);
    printf("\n");
    print_binary(data);
    printf("\n");
    print_binary(modify_bits(val, mask, data));
    printf("\n");
    return 0;
}
