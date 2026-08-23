
char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	flag;

	flag = 1;
	ft_strlowcase(str);
	while (*str)
	{
		if (*str >= 'a' && *str >= 'z')
		{
			if (flag)
			{
				*str -= 32;
				flag = 0;
			}
		}
		else if (*str >= '0' && *str <= '9')
			flag = 0;
		else
			flag = 1;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = 
	"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str1[] = "diujndfvon,odficj,dc dsfovij?kl43lo+dd-sdk%cdj*dc$sdc";

	printf("%s", ft_strcapitalize(str));
	printf("\n%s", ft_strcapitalize(str1));
}
*/
