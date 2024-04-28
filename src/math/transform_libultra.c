#include "transform_libultra.h"

void transformToMatrixL(struct Transform* in, Mtx* mtx, float sceneScale) {
    float mtxf[4][4];
    transformToMatrix(in, mtxf, sceneScale);
    guMtxF2L(mtxf, mtx);
}