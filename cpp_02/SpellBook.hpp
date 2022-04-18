/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 19:59:54 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/18 14:16:55 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#include <vector>
#include <string>
#include "ASpell.hpp"

class SpellBook {

    public:

		SpellBook(void);
		~SpellBook(void);

		void learnSpell(ASpell* sort);
		void forgetSpell(std::string const & sort);
		ASpell* createSpell(std::string const &sort);

	private:

		SpellBook(SpellBook const &src);
        SpellBook &operator=(SpellBook const &rhs);

		std::vector<ASpell *> book;
		
};

#endif