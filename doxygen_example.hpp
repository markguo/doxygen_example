/**
 * \file   doxygen_example.hpp
 * \brief  Brief desc of b.hpp
 * \date   2011年04月24日
 * \author guoshiwei (guoshiwei@gmail.com)

\todo
    \li [OK] 示例doxygen工程
    \li doxygen注释的语法 快速参考
    \li c-support vim 插件
	* 给出需要的快捷键
	    * 插入文件头
	    * 注释自动缩进
	* 在svn上放好
	* 易于安装，允许用户有自己的设置(vimrc)

\b doxygen的注释语法
- doxygen注释块(Special Blocks): 以/**开头的注释, 将在生成的文档中输出 \n
  注释块可以用来注释： 文件，类，类方法，函数的声明；函数体内
- 添加文档: 将注释块放到要注释的代码之前
- 描述: 注释块中的内容
    * 简述: \\brief 会在生成的文档中以摘要形式出现
    * 详述: 详细描述
    * 函数内注释: 函数内所有的注释块

- 命令：以\\ 或@开头，推荐\,因为不用按shift键, 常用命令
    \li \\brief 简述
    \li \\tparam 模板参数
    \li \\param 函数参数
    \li \\return 返回值概述
    \li \\retval 各返回值的含义
    \li \\file 文件注释
    \li \\author 作者
    \li \\date 日期
    \li \\deprecated 不推荐使用
    \li \\exception 异常
    \li \\attention 严重注意
    \li \\note 注意
    \li \\bug
    \li \\see 可参照（某url)
    \li \\todo
///
 */

namespace ns{

    /**
     * \brief An example class show how to use doxygen commands.
     *
     * 此类的详细描述
     *
     * \tparam T A tempele param.
     */
    template <class T>
    class ExampleClass {
	public:

	    /// Example enum type.
	    enum EnumType {
                E_A,                        /** A */
                E_B,
                E_C,
	    };

	public:
	    /**
	     * \brief Brief description.
	     *
	     * Copies bytes from a source memory area to a destination memory area,
	     * where both areas may not overlap.
	     *
	     * \attention Attention
	     *
	     * \see http://www.stack.nl/~dimitri/doxygen/commands.html
	     *
	     * \param[out] dest The memory area to copy to.
	     * \param[in]  src  The memory area to copy from.
	     * \param[in]  n    The number of bytes to copy
	     *
	     * \return 对于返回值的概述
	     * \retval -1 Error
	     * \retval 0 Succeed
	     *
	     * \exception std::runtime_error Some badthing happen
	     *
	     * \pre Pre requirments before call this method.
	     *
	     * \post Post conds after this method is called.
	     *
	     * \note 注意！熊出没！
	     *
	     * \deprecated
	     */

	    void methodA(void *dest, const void *src, size_t n);

	private:
	    /// Member 1
	    int member_1;

	    /// Member_2
	    int member_2;
    };
}

namespace  ns{
    void ExampleClass::methodA()
    {
	/**
	 * A body descripion.
	 */

	/**
	 * \bug There is a bug here.
	 */

	/**
	 * \todo 多加点注释，嘎嘎
	 *
	 * \warning 警告！
	 */
    }
}

