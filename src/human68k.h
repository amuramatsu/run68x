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

#ifndef HUMAN68K_H
#define HUMAN68K_H

// DOSコールエラー番号
#define DOSE_SUCCESS 0
#define DOSE_ILGFNC -1
#define DOSE_NODIR -3
#define DOSE_BADF -6
#define DOSE_ILGFNAME -13
#define DOSE_ILGDRV -15
#define DOSE_RDONLY -19
#define DOSE_EXISTDIR -20
#define DOSE_NOTEMPTY -21

// バッファサイズ定数
#define HUMAN68K_PATH_MAX 65

#endif
