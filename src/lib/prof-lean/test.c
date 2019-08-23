#include "stdatomic.h"

typedef struct {
_Atomic(int) x;
} item_t;

int load(item_t *i)
{
  return atomic_load_explicit(&(i->x), memory_order_acquire);
}
