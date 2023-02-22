# 專案描述
**以下三個程式碼範例皆為利用分析軟體(ANSYS-FLUENT)中的 USER-DEFINED FUNCTIONS(使用者自定義函式)，其中UDF函式為使用c語言進行編寫，使用UDF的目的在於給予分析軟體使用者自定義的邊界條件或是流體性質，以下分別介紹了本次專案使用的物理模型以及邊界條件設定。**

![image](https://github.com/HaoWeiChu/ANSYS_FLUENT_UDF/blob/main/Ansys_fluent_settings.png)


![image](https://github.com/HaoWeiChu/ANSYS_FLUENT_UDF/blob/main/Artery_Geometry_Profile.png)

## 血管脈動流體質量流率輸入(artery_pulsatile.c)
第一個程式碼為血流脈動流體的質量流率輸入，目的為模擬血管的流動當中，將血流的周期性變化流動使用分段函數進行編寫並作為血管的質量流率輸入。
![image](https://github.com/HaoWeiChu/ANSYS_FLUENT_UDF/blob/main/Artery_Pulsatile%20flow/pulsatile_flow.png)

## 溫度隨位置方向變化邊界條件(temperature_profile.c)
第二個程式碼為設置流體中溫度的變化隨位置而改變，目的將血管中不同位置的溫度邊界條件以函數形式編寫。
![image](https://github.com/HaoWeiChu/ANSYS_FLUENT_UDF/blob/main/Temperature_profile/static_temperature_distribution.png)

## 不同溫度的黏滯係數(viscosity.c)
第三個程式碼為當流體性質的黏滯係數會隨著溫度而改變，以下為改變的關係式。
![image](https://github.com/HaoWeiChu/ANSYS_FLUENT_UDF/blob/main/Viscosity/temp_dependent_viscosity.png)



## Files
* artery_pulsitile.c
  * 血流脈動週期(質量流率輸入)
* temperature_profile.c
  * X方向溫度隨位置變化
* viscosity.c
  * 黏滯係數與溫度關係式

# Reference
* Manual, U. D. F. (2009). ANSYS FLUENT 12.0. Theory Guide.
