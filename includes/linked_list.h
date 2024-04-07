/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 00:28:41 by kpuwar            #+#    #+#             */
/*   Updated: 2024/04/08 00:48:50 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

/**
 * @brief Represents a node in a linked list.
 */
typedef struct s_list
{
    void *content; ///< The content of the node.
    struct s_list *next; ///< Pointer to the next node.
} t_list;

/**
 * @brief Allocates and returns a new node.
 * 
 * @param content The content to be added to the new node.
 * @return A pointer to the new node, or NULL if the allocation fails.
 */
t_list *ft_lstnew(void *content);

/**
 * @brief Adds a new node at the beginning of the list.
 * 
 * @param lst The address of a pointer to the first node of a list.
 * @param new_node The address of the node to add.
 */
void ft_lstadd_front(t_list **lst, t_list *new_node);

/**
 * @brief Counts the number of elements in a list.
 * 
 * @param lst The first node of the list.
 * @return The number of elements in the list.
 */
int ft_lstsize(t_list *lst);

/**
 * @brief Returns the last node of a list.
 * 
 * @param lst The first node of the list.
 * @return A pointer to the last node of the list.
 */
t_list *ft_lstlast(t_list *lst);

/**
 * @brief Adds a new node at the end of the list.
 * 
 * @param lst The address of a pointer to the first node of a list.
 * @param new_node The address of the node to add.
 */
void ft_lstadd_back(t_list **lst, t_list *new_node);

/**
 * @brief Deletes a node and frees its memory using the specified function.
 * 
 * @param lst The node to delete.
 * @param del The function used to delete the content of the node.
 */
void ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief Deletes all nodes in a list and frees their memory using the specified function.
 * 
 * @param lst The address of a pointer to the first node of a list.
 * @param del The function used to delete the content of each node.
 */
void ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Iterates over all nodes in a list and applies the specified function to each node's content.
 * 
 * @param lst The first node of the list.
 * @param f The function to apply to each node's content.
 */
void ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Iterates over all nodes in a list, applies the specified function to each node's content, and creates a new list from the results.
 * 
 * @param lst The first node of the list.
 * @param f The function to apply to each node's content.
 * @param del The function used to delete the content of each node if an error occurs.
 * @return A pointer to the first node of the new list, or NULL if the allocation fails.
 */
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
