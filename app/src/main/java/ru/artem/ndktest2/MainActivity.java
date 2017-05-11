package ru.artem.ndktest2;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("native-lib");
        System.loadLibrary("native-lib-2");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView tv = (TextView) findViewById(R.id.sample_text);
        TextView tv2 = (TextView) findViewById(R.id.sample_text_2);

        int [] result = getTestIntArray("ЛЕПС");
        int [] result2 = getTestIntArray2("ЛЕПС");

        tv.setText("size 1 = " + result.length);
        tv2.setText("size 2 = " + result2.length);

        for(int i = 0; i < result.length; i++) {
            Log.d("test", String.valueOf(result[i]));
        }
    }

    public native int[] getTestIntArray(String requesr);

    public native int[] getTestIntArray2(String requesr);
}
