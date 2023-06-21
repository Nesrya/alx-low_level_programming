#include <stdio.h>

/**
 * positive_or_negative - shows if a number is positive or negative
(* 0 : is the number to be chacked
 *Return: 0 success
 */

int positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i < 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return (0);

}
