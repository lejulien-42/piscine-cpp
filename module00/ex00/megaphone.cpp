/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:21:42 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/25 12:21:48 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char
	*ft_to_upper(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = std::toupper(str[i]);
		i++;
	}
	return (str);
}

int
	main(int ac, char **av)
{
	int i = 1;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < ac)
	{
		av[i] = ft_to_upper(av[i]);
		std::cout << av[i];
		i++;
	}
	std::cout << "\n";
	return (0);
}
