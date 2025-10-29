module;

#include <spdlog/sinks/daily_file_sink.h>

export module spdlog.sinks.daily_file_sink;
import std;

export namespace spdlog {
    using spdlog::daily_logger_mt;
}
