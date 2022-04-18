/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:46:26 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/18 15:47:39 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

TargetGenerator::TargetGenerator(void) { }

TargetGenerator::~TargetGenerator(void) { 

	for (unsigned long i = 0; i < cible.size(); i++)
    {
		std::cout << "cible [ " << i << " ] = " << cible[i]->getType() << std::endl;
    }
    std::vector<ATarget*>::iterator itb = cible.begin();
    std::vector<ATarget*>::iterator ite = cible.end();

    while (itb != ite)
    {
		if (*itb)
        	delete *itb;
        ++itb;
    }

    this->cible.clear();
	std::cout << "TargetGenerator close" << std::endl;	
}

// ************************************************************************** //
//                         Fonctions Membres                                  //
// ************************************************************************** //

void TargetGenerator::learnTargetType(ATarget* target) {

	if (target)
		cible.push_back(target);
	return ;
}

void TargetGenerator::forgetTargetType(std::string const & target) {

	for (unsigned long i = 0; i < cible.size(); i++)
    {
        if (cible[i]->getType() == target)
		{
			delete cible[i];
            cible.erase(cible.begin() + i);
        	break ;
		}
    }
	return ;
}
ATarget* TargetGenerator::createTarget(std::string const & target) {

	for (unsigned long i = 0; i < cible.size(); i++)
    {
        if (cible[i]->getType() == target)
		{
			return cible[i];
        	break ;
		}
    }	
	return NULL;
}