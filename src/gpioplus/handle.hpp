#pragma once
#include <cstdint>
#include <gpioplus/chip.hpp>
#include <gpioplus/internal/fd.hpp>
#include <string_view>
#include <vector>

namespace gpioplus
{

struct HandleFlags
{
    bool output;
    bool active_low;
    bool open_drain;
    bool open_source;

    HandleFlags() = default;
    explicit HandleFlags(LineFlags line_flags);

    uint32_t toInt() const;
};

class Handle
{
  public:
    struct Line
    {
        uint32_t offset;
        uint8_t default_value;
    };
    Handle(const Chip& chip, const std::vector<Line>& lines, HandleFlags flags,
           std::string_view consumer_label);

    const internal::Fd& getFd() const;

    std::vector<uint8_t> getValues() const;
    void getValues(std::vector<uint8_t>& values) const;
    void setValues(const std::vector<uint8_t>& values) const;

  private:
    internal::Fd fd;
    uint32_t nlines;
};

} // namespace gpioplus
