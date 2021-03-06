/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:10:09 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/15 19:39:32 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ATarget.hpp"
#include "ASpell.hpp"
#include "Dummy.hpp"
#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include <stdio.h>

int main(void) {

    Warlock richard("Richard", "the Titled");
    
    Dummy bob;
    Fwoosh* fwoosh = new Fwoosh();
    
    richard.learnSpell(fwoosh);
    
    richard.introduce();
    richard.launchSpell("Fwoosh", bob);
    
    richard.forgetSpell("Fwoosh");
    richard.launchSpell("Fwoosh", bob); 
    
    return 0;
}