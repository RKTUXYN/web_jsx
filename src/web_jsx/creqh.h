/**
* Copyright (c) 2018, SOW (https://www.safeonline.world). (https://github.com/RKTUXYN) All rights reserved.
* @author {SOW}
* Copyrights licensed under the New BSD License.
* See the accompanying LICENSE file for terms.
*/
//1:46 AM 1/28/2019
#if defined(_MSC_VER)
#pragma once
#endif//!_MSC_VER
#if !defined(_creqh_h)
#	define _creqh_h
#	include "util.h"
#	include <map>
#	include <string>
//#if !defined(FAST_CGI_APP)
namespace sow_web_jsx {
	namespace cgi_request {
		void get_global_obj(std::map<std::string, std::string>& global, std::string&root_dir, const char*app_path);
		void not_found_response(const char* content_type);
		void get_request_object(
			std::map<std::string, std::string>&request, std::map<std::string, std::string>&query_string,
			const req_method method
		);
	}
}
//#endif//!FAST_CGI_APP
#endif//_creqh_h