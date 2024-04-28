#ifndef TRANSFORM_LIBULTRA_H
#define TRANSFORM_LIBULTRA_H

#include "transform.h"

#include <ultra64.h>

void transformToMatrixL(struct Transform* in, Mtx* mtx, float sceneScale);

#endif // TRANSFORM_LIBULTRA_H