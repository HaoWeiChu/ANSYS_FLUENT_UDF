# ANSYS FLUENT UDF
**利用 USER-DEFINED FUNCTIONS(使用者自定義函式)，給予模擬中所需要的邊界條件以及流體性質**

![image](https://github.com/HaoWeiChu/ANSYS_FLUENT_UDF/blob/main/Ansys_fluent_settings.png)


![image](https://github.com/HaoWeiChu/ANSYS_FLUENT_UDF/blob/main/Artery_Geometry_Profile.png)

## 血管脈動流體質量流率輸入(artery_pulsatile.c)
在模擬血管的流動當中，將血流的周期性變化流動使用分段函數進行編寫並作為血管的質量流率輸入
![image](https://github.com/HaoWeiChu/ANSYS_FLUENT_UDF/blob/main/Artery_Pulsitile%20flow/pulsatile_flow.png)

## 溫度隨位置方向變化邊界條件(temperature_profile.c)
將血管中不同位置的溫度邊界條件以函數形式編寫
![image](https://github.com/HaoWeiChu/ANSYS_FLUENT_UDF/blob/main/Temperature_profile/static_temperature_distribution.png)

## 不同溫度的黏滯係數(viscosity.c)

![image](https://github.com/HaoWeiChu/ANSYS_FLUENT_UDF/blob/main/Viscisity/temp_dependent_viscosity.png)



## Files
* artery_pulsitile.c
  * 血流脈動週期(質量流率輸入)
* temperature_profile.c
  * X方向溫度隨位置變化
* viscosity.c
  * 黏滯係數與溫度關係式

# Reference
* Manual, U. D. F. (2009). ANSYS FLUENT 12.0. Theory Guide.
