#include "stylehelper.h"



QString stylehelper::getStartButtonStyle()
{
    return "QPushButton{"
            " color: rgb(255, 255, 255);"
            "border-radius:19px;"
            "background-color: rgb(170, 0, 255);"
            "font: 700 italic 14pt Roboto Medium;"
           "}"
           "QPushButton::hover{"
            "background-color: rgb(145, 0, 217);"
            "}"
            "QPushButton::pressed{"
            "background-color: rgb(170, 0, 127);"
             "}";
}


QString stylehelper::getStartpushgButtonStyle()
{
    return "QPushButton{"
           " color: rgb(255, 255, 255);"
            "border-radius:19px;"
            "background-color: rgb(0, 139, 241);"
            "font: 700 italic 16pt Roboto Medium;"
           "}"
           "QPushButton::hover{"
            "background-color:rgb(0, 67, 202);"
            "}"
            "QPushButton::pressed{"
            "background-color: rgb(255, 0, 0);"
             "}";

}

QString stylehelper::getStoppushgButtonStyle()
{
    return "QPushButton{"
               " color: rgb(255, 255, 255);"
                "border-radius:19px;"
                "background-color: rgb(255, 0,0);"
                "font: 700 italic 16pt Roboto Medium;"
               "}"
               "QPushButton::hover{"
                "background-color:rgb(0, 67, 202);"
                "}"
                ;
}


