/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 13:37:31 by marvin            #+#    #+#             */
/*   Updated: 2025/07/06 13:37:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;

	i = 0;
	ss = (unsigned char *)s;
	while (i < n)
	{
		if (ss[i] == (unsigned char)c)
			return ((ss + i));
		i++;
	}
	return (NULL);
}
/*void test_memchr(const char *desc, const void *s, int c, size_t n)
{
    void *res_ft = ft_memchr(s, c, n);
    void *res_std = memchr(s, c, n);

    printf("%s\n", desc);
    printf("ft_memchr: %p\n", res_ft);
    printf("  memchr: %p\n", res_std);
    if (res_ft == res_std)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");
    printf("-------------------------\n");
}

int main(void)
{
    const char *str = "Hello, 42 School!";

    // 1. Search for character present in string within length
    test_memchr("Search for '4' in string", str, '4', strlen(str));

    // 2. Search for character not present in string
    test_memchr("Search for 'z' (not in string)", str, 'z', strlen(str));

    // 3. Search for null byte within string (should find at end)
    test_memchr("Search for '\\0' in string", str, '\0', strlen(str) + 1);

    // 4. Search in empty string
    test_memchr("Search in empty string", "", 'a', 1);

    // 5. Search with length zero (should not find anything)
    test_memchr("Search with length 0", str, 'H', 0);

    // 6. Search for first character
    test_memchr("Search for first character 'H'", str, 'H', strlen(str));

    // 7. Search for last character
    test_memchr("Search for last character '!'", str, '!', strlen(str));

    return 0;
}*/
