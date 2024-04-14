// #include <stdio.h>
// #include <stdlib.h>

// long int num = 590295810358705700000;
// void collatrz(long int n)
// {
//   if (n==1)
//   {
//     printf("%d follows it wow\n",num);
//     num++;
//     collatrz(num);
//     return;
//   }
//   if(n%2==0)
//   {
//     collatrz(n/2);
//   }
//   else
//   {
//     collatrz((3*n) + 1);
//   }
// }
// int main()
// {
//   collatrz(num);
// }

#include <stdio.h>
#include <gmp.h>

int main() {
    mpz_t num;
    mpz_init(num);
    mpz_ui_pow_ui(num, 2, 69);

    char* num_str = mpz_get_str(NULL, 10, num);
    printf("2^69 = %s\n", num_str);

    mpz_clear(num);
    free(num_str);

    return 0;
}
