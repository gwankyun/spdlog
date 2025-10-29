module;

#include <spdlog/cfg/env.h>

export module spdlog.cfg.env;
import std;

export namespace spdlog {
namespace cfg {
using spdlog::cfg::load_env_levels;
}
}  // namespace spdlog
