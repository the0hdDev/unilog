//
// Created by Theo Wimber on 14.09.25.
//

#include "log_to_console.h"

namespace console {
    log::log() {};
    log::~log() = default;
    void log::setLogLevel(uint8_t level)
    {
        level = log::m_logLevel;
    }

    template<typename T>
    void log::error(const T &msg, const uint16_t code)
    {

    }



} // console