/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:46:13 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/15 18:16:33 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP
#include "ATarget.hpp"

class Dummy : public ATarget {

    public:

		Dummy(void);
		~Dummy(void);

		virtual ATarget* clone() const;
        
};

#endif