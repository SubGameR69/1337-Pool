char *ft_strrev(char *str)
{
	char temp;
	int length;
	int i;

	length = 0;
	i = 0;
	while (str[length])
		length++;
	while (i < (length - 1))
	{
		temp = str[i];
		str[i] = str[length - 1];
		str[length - 1] = temp;
		i++;
		length--;}
	return (str);
}
