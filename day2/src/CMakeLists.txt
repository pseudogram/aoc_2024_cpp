
# Copy a config file to another file (why do this? no idea)
configure_file(codeConfig.h.in codeConfig.h)

add_library(src main.cpp)
