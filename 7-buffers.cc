#include "nbind/api.h"

void range(nbind::Buffer buf) {
  size_t length = buf.length();
  unsigned char *data = buf.data();

  if(!data || !length) return;

  for(size_t pos = 0; pos < length; ++pos) {
    data[pos] = pos;
  }

  buf.commit();
}

#include "nbind/nbind.h"

NBIND_GLOBAL() {
  function(range);
}
