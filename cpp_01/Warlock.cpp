/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:20:31 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/15 18:32:28 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

Warlock::Warlock(void) { }

Warlock::Warlock(std::string name, std::string title) : name(name), title(title) {

    std::cout << this->name << ": This looks like another boring day." << std::endl;
    return ;
}

Warlock::Warlock(Warlock const &src) { *this = src; }

Warlock::~Warlock(void) {
    
    // std::vector<ASpell*>::iterator itb = item.begin();
    // std::vector<ASpell*>::iterator ite = item.end();

    // while (itb != ite)
    // {
    //     delete *itb;
    //     ++itb;
    // }

    this->item.clear();
    std::cout << this->name << ": My job here is done!" << std::endl;
}

// ************************************************************************** //
//                         Operator d'assignation                             //
// ************************************************************************** //

Warlock& Warlock::operator=(Warlock const &rhs) {

    this->name = rhs.getName();
    this->title = rhs.getTitle();
    return *this;
}

// ************************************************************************** //
//                         Fonctions Membres                                  //
// ************************************************************************** //

const std::string& Warlock::getName(void) const {
    
    return (this->name);
}

const std::string& Warlock::getTitle(void) const {
    
    return (this->title);
}

void Warlock::setTitle(std::string const &title) {

    this->title = title;
    return ;
}

void Warlock::introduce(void) const {

    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
    return ;
}

void Warlock::learnSpell(ASpell* spell) {
    
    if (spell)
        item.push_back(spell);
}

void Warlock::forgetSpell(std::string spell) {

    // std::vector<ASpell>::iterator itb = item.begin();
    // std::vector<ASpell>::iterator ite = item.end();
    
    // for (unsigned long i = 0; i < item.size(); i++)
    //     std::cout << "item[ " << i << " ] = " << item[i]->getName() << std::endl;  
    
    for (unsigned long i = 0; i < item.size(); i++)
    {
        if (item[i]->getName() == spell)
            item.erase(item.begin() + i);
        break ;
    }
    
    // for (unsigned long i = 0; i < item.size(); i++)
    //     std::cout << "item[ " << i << " ] = " << item[i]->getName() << std::endl;  

    return ;
}

void Warlock::launchSpell(std::string spell, ATarget& target) {
    
    for (unsigned long i = 0; i < item.size(); i++)
    {
        if (item[i]->getName() == spell)
            item[i]->launch(target); 
        break ;
    }   
    return ;   
}
