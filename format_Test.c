 #include "main.h" 
 #include <stddef.h>
 #include <stdarg.h> 
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


int _printf(const char *format, ...) 
{

va_list args; 
int count = 0; 
char *str; 
char character; 
int num = 0; 
int i = 0;
 
if (format == NULL)
     { 
       return(-1); 
     } 

 va_start(args,format); 

   while (format[i] != '\0') 
    { 
       if (format[i] == '%') 
       { 
 	i++; 
    

 	if (format[i] == 'd' || format[i] == 'i') 
 	  { 
 	    num = va_arg(args,int); 
 	    count += print_number(num); 
 	      } 
 	else if (format[i] == 's')
	{
	  str = va_arg(args,char *);
	  if (str == NULL) 
 	  { 
 	    str = "(null)"; 
 	  } 
	  count += print_string(str); 
	} 
	else if (format[i] == 'c') 
 	{ 
 	  character = (char) va_arg(args,int); 
 	  count += print_char(character); 
 	} 
       else if (format[i] == '%')
 	{ 
 	  count += write(1, "%",1); 
 	} 
       else 
 	{ 
 	  count += write(1 ,&format[i-1], 1);
 	} 
       } 
       else
	 {
	 count += write(1, &format[i], 1); 
	 }
       i++; 
    } 
   va_end(args); 
   return (count);
 } 


