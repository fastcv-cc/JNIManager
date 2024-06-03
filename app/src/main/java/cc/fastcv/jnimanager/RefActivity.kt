package cc.fastcv.jnimanager

import android.os.Bundle
import android.util.Log
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatButton
import cc.fastcv.jnimanager.libs.RefNativeLib

class RefActivity : AppCompatActivity() {

    companion object {
        private const val TAG = "RefActivity"
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_ref)

        findViewById<AppCompatButton>(R.id.btCreateLocalRef).setOnClickListener {
            RefNativeLib.createLocalRef()
        }

        findViewById<AppCompatButton>(R.id.btGetLocalRef).setOnClickListener {
            Log.d(TAG, "GetLocalRef: ${RefNativeLib.getLocalRef()}")
        }

        findViewById<AppCompatButton>(R.id.btCreateGlobalRef).setOnClickListener {
            RefNativeLib.createGlobalRef()
        }

        findViewById<AppCompatButton>(R.id.btDelGlobalRef).setOnClickListener {
            RefNativeLib.deleteGlobalRef()
        }

        findViewById<AppCompatButton>(R.id.btGetGlobalRef).setOnClickListener {
            Log.d(TAG, "GetGlobalRef: ${RefNativeLib.getGlobalRef()}")
        }


        findViewById<AppCompatButton>(R.id.btCreateWeakGlobalRef).setOnClickListener {
            RefNativeLib.createWeakGlobalRef()
        }

        /**
         * 删除会崩溃
         */
        findViewById<AppCompatButton>(R.id.btDelWeakGlobalRef).setOnClickListener {
            RefNativeLib.deleteWeakGlobalRef()
        }

        findViewById<AppCompatButton>(R.id.btGetWeakGlobalRef).setOnClickListener {
            Log.d(TAG, "GetGlobalRef: ${RefNativeLib.getWeakGlobalRef()}")
        }
    }

}