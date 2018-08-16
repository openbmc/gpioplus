#pragma once
#include <cstdint>
#include <gpioplus/internal/fd.hpp>
#include <gpioplus/internal/sys.hpp>
#include <string>

namespace gpioplus
{

struct ChipInfo
{
    std::string name;
    std::string label;
    uint32_t lines;
};

struct LineFlags
{
    bool kernel;
    bool output;
    bool active_low;
    bool open_drain;
    bool open_source;

    LineFlags(uint32_t flags);
};

struct LineInfo
{
    LineFlags flags;
    std::string name;
    std::string consumer;
};

class Chip
{
  public:
    Chip(unsigned id, const internal::Sys* sys = &internal::sys_impl);

    ChipInfo getChipInfo() const;
    LineInfo getLineInfo(uint32_t offset) const;

    const internal::Fd& getFd() const;

  private:
    internal::Fd fd;
};

} // namespace gpioplus
