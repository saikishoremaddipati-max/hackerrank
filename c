1)https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true
-------
  #include <stdio.h>

int main() {
    char ch;
    char s[100];
    char sentence[100];

    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");                  // consume leftover newline
    scanf("%[^\n]%*c", sentence);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sentence);

    return 0;
}

2)https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true
--------
  #include <stdio.h>

int main() {
    int a, b;
    float x, y;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &x, &y);

    printf("%d %d\n", a + b, a - b);
    printf("%.1f %.1f\n", x + y, x - y);

    return 0;
}

3)https://www.hackerrank.com/challenges/functions-in-c/problem?isFullScreen=true
---------
  #include <stdio.h>

// Function to find the maximum of four integers
int max_of_four(int a, int b, int c, int d) {
    int max = a;      // Assume a is the largest initially

    if (b > max) {
        max = b;      // Update max if b is larger
    }
    if (c > max) {
        max = c;      // Update max if c is larger
    }
    if (d > max) {
        max = d;      // Update max if d is larger
    }

    return max;       // Return the largest number
}

int main() {
    int a, b, c, d;
    
    // Read four integers
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    // Print the greatest integer
    printf("%d\n", max_of_four(a, b, c, d));

    return 0;
}

4)https://www.hackerrank.com/challenges/conditional-statements-in-c/problem?isFullScreen=true
-------
  #include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 1) printf("one\n");
    else if (n == 2) printf("two\n");
    else if (n == 3) printf("three\n");
    else if (n == 4) printf("four\n");
    else if (n == 5) printf("five\n");
    else if (n == 6) printf("six\n");
    else if (n == 7) printf("seven\n");
    else if (n == 8) printf("eight\n");
    else if (n == 9) printf("nine\n");
    else printf("Greater than 9\n");

    return 0;
}

5)https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true
--------
  #include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    char *numbers[] = {
        "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            printf("%s\n", numbers[i - 1]);
        } else if (i > 9 && i % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }

    return 0;
}

6)https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true
--------
  #include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    while (n > 0) {
        sum += n % 10;  // get last digit
        n /= 10;       // remove last digit
    }

    printf("%d", sum);
    return 0;
}

7)https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem?isFullScreen=true
--------
  #include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int max_and = 0, max_or = 0, max_xor = 0;

    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int and_val = a & b;
            int or_val = a | b;
            int xor_val = a ^ b;

            if (and_val < k && and_val > max_and)
                max_and = and_val;
            if (or_val < k && or_val > max_or)
                max_or = or_val;
            if (xor_val < k && xor_val > max_xor)
                max_xor = xor_val;
        }
    }

    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}

8)https://www.hackerrank.com/challenges/printing-pattern-2/problem?isFullScreen=true
-------
  #include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1; // size of the pattern

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // find the minimum distance to any edge
            int min = i < j ? i : j;
            if ((size - 1 - i) < min) min = size - 1 - i;
            if ((size - 1 - j) < min) min = size - 1 - j;

            printf("%d", n - min);

            if (j != size - 1) printf(" "); // space between numbers
        }
        printf("\n");
    }

    return 0;
}

9)https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=true
--------
  #include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read n integers
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("%d\n", sum);

    // Free the allocated memory
    free(arr);

    return 0;
}

10)https://www.hackerrank.com/challenges/reverse-array-c/problem?isFullScreen=true
--------
  #include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse array in place
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Print reversed array
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) printf(" ");
    }
    printf("\n");

    free(arr);
    return 0;
}
