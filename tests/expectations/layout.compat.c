#define CBINDGEN_PACKED     __attribute__ ((packed))
#define CBINDGEN_ALIGNED(n) __attribute__ ((aligned(n)))


#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct RustAlign4Struct RustAlign4Struct;

typedef struct RustAlign4Union RustAlign4Union;

typedef struct RustPackedStruct RustPackedStruct;

typedef struct RustPackedUnion RustPackedUnion;

typedef struct UnsupportedAlign4Enum UnsupportedAlign4Enum;

typedef struct UnsupportedPacked4Struct UnsupportedPacked4Struct;

typedef struct UnsupportedPacked4Union UnsupportedPacked4Union;

typedef struct CBINDGEN_ALIGNED(1) {
  uintptr_t arg1;
  uint8_t *arg2;
} Align1Struct;

typedef struct CBINDGEN_ALIGNED(2) {
  uintptr_t arg1;
  uint8_t *arg2;
} Align2Struct;

typedef struct CBINDGEN_ALIGNED(4) {
  uintptr_t arg1;
  uint8_t *arg2;
} Align4Struct;

typedef struct CBINDGEN_ALIGNED(8) {
  uintptr_t arg1;
  uint8_t *arg2;
} Align8Struct;

typedef struct CBINDGEN_ALIGNED(32) {
  uintptr_t arg1;
  uint8_t *arg2;
} Align32Struct;

typedef struct CBINDGEN_PACKED {
  uintptr_t arg1;
  uint8_t *arg2;
} PackedStruct;

typedef union CBINDGEN_ALIGNED(1) {
  uintptr_t variant1;
  uint8_t *variant2;
} Align1Union;

typedef union CBINDGEN_ALIGNED(4) {
  uintptr_t variant1;
  uint8_t *variant2;
} Align4Union;

typedef union CBINDGEN_ALIGNED(16) {
  uintptr_t variant1;
  uint8_t *variant2;
} Align16Union;

typedef union CBINDGEN_PACKED {
  uintptr_t variant1;
  uint8_t *variant2;
} PackedUnion;
