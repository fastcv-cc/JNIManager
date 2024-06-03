package cc.fastcv.jnimanager.libs.model

class StaticFieldModel {
    companion object {
        private const val priBoolean: Boolean = true

        private val priBooleanArray: BooleanArray = booleanArrayOf(true, true, true)

        private const val priByte: Byte = 100

        private val priByteArray: ByteArray = byteArrayOf(12, 33, 12, 66, 33)

        private const val priChar: Char = 'W'

        private var priCharArray: CharArray = charArrayOf('A', 'B', 'C', 'D', 'E')

        private const val priShort: Short = 239

        private val priShortArray: ShortArray = shortArrayOf(234, 35, 76, 313, 662)

        private const val priInt: Int = 1003254

        private val priIntArray: IntArray = intArrayOf(1231, 4521, 4511, 4632, 123414, 4532)

        private const val priLong: Long = 1003254L

        private val priLongArray: LongArray = longArrayOf(12312, 4525342, 5645747, 2342423, 645654654)

        private const val priFloat: Float = 234.435f

        private val priFloatArray: FloatArray = floatArrayOf(123.4f, 345.98f, 34.43f)

        private const val priDouble: Double = 2334.43543

        private val priDoubleArray: DoubleArray = doubleArrayOf(123.45, 452.34, 562.34, 45.3)

        private const val priString: String = "我是一个私有String属性"

        private val priStringArray: Array<String> = arrayOf("文本1","文本2","文本3")
    }
}