char	**ft_split_whitespaces(char *str);
void	**ft_print_words_tables(char **tab);

int		main()
{
	char *str;
	char **array;

	str = "the quick 	brown fox 	jumps	 over the lazy dog";
	array = ft_split_whitespaces(str);
	ft_print_words_tables(array);
	return (0);
}
