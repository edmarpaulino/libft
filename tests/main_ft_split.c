#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	main(void)
{
//	char	str[] = "abc    .         def ghi jkl";
//	char	str_null[4] = "";
	char	**ret_str;
	size_t	index;
/*
	ret_str = ft_split(str, ' ');
	index = 0;
	while (ret_str[index])
	{
		printf("%s\n", ret_str[index]);
		++index;
	}
	printf("-----------------------\n");
	free(ret_str);

	ret_str = ft_split(str, 'e');
	index = 0;
	while (ret_str[index])
	{
		printf("%s\n", ret_str[index]);
		++index;
	}
	printf("-----------------------\n");
	free(ret_str);

	ret_str = ft_split(str, 'k');
	index = 0;
	while (ret_str[index])
	{
		printf("%s\n", ret_str[index]);
		++index;
	}
	printf("-----------------------\n");
	free(ret_str);

	ret_str = ft_split(str, '\0');
	index = 0;
	while (ret_str[index])
	{
		printf("%s\n", ret_str[index]);
		++index;
	}
	printf("-----------------------\n");
	free(ret_str);

	ret_str = ft_split(str, 'y');
	index = 0;
	while (ret_str[index])
	{
		printf("%s\n", ret_str[index]);
		++index;
	}
	printf("-----------------------\n");
	free(ret_str);

	ret_str = ft_split(str_null, 'y');
	index = 0;
	while (ret_str[index])
	{
		printf("%s\n", ret_str[index]);
		++index;
	}
	printf("-----------------------\n");
	free(ret_str);
*/

	ret_str = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	index = 0;
	while (ret_str[index])
	{
		printf("%s\n", ret_str[index]);
		++index;
	}
	printf("-----------------------\n");
	free(ret_str);
	/*
	if (1)
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);
	free(ret_str);
	*/
	return (0);
}
