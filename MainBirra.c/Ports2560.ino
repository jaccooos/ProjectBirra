/*
*  
*  Error
* 
*  Date:    3-June-2018
*  Author:  J.C. Oostdijk
*/
///////////////////////////////////////////////////////////////////////////////

void PortsInit (void)
{
// motoren
  pinMode(X_STEP_PIN ,    OUTPUT);
  pinMode(X_DIR_PIN ,     OUTPUT);
  pinMode(X_ENABLE_PIN ,  OUTPUT);
  
  pinMode(Y_STEP_PIN ,    OUTPUT);
  pinMode(Y_DIR_PIN ,     OUTPUT);
  pinMode(Y_ENABLE_PIN ,  OUTPUT);
  
  pinMode(Z_STEP_PIN ,    OUTPUT);
  pinMode(Z_DIR_PIN ,     OUTPUT);
  pinMode(Z_ENABLE_PIN ,  OUTPUT);
  
  pinMode(E_STEP_PIN ,    OUTPUT);
  pinMode(E_DIR_PIN ,     OUTPUT);
  pinMode(E_ENABLE_PIN ,  OUTPUT);
  
  pinMode(Q_STEP_PIN ,    OUTPUT);
  pinMode(Q_DIR_PIN ,     OUTPUT);
  pinMode(Q_ENABLE_PIN ,  OUTPUT);

//schakelaars
  pinMode(AANUIT_PIN ,    INPUT);
  pinMode(RESET_KNOP_PIN ,INPUT);
  pinMode(DEUR_DOWN_PIN , INPUT);
  pinMode(DEUR_UP_PIN ,   INPUT);
  pinMode(DISP_IN_PIN ,   INPUT);
  pinMode(DISP_OUT_PIN ,  INPUT);
  pinMode(CAROCEL_POS_PIN,INPUT);
  pinMode(BEKER_DEUR_PIN ,INPUT);
  pinMode(BEKER_TAP_PIN , INPUT);  

//LED's and light's
  pinMode(LED_RED_PIN ,   OUTPUT);
  pinMode(LED_GREEN_PIN , OUTPUT);
  pinMode(LED_BLUE_PIN ,  OUTPUT);
  pinMode(LED_LOGO_PIN ,  OUTPUT);
  pinMode(ZWAAILAMP_PIN , OUTPUT);


}


