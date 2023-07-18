// run68x - Human68k CUI Emulator based on run68
// Copyright (C) 2023 TcbnErik
//
// This program is free software; you can redistribute it and /or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110 - 1301 USA.

#ifndef HOST_WIN32_H
#define HOST_WIN32_H

#include "run68.h"

#ifdef _WIN32

bool IsOpendFile_win32(FILEINFO* finfop);
#define HOST_ISOPENDFILE IsOpendFile_win32

bool CloseFile_win32(FILEINFO* finfop);
#define HOST_CLOSEFILE CloseFile_win32

Long Mkdir_win32(Long name);
#define HOST_MKDIR Mkdir_win32

Long Rmdir_win32(Long name);
#define HOST_RMDIR Rmdir_win32

Long Chdir_win32(Long name);
#define HOST_CHDIR Chdir_win32

Long Curdir_win32(short drv, char* buf_ptr);
#define HOST_CURDIR Curdir_win32

Long Filedate_win32(short hdl, Long dt);
#define HOST_FILEDATE Filedate_win32

#endif
#endif
