module;

#include <spdlog/sinks/rotating_file_sink.h>

export module spdlog.sinks.rotating_file_sink;
import std;

export namespace spdlog {
    using spdlog::rotating_logger_mt;
    using spdlog::rotating_logger_st;
}
