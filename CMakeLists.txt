cmake_minimum_required(VERSION 3.10)

project(TowerCPP CXX)

set(CMAKE_CXX_STANDARD 17)

# Inclui headers
include_directories(include)
include_directories(libraries/raylib/src)

# Adiciona a Raylib como subdiretório
add_subdirectory(libraries/raylib)

# Pega todos os arquivos .cpp recursivamente na pasta src
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Cria o executável
add_executable(TowerCPP ${SOURCES})

# Linka com Raylib e dependências do sistema
if(WIN32)
    target_link_libraries(TowerCPP raylib winmm gdi32)
elseif(APPLE)
    target_link_libraries(TowerCPP raylib m)
else()
    target_link_libraries(TowerCPP raylib m pthread dl rt GL)
endif()

# Copia a pasta assets após build
add_custom_command(TARGET TowerCPP POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/assets $<TARGET_FILE_DIR:TowerCPP>/assets
)

# Comando make run
add_custom_target(run
    COMMAND TowerCPP
    DEPENDS TowerCPP
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)