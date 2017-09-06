//
// Created by james on 9/5/2017.
//

#ifndef SNAZEEENGINE_LOGGER_H
#define SNAZEEENGINE_LOGGER_H

#include <memory>

class Logger {
public:
    Logger();
    ~Logger();
private:
    struct Impl;
    std::unique_ptr<Impl> m_pImpl;
};

#endif //SNAZEEENGINE_LOGGER_H
