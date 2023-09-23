void respond() {
    if (IsKeyDown(KEY_Q)) exit(0);
    if (IsKeyReleased(KEY_RIGHT)) change_rate(0.0001);
    if (IsKeyReleased(KEY_LEFT)) change_rate(-0.0001);
    if (IsKeyReleased(KEY_R)) rate = 0;
    if (IsKeyReleased(KEY_D)) randomize_data(1.0);
    if (IsKeyReleased(KEY_W)) randomize(p,0.6);
    if (IsKeyReleased(KEY_L)) {
        L++;if (L >= MAX_L) L = 1;
        build_height_layers(H,L);
        randomize(p,0.6);
    }
    if (IsKeyReleased(KEY_H)) {
        H++;if (H >= MAX_H) H = 2;
        build_height_layers(H,L);
        randomize(p,0.6);
    }
    if (IsKeyReleased(KEY_N)) {
        D--;if (D <= 0) D = MAX_D;
        randomize_data(data_spread);
    }
    if (IsKeyReleased(KEY_M)) {
        D++;if (D > MAX_D) D = 1;
        randomize_data(data_spread);
    }
    if (IsKeyReleased(KEY_ONE)) {
        change_act(0);
        update_activations();
    }
    if (IsKeyReleased(KEY_TWO)) {
        change_act(1);
        update_activations();
    }
    if (IsKeyReleased(KEY_THREE)) {
        change_act(2);
        update_activations();
    }
    if (IsKeyReleased(KEY_FOUR)) {
        change_act(3);
        update_activations();
    }
    if (IsKeyReleased(KEY_FIVE)) {
        change_act(4);
        update_activations();
    }
    if (IsKeyReleased(KEY_SIX)) {
        change_act(5);
        update_activations();
    }
    if (IsKeyReleased(KEY_SEVEN)) {
        change_act(6);
        update_activations();
    }
    if (IsKeyReleased(KEY_EIGHT)) {
        change_act(7);
        update_activations();
    }
    if (IsKeyReleased(KEY_NINE)) {
        change_act(8);
        update_activations();
    }



}