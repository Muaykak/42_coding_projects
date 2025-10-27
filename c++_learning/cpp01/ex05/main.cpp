/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srussame <sutawith@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 23:42:11 by srussame          #+#    #+#             */
/*   Updated: 2025/09/11 18:40:20 by srussame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	jimmy;

	jimmy.complain("DEBUG");
	jimmy.complain("INFO");
	jimmy.complain("WARNING");
	jimmy.complain("ERROR");
	jimmy.complain("CALM");
}