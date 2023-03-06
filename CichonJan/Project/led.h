#ifndef LED
#define LED



class Led{
	public:
		Led(void);
		void LedStepRight(void);
		void LedStepLeft(void);
		void LedInit(void);
	
	private:
		enum LedState {STEP_LEFT, STEP_RIGHT, LED_STOP};
		enum Step{LEFT,RIGHT};
		unsigned char ucLedIndexStep;

		void LedOn(unsigned char ucLedIndex);
		void LedStep(enum Step eStep);
	
};



#endif