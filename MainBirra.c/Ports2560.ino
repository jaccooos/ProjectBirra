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
}


