#pragma once

// C3 board selection is independent of the processor selected in Arduino IDE.
// ESP32-S3 builds ignore this setting. Keep the original Super Mini default.
#define FRIDGE_C3_BOARD_SUPER_MINI 0
#define FRIDGE_C3_BOARD_MOYU_AI_V111 1
#ifndef FRIDGE_C3_BOARD_TYPE
#define FRIDGE_C3_BOARD_TYPE FRIDGE_C3_BOARD_SUPER_MINI
#endif

// Select exactly one physical panel; F53 uses JD79665CA, not F52's controller.
#define FRIDGE_PANEL_GDEM075F52 0
#define FRIDGE_PANEL_GDEM0397F81 1
#define FRIDGE_PANEL_GDEY042Z98 2
#define FRIDGE_PANEL_GDEM075F53 3
#ifndef FRIDGE_PANEL_TYPE
#define FRIDGE_PANEL_TYPE FRIDGE_PANEL_GDEM075F52
#endif
