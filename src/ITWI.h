#pragma once
#ifndef GUL_HAL_ITWI_H
#define GUL_HAL_ITWI_H

#include <stdint.h>
#include <stddef.h>

namespace GuL::HAL
{
    class ITWI
    {
    public:
        virtual ~ITWI() = default;

        virtual void beginTransmission(uint8_t address) = 0;
        virtual uint8_t endTransmission() = 0;

        virtual bool write(uint8_t data) = 0;
        virtual bool write(uint8_t address, uint8_t *data, size_t length) = 0;
        virtual bool read(uint8_t address, uint8_t *buffer, size_t length) = 0;
    };

} // namespace GuL::hal
#endif // GUL_HAL_ITWI_H
