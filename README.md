# NewScript

## NewScript ��һ�״��㿪ʼ�Լ�ʵ�ֵ�һ��ȫ�µ� ��JavaScript �﷨���������ű�������������������������

## ��Ϊ����������֧�ָ��ָ��ӵ�JavaScript�ű��﷨���纯����Lambda���ʽ��if / else��for��while��do / while��

## try / catch?�������ȣ���֧�ֺ�������Ƕ�׶��壬������ָ��ȫ�ֱ������ֲ�����������֧�������ⲿ�ӿ���չ��

##    ͬʱ������ʵ�� JIT?��ʱ�������������ִ�й����б߽��ͱ߱��룬�ظ�ִ����ͬ��佫�������±������

## ֱ�ӵ����ڲ��Ѿ�����õĶ�����ָ����ӿ��˽ű����Ե�ִ��Ч�ʡ�

##    ͬʱ��Ϊ����������Ҳ֧�ֽ�Ŀ��ű�ȫ����Ϊ������Ի��߶���������֧��ֱ�Ӵ�����̲�ֱ�Ӽ������С�

## �ڱ�������У�֧��ͬʱ����Դ��������ܽ�Դ������л������ܡ�

##    ͬʱ��Ŀǰ NewScript Ҳ�ṩ�˼򵥵ĵ��Խӿڣ����㿪���߱�дԴ�뼶��������


��Ŀ��ַ��

    https://github.com/tankaishuai/NewScript

    https://blog.csdn.net/tan_kaishuai/article/details/114174819





������Ҫ��Ҫ����һ�»����÷���ԭ��


һ�������� command_shell NewScript.exe ��ʹ�ã�

ֱ�Ӳ����������У����뽻��ʽ shell�� ���£�

![](https://github.com/tankaishuai/NewScript/blob/main/images/1.png)


��� 

## eval:target_file_path 

����ֱ������ִ�� JavaScript �ű�������ִ�б�������ɵĶ������ļ������߻��ű�����

## compile:target_file_path 

���ڱ���Ŀ�� JavaScript �ű��� Ȼ�����ͬ��Ŀ¼������һ�� .asm����ࣩ �ļ��� .bin �������ƣ������ļ���Ӧ���ļ���



���磬�������½ű���

![](https://github.com/tankaishuai/NewScript/blob/main/images/2.png)


�����ɣ�

![](https://github.com/tankaishuai/NewScript/blob/main/images/3.png)


����ʱ����ֻ��Ҫ�����Ѿ�����õ� .bin �������ƣ��ļ����ɡ�


�Էǽ���ʽ������ֱ�����У����£�

## NewScript.exe "/q eval:target_file_path"
    
����ָ���� js �ű������������Ѿ�����õĻ���ļ����߶���������

## NewScript.exe "/q compile:target_file_path"

����ָ���� js �ű������ɱ���õ� .asm ����ļ� �� .bin ����������




����SDK��ʹ��

Ŀǰ NewScript SDK ��eval64_sdk.h�� ���������½ӿڣ�

��1��ִ���ı�������ִ���ļ���

![](https://github.com/tankaishuai/NewScript/blob/main/images/4.png)


��2�������ı������߱����ļ���

![](https://github.com/tankaishuai/NewScript/blob/main/images/5.png)


��3��ע�ắ����������������أ�

![](https://github.com/tankaishuai/NewScript/blob/main/images/6.png)



���磬��������ʵ�� != �������������������

  __int64 my_not_equals (const __int64 *start_args, size_t num_args) {

    if( num_args != 2 )

      throw "bad func args";

    return (start_args[0] != start_args[1]);

  }


  eval64_register_v2( eval_struct, "!=",? my_not_equals);



��δ�����������
