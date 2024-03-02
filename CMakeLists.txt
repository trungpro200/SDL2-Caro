cmake_minimum_required(VERSION 3.5)
project(SDL_Caro)


find_package (SDL2 REQUIRED)

# Add the executable target
add_executable(SDL_Caro
    main.cpp
    src/lib/gameLogic.cpp
    src/lib/Button.cpp
    src/lib/DataStructs.cpp
)



# Set include directories
target_include_directories(SDL_Caro PRIVATE src/include)

# Set library directories
target_link_directories(SDL_Caro PRIVATE src/lib)

#Linking libraries
target_link_libraries(SDL_Caro PRIVATE
    ${SDL2_LIBRARIES}
)

add_definitions(-DSDL_MAIN_HANDLED)