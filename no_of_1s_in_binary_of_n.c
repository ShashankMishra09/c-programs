#include <stdio.h>

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    int maxConsecutiveOnes = 0;
    int currentConsecutiveOnes = 0;

    while (n > 0) {
        if (n % 2 == 1) {
            currentConsecutiveOnes++;
            if (currentConsecutiveOnes > maxConsecutiveOnes) {
                maxConsecutiveOnes = currentConsecutiveOnes;
            }
        } else {
            currentConsecutiveOnes = 0;
        }
        n /= 2;
    }

    printf("Maximum consecutive ones in binary representation: %d\n", maxConsecutiveOnes);

    return 0;
}
