/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:20:47 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/15 14:51:11 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP
#include <iostream>
#include <string>

class Warlock {

    public:
    
        Warlock(std::string name, std::string title);
        ~Warlock(void);

        const std::string& getName(void) const;
        const std::string& getTitle(void) const;
        void setTitle(std::string const &title);
        void introduce(void) const;
        
    private:
        
        Warlock(void);
        Warlock(Warlock const &src);
        Warlock &operator=(Warlock const &rhs);
        
        std::string name;
        std::string title;
};

#endif