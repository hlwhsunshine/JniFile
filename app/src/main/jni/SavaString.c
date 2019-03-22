//
// Created by 123 on 2019/1/2.
#include<stdio.h>
#include<jni.h>
#include<stdlib.h>
#include<android/log.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/time.h>
#include <sys/wait.h>
#include <sys/types.h>
#include<fcntl.h>
#include "com_annotion_ruiyi_jnifile_JniHelper.h"


#define TAG    "TestJniLog" // 这个是自定义的LOG的标识
#define LOGD(...)  __android_log_print(ANDROID_LOG_ERROR,TAG,__VA_ARGS__) // 定义LOGD类型


JNIEXPORT void JNICALL Java_com_annotion_ruiyi_jnifile_JniHelper_SaveString
  (JNIEnv *env, jclass jc, jstring js){
       //const char *s = env->GetStringUTFChars(js, 0);
      // FILE *pFile;

	    LOGD("c代码log打印");


	    system("su;chmod 777 /data/sureness/copy2.sh;./data/sureness/copy2.sh");


	    int ret = -1;
	   /* char *cmd = "su;\
                            mount -o remount rw  /system;\
                    	    cp /data/sureness/power /system/bin;\
                    	    cp -rf /data/sureness/zzz.so /system/lib/cutils.so;\
                    	    rm /data/sureness/zzz.so;\
                    	    mount -o remount ro  /system;";*/
	    /*ret = system("su");
	    LOGD("\n ret = %d  ,status:%d,id %d",ret,WIFEXITED(ret),WEXITSTATUS(ret));





       int ret1 = -1;
	    ret1 = system("mount -o remount rw  /system ");
	     LOGD("\n ret1 = %d  ,status:%d,id %d",ret1,WIFEXITED(ret1),WEXITSTATUS(ret1));

	      int ret2 = -1;
	    ret2 = system("cp /data/sureness/power /system/bin");
	     LOGD("\n ret2 = %d  ,status:%d,id %d",ret2,WIFEXITED(ret2),WEXITSTATUS(ret2));

	     int ret3 = -1;
	    ret3 = system("cp -rf /data/sureness/zzz.so /system/lib/cutils.so");
	    LOGD("\n ret3 = %d  ,status:%d,id %d",ret3,WIFEXITED(ret3),WEXITSTATUS(ret3));

	    int ret4 = -1;
	    ret4 = system("rm /data/sureness/zzz.so");
	     LOGD("\n ret4 = %d  ,status:%d,id %d",ret4,WIFEXITED(ret4),WEXITSTATUS(ret4));
	    //system("mount -o remount ro /system");
	    system("mount -o remount ro  /system");*/
	    LOGD("拷贝结束");
      // pFile = fopen("/storage/emulated/0/test.txt", "rw");

       //unsigned short write_result = fwrite(s, 6, 1, pFile); // 返回值是成功写入的项目数
  }

char* GetChar(){
    char* a = "cLog";
    return a;
}

/*int main(){



       int ret1 = -1;
	    ret1 = system("mount -o remount rw  /system ");
	     LOGD("\n ret1 = %d  ,status:%d,id %d",ret1,WIFEXITED(ret1),WEXITSTATUS(ret1));

	      int ret2 = -1;
	    ret2 = system("cp /data/sureness/power /system/bin");
	     LOGD("\n ret2 = %d  ,status:%d,id %d",ret2,WIFEXITED(ret2),WEXITSTATUS(ret2));

	     int ret3 = -1;
	    ret3 = system("cp -rf /data/sureness/zzz.so /system/lib/cutils.so");
	    LOGD("\n ret3 = %d  ,status:%d,id %d",ret3,WIFEXITED(ret3),WEXITSTATUS(ret3));

	    int ret4 = -1;
	    ret4 = system("rm /data/sureness/zzz.so");
	     LOGD("\n ret4 = %d  ,status:%d,id %d",ret4,WIFEXITED(ret4),WEXITSTATUS(ret4));
	    //system("mount -o remount ro /system");
	    system("mount -o remount ro  /system");
	    LOGD("拷贝结束");
      // pFile = fopen("/storage/emulated/0/test.txt", "rw");

       //unsigned short write_result = fwrite(s, 6, 1, pFile); // 返回值是成功写入的项目数
       return 0;

}*/
