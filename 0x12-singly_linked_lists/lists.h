#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _strlen - calculates the length of a string
 * @str: pointer to the string
 *
 * Return: The length of the string
 */
int _strlen(const char *str);

/**
 * print_list - prints elements of a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: Number of nodes in the linked list
 */
size_t print_list(const list_t *h);

/**
 * list_len - calculates the number of nodes in a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: Number of nodes in the linked list
 */
size_t list_len(const list_t *h);

/**
 * add_node - adds a new node to the beginning of a linked list
 * @head: double pointer to the head of the linked list
 * @str: string to be added to the new node
 *
 * Return: Pointer to the new node
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - adds a new node to the end of a linked list
 * @head: double pointer to the head of the linked list
 * @str: string to be added to the new node
 *
 * Return: Pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - frees a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: Nothing
 */
void free_list(list_t *head);

/**
 * printfirst - prints "You're beat! and yet, you must allow,"
 *
 * Return: Nothing
 */
void printfirst(void);

#endif
