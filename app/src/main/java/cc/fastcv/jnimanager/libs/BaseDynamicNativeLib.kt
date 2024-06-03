package cc.fastcv.jnimanager.libs

object BaseDynamicNativeLib {

    external fun booleanFromDynamicJNI(b: Boolean): Boolean

    external fun byteFromDynamicJNI(b: Byte): Byte

    external fun uByteFromDynamicJNI(): Byte

    external fun charFromDynamicJNI(c: Char): Char

    external fun shortFromDynamicJNI(s: Short): Short

    external fun uShortFromDynamicJNI(): Short

    external fun intFromDynamicJNI(i: Int): Int

    external fun uIntFromDynamicJNI(): Int

    external fun longFromDynamicJNI(l: Long): Long

    external fun uLongFromDynamicJNI(): Long

    external fun floatFromDynamicJNI(f: Float): Float

    external fun doubleFromDynamicJNI(d: Double): Double

    external fun booleanArrayFromDynamicJNI(array: BooleanArray): BooleanArray

    external fun byteArraySortFromDynamicJNI(array: ByteArray): ByteArray

    external fun charArrayFromDynamicJNI(s: String): CharArray

    external fun shortArraySortFromDynamicJNI(array: ShortArray): ShortArray

    external fun intArraySortFromDynamicJNI(array: IntArray): IntArray

    external fun longArraySortFromDynamicJNI(array: LongArray): LongArray

    external fun floatArraySortFromDynamicJNI(array: FloatArray): FloatArray

    external fun doubleArraySortFromDynamicJNI(array: DoubleArray): DoubleArray
}