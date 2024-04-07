/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 00:28:46 by kpuwar            #+#    #+#             */
/*   Updated: 2024/04/08 00:38:23 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUTPUT_H
#define OUTPUT_H

/**
 * @brief Outputs a character to the specified file descriptor.
 * 
 * @param c The character to output.
 * @param fd The file descriptor.
 */
void ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs a string to the specified file descriptor.
 * 
 * @param s The string to output.
 * @param fd The file descriptor.
 */
void ft_putstr_fd(char *s, int fd);

/**
 * @brief Outputs a string followed by a newline character to the specified file descriptor.
 * 
 * @param s The string to output.
 * @param fd The file descriptor.
 */
void ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs an integer to the specified file descriptor.
 * 
 * @param n The integer to output.
 * @param fd The file descriptor.
 */
void ft_putnbr_fd(int n, int fd);

#endif
