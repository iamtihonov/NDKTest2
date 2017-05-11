package ru.artem.ndktest2;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = (TextView) findViewById(R.id.sample_text);
        int [] result = getTestIntArray("ЛЕПС");
        tv.setText("size = " + result.length);
        for(int i = 0; i < result.length; i++) {
            Log.d("test", String.valueOf(result[i]));
        }
    }

    public native int[] getTestIntArray(String requesr);
}
