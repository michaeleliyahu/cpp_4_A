#pragma once
namespace pandemic
{

    class Color
    {
    public:
        enum color_list
        {
            Yellow,
            Red

        };
        Color::color_list _color;
        Color(Color::color_list color)
        {
            this->_color = color;
        }
    };
}