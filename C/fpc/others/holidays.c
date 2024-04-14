#include <stdio.h>
#include <stdarg.h>

#define CHAR_TYPE 'c'
#define INT_TYPE 'd'
#define LONG_TYPE 'l'
#define FLOAT_TYPE 'f'
#define LONG_LONG_TYPE 'L'
#define HEX_TYPE 'x'

void my_printf(char* format, ...)
{
    va_list args;
    va_start(args, format);
    char* ptr = format;
    while (*ptr != '\0') 
    {
        if (*ptr == '%')
        {
            ptr++;
            switch (*ptr)
            {
                case CHAR_TYPE:
                putc(va_arg(args, int), stdout);
                break;
                case INT_TYPE:
                fprintf(stdout, "%d", va_arg(args, int));
                break;
                case LONG_TYPE:
                fprintf(stdout, "%ld", va_arg(args, long));
                break;
                case FLOAT_TYPE:
                fprintf(stdout, "%f", va_arg(args, double));
                break;
                case LONG_LONG_TYPE:
                fprintf(stdout, "%lld", va_arg(args, long long));
                break;
                case HEX_TYPE:
                fprintf(stdout, "%llx", va_arg(args, long long));
                break;
            }
        }
        else 
        {
            putc(*ptr, stdout);
        }
        ptr++;
     }
     va_end(args);
}

int main()
{
	int i = 10; int j = 20; int k = 30;
	int l = 40; int m = 50; int n = 60;

	my_printf("No parameters\n");

	my_printf("Print integer parameters ...\n");

	my_printf("1 param: %d\n", i);
	my_printf("2 params: %d %d\n", i, j);
	my_printf("3 params: %d %d %d\n", i, j, k);

	my_printf("6 params: %d %d %d %d %d %d\n",
		i, j, k, l, m, n);

	my_printf("10 params: %d %d %d %d %d %d %d %d %d %d\n",
		i, j, k, l, m, n, i, j, k, l);

	char ch = 'M';
	my_printf("Char: %c\n", ch);

	float f1 = 1.1111;
	my_printf("Float value: %f\n", f1);

	double d1 = 2.2222;
	my_printf("Double value: %f\n", d1);

	long li = 11; long lj = 21; long lk = 31;
	long ll = 41; long lm = 51; long ln = 61;

	my_printf("Print long integer parameters ...\n");

	my_printf("1 param: %l\n", li);
	my_printf("2 params: %l, %l\n", li, lj);
	my_printf("3 params: %l, %l, %l\n", li, lj, lk);

	my_printf("6 params: %l, %l, %l, %l, %l, %l\n",
		li, lj, lk, ll, lm, ln);

	my_printf("10 params: %l, %l, %l, %l, %l, %l, %l, %l, %l, %l\n",
		li, lj, lk, ll, lm, ln, li, lj, lk, ll);

	long long lli = 0x123456789ABCDE12;

	my_printf("Print long long integer parameters ...\n");

	my_printf("1 param: 0x%L\n", lli);

	my_printf("Print all types of values once ...\n");

	my_printf("All values: %c, %d, %l, 0x%L, %f, %f\n", ch, i, li, lli, f1, d1);

}
