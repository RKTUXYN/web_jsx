/**
* Copyright (c) 2018, SOW (https://www.safeonline.world). (https://github.com/RKTUXYN) All rights reserved.
* @author {SOW}
* Copyrights licensed under the New BSD License.
* See the accompanying LICENSE file for terms.
*/
//1:25 PM 1/20/2019
#if defined(_MSC_VER)
#pragma once
#endif//!_MSC_VER
#if !defined(_template_reader_h)
#	define template_reader_h
#	include "template_info.h"
#	include <vector>
namespace sow_web_jsx {
	namespace template_reader {
		int read_template(template_result&tr, 
			const char* rootDir, 
			std::vector<std::string>&templates,
			std::string&parent_template,
			std::string&source);
	};
};
#endif//!template_reader_h