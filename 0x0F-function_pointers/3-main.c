#include "3-calc.h"

/**
 * main - Performs simple operation
 * @argc: Number of arguments
 * @argv: Inputs
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
        int num1;
        int num2;
        char *s;

        if (argc != 4)
        {
                printf("Error\n");
                exit(98);
        }

        num1 = atoi(argv[1]);
        num2 = atoi(argv[3]);
        s = argv[2];

        if (*s != '+' && *s != '-' && *s != '*' && *s != '/' && *s != '%')
        {
                printf("Error\n");
                exit(99);
        }

        if ((*s == '/' || *s == '%') && num2 == 0)
        {
                printf("Error\n");
                exit(100);
        }

        printf("%d\n", (get_op_func(s)(num1, num2)));
        return (0);
}
