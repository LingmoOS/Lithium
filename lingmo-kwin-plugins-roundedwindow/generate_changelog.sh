#!/bin/bash

# 提示用户输入信息
read -p "请输入包名: " package_name
read -p "请输入版本号: " version
read -p "请输入状态 (UNRELEASED/STABLE): " status
read -p "请输入紧急程度 (low/medium/high): " urgency
read -p "请输入变更内容 (每条变更内容以 * 开头，多条变更内容以换行分割): " -d $'\n' changes
read -p "请输入维护者姓名和邮箱: " maintainer

# 自动生成日期
date=$(LC_ALL=C date +"%a, %d %b %Y %H:%M:%S %z")

# 输出 Debian changelog 模板
cat <<EOF
$package_name ($version) $status; urgency=$urgency

  $changes

 -- $maintainer  $date
EOF