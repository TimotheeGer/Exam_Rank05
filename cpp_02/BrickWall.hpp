/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 19:55:03 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/15 19:55:58 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP
#include "ATarget.hpp"

class BrickWall : public ATarget {

    public:

		BrickWall(void);
		~BrickWall(void);

		virtual ATarget* clone() const;
        
};

#endif