package cc.fastcv.jnimanager

import android.graphics.Bitmap
import android.graphics.BitmapFactory
import android.graphics.Canvas
import android.graphics.Color
import android.graphics.Paint
import android.os.Bundle
import android.util.Log
import android.widget.ImageView
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatButton
import cc.fastcv.jnimanager.libs.BitmapNativeLib
import java.nio.ByteBuffer

class BitmapActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_bitmap)

        val ivShow = findViewById<ImageView>(R.id.ivShow)

        var bitmap = BitmapFactory.decodeResource(resources, R.drawable.demo)

        ivShow.setImageBitmap(bitmap)

        findViewById<AppCompatButton>(R.id.btPrintJava).setOnClickListener {
            printJavaBitmapInfo()
        }

        findViewById<AppCompatButton>(R.id.btPrintJni).setOnClickListener {
            printJNIBitmapInfo()
        }

        //顺时针90度翻转
        findViewById<AppCompatButton>(R.id.btRotate90).setOnClickListener {
            bitmap = BitmapNativeLib.rotateBitmap(bitmap, 0)
            ivShow.setImageBitmap(bitmap)
        }
        //上下翻转
        findViewById<AppCompatButton>(R.id.btRotate180).setOnClickListener {
            bitmap = BitmapNativeLib.rotateBitmap(bitmap, 1)
            ivShow.setImageBitmap(bitmap)
        }
        //镜像翻转
        findViewById<AppCompatButton>(R.id.btMirrorFlip).setOnClickListener {
            bitmap = BitmapNativeLib.rotateBitmap(bitmap, 2)
            ivShow.setImageBitmap(bitmap)
        }
        //灰度图
        findViewById<AppCompatButton>(R.id.btGrayFilter).setOnClickListener {
            BitmapNativeLib.addBitmapFilter(bitmap, 1)
        }
        //浮雕图
        findViewById<AppCompatButton>(R.id.btRelief).setOnClickListener {
            BitmapNativeLib.addBitmapFilter(bitmap, 2)
        }

    }

    private fun getBitmap(): Bitmap {
        val tempBitmap = Bitmap.createBitmap(1, 1, Bitmap.Config.ARGB_8888)
        val canvas = Canvas(tempBitmap)
        val paint = Paint()
        paint.style = Paint.Style.FILL
        paint.color = Color.rgb(0x11, 0x22, 0x33)
        canvas.drawRect(0f, 0f, tempBitmap.width.toFloat(), tempBitmap.height.toFloat(), paint)
        return tempBitmap
    }

    private fun printJNIBitmapInfo() {
        val tempBitmap = getBitmap()
        BitmapNativeLib.handleBitmapForSinglePixel(tempBitmap)
    }

    private fun printJavaBitmapInfo() {
        val tempBitmap = getBitmap()

        val byteSize = tempBitmap.allocationByteCount
        val byteBuffer: ByteBuffer = ByteBuffer.allocateDirect(byteSize)
        tempBitmap.copyPixelsToBuffer(byteBuffer)
        byteBuffer.rewind()
        val out = ByteArray(4)
        byteBuffer[out, 0, out.size]
        val pixel = tempBitmap.getPixel(0, 0)
        val a = Color.alpha(pixel)
        val r = Color.red(pixel)
        val g = Color.green(pixel)
        val b = Color.blue(pixel)
        Log.d("BitmapActivity", toBinaryString(pixel))
        Log.d("BitmapActivity", "十进制   a= ${a},r= ${r},g=${g}, b=${b}")
        Log.d(
            "BitmapActivity",
            "十六进制   a= ${a.toString(16)},r= ${r.toString(16)},g=${g.toString(16)}, b=${
                b.toString(16)
            }"
        )
        Log.d(
            "BitmapActivity",
            "二进制   a= ${toBinaryString(a)},r= ${toBinaryString(r)},g=${toBinaryString(g)}, b=${toBinaryString(b)}"
        )
        for (element in out) {
            Log.d("BitmapActivity", element.toUByte().toString(16))
        }
    }

    private fun toBinaryString(value: Int): String {
        return Integer.toBinaryString(value)
    }

}

