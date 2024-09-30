/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmetehri <bmetehri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:26:05 by bmetehri          #+#    #+#             */
/*   Updated: 2024/09/26 13:47:20 by bmetehri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char* argv[])
{
	size_t			found;
	std::fstream	filename;
	std::ofstream	outfile;
	std::string		line;
	std::string		name;
	std::string		plainText;
	std::string		keyWord;
	std::string		toReplace;

	if (argc != 4)
		return (std::cout <<
			"Error: Wrong parameters, Please enter:" << std::endl <<
			"\t./rep FILENAME TOREPLACE REPLACEDBY"
			<< std::endl, 1);
	filename.open(argv[1], std::ios::in);
	name = argv[1];
	name.append();
	outfile.open(name, std::ios::out);
	if (!filename.is_open())
			return (filename.close(), std::cout << "Error: Cannot open filename" << std::endl, 1);
	keyWord = argv[2];
	toReplace = argv[3];
	while (getline(filename, line))
		plainText += line + "\n";
	found = plainText.find(keyWord);
	std::cout << "found = " << found << std::endl;
	if (found != std::string::npos)
	{
		do {
			plainText.erase(found, keyWord.length());
			plainText.insert(found, toReplace);
			found = plainText.find(keyWord);
		} while (found != std::string::npos);
	} else {
		std::cout << "Oooops! No occurences found of:" << keyWord << std::endl;
	}
	std::cout << "this is the new plainText:\n" << plainText << std::endl;
	filename.close();
	return (0);
}

/**
 * @brief
 * VERIFY:
 * 		- verify that we onl have 3 params.
 * 		- verify that the filename exists.
 *
 * CREATINGNEWFILE:
 * 		-
 */