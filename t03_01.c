#include <stdio.h>
#include <limits.h> 

int main() {
    int n;
    int input_num;
    int min_val = INT_MAX;
    int max_val = INT_MIN;

    do {
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 0; i < n; i++) {
        scanf("%d", &input_num);

        if (input_num < min_val) {
            min_val = input_num;
        }
        if (input_num > max_val) {
            max_val = input_num;
        }
    }

    printf("%d\n", min_val);
    printf("%d\n", max_val);

    return 0;
}
