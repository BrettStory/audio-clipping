namespace brettstory {
	namespace audio {
		namespace clipping {
			class SoftClipArctan {
			public:
				static double ClipSample(double sample, double boost);

			private:
				SoftClipArctan() {
				}
			};
		}
	}
}