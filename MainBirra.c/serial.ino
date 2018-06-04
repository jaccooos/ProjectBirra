

/*
*  
*  Serial
* 
*  Date:    3-June-2018
*  Author:  J.C. Oostdijk
*/
///////////////////////////////////////////////////////////////////////////////

void SerialStart (void)
{
  Serial.begin(9600);
  inputString.reserve(200);
  inputString = "";
  
  
}

