// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#include <sodium.h>

#include "lib/kdf/kdf.h"

/**
 * Implementation for KDF sdhi.
 * . primary private key (psk): random generated
 * . primary public key: ppk = g^psk
 * . primary key: primary_key = ppk || psk
 * . private key: sk = 1 / (psk + hash(attr[0], attr[1], ...))
 * . public key: pk = g^sk
 */

void kdf_sdhi_init(kdf_t* /* kdf */, curve_t* /* curve */);
