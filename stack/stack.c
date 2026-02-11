#include "stack_bp.h"
#include <assert.h>
#include <stddef.h>
#include <stdlib.h>

void free_stack(stack_t *stack){
  if (stack == NULL){
    return;
  }

  if (stack->data != NULL){
    free(stack->data);
  }

  free(stack);
}

void *stack_pop(stack_t *stack){
  if(stack->count == 0){
    return NULL;
  }

  stack->count--;
  return stack->data[stack->count];
}

void stack_push(stack_t *stack, void *obj){
  if (stack->count == stack->capacity){
    // increasing the capacity
    stack->capacity *= 2;
    
    // reallocating the updated capacity of memory using realloc
    void **new_ptr = realloc(stack->data, stack->capacity * sizeof(void *));
    if (stack->data == NULL){
      stack->capacity /= 2;
      exit(0);
    }
    stack->data = new_ptr;
  }
    // pushing the obj
    stack->data[stack->count] = obj;

    // incrementing the count
    stack->count += 1;
}

stack_t *stack_new(size_t capacity) {
  stack_t *new_stack = malloc(sizeof(stack_t));
  if (new_stack == NULL){
    return NULL;
  }
  new_stack->count = 0;
  new_stack->capacity = capacity;
  new_stack->data = malloc(capacity * sizeof(void *));

  if (new_stack->data == NULL){
    free(new_stack);
    return NULL;
  }
  
  return new_stack;
}
