package cc.fastcv.jnimanager.libs

object CNativeLib {

    external fun callCMethod1(a: Int): Int

    external fun callCMethod2(a: Int, b: Int): Int

    external fun callCMethod3(a: Int, b: Int, c: Int): Int

}