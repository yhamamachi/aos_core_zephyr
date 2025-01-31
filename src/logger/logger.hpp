/*
 * Copyright (C) 2023 Renesas Electronics Corporation.
 * Copyright (C) 2023 EPAM Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef LOGGER_HPP_
#define LOGGER_HPP_

#include <aos/common/tools/log.hpp>

/**
 * Logger instance.
 */
class Logger {
public:
    /**
     * Local log modules.
     */
    enum class Module {
        eApp = static_cast<int>(aos::LogModuleEnum::eNumModules),
        eCMClient,
        eRunner,
        eStorage,
        eResourceMgr,
        eDownloader,
        eOCISpec,
        eResourceProvider,
    };

    /**
     * Inits logging system.
     */
    static void Init();

private:
    static void LogCallback(aos::LogModule module, aos::LogLevel level, const aos::String& message);
};

#endif
