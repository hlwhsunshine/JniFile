LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_LDLIBS :=-llog
LOCAL_MODULE    := AndroidJni
LOCAL_SRC_FILES := SavaString.c


include $(BUILD_SHARED_LIBRARY)
#include $(BUILD_EXECUTABLE)