/*
 * Copyright (C) 2017-2020 Alibaba Group Holding Limited
 *
 * SPDX-License-Identifier: GPL-2.0+
 */

#include <common.h>
#include <watchdog.h>
#include <command.h>
#include <netdev.h>
#include <asm/io.h>

DECLARE_GLOBAL_DATA_PTR;

int do_reset(cmd_tbl_t * cmdtp, int flag, int argc, char * const argv[])
{
    /* TODO: Implement this */
    return 0;
}

void relocate_code(ulong start_addr_sp, gd_t *new_gd, ulong relocaaddr)
{
    /* TODO: Implement this */
    while (1);
}

