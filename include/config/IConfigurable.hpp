/*
 * @Author: Leo
 * @Date: 2022-02-02 01:15:31
 * @LastEditTime: 2022-07-22 09:14:27
 * @LastEditors: Leo
 * @Description: 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /example-authority-cpp/include/config/IConfigurable.c++
 */

#pragma once

namespace yuzhi
{
class IConfigurable
{
public:
  virtual ~IConfigurable() = default;
  virtual const char *Field() const = 0;
};
} // namespace yuzhi