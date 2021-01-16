aux_source_directory(./ DIR_LIB_SRCS)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
add_library(lib7_1_shared SHARED ${DIR_LIB_SRCS})