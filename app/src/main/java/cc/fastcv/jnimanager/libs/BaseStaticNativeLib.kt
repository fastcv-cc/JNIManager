package cc.fastcv.jnimanager.libs

object BaseStaticNativeLib {

    external fun initTitle(): String

    external fun booleanFromJNI(b: Boolean): Boolean

    external fun byteFromJNI(b: Byte): Byte

    external fun uByteFromJNI(): Byte

    external fun charFromJNI(c: Char): Char

    external fun shortFromJNI(s: Short): Short

    external fun uShortFromJNI(): Short

    external fun intFromJNI(i: Int): Int

    external fun uIntFromJNI(): Int

    external fun longFromJNI(l: Long): Long

    external fun uLongFromJNI(): Long

    external fun floatFromJNI(f: Float): Float

    external fun doubleFromJNI(d: Double): Double

    external fun booleanArrayFromJNI(array: BooleanArray): BooleanArray

    external fun byteArraySortFromJNI(array: ByteArray): ByteArray

    external fun charArrayFromJNI(s: String): CharArray

    external fun shortArraySortFromJNI(array: ShortArray): ShortArray

    external fun intArraySortFromJNI(array: IntArray): IntArray

    external fun longArraySortFromJNI(array: LongArray): LongArray

    external fun floatArraySortFromJNI(array: FloatArray): FloatArray

    external fun doubleArraySortFromJNI(array: DoubleArray): DoubleArray

}