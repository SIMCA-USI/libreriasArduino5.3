#pragma once

#include <sdkconfig.h>

#ifdef CONFIG_ENABLE_ESP_INSIGHTS_TRACE
#define MATTER_TRACING_ENABLED 1
#else
#define MATTER_TRACING_ENABLED 0
#endif
