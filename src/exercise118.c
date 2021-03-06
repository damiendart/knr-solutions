/*
 * A solution to Exercise 1-18 in The C Programming Language (Second Edition).
 *
 * This file was written by Damien Dart, <damiendart@pobox.com>. This is free
 * and unencumbered software released into the public domain. For more
 * information, please refer to the accompanying "UNLICENCE" file.
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

struct buffer_node {
  int32_t data;
  struct buffer_node *next_node;
};

void deleteBuffer(struct buffer_node **buffer_head);

int main(void)
{
  int32_t character = 0;
  int32_t previous_character = 0;
  struct buffer_node *buffer_head = NULL;
  while ((character = getchar()) != EOF) {
    switch (character) {
      case ' ':
      case '\t': {
        struct buffer_node *new_node = malloc(sizeof(struct buffer_node));
        new_node->data = character;
        new_node->next_node = buffer_head;
        buffer_head = new_node;
        break;
      }
      case '\n':
        deleteBuffer(&buffer_head);
        if (previous_character != character) {
          putchar(character);
        }
        previous_character = character;
        break;
      default: {
        struct buffer_node *current_node = buffer_head;
        while (current_node != NULL) {
          putchar(current_node->data);
          current_node = current_node->next_node;
        }
        deleteBuffer(&buffer_head);
        putchar(character);
        previous_character = character;
        break;
      }
    }
  }
  return EXIT_SUCCESS;
}

void deleteBuffer(struct buffer_node **buffer_head)
{
  while (*buffer_head != NULL) {
    struct buffer_node *temp_node = *buffer_head;
    *buffer_head = (*buffer_head)->next_node;
    free(temp_node);
  }
}
