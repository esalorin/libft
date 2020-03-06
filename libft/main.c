/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 15:18:29 by esalorin          #+#    #+#             */
/*   Updated: 2019/10/28 19:56:09 by esalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/*char	ft_maptest(char c)
{
		c++;
		return (c);
}*/

/*char	ft_mapitest(unsigned int i, char c)
{
		if (i < 3)
			c++;
		return (c);
}*/

int	main(void)
{
	char str[] = "hello how are u";
	char dst[50] = "1234567899999";
	char str1[] = "hello how are u";
	char dst1[50] = "123456789999";
	//char **dst;
	char c = 'o';
	//int	a = -2147483648;
	//int b = 30;
	//int i = 0;

	//printf("strlen: %lu\nft_strlen: %zu\n", strlen(str), ft_strlen(str));
	//printf("strdup: %s\nft_strdup: %s\n", strdup(str), ft_strdup(str));
	//printf("strcpy: %s\nft_strcpy: %s\n", strcpy(dst, str), ft_strcpy(dst, str));
	//printf("strncpy: %s\nft_strncpy %s\n", strncpy(dst, str, 3), ft_strncpy(dst, str, 3));
	//printf("strcmp: %d\nft_strcmp: %d\n", strcmp(str, dst), ft_strcmp(str, dst));
	//printf("strncmp: %d\nft_strncmp: %d\n", strncmp(str, dst, 3), ft_strncmp(str, dst, 3));
	//printf("isalpha: %d\nft_isalpha: %d\n", isalpha(c), ft_isalpha(c));
	//printf("isdigit: %d\nft_isdigit %d\n", isdigit(c), ft_isdigit(c));
	//printf("tolower: %d\nft_tolower: %d\n", tolower(c), ft_tolower(c));
	//printf("toupper: %d\nft_toupper: %d\n", toupper(c), ft_toupper(c));
	//printf("isprint: %d\nft_isprint %d\n", isprint(c), ft_isprint(c));
	//printf("isascii: %d\nft_isascii: %d\n", isascii(c), ft_isascii(c));
	//printf("isalnum: %d\nft_isalnum: %d\n", isalnum(c), ft_isalnum(c));
	//printf("atoi: %d\nft_atoi: %d\n", atoi(str), ft_atoi(str));
	//printf("strstr: %s\nft_strstr: %s\n", strstr(str, dst), ft_strstr(str, dst));
	//printf("strnstr: %s\nft_strnstr: %s\n", strnstr(str, dst, b), ft_strnstr(str, dst, b));
	//printf("strrchr: %s\nft_strrchr: %s\n", strrchr(str, a), ft_strrchr(str, a));
	//printf("strchr: %s\nft_strchr: %s\n", strchr(str, a), ft_strchr(str, a));
	//ft_putchar(c);
	//ft_putstr(str);
	//ft_putnbr(a);
	//ft_putendl(str);
	//ft_putstr_fd(str, 1);
	//ft_putendl_fd(str, 1);
	//ft_putnbr_fd(a, 1);
	//printf("ft_strequ: %d\nft_strnequ %d\n", ft_strequ(str, dst), ft_strnequ(str, dst, a));
	//printf("ft_strtrim:%s\n", ft_strtrim(str));
	//printf("ft_strsub: %s\n", ft_strsub(str, a, b));
	
	/*dst = ft_strsplit(str, c);
	while (dst[a] != '\0')
	{
		printf("%s\n", dst[a]);
		a++;
	}*/

	//printf("strcat: %s\nft_strcat: %s\n", strcat(str, dst), ft_strcat(str1, dst1));
	//printf("strncat: %s\nft_strncat: %s\n", strncat(str, dst, a), ft_strncat(str1, dst1, a));
	//printf("strlcat: %lu\nft_strlcat: %zu\n", strlcat(str, dst, a), ft_strlcat(str1, dst1, a));
	//printf("ft_itoa: %s\n", ft_itoa(a));
	//printf("ft_strjoin: %s\n", ft_strjoin(str, dst));
	//printf("ft_strmap: %s\n", ft_strmap(str, &ft_maptest));
	//printf("ft_strmapi: %s\n", ft_strmapi(str, &ft_mapitest));
	
	//ft_memdel((void**)&str);
	//printf("ft_memdel: %s", str);
	
	/*str = (char*)ft_memalloc(5);
	while (i < 5)
		printf("%d", str[i++]);*/

	//printf("before memset: %s, before ft_memset: %s\n", str, dst);
	//printf("after memset: %s, after ft_memset: %s\n", memset((void*)str, c, 5), ft_memset((void*)str, c, 5));
	
	//printf("memcpy: %s\nft_memcpy: %s\n", memcpy((void*)dst, (void*)str, 5), ft_memcpy((void*)dst, (void*)str, 5));
	
	//printf("memcmp: %d\nft_memcmp: %d\n", memcmp((void*)str, (void*)dst, 3), ft_memcmp((void*)str, (void*)dst, 3));
	
	//printf("memchr: %s\nft_memchr: %s\n", memchr((void*)str, c, 3), ft_memchr((void*)str, c, 3));
	
	/*memccpy((void*)dst, (void*)str, c, 15);
	ft_memccpy((void*)dst1, (void*)str1, c, 15);
	printf("after memccpy: %s\nafter ft_memccpy: %s\n", dst, dst1);*/

	printf("after memmove: %s\nafter ft_memmove: %s\n", memmove((void*)str, (void*)dst, 5), ft_memmove((void*)str1, (void*)dst1, 5));

	return (0);
}
