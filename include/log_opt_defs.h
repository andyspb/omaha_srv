// Copyright (c) 2006-2013, Andrey N. Sabelnikov, www.sabelnikov.net
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
// * Redistributions in binary form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer in the
// documentation and/or other materials provided with the distribution.
// * Neither the name of the Andrey N. Sabelnikov nor the
// names of its contributors may be used to endorse or promote products
// derived from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER  BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// 


#ifndef _LOG_OPT_DEFS_H_
#define _LOG_OPT_DEFS_H_



#define MISC_LOG_REG_NAME_ENABLE_LOG    "EnableDebugLog"
#define MISC_LOG_REG_NAME_LOG_LEVEL     "DebugLogLevel"
#define MISC_LOG_REG_NAME_LOG_PATH      "DebugLogPath"


//глобальная структура о дебаг инфе
#define MISC_LOG_DEBUG_NO_LOG_DATE				0x0001
#define MISC_LOG_DEBUG_WRITE_LOGFILES			0x0002
#define MISC_LOG_DEBUG_TRACE_DEBUG				0x0004
#define MISC_LOG_DEBUG_HELP						0x0008
#define MISC_LOG_DEBUG_TEXTONLY					0x0010
#define MISC_LOG_DEBUG_LOG_THREADID				0x0020
#define MISC_LOG_DEBUG_LOG_PROCID				0x0040

#define MISC_LOG_DEBUG_ALLOCATE_CONSOLE			0x1000
#define MISC_LOG_DEBUG_FORCE_LOG_DIRECT			0x2000

#endif //_LOG_OPT_DEFS_H_
