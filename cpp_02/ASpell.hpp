/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:34:51 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/15 18:11:47 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP
#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell {

    public:
        
        ASpell(void);
        ASpell(std::string const &name, std::string const &effects);
        ASpell(ASpell const &src);
        virtual ~ASpell(void);

        ASpell &operator=(ASpell const &rhs);        
        
        const std::string& getName(void) const;
        const std::string& getEffects(void) const;
        void launch(ATarget const &target);
        
        virtual ASpell* clone(void) const = 0;
         
    private:
    
        std::string name;
        std::string effects;
    
};

#endif