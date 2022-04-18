/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 19:50:02 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/15 19:50:55 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP
#include "ASpell.hpp"

class Polymorph : public ASpell {

    public:

		Polymorph(void);
		~Polymorph(void);

		virtual ASpell* clone() const;
        
};

#endif
