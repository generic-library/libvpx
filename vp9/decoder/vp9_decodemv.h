/*
 *  Copyright (c) 2010 The WebM project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#ifndef VP9_DECODER_VP9_DECODEMV_H_
#define VP9_DECODER_VP9_DECODEMV_H_

#include "vp9/decoder/vp9_reader.h"

#ifdef __cplusplus
extern "C" {
#endif

struct TileInfo;

void vp9_read_mode_info(VP9_COMMON *cm, MACROBLOCKD *xd,
                        const struct TileInfo *const tile,
#if CONFIG_SUPERTX
                        int supertx_enabled,
#endif
#if CONFIG_COPY_MODE
#if CONFIG_EXT_PARTITION
                        PARTITION_TYPE partition,
#endif
#endif
                        int mi_row, int mi_col, vp9_reader *r);
#if CONFIG_NEW_QUANT && QUANT_PROFILES > 1
int vp9_read_dq_profile(VP9_COMMON *cm, vp9_reader *r);
#endif  // CONFIG_NEW_QUANT && QUANT_PROFILES > 1

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // VP9_DECODER_VP9_DECODEMV_H_
