/* SPDX-License-Identifier: LGPL-2.1+ */
/***
  This file is part of systemd.

  Copyright 2016 Susant Sahani
***/

#pragma once

#include "in-addr-util.h"
#include "conf-parser.h"
#include "netlog-manager.h"



const struct ConfigPerfItem* netlog_gperf_lookup (register const char *str, register unsigned int len);
int config_parse_netlog_remote_address(const char *unit,
                                       const char *filename,
                                       unsigned line,
                                       const char *section,
                                       unsigned section_line,
                                       const char *lvalue,
                                       int ltype,
                                       const char *rvalue,
                                       void *data,
                                       void *userdata);
int manager_parse_config_file(Manager *m);
