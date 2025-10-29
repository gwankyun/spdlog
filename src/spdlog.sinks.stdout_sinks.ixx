module;

#include <spdlog/sinks/stdout_sinks.h>

export module spdlog.sinks.stdout_sinks;
import std;

export namespace spdlog {
    using spdlog::stdout_logger_mt;
    using spdlog::stdout_logger_st;
    using spdlog::stderr_logger_mt;
    using spdlog::stderr_logger_st;
}
