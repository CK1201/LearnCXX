aux_source_directory(. DIR_LIB_SRCS)
set(LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
add_library(lib7_2_shared SHARED ${DIR_LIB_SRCS})