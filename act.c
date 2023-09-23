f64 tanh_prime(f64 x) {
    f64 y = tanh(x);
    return 1 - y*y;
}
f64 id(f64 x) { return x;}
f64 one(f64 x) { return 1;}


void update_activations() {
    printf("updated!");
    for (i32 i = 0; i < MAX_L; i++) {
        switch (act_code[i]) {
        case 0: 
            activation[i] = tanh;
            derivative[i] = tanh_prime;
            break;
        case 1:
            activation[i] = sin;
            derivative[i] = cos;
            break;
        case 2:
            activation[i] = id;
            derivative[i] = one;
            break;
        }
    }
}

void display_activations(Font font) {
    char report[30];
    f32 act_x = 0;
    f32 act_y = 20;
    for (i32 i = 0; i <= L; i++) {
        switch (act_code[i]) {
            case 0 : sprintf(report, "%i=tanh", i+1, act_code[i]);break;
            case 1 : sprintf(report, "%i=sine", i+1, act_code[i]);break;
            case 2 : sprintf(report, "%i=id  ", i+1, act_code[i]);break;
        }
        DrawTextEx(font, report, (vec){20+3*40*i,20} ,30, (float)0.0, act_color);
    }
}

void display_rate(Font font) {
    char report[30];
    sprintf(report, "rate = %5.4f", rate);
    DrawTextEx(font, report, (vec){20,80} ,40, (float)0.0, rate_color);
}
void change_act(i32 i) {
    act_code[i]++;
    if (act_code[i] > 2) act_code[i] = 0;
}
void change_rate(f64 amount) {
    rate += amount;
    if (rate < 0) rate = 0;
    if (rate >= 1) rate = 0;
}