/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:20:30 by skelly            #+#    #+#             */
/*   Updated: 2022/01/21 22:48:18 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{
	//4 метода или левела
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void invalid_level(void);

public:
	Karen(void);
	~Karen(void);
	void complain( std::string level );
};

#endif