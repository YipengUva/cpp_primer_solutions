#ifndef SCREEN_H_INCLUDED
#define SCREEN_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>

class Screen;

class Window_mgr
{
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);

private:
    std::vector<Screen> screens;
};

class Screen{
    friend void Window_mgr::clear(ScreenIndex);

public:
    typedef std::string::size_type pos;

    Screen() = default;
    Screen(pos ht, pos wd)
        : height(ht), width(wd), contents(ht*wd, ' ')
    {
    }
    Screen(pos ht, pos wd, char c)
        : height(ht), width(wd), contents(ht*wd, c)
    {
    }

    char get() const {return contents[cursor];}
    inline char get(pos ht, pos wd) const;

    Screen &move(pos r, pos c);
    Screen &set(char);
    Screen &set(pos, pos, char);

    Screen &display(std::ostream &os)
    { do_display(os); return *this; }
    const Screen &display(std::ostream &os) const
    { do_display(os); return *this; }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;

    void do_display(std::ostream &os) const
    { os << contents;}
};

char Screen::get(pos ht, pos wd) const
{
    return contents[ht * wd];
}

inline Screen &Screen::move(pos r, pos c)
{
    height = r;
    width = c;
    return *this;
}

inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
    contents[r*width + col] = ch;
    return *this;
}


void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}






#endif // SCREEN_H_INCLUDED
