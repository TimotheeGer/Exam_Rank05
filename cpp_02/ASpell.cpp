/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:51:36 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/15 18:12:20 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

ASpell::ASpell(void) { }

ASpell::ASpell(std::string const &name, std::string const &effects) : name(name), effects(effects) { }

ASpell::ASpell(ASpell const &src) { *this = src; }

ASpell::~ASpell(void) { }

// ************************************************************************** //
//                         Operator d'assignation                             //
// ************************************************************************** //

ASpell& ASpell::operator=(ASpell const &rhs) {

    this->name = rhs.name;
    this->effects = rhs.effects;
    return *this;
}

// ************************************************************************** //
//                         Fonctions Membres                                  //
// ************************************************************************** //

const std::string& ASpell::getName(void) const {

    return this->name;
}

const std::string& ASpell::getEffects(void) const {

    return this->effects;
}

void ASpell::launch(ATarget const &target) {

    target.getHitBySpell(*this);
    return ;
}