aux_source_directory(. DIR_LIB_SRCS)
set(LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
add_library(lib10_8_shared SHARED ${DIR_LIB_SRCS})