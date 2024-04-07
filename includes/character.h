/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 00:26:51 by kpuwar            #+#    #+#             */
/*   Updated: 2024/04/08 00:44:53 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

/**
 * @brief Checks if the character is an alphabetic character.
 * 
 * @param c The character to be checked.
 * @return Non-zero value if c is a letter, 0 otherwise.
 */
int ft_isalpha(int c);

/**
 * @brief Checks if the character is a digit.
 * 
 * @param c The character to be checked.
 * @return Non-zero value if c is a digit, 0 otherwise.
 */
int ft_isdigit(int c);

/**
 * @brief Checks if the character is alphanumeric.
 * 
 * @param c The character to be checked.
 * @return Non-zero value if c is a letter or digit, 0 otherwise.
 */
int ft_isalnum(int c);

/**
 * @brief Checks if the character is a standard ASCII character.
 * 
 * @param c The character to be checked.
 * @return Non-zero value if c is a standard ASCII character, 0 otherwise.
 */
int ft_isascii(int c);

/**
 * @brief Checks if the character is a printable character, including space.
 * 
 * @param c The character to be checked.
 * @return Non-zero value if c is printable, 0 otherwise.
 */
int ft_isprint(int c);

#endif
