add_executable(setvis)

target_sources(setvis PUBLIC
    set_visualizer.cpp
    main.cpp
    terminal.cpp
)

target_compile_options(setvis PUBLIC
    -Wall
    -Wextra
    -Wpedantic
    -std=c++20
    -g
)
