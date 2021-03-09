#ifndef __eval64_sdk__h__
#define __eval64_sdk__h__
#include <vector>
#include <functional>

const __int64 max_int64_val = ((unsigned __int64)(~0UI64) >> 1);
const __int64 min_int64_val = ~max_int64_val;

struct eval64_struct;
typedef bool(*eval64_func_init_t)(eval64_struct &eval_struct);
typedef bool(*eval64_func_int_t)(bool has_err, const char *str, const void *ptr);
typedef __int64(*eval64_func_raw_t)(const __int64 *start_args, size_t num_args);  //simple exts
struct eval64_data;
typedef std::vector<eval64_data>(*eval64_func_ptr_t)(
  eval64_struct &eval_struct, eval64_data *start_args, size_t num_args);  //complex exts
typedef std::function<std::vector<eval64_data>
(eval64_struct &eval_struct, eval64_data *start_args, size_t num_args)> eval64_func_t;
typedef bool(*eval64_func_list_var_t)(
  const char *var_type, eval64_data &data_val, bool is_global, void *param);
struct eval64_jit_struct;

//= min_int64_val if fail
__int64 eval64_try_eval_string(const char *str,
  eval64_func_init_t pfn_init = nullptr,
  eval64_func_int_t int_pfn_val = nullptr,
  bool use_jit = false,
  bool full_compile = false);

__int64 eval64_try_eval_file(const char *file,
  eval64_func_init_t pfn_init = nullptr,
  eval64_func_int_t int_pfn_val = nullptr,
  bool use_jit = false, bool full_compile = false);

__int64 eval64_try_compile_string(
  const char *str,
  eval64_func_init_t pfn_init,
  const char *save_file,
  bool confuse_sym);

__int64 eval64_try_compile_file(
  const char *file,
  eval64_func_init_t pfn_init,
  const char *save_file,
  bool confuse_sym);

bool eval64_register(eval64_struct &eval_struct, const char *func_type, const eval64_func_t &eval_pfn);
bool eval64_register_v2(eval64_struct &eval_struct, const char *func_type, eval64_func_raw_t eval_pfn);
bool eval64_unregister(eval64_struct &eval_struct, const char *func_type);

__int64 eval64_command_shell(const char *init_str = nullptr,
  eval64_func_init_t pfn_init = nullptr);

#endif //__eval64_sdk__h__
