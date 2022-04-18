/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:43:41 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/18 14:53:14 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAARGEGENERATOR_HPP
#define TAARGEGENERATOR_HPP
#include <vector>
#include <string>
#include "ATarget.hpp"

class TargetGenerator {

    public:

		TargetGenerator(void);
		~TargetGenerator(void);

		void learnTargetType(ATarget* target);
		void forgetTargetType(std::string const & target);
		ATarget* createTarget(std::string const & target);

	private:

		TargetGenerator(TargetGenerator const &src);
        TargetGenerator &operator=(TargetGenerator const &rhs);

		std::vector<ATarget *> cible;
		
};

#endif