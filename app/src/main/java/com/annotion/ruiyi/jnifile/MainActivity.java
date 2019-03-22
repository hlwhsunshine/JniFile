package com.annotion.ruiyi.jnifile;

import android.os.Environment;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;

import java.io.BufferedReader;
import java.io.DataOutputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class MainActivity extends AppCompatActivity {
    public String path = Environment.getExternalStorageDirectory().toString()+"/ARMM";
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        findViewById(R.id.bt).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                //JniHelper.SaveString("dsklfa");
                excScript("copy.sh",path);
                //excScript();
            }
        });

    }

    /**
     * 执行脚本
     * @param path
     * @return
     */
    public static int excScript(String filename,String path){

        Process process = null;
        OutputStream out = null;

        try {
            process = Runtime.getRuntime().exec("su");
            out = process.getOutputStream();
            DataOutputStream dataOutputStream = new DataOutputStream(out);

            dataOutputStream.writeBytes("cp "+ path+"/"+filename +" /data/" + "\n");

            dataOutputStream.writeBytes("chmod 777 /data/"+filename
                    + "\n");

            dataOutputStream
                    .writeBytes("./data/"+filename+" "+path);

            dataOutputStream.flush();
            // 关闭流操作
            dataOutputStream.close();
            out.close();

            int value = process.waitFor();
            Log.e("liux","code:"+value);
            process.destroy();
            //回调执行结果
            return value;
        } catch (Exception e) {
            //发生异常
            return -2;
        }

    }

    public static int excScript(){

        Process process = null;
        OutputStream out = null;

        try {
            process = Runtime.getRuntime().exec("su");
            out = process.getOutputStream();
            DataOutputStream dataOutputStream = new DataOutputStream(out);


            dataOutputStream.writeBytes("chmod 777 /data/sureness/copy2.sh" +"\n");

            dataOutputStream.writeBytes("./data/sureness/copy2.sh");

            dataOutputStream.flush();
            // 关闭流操作
            dataOutputStream.close();
            out.close();

            int value = process.waitFor();
            Log.e("liux","code:"+value);
            process.destroy();
            //回调执行结果
            return value;
        } catch (Exception e) {
            //发生异常
            return -2;
        }

    }

}
