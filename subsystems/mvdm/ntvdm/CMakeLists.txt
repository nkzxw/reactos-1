
PROJECT(NTVDM)

include_directories(${REACTOS_SOURCE_DIR}/include/reactos/libs/fast486)

spec2def(ntvdm.exe ntvdm.spec ADD_IMPORTLIB)

list(APPEND SOURCE
    bios/bios32/bios32.c
    bios/bios32/kbdbios32.c
    bios/bios32/vidbios32.c
    bios/bios32/moubios32.c
    bios/bios32/ems.c
    bios/bios.c
    bios/kbdbios.c
    bios/rom.c
    bios/vidbios.c
    cpu/bop.c
    cpu/callback.c
    cpu/cpu.c
    cpu/registers.c
    hardware/cmos.c
    hardware/dma.c
    hardware/keyboard.c
    hardware/mouse.c
    hardware/pic.c
    hardware/pit.c
    hardware/ps2.c
    hardware/sound/speaker.c
    hardware/video/vga.c
    dos/dos32krnl/bios.c
    dos/dos32krnl/dos.c
    dos/dos32krnl/dosfiles.c
    dos/mouse32.c
    dos/dem.c
    clock.c
    emulator.c
    int32.c
    io.c
    memory.c
    utils.c
    vddsup.c
    ntvdm.c
    ntvdm.rc
    ${CMAKE_CURRENT_BINARY_DIR}/ntvdm.def)

add_executable(ntvdm ${SOURCE})
set_module_type(ntvdm win32cui UNICODE IMAGEBASE 0x0F000000)
target_link_libraries(ntvdm fast486 ${PSEH_LIB})
add_importlibs(ntvdm user32 gdi32 advapi32 msvcrt kernel32 ntdll)
add_cd_file(TARGET ntvdm DESTINATION reactos/system32 FOR all)
