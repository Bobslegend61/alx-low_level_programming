#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to
 * perform an operation on
 * @s: Operation used for function selection
 *
 * Return: Pointer to the function to use for the
 * operation
 */
int (*get_op_func(char *s))(int, int)
{
        op_t ops[] = {
                {"+", op_add},
                {"-", op_sub},
                {"*", op_mul},
                {"/", op_div},
                {"%", op_mod},
                {NULL, NULL}
        };
        int i = 0;

        while ((ops + i)->op != NULL)
        {
                if (*(ops[i].op) == *s)
                        break;
                i++;
        }
        return ((ops + i)->f);
}
