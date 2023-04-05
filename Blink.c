#include "pico/stdlib.h"
#include "pico/binary_info.h"

bool led_state;

bool timer_callback( repeating_timer_t *rt )
{
    //Blinks the LED
    //led_state=!led_state;
    gpio_put(25, 1);
    busy_wait_ms(100);
    gpio_put(25, 0);
    //gpio_put(25, 0);
    return (true);
}

const uint LED_PIN = 25;
const uint LED_ON_PIN = 1;

int main() {

	bi_decl(bi_program_description("pKare Task 1.1"));
	bi_decl(bi_1pin_with_name(LED_PIN, "Blink on board LED and external LED with 5 secs and 2 secs delay respectively"));
	
    	static repeating_timer_t timer;

	stdio_init_all();

	gpio_init(LED_PIN);
	gpio_init(LED_ON_PIN);
	gpio_set_dir(LED_PIN, GPIO_OUT);
	gpio_set_dir(LED_ON_PIN, GPIO_OUT);
	
	add_repeating_timer_ms( 5000, &timer_callback, NULL, &timer );

	while(1) {
		printf("LED ON");
		gpio_put(LED_ON_PIN, 1);
		sleep_ms(450);
		printf("LED OFF");
		gpio_put(LED_ON_PIN, 0);
		sleep_ms(2000);
		}
}
