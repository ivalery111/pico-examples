#include "pico/stdlib.h"
#include <stdio.h>

#define SIG_GPIO (22)

int main() {
  stdio_init_all();

  gpio_init(SIG_GPIO);
  gpio_pull_up(SIG_GPIO);

  while (true) {
    bool current_state = gpio_get(SIG_GPIO);
    if (current_state == 0) {
      printf("GPIO in LOW\n");
    } else {
      printf("GPIO in HIGH\n");
    }
    sleep_ms(250);
  }
}
