////////////////////////////////////////////////////////////////////////
//
// Copyright 2014 PMC-Sierra, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you
// may not use this file except in compliance with the License. You may
// obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0 Unless required by
// applicable law or agreed to in writing, software distributed under the
// License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for
// the specific language governing permissions and limitations under the
// License.
//
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//
//   Author: Logan Gunthorpe
//
//   Date:   Oct 23 2014
//
//   Description:
//     Image Search CUDA Routines
//
////////////////////////////////////////////////////////////////////////

#ifndef __IMGREP_IMG_SEARCH_CUDA_H__
#define __IMGREP_IMG_SEARCH_CUDA_H__

#include "image.h"

#ifdef __cplusplus
extern "C" {
#endif

#include <cuda_runtime.h>

cudaError_t img_search_cuda_multiply(complex_cuda_px *x, complex_cuda_px *y,
                                     size_t bufsize, image_px divconst,
                                     cudaStream_t stream);



#ifdef __cplusplus
}
#endif


#endif
