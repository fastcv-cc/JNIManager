package cc.fastcv.jnimanager

import android.os.Bundle
import android.os.Environment
import android.text.TextUtils
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatButton
import androidx.appcompat.widget.AppCompatEditText
import cc.fastcv.libs.MmapUtil


class MmapActivity : AppCompatActivity() {

    private var isObserve = false

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_mmap)

        findViewById<AppCompatButton>(R.id.btOpen).setOnClickListener {
            MmapUtil.mmapOpen(Environment.getExternalStorageDirectory().absolutePath + "/mmaptest.txt");
        }

        findViewById<AppCompatButton>(R.id.btClose).setOnClickListener {
            isObserve = false;
            MmapUtil.mmapClose();
            Toast.makeText(this, "关闭并停止监听", Toast.LENGTH_SHORT).show();
        }

        findViewById<AppCompatButton>(R.id.btWrite).setOnClickListener {
            val content: String = findViewById<AppCompatEditText>(R.id.et).getText().toString()
            MmapUtil.mmapWrite(content)
            findViewById<AppCompatEditText>(R.id.et).setText("")
        }

        findViewById<AppCompatButton>(R.id.btObserve).setOnClickListener {
            if (isObserve) return@setOnClickListener
            isObserve = true
            //开线程每隔500毫秒获取一下共享映射区的内容
            Thread {
                while (isObserve) {
                    try {
                        val observe: String = MmapUtil.observe("")
                        //当我们监听到共享区的内容不为空的时候就将内容以Toast的方式显示出来
                        if (!TextUtils.isEmpty(observe)) {
                            runOnUiThread {
                                Toast.makeText(this, observe, Toast.LENGTH_SHORT).show()
                            }
                            //获取完之后将共享区内容置空
                            MmapUtil.mmapSetEmpty()
                        }
                        //Call to 'Thread.sleep()' in a loop, probably busy-waiting
                        Thread.sleep(500)
                    } catch (ignored: Exception) {
                    }
                }
            }.start()
            Toast.makeText(this, "开始监听", Toast.LENGTH_SHORT).show()
        }

    }

}