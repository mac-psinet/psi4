#include "test_common.h"
#include "geometry_2.h"

static const struct test_data test_data = {
	.files = files,
	.names = names,
	.geometry_xyzabc = xyzabc,
	.ref_energy = 0.0007440865,
	.opts = {
		.terms = EFP_TERM_ELEC | EFP_TERM_POL |
			 EFP_TERM_DISP | EFP_TERM_XR,
		.disp_damp = EFP_DISP_DAMP_TT
	}
};

DEFINE_TEST(total_2a)
