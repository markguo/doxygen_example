/**
 * \file   doxygen_example.hpp
 * \brief  Brief desc of b.hpp
 * \date   2011��04��24��
 * \author guoshiwei (guoshiwei@gmail.com)

\todo
    \li [OK] ʾ��doxygen����
    \li doxygenע�͵��﷨ ���ٲο�
    \li c-support vim ���
	* ������Ҫ�Ŀ�ݼ�
	    * �����ļ�ͷ
	    * ע���Զ�����
	* ��svn�Ϸź�
	* ���ڰ�װ�������û����Լ�������(vimrc)

\b doxygen��ע���﷨
- doxygenע�Ϳ�(Special Blocks): ��/**��ͷ��ע��, �������ɵ��ĵ������ \n
  ע�Ϳ��������ע�ͣ� �ļ����࣬�෽������������������������
- ����ĵ�: ��ע�Ϳ�ŵ�Ҫע�͵Ĵ���֮ǰ
- ����: ע�Ϳ��е�����
    * ����: \\brief �������ɵ��ĵ�����ժҪ��ʽ����
    * ����: ��ϸ����
    * ������ע��: ���������е�ע�Ϳ�

- �����\\ ��@��ͷ���Ƽ�\,��Ϊ���ð�shift��, ��������
    \li \\brief ����
    \li \\tparam ģ�����
    \li \\param ��������
    \li \\return ����ֵ����
    \li \\retval ������ֵ�ĺ���
    \li \\file �ļ�ע��
    \li \\author ����
    \li \\date ����
    \li \\deprecated ���Ƽ�ʹ��
    \li \\exception �쳣
    \li \\attention ����ע��
    \li \\note ע��
    \li \\bug
    \li \\see �ɲ��գ�ĳurl)
    \li \\todo
///
 */

namespace ns{

    /**
     * \brief An example class show how to use doxygen commands.
     *
     * �������ϸ����
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
	     * \return ���ڷ���ֵ�ĸ���
	     * \retval -1 Error
	     * \retval 0 Succeed
	     *
	     * \exception std::runtime_error Some badthing happen
	     *
	     * \pre Pre requirments before call this method.
	     *
	     * \post Post conds after this method is called.
	     *
	     * \note ע�⣡�ܳ�û��
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
	 * \todo ��ӵ�ע�ͣ��¸�
	 *
	 * \warning ���棡
	 */
    }
}

