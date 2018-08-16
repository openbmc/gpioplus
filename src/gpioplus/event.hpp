#pragma once
#include <cstdint>
#include <gpioplus/chip.hpp>
#include <gpioplus/handle.hpp>
#include <gpioplus/internal/fd.hpp>
#include <optional>

namespace gpioplus
{

struct EventFlags
{
    bool rising_edge;
    bool falling_edge;

    uint32_t toInt() const;
};

class Event
{
  public:
    Event(const Chip& chip, uint32_t line_offset, HandleFlags handle_flags,
          EventFlags event_flags, const char* consumer_label);

    const internal::Fd& getFd() const;

    struct Data
    {
        uint64_t timestamp;
        uint32_t id;
    };
    std::optional<Data> read() const;

    uint8_t getValue() const;

  private:
    internal::Fd fd;
};

} // namespace gpioplus
