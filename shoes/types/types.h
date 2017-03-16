#include "shoes/types/button.h"
#include "shoes/types/edit_box.h"
#include "shoes/types/edit_line.h"
#include "shoes/types/effect.h"
#include "shoes/types/list_box.h"
#include "shoes/types/progress.h"
#include "shoes/types/slider.h"
#include "shoes/types/spinner.h"
#include "shoes/types/svg.h"
#include "shoes/types/switch.h"
#include "shoes/types/video.h"

#define SHOES_TYPES_INIT \
	shoes_button_init(); \
	shoes_edit_box_init(); \
	shoes_edit_line_init(); \
	shoes_effect_init(); \
	shoes_list_box_init(); \
	shoes_progress_init(); \
	shoes_slider_init(); \
	shoes_spinner_init(); \
	shoes_svg_init(); \
	shoes_switch_init(); \
	shoes_video_init();
