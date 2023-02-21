# ANSYS FLUENT UDF
利用 USER-DEFINED FUNCTIONS(使用者自定義函式)，給予模擬中所需要的邊界條件以及流體性質
## 血管脈動流體質量流率輸入
在模擬血管的流動當中，將血流的周期性變化流動考慮進去

![image](https://github.com/HaoWeiChu/ANSYS_FLUENT_UDF/blob/main/Artery_Pulsitile%20flow/Pulsatile%20blood%20flow.png)



## temperature_profile.c


## viscosity.c



## Files
* artery_pulsitile.c
  * 血流脈動週期(質量流率輸入)
* temperature_profile.c
  * X方向溫度隨位置變化
* viscosity.c
  * 黏滯係數與溫度關係式

# Reference
* Manual, U. D. F. (2009). ANSYS FLUENT 12.0. Theory Guide.
