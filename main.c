/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamedaminerouissy <mohamedaminerouiss    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:47:25 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/03 21:26:55 by mohamedamin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// int main()
// {
// 	char str[] = "mo,Am,ro";
// 	char sep = ',';
// 	char **words = ft_split(str, sep);

// 	for (size_t i = 0; words[i]; i++)
// 	{
// 		printf("%s\n", words[i]);
// 		free(words[i]);
// 	}
// 	free(words);

// 	return 0;
// }

// calloc
// int main()
// {
//     size_t elecount = 5;
//     size_t elesize = sizeof(int);

//     char * ptr = (char *) ft_calloc(elecount,elesize);
//     if (!ptr)
//     {
//         printf("void pointeur erreur dans allocation mem ");
//     }
//     size_t i = 0;
//     while (i < elecount)
//     {
//         printf("%d \n",ptr[i++]);
//     }
// }

// memmove
// int main()
// {
//     // char str [] = "Mohamed Amine rouissy";
//     // char *res  = (char *)ft_strdup(str);
//     // printf("%s",res);
//     char dest[9] = "Mohamed";
//     printf("%p \n",ft_memmove(dest+2,dest ,6));
//     printf("%s \n",dest);
// }
// substr
// int main ()
// {
//     char str[] = "Mohamed";
//     char *ptr = ft_substr(str,0,3);
//     printf("%s \n",ptr);
//     free(ptr);
//     return 0;
// }
// strjoin
// int main()
// {
//     char s1[] ="";
//     char s2[] = "mohamed";
//     char *ptr = ft_strjoin(s1,s2);
//     printf("%s",ptr);
// }

// int main()
// {
//     char s1[] ="aaMohamedaa";
//     char *ptr = ft_strtrim(s1,"d");
//     printf("\n %s \n",ptr);
//     free(ptr);
// }

static char	ft_upper(unsigned int i, char c)
{
	(void)i;
	char	cc = ft_toupper(c);
	return (cc);
}
int main()
{
	char string[] = "mohamed";
	char *newstr = ft_strmapi(string, ft_upper);
	printf("%s \n", newstr);
	printf("\n %s", string);
}
