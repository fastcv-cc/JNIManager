package cc.fastcv.jnimanager

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatButton
import cc.fastcv.jnimanager.libs.ExceptionNativeLib
import java.lang.Exception

class ExceptionActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_exception)

        findViewById<AppCompatButton>(R.id.btException1).setOnClickListener {
            ExceptionNativeLib.exception1()
        }

        findViewById<AppCompatButton>(R.id.btException2).setOnClickListener {
            try {
                ExceptionNativeLib.exception2()
            } catch (e: Exception) {
                e.printStackTrace()
            }
        }

        findViewById<AppCompatButton>(R.id.btException3).setOnClickListener {
            ExceptionNativeLib.exception3()
        }

        findViewById<AppCompatButton>(R.id.btException4).setOnClickListener {
            ExceptionNativeLib.exception4()
        }

    }

}