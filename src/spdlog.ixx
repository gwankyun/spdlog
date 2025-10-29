module;

#include <spdlog/spdlog.h>

export module spdlog;
import std;

export namespace spdlog {
    using spdlog::default_logger_raw;
    using spdlog::warn;
    using spdlog::critical;
    using spdlog::info;
    using spdlog::debug;
    using spdlog::set_level;
    using spdlog::level_t;
    using spdlog::set_pattern;
    using spdlog::enable_backtrace;
    using spdlog::dump_backtrace;
    using spdlog::spdlog_ex;
    using spdlog::flush_every;
    using spdlog::apply_all;
    using spdlog::shutdown;
}
