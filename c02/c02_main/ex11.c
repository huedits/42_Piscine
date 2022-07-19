void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	a[] = "Teste\ncom caracteres \b especiais\t.";
	char	*pa = &a[0];

	ft_putstr_non_printable(pa);
}
