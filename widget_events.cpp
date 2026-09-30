// widget_events.cpp

#include "widget_events.hpp"

#include <iostream>
#include <string>
WidgetEvent::WidgetEvent(QWidget *parent)
    : QWidget(parent)
{
}

bool WidgetEvent::event(QEvent *event)
{
    std::cout << "Event: " << event << std::endl;

    std::string input;
    std::cout << "Enter something: ";
    std::cin >> input;

    return true;
}