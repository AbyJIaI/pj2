/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_rit_gpu_Cuda */

#ifndef _Included_edu_rit_gpu_Cuda
#define _Included_edu_rit_gpu_Cuda
#ifdef __cplusplus
extern "C" {
#endif
#undef edu_rit_gpu_Cuda_J_CU_CTX_SCHED_AUTO
#define edu_rit_gpu_Cuda_J_CU_CTX_SCHED_AUTO 0L
#undef edu_rit_gpu_Cuda_J_CU_CTX_SCHED_SPIN
#define edu_rit_gpu_Cuda_J_CU_CTX_SCHED_SPIN 1L
#undef edu_rit_gpu_Cuda_J_CU_CTX_SCHED_YIELD
#define edu_rit_gpu_Cuda_J_CU_CTX_SCHED_YIELD 2L
#undef edu_rit_gpu_Cuda_J_CU_CTX_SCHED_BLOCKING_SYNC
#define edu_rit_gpu_Cuda_J_CU_CTX_SCHED_BLOCKING_SYNC 4L
#undef edu_rit_gpu_Cuda_J_CU_CTX_SCHED_MASK
#define edu_rit_gpu_Cuda_J_CU_CTX_SCHED_MASK 7L
#undef edu_rit_gpu_Cuda_J_CU_CTX_MAP_HOST
#define edu_rit_gpu_Cuda_J_CU_CTX_MAP_HOST 8L
#undef edu_rit_gpu_Cuda_J_CU_CTX_LMEM_RESIZE_TO_MAX
#define edu_rit_gpu_Cuda_J_CU_CTX_LMEM_RESIZE_TO_MAX 16L
#undef edu_rit_gpu_Cuda_J_CU_CTX_FLAGS_MASK
#define edu_rit_gpu_Cuda_J_CU_CTX_FLAGS_MASK 31L
/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    is64BitPointer
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_edu_rit_gpu_Cuda_is64BitPointer
  (JNIEnv *, jclass);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuInit
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuInit
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuDeviceGetCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_edu_rit_gpu_Cuda_cuDeviceGetCount
  (JNIEnv *, jclass);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuDeviceGet
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_edu_rit_gpu_Cuda_cuDeviceGet
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuDeviceGetName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_edu_rit_gpu_Cuda_cuDeviceGetName
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuDeviceGetAttributeComputeCapabilityMajor
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_edu_rit_gpu_Cuda_cuDeviceGetAttributeComputeCapabilityMajor
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuDeviceGetAttributeComputeCapabilityMinor
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_edu_rit_gpu_Cuda_cuDeviceGetAttributeComputeCapabilityMinor
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuDeviceGetAttributeMultiprocessorCount
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_edu_rit_gpu_Cuda_cuDeviceGetAttributeMultiprocessorCount
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuCtxCreate
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_edu_rit_gpu_Cuda_cuCtxCreate
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuCtxDestroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuCtxDestroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuCtxSetCacheConfig
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuCtxSetCacheConfig
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuCtxGetCacheConfig
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_edu_rit_gpu_Cuda_cuCtxGetCacheConfig
  (JNIEnv *, jclass, jlong);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuMemAlloc
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_edu_rit_gpu_Cuda_cuMemAlloc
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuMemFree
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuMemFree
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuMemcpyHtoD
 * Signature: (JJI[BII)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuMemcpyHtoD__JJI_3BII
  (JNIEnv *, jclass, jlong, jlong, jint, jbyteArray, jint, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuMemcpyDtoH
 * Signature: (J[BIJII)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuMemcpyDtoH__J_3BIJII
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jlong, jint, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuMemcpyHtoD
 * Signature: (JJI[SII)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuMemcpyHtoD__JJI_3SII
  (JNIEnv *, jclass, jlong, jlong, jint, jshortArray, jint, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuMemcpyDtoH
 * Signature: (J[SIJII)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuMemcpyDtoH__J_3SIJII
  (JNIEnv *, jclass, jlong, jshortArray, jint, jlong, jint, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuMemcpyHtoD
 * Signature: (JJI[III)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuMemcpyHtoD__JJI_3III
  (JNIEnv *, jclass, jlong, jlong, jint, jintArray, jint, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuMemcpyDtoH
 * Signature: (J[IIJII)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuMemcpyDtoH__J_3IIJII
  (JNIEnv *, jclass, jlong, jintArray, jint, jlong, jint, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuMemcpyHtoD
 * Signature: (JJI[JII)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuMemcpyHtoD__JJI_3JII
  (JNIEnv *, jclass, jlong, jlong, jint, jlongArray, jint, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuMemcpyDtoH
 * Signature: (J[JIJII)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuMemcpyDtoH__J_3JIJII
  (JNIEnv *, jclass, jlong, jlongArray, jint, jlong, jint, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuMemcpyHtoD
 * Signature: (JJI[FII)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuMemcpyHtoD__JJI_3FII
  (JNIEnv *, jclass, jlong, jlong, jint, jfloatArray, jint, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuMemcpyDtoH
 * Signature: (J[FIJII)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuMemcpyDtoH__J_3FIJII
  (JNIEnv *, jclass, jlong, jfloatArray, jint, jlong, jint, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuMemcpyHtoD
 * Signature: (JJI[DII)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuMemcpyHtoD__JJI_3DII
  (JNIEnv *, jclass, jlong, jlong, jint, jdoubleArray, jint, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuMemcpyDtoH
 * Signature: (J[DIJII)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuMemcpyDtoH__J_3DIJII
  (JNIEnv *, jclass, jlong, jdoubleArray, jint, jlong, jint, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuModuleLoad
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_edu_rit_gpu_Cuda_cuModuleLoad
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuModuleUnload
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuModuleUnload
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuModuleGetFunction
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_edu_rit_gpu_Cuda_cuModuleGetFunction
  (JNIEnv *, jclass, jlong, jlong, jstring);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuModuleGetGlobal
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_edu_rit_gpu_Cuda_cuModuleGetGlobal
  (JNIEnv *, jclass, jlong, jlong, jstring);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuFuncSetCacheConfig
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuFuncSetCacheConfig
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     edu_rit_gpu_Cuda
 * Method:    cuLaunchKernel
 * Signature: (JJIIIIIIII[B[B)V
 */
JNIEXPORT void JNICALL Java_edu_rit_gpu_Cuda_cuLaunchKernel
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint, jint, jint, jint, jint, jint, jbyteArray, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
