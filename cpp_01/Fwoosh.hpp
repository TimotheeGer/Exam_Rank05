/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:19:40 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/15 18:17:46 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP
#include "ASpell.hpp"

class Fwoosh : public ASpell {

    public:

		Fwoosh(void);
		~Fwoosh(void);

		virtual ASpell* clone() const;
        
};

#endif
