#pragma once

#ifndef SPDLOG_MODULE_EXPORT
    #ifdef SPDLOG_MODULE
        #define SPDLOG_MODULE_EXPORT export
    #else
        #define SPDLOG_MODULE_EXPORT
    #endif  // SPDLOG_MODULE
#endif      // !SPDLOG_MODULE_EXPORT

#ifndef SPDLOG_MODULE_INLINE
    #ifdef SPDLOG_MODULE_HEADER_ONLY
        #define SPDLOG_MODULE_INLINE inline
    #else
        #define SPDLOG_MODULE_INLINE
    #endif  // SPDLOG_MODULE_HEADER_ONLY
#endif      // !SPDLOG_MODULE_INLINE

#ifndef SPDLOG_MODULE_INLINE_VARIABLE
    #ifdef SPDLOG_MODULE
        #define SPDLOG_MODULE_INLINE_VARIABLE inline
    #else
        #define SPDLOG_MODULE_INLINE_VARIABLE static
    #endif  // SPDLOG_MODULE
#endif      // !SPDLOG_MODULE_INLINE_VARIABLE

#ifndef SPDLOG_CXX
    #ifdef _MSC_VER
        #define SPDLOG_CXX _MSVC_LANG
    #else
        #define SPDLOG_CXX __cplusplus
    #endif
#endif  // !SPDLOG_CXX

#ifndef SPDLOG_CXX_11
    #define SPDLOG_CXX_11 201103L
#endif  // !SPDLOG_CXX_11
