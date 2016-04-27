  #include <stdio.h>
  int main() {
        int data, res = 0, i = 1;
        int temp, mod, zeros = 0, ones = 0;

         /* get the input from the user */
        printf("Enter your input:");
        scanf("%d", &data);

         /* convert decimal to binary format */
        while (data > 0) {
                mod = data % 2;
                res = res + (i * mod);
                data = data / 2;
                i = i * 10;
        }

         /* print the resultant binary value */
        printf("Binary Value: %d\n", res);

         temp = res;

         /* calculate number of 0's and 1's in binary output */
        while (res > 0) {
                mod = res % 10;
                if (!mod) {
                        zeros++;
                } else {
                        ones++;
                }
                res = res / 10;
        }

         printf("\nNumber of zeros in %d is %d\n", temp, zeros);
        printf("Number of ones in %d is %d\n", temp, ones);
        return 0;
  }
