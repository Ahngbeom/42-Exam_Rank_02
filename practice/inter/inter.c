#include <unistd.h>

int	dupl_check(char	*str, char ch, int index)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && i < index)
	{
		if (str[i] == ch)
			return (0);
		i++;
	}
	if (ch == '\0' && str[i] == '\0')
		return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			j = 0;
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					if (dupl_check(argv[1], argv[1][i], i))
					{
						write(1, &argv[1][i], 1);
						break ;
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
