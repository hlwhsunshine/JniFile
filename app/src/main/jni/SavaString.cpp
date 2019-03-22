//
// Created by 123 on 2019/1/2.
#include<stdio.h>
#include<jni.h>
#include<stdlib.h>
#include<android/log.h>
#include<cstring>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/time.h>
#include<fcntl.h>
#include "com_annotion_ruiyi_jnifile_JniHelper.h"


#define TAG    "TestJniLog" // 这个是自定义的LOG的标识
#define LOGD(...)  __android_log_print(ANDROID_LOG_ERROR,TAG,__VA_ARGS__) // 定义LOGD类型


JNIEXPORT void JNICALL Java_com_annotion_ruiyi_jnifile_JniHelper_SaveString
  (JNIEnv *env, jclass jc, jstring js){
       //const char *s = env->GetStringUTFChars(js, 0);
      // FILE *pFile;

	    LOGD("c代码log打印");
	    system("su");
	    system("mount -o remount,rw -t yaffs2 /dev/block/mtdblock3 /system ");
	    system("cp /data/sureness/power /system/bin");
	    system("cp -rf /data/sureness/zzz.so /system/lib/cutils.so");
	    system("cp -rf /data/sureness/zzz.so /data/sureness/cutils.so");
	    //system("mount -o remount ro /system");
	    system("mount -o remount,ro -t yaffs2 /dev/block/mtdblock3 /system ");
	    LOGD("拷贝结束");
      // pFile = fopen("/storage/emulated/0/test.txt", "rw");

       //unsigned short write_result = fwrite(s, 6, 1, pFile); // 返回值是成功写入的项目数
  }

char* GetChar(){
    char* a = "cLog";
    return a;
}
