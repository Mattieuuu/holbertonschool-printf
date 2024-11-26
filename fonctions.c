#include <unistd.h> 


int print_recursive(int num)
{
int count = 0 ;
char digit;
if (num >= 10)
{
count += print_recursive(num/10);
}
digit = (num % 10) + '0';
write(1, &digit , 1);
count++;
return count;
}
int print_number (int num)
{
int count = 0;
if (num < 0)
{
write (1 , "-",1);
num = -num;
count++;
}
if (num == 0)
{
write (1 ,"0" ,1);
return (1);
}
count += print_recursive(num);
return count;
}
char print_char(char c)
{
return write( 1, &c, 1);
}
int print_string(char *str)
{
int count = 0;
while (*str) {
count += write(1, str, 1);
str++;
}
return (count);
}