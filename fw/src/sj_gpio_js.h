/*
 * Copyright (c) 2014-2016 Cesanta Software Limited
 * All rights reserved
 */

#ifndef CS_FW_SRC_SJ_GPIO_JS_H_
#define CS_FW_SRC_SJ_GPIO_JS_H_

#if defined(SJ_ENABLE_JS) && defined(SJ_ENABLE_GPIO_API)
struct v7;
void sj_gpio_api_setup(struct v7 *v7);
#endif

#endif /* CS_FW_SRC_SJ_GPIO_JS_H_ */
