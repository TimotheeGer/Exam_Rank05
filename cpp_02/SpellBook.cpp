/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:17:33 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/18 15:38:14 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

SpellBook::SpellBook(void) { }

SpellBook::~SpellBook(void) { 

    std::vector<ASpell*>::iterator itb = book.begin();
    std::vector<ASpell*>::iterator ite = book.end();

    while (itb != ite)
    {
        delete *itb;
        ++itb;
    }

    this->book.clear();
	std::cout << "SpellBook close" << std::endl;
}

// ************************************************************************** //
//                         Fonctions Membres                                  //
// ************************************************************************** //

void SpellBook::learnSpell(ASpell* sort) {

	if (sort)
		book.push_back(sort);
	return ;
}

void SpellBook::forgetSpell(std::string const & sort) {

	for (unsigned long i = 0; i < book.size(); i++)
    {
        if (book[i]->getName() == sort)
		{
			delete book[i];
            book.erase(book.begin() + i);
        	break ;
		}
    }
	return ;
}
ASpell* SpellBook::createSpell(std::string const &sort) {

	// std::cout <<  "TEST size = " << book.size() << sort << std::endl;
	for (unsigned long i = 0; i < book.size(); i++)
    {
		// std::cout << "book [ " << i << " ] = " << book[i]->getName() << std::endl;
        if (book[i]->getName() == sort)
		{
			return book[i];
        	break ;
		}
    }	
	return NULL;
}
