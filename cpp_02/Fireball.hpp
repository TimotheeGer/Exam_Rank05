/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 19:47:39 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/15 19:48:17 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP
#include "ASpell.hpp"

class Fireball : public ASpell {

    public:

		Fireball(void);
		~Fireball(void);

		virtual ASpell* clone() const;
        
};

#endif