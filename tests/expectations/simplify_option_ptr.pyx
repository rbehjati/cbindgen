from libc.stdint cimport int8_t, int16_t, int32_t, int64_t, intptr_t
from libc.stdint cimport uint8_t, uint16_t, uint32_t, uint64_t, uintptr_t
cdef extern from *:
  ctypedef bint bool
  ctypedef struct va_list

cdef extern from *:

  ctypedef struct Opaque:
    pass

  ctypedef struct Option_____Opaque:
    pass

  ctypedef struct Foo:
    const Opaque *x;
    Opaque *y;
    void (*z)();
    void (**zz)();

  ctypedef union Bar:
    const Opaque *x;
    Opaque *y;
    void (*z)();
    void (**zz)();

  void root(const Opaque *a,
            Opaque *b,
            Foo c,
            Bar d,
            Option_____Opaque *e,
            void (*f)(const Opaque*));
