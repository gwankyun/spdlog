module;

#include <spdlog/async.h>

export module spdlog.async;
import std;

export namespace spdlog {
namespace details {
using spdlog::details::default_async_q_size;
}
using spdlog::async_factory;
}  // namespace spdlog
