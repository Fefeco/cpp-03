/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:05:08 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/17 11:14:12 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);

	FragTrap &operator=(const FragTrap &other);

	~FragTrap(void);

	void highFivesGuys(void);
	void getInfo(void);
};
