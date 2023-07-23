#pragma once

#include "../Singleton/Singleton.hpp"

class Setting : public Singleton<Setting>
{
public:
    int GetWidth() const;
    int GetHeight() const;

private:
    friend class Singleton<Setting>;

    int width = 1024;
    int height = 768;
};