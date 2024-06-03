package cc.fastcv.jnimanager

import android.content.Intent
import android.os.Bundle
import android.util.Log
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatButton
import androidx.appcompat.widget.AppCompatTextView
import cc.fastcv.jnimanager.libs.BaseStaticNativeLib
import cc.fastcv.jnimanager.libs.model.StaticFieldModel

class MainActivity : AppCompatActivity() {

    init {
        System.loadLibrary("ndk")
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        findViewById<AppCompatTextView>(R.id.tv).text = BaseStaticNativeLib.initTitle()

        findViewById<AppCompatButton>(R.id.btBaseStatic).setOnClickListener {
            startActivity(Intent(this, BaseStaticActivity::class.java))
        }

        findViewById<AppCompatButton>(R.id.btBaseDynamic).setOnClickListener {
            startActivity(Intent(this, BaseDynamicActivity::class.java))
        }

        findViewById<AppCompatButton>(R.id.btStringStatic).setOnClickListener {
            startActivity(Intent(this, StringStaticActivity::class.java))
        }

        findViewById<AppCompatButton>(R.id.btStringDynamic).setOnClickListener {
            startActivity(Intent(this, StringDynamicActivity::class.java))
        }

        findViewById<AppCompatButton>(R.id.btObjectField).setOnClickListener {
            startActivity(Intent(this, ObjectFieldActivity::class.java))
        }

        findViewById<AppCompatButton>(R.id.btObjectStaticField).setOnClickListener {
            startActivity(Intent(this, ObjectStaticFieldActivity::class.java))
        }

        findViewById<AppCompatButton>(R.id.btObjectMethod).setOnClickListener {
            startActivity(Intent(this, ObjectMethodActivity::class.java))
        }

        findViewById<AppCompatButton>(R.id.btObjectStaticMethod).setOnClickListener {
            startActivity(Intent(this, ObjectStaticMethodActivity::class.java))
        }

        findViewById<AppCompatButton>(R.id.btObjectSuperMethod).setOnClickListener {
            startActivity(Intent(this, ObjectSuperMethodActivity::class.java))
        }

        findViewById<AppCompatButton>(R.id.btRef).setOnClickListener {
            startActivity(Intent(this, RefActivity::class.java))
        }

        findViewById<AppCompatButton>(R.id.btException).setOnClickListener {
            startActivity(Intent(this, ExceptionActivity::class.java))
        }

        findViewById<AppCompatButton>(R.id.btMmap).setOnClickListener {
            startActivity(Intent(this, MmapActivity::class.java))
        }

        findViewById<AppCompatButton>(R.id.btInvokeC).setOnClickListener {
            startActivity(Intent(this, InvokeCActivity::class.java))
        }

        findViewById<AppCompatButton>(R.id.btBitmap).setOnClickListener {
            startActivity(Intent(this, BitmapActivity::class.java))
        }
    }
}