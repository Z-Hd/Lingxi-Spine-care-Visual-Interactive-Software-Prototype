### 环境配置
本项目使用qt6.5.3和vtk9.2。其中vtk已经编译好，在项目文件夹vtk下，使用请将vtk/bin文件夹添加到环境变量中。如果本地环境中已有vtk，请先删除再添加。
### 仓库管理规则

仓库的master分支设置为保护模式，提交请按照pull requests的方式提交，即先fork一份代码到自己的远程仓库，在自己的远程仓库修改完成后再提交pr，提示审核员审查，审查完毕后再合并到主仓库，具体方法请参照[使用 Pull Request 功能进行代码审查 - Gitee.com](https://gitee.com/help/articles/4304#article-header0)。

如果在merge的过程中存在冲突，请先本地备份修改内容，再重新从主仓库拉取，进行本地手动merge。

提交pr后请及时联系代码审核人员进行审核。

