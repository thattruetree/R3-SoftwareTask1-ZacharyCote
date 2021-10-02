// C++ code

void setup()			//configures all pins used
{
  
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  
  pinMode(A0, INPUT);
  Serial.begin(9600);

}
int firstDigit(int outputValue)		// Returns the value (between 0-9) of the first digit usinmg division by 10
{ 

  return outputValue / 10;
  
  
}

int secondDigit(int outputValue)   // Returns the value (between 0-9) of the second digit using mod 10
{
  return outputValue % 10;
  
}

void firstDisplay(int outputValue)  //displays the first digit on the left 7seg by outputting the binary of 'digit'
{
  int digit = firstDigit(outputValue);
  switch (digit){
    case 0:						//0000
    	digitalWrite(5, LOW);
  		digitalWrite(6, LOW);
  		digitalWrite(7, LOW);
  		digitalWrite(4, LOW);
    break;
    case 1:						//0001
    	digitalWrite(5, LOW);
  		digitalWrite(6, LOW);
  		digitalWrite(7, LOW);
  		digitalWrite(4, HIGH);
    break;
    case 2:						//0010
   	    digitalWrite(5, LOW);
  		digitalWrite(6, LOW);
  		digitalWrite(7, HIGH);
  		digitalWrite(4, LOW);
    break;
    case 3:						//0011
    	digitalWrite(5, LOW);
  		digitalWrite(6, LOW);
  		digitalWrite(7, HIGH);
  		digitalWrite(4, HIGH);
    break;
 	case 4:						//0100
    	digitalWrite(5, LOW);
  		digitalWrite(6, HIGH);
  		digitalWrite(7, LOW);
  		digitalWrite(4, LOW);
    break;
    case 5:						//0101
    	digitalWrite(5, LOW);
  		digitalWrite(6, HIGH);
  		digitalWrite(7, LOW);
  		digitalWrite(4, HIGH);
    break;
    case 6:						//0110
    	digitalWrite(5, LOW);
  		digitalWrite(6, HIGH);
  		digitalWrite(7, HIGH);
  		digitalWrite(4, LOW);
    break;
    case 7:						//0111
    	digitalWrite(5, LOW);
  		digitalWrite(6, HIGH);
  		digitalWrite(7, HIGH);
  		digitalWrite(4, HIGH);
    break;
     case 8:					//1000
    	digitalWrite(5, HIGH);
  		digitalWrite(6, LOW);
  		digitalWrite(7, LOW);
  		digitalWrite(4, LOW);
    break;
    case 9:						//1001
    	digitalWrite(5, HIGH);
  		digitalWrite(6, LOW);
  		digitalWrite(7, LOW);
  		digitalWrite(4, HIGH);
    break;
    default:
    	digitalWrite(5, HIGH);
  		digitalWrite(6, HIGH);
  		digitalWrite(7, HIGH);
  		digitalWrite(4, HIGH); 
    break;
  }
 
}

void secondDisplay(int outputValue) //displays that second digit on the right 7seg by outputting the binary of 'digit'
{
  int digit = secondDigit(outputValue);
  switch (digit){
    case 0:						//00000
    	digitalWrite(11, LOW);
  		digitalWrite(12, LOW);
  		digitalWrite(13, LOW);
  		digitalWrite(10, LOW);
    break;
    case 1:						//0001
    	digitalWrite(11, LOW);
  		digitalWrite(12, LOW);
  		digitalWrite(13, LOW);
  		digitalWrite(10, HIGH);
    break;
    case 2:						//0010
   	    digitalWrite(11, LOW);
  		digitalWrite(12, LOW);
  		digitalWrite(13, HIGH);
  		digitalWrite(10, LOW);
    break;
    case 3:						//0011
    	digitalWrite(11, LOW);
  		digitalWrite(12, LOW);
  		digitalWrite(13, HIGH);
  		digitalWrite(10, HIGH);
    break;
 	case 4:						//0100
    	digitalWrite(11, LOW);
  		digitalWrite(12, HIGH);
  		digitalWrite(13, LOW);
  		digitalWrite(10, LOW);
    break;
    case 5:						//0101
    	digitalWrite(11, LOW);
  		digitalWrite(12, HIGH);
  		digitalWrite(13, LOW);
  		digitalWrite(10, HIGH);
    break;
    case 6:						//0110
    	digitalWrite(11, LOW);
  		digitalWrite(12, HIGH);
  		digitalWrite(13, HIGH);
  		digitalWrite(10, LOW);
    break;
    case 7:						//0111
    	digitalWrite(11, LOW);
  		digitalWrite(12, HIGH);
  		digitalWrite(13, HIGH);
  		digitalWrite(10, HIGH);
    break;
     case 8:					//1000
    	digitalWrite(11, HIGH);
  		digitalWrite(12, LOW);
  		digitalWrite(13, LOW);
  		digitalWrite(10, LOW);
    break;
    case 9:						//1001
    	digitalWrite(11, HIGH);
  		digitalWrite(12, LOW);
  		digitalWrite(13, LOW);
  		digitalWrite(10, HIGH);
    break;
    default:
    	digitalWrite(5, HIGH);
  		digitalWrite(6, HIGH);
  		digitalWrite(7, HIGH);
  		digitalWrite(4, HIGH); 
    break;
  }
 
}


void loop()
{
  double potentiometerValue = analogRead(A0);		// reads the potentiometer value
  
  int outputValue = (potentiometerValue/1023)*99;	// converts the potent. value to be between 0 and 99
  
  firstDisplay(outputValue);
  secondDisplay(outputValue);

}