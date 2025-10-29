module;

#include <spdlog/sinks/callback_sink.h>

export module spdlog.sinks.callback_sink;
import std;

export namespace spdlog {
namespace details {
using spdlog::details::log_msg;
}
using spdlog::callback_logger_mt;
}  // namespace spdlog
