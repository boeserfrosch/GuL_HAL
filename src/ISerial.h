#ifndef GUL_HAL_ISERIAL_H
#define GUL_HAL_ISERIAL_H

#include <stdint.h>
#include <stddef.h>

namespace GuL::HAL
{
    class ISerial
    {
    public:
        virtual ~ISerial() = default;

        virtual int available() = 0;
        virtual int peek() = 0;
        virtual int read() = 0;
        virtual size_t write(uint8_t byte) = 0;
        virtual size_t write(const uint8_t *buffer, size_t size) = 0;
    };
}
// namespace GuL::HAL

#endif