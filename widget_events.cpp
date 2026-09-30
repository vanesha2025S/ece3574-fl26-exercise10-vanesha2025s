// widget_events.cpp

#include "widget_events.hpp"

#include <iostream>

WidgetEvent::WidgetEvent(QWidget *parent)
    : QWidget(parent)
{
}

bool WidgetEvent::event(QEvent *event)
{
    std::cout << "Event: " << event << std::endl;

    return true;
}