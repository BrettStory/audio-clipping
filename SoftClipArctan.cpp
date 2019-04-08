#include "SoftClipArctan.hpp"
#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif // !_USE_MATH_DEFINES
#include <cmath>

namespace brettstory {
	namespace audio {
		namespace clipping {
			double SoftClipArctan::ClipSample(double sample) {
				return atan(sample) * (M_2_PI);
			}
		}
	}
}