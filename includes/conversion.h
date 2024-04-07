/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 00:28:38 by kpuwar            #+#    #+#             */
/*   Updated: 2024/04/08 00:34:46 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
#define CONVERSION_H

/**
 * @brief Converts a lowercase letter to uppercase.
 * 
 * @param c The character to be converted.
 * @return The uppercase equivalent of c if c is a lowercase letter, c otherwise.
 */
int ft_toupper(int c);

/**
 * @brief Converts an uppercase letter to lowercase.
 * 
 * @param c The character to be converted.
 * @return The lowercase equivalent of c if c is an uppercase letter, c otherwise.
 */
int ft_tolower(int c);

/**
 * @brief Converts a string to an integer.
 * 
 * @param str The string to be converted.
 * @return The converted integer value.
 */
int ft_atoi(const char *str);

/**
 * @brief Converts an integer to a string.
 * 
 * @param n The integer to be converted.
 * @return The string representation of the integer, or NULL if the allocation fails.
 */
char *ft_itoa(int n);

#endif
