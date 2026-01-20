#pragma once

/* ---------------------------------------------------------- */
#include <chrono>
/* ---------------------------------------------------------- */

namespace utils
{

    class Timer
    {
        std::chrono::high_resolution_clock::time_point start;

    public:
        Timer() { reset(); }
        void reset() { start = std::chrono::high_resolution_clock::now(); }

        double ms() const
        {
            return std::chrono::duration<double, std::milli>(
                       std::chrono::high_resolution_clock::now() - start)
                .count();
        }
    };

}
