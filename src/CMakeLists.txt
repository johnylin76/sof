# SPDX-License-Identifier: BSD-3-Clause

add_subdirectory(platform)
add_subdirectory(arch)
add_subdirectory(ipc)
add_subdirectory(audio)
add_subdirectory(lib)
add_subdirectory(math)
add_local_sources(sof spinlock.c)

if(CONFIG_LIBRARY)
	return()
endif()

add_subdirectory(debug)
add_subdirectory(drivers)
add_subdirectory(init)
add_subdirectory(schedule)

if (CONFIG_TRACE)
	add_subdirectory(trace)
endif()

if (CONFIG_PROBE)
	add_subdirectory(probe)
endif()

if (CONFIG_SMP)
	add_subdirectory(idc)
endif()
