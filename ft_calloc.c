/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:49:09 by marvin            #+#    #+#             */
/*   Updated: 2025/07/06 15:49:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			tot;
	size_t			i;
	void			*p;

	i = 0;
	if (nmemb == 0 || size == 0)
	{
		p = malloc(sizeof(char) * 1);
		return (p);
	}
	tot = nmemb * size;
	if (tot / size != nmemb || tot / nmemb != size)
		return (NULL);
	p = malloc(sizeof(char) * tot);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, tot);
	return (p);
}

/*int main(void)
{
    void *ptr;

    // ... other test cases ...

    // Overflow test case - extremely large allocation
    ptr = ft_calloc(13123131313UL, 3131231313132131313UL);
    printf("Overflow test: %p\n", ptr);
    // Expected output: (nil) or 0x0 (meaning NULL)

    if (ptr)
        free(ptr);

    return 0;
}*/
