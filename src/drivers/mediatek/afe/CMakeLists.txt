# SPDX-License-Identifier: BSD-3-Clause

add_local_sources(sof afe-memif.c afe-dai.c afe-drv.c)
if(CONFIG_MT8186)
        add_subdirectory(mt8186)
endif()
if(CONFIG_MT8188)
        add_subdirectory(mt8188)
endif()
if(CONFIG_MT8195)
        add_subdirectory(mt8195)
endif()
if(CONFIG_MT8196)
        add_subdirectory(mt8196)
endif()
if(CONFIG_MT8365)
        add_subdirectory(mt8365)
endif()
