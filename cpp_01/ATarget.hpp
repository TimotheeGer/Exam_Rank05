/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:45:40 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/15 18:14:13 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP
#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget {
    
    public:
    
        ATarget(void);
        ATarget(std::string type);
        ATarget(ATarget const &src);
        virtual ~ATarget(void);

        ATarget &operator=(ATarget const &rhs);        
        
        std::string const &getType(void) const;
        
        virtual ATarget* clone(void) const = 0;
        
        void getHitBySpell(ASpell const &spell) const; 
         
    private:
    
        std::string type;
};

#endif