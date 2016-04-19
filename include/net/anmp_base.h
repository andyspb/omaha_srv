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



#ifndef _ANMP_BASE_H_
#define _ANMP_BASE_H_

#include "net_utils_base.h"

#define ANMP_SIGNATURE  0x0102010101010201LL  //Bender's nightmare

namespace epee
{
namespace anmp
{
#pragma pack(push)
#pragma pack(1)
	struct bucket_head
	{
		boost::int64_t m_signature;
		boost::int64_t m_cb;
		bool    m_have_to_return_data;
		boost::int32_t m_command;
		boost::int32_t m_return_code;
		boost::int32_t m_reservedA; //probably some flags in future
		boost::int32_t m_reservedB; //probably some check summ in future
	};
#pragma pack(pop)



	struct anmp_commands_handler
	{
		virtual int invoke(int command, const std::string& in_buff, std::string& buff_out, const net_utils::connection_context& context)=0;
		virtual int notify(int command, const std::string& in_buff, const net_utils::connection_context& context)=0;
	};


}
}


#endif //_ANMP_BASE_H_