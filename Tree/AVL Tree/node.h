#pragma once

class node
{
public:
    int data;
    node *lcl, *rcl;
    int height;

    node()
    {
        lcl = nullptr;
        rcl = nullptr;
        height = 0;
    }
};