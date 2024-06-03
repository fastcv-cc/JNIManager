package cc.fastcv.jnimanager.libs

import android.graphics.Bitmap

object BitmapNativeLib {

    external fun handleBitmapForSinglePixel(bitmap: Bitmap)

    external fun rotateBitmap(bitmap: Bitmap, ops: Int): Bitmap?

    external fun addBitmapFilter(bitmap: Bitmap, ops: Int)

}