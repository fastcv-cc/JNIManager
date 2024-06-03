package cc.fastcv.jnimanager

import android.annotation.SuppressLint
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatTextView
import cc.fastcv.jnimanager.libs.StringStaticNativeLib

class StringStaticActivity : AppCompatActivity() {

    @SuppressLint("SetTextI18n")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_static_string)

        findViewById<AppCompatTextView>(R.id.tvString).text =
            StringStaticNativeLib.stringFromJNI(
                "这是一段文本"
            )

        findViewById<AppCompatTextView>(R.id.tvStringArray).text =
            StringStaticNativeLib.stringArrayFromJNI(
                arrayOf(
                    "文本",
                    "文本",
                    "文本",
                    "文本",
                    "文本",
                    "文本",
                    "文本",
                    "文本"
                )
            ).joinToString()

        findViewById<AppCompatTextView>(R.id.tvCompare).text = "${
            StringStaticNativeLib.nativeStrCompare(
                "这是一段文本", "这是一段文本"
            )
        }"


    }

}