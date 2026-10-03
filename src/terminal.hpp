#ifndef TERMINAL_HPP
#define TERMINAL_HPP

namespace asciid{

    enum class Color {
    Black = 30,
    Red,
    Green,
    Yellow,
    Blue,
    Magenta,
    Cyan,
    White
};


class Terminal {
public:
    static void clear();
    static void setTextColor(Color c);
    static void resetTextColor();
    
};

} //namespace asciid
#endif