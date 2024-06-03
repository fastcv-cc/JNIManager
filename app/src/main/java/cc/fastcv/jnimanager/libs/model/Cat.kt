package cc.fastcv.jnimanager.libs.model

class Cat : Animal() {

    override fun getDescription(): String {
        return "我是一只猫"
    }

    override fun getPrice(): Int {
        return 100
    }

}