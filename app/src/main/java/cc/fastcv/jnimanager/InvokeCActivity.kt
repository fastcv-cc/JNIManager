package cc.fastcv.jnimanager

import android.os.Bundle
import android.util.Log
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatButton
import cc.fastcv.jnimanager.libs.CNativeLib

class InvokeCActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_invoke_c)
        findViewById<AppCompatButton>(R.id.btInvoke1).setOnClickListener {
            Log.d("InvokeCActivity", "${CNativeLib.callCMethod1(100)}")
        }

        findViewById<AppCompatButton>(R.id.btInvoke2).setOnClickListener {
            Log.d("InvokeCActivity", "${CNativeLib.callCMethod2(100, 200)}")
        }

        findViewById<AppCompatButton>(R.id.btInvoke3).setOnClickListener {
            Log.d("InvokeCActivity", "${CNativeLib.callCMethod3(100, 200, 300)}")
        }

    }

}