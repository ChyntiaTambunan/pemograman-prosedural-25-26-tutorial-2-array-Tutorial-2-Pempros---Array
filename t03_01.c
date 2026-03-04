#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    int input_num;
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    int first_num = 0;
    int second_num = 0;
    int third_num = 0;
    int fourth_num = 0;

    do {
        scanf("%d", &n);
    } while (n <= 0);

    if (n < 4) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &input_num);

        if (i == 0) {
            first_num = input_num;
        } else if (i == 1) {
            second_num = input_num;
        } else if (i == 2) {
            third_num = input_num;
        } else if (i == 3) {
            fourth_num = input_num;
        }

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
