#ifndef _IMG_LIB_H
#define _IMG_LIB_H
#include "region_layer.h"
#include "utils.h"
static void ai_done(void *ctx);

static int dvp_irq(void *ctx);

static void io_mux_init(void);

static void io_set_power(void);

void draw_edge(uint32_t *gram, obj_info_t *obj_info, uint32_t index, uint16_t color);

void cpu_ini();

void model_load();

void cam_ini();

void run_model();
#endif