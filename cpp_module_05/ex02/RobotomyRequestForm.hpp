/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestAForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 04:48:52 by bmetehri          #+#    #+#             */
/*   Updated: 2025/02/13 04:48:54 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string	_target;

	public:
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm(void);

		virtual void	execute(Bureaucrat const & executor) const;
};
