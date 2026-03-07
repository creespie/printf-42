#include <stdlib.h>
#include "ft_printf.c"

static int	ft_count_malloc(unsigned int n)
{
	int	counter;
	
	counter = 0;
	while (n > 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

static void	ft_fill(char *string, unsigned int n, int counter)
{
	string[counter] = '\0';
	counter--;
	while (n > 0)
	{
		string[counter] = (n % 10) + '0';
		n = n / 10;
		counter--;
	}
}

char	*ft_uitoa(unsigned int n)
{
	char	*string;
	int		counter;

	if (n == 0)
		return(ft_strdup("0"));
	counter = ft_count_malloc(n);
	string = (char *)malloc((counter + 1) * sizeof(char));
	ft_fill(string, n, counter);
	return (string);
}