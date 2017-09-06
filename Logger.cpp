//
// Created by james on 9/5/2017.
//

#include "Logger.h"

struct Logger::Impl {
    char* someData;
    int number;
};

Logger::~Logger() = default;
Logger::Logger() : m_pImpl(std::make_unique<Impl>()) {}