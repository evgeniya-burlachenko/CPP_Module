/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:21:07 by skelly            #+#    #+#             */
/*   Updated: 2022/02/20 22:15:04 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base
{
    private:
        std::string string;
    public:
        virtual ~Base(){};
};


class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif