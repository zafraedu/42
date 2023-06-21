char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void){
	char str[] = "Prueba del ejercicio 4 del C03 y me cago en la molinette";
	char find[] = "me";
	printf("%s\n", ft_strstr(str, find));
	printf("%s\n", strstr(str, find));
}
*/
