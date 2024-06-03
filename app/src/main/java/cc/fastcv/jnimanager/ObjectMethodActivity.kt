package cc.fastcv.jnimanager

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatButton
import cc.fastcv.jnimanager.libs.ObjectMethodNativeLib

class ObjectMethodActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_object_method)

        findViewById<AppCompatButton>(R.id.btM1).setOnClickListener {
            ObjectMethodNativeLib.callMethod1();
        }

        findViewById<AppCompatButton>(R.id.btM2).setOnClickListener {
            ObjectMethodNativeLib.callMethod2();
        }

        findViewById<AppCompatButton>(R.id.btM3).setOnClickListener {
            ObjectMethodNativeLib.callMethod3();
        }

        findViewById<AppCompatButton>(R.id.btM4).setOnClickListener {
            ObjectMethodNativeLib.callMethod4();
        }

        findViewById<AppCompatButton>(R.id.btM5).setOnClickListener {
            ObjectMethodNativeLib.callMethod5();
        }
    }
}