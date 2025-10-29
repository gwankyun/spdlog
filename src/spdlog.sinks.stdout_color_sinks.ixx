module;

#include <spdlog/sinks/stdout_color_sinks.h>

export module spdlog.sinks.stdout_color_sinks;
import std;

export namespace spdlog {
    using spdlog::stdout_color_mt;
}
