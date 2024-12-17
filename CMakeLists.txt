 
cmake_minimum_required(VERSION 3.16)
project(ConversorDeUnidades C)

set(CMAKE_C_STANDARD 11)

# Adicione diretórios de cabeçalhos
include_directories(include)

# Adicione os arquivos de origem
add_executable(ConversorDeUnidades
    src/cli/main.c
    src/converters/converters.c
    src/utils/utils.c
)
