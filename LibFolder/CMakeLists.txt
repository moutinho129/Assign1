set (LIB_SRCS MyDLL.c MyDLL.h)

set(LIB_TYPE STATIC)

add_library(LibFolder ${LIB_TYPE} ${LIB_SRCS})