// mojo/public/mojom/base/read_only_buffer.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');







goog.provide('mojoBase.mojom.ReadOnlyBufferSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.ReadOnlyBufferSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mojoBase.mojom.ReadOnlyBufferSpec.$,
    'ReadOnlyBuffer',
    8,
    [
      mojo.internal.StructField(
        'buffer', 0,
        0,
        mojo.internal.Array(mojo.internal.Uint8, false),
        null,
        false /* nullable */),
    ]);



goog.provide('mojoBase.mojom.ReadOnlyBuffer');


/**
 * @typedef { {
 *   buffer: !Array<!number>,
 * } }
 */

mojoBase.mojom.ReadOnlyBuffer;

