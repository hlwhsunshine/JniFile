package com.annotion.ruiyi.jnifile;

/**
 * Function:
 * Project:JniFile
 * Date:2019/1/2
 * Created by xiaojun .
 */

public class JniHelper {
    static {
        System.loadLibrary("AndroidJni");
    }
    public static native void SaveString(String s);
}
