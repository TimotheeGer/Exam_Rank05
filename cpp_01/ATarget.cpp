/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:51:51 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/15 18:13:50 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ATarget.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

ATarget::ATarget(void) { }

ATarget::ATarget(std::string type) : type(type) { }

ATarget::ATarget(ATarget const &src) { *this = src; }

ATarget::~ATarget(void) { }

// ************************************************************************** //
//                         Operator d'assignation                             //
// ************************************************************************** //

ATarget& ATarget::operator=(ATarget const &rhs) {

    this->type = rhs.type;
    return *this;
}

// ************************************************************************** //
//                         Fonctions Membres                                  //
// ************************************************************************** //

std::string const &ATarget::getType(void) const {

    return this->type;
}

void ATarget::getHitBySpell(ASpell const &spell) const {

    std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
    return ;    
}
