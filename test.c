#include "ftprintf.h"

// int	ft_printf(const char *, ...)
// {
// 	return ;
// }

// int	add(int len, ...)
// {
// 	va_list	list;
// 	int		temp;
// 	int		res;

// 	va_start(list, len); // len is the alst non variadic param
// 	temp = 0;
// 	res = 0;
// 	for (int i = 0; i < len; i++)
// 	{
// 		temp = va_arg(list, int);
// 		res += temp;
// 	}
// 	return (res);
// }
// void print(int len,...)
// {
//     va_list list;
//     char *temp;
//     va_start(list,len);

//     for(int i;i < len;i++)
//     {
//         temp = va_arg(list,char *);
//         printf("%s",temp);
//     }
// }
// int	main(void)
// {
// 	int	res;

// 	res = add(4, 3,2,2,6);
// 	printf("%d", res);
//     print(4,"\nhi", "\n", "issam", "laafar");
// }