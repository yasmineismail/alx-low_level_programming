#include <time.h>

/**
 * main - Check code 
 * Return: 0
 */
#define ARRAY_SIZE 100
#define MAX_PASS_VALUE 78
#define REQUIRED_SUM 2772

int main(void) {
    int i, sum, n;
    int pass[ARRAY_SIZE];

    sum = 0;

    srand(time(NULL));

    for (i = 0; i < ARRAY_SIZE; i++) {
        pass[i] = rand() % MAX_PASS_VALUE;
        sum += pass[i] + '0';
        putchar(pass[i] + '0');
        if (REQUIRED_SUM - sum < MAX_PASS_VALUE) {
            n = REQUIRED_SUM - sum - '0';
            sum += n;
            putchar(n + '0');
            break;
        }
    }

    return 0;
}
