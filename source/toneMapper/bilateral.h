#pragma once

#include "core/toneMapper.h"

namespace shdr {

class BilateralToneMapper : public ToneMapper {
public:
	BilateralToneMapper();
	void solve(cv::Mat hdri, cv::Mat &ldri);

	float _delta;
};

} // namespace shdr