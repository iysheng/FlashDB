/*
 * Copyright (c) 2020, Armink, <armink.ztl@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief configuration file
 */

#ifndef _FDB_CFG_H_
#define _FDB_CFG_H_

/* #define FDB_USING_FILE_POSIX_MODE */


#define FDB_USING_FAL_MODE
extern void rt_kprintf(const char *fmt, ...);
#define FDB_PRINT(...)             rt_kprintf(__VA_ARGS__)
/* log print macro. default EF_PRINT macro is printf() */
/* #define FDB_PRINT(...)              my_printf(__VA_ARGS__) */

/* print debug information */
#define FDB_DEBUG_ENABLE

#endif /* _FDB_CFG_H_ */
