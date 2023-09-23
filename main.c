
int main(void) {
    build_height_layers(5,7);
    update_activations();
    randomize(p,0.5);
    randomize_data(1.0);
    InitWindow(screen_width, screen_height, "nn-scope-C");
    Font font = LoadFontEx("SourceCodePro-Regular.ttf", 200, 0, 0);
    SetTargetFPS(60); 
    load_default_positions();      
    while (!WindowShouldClose())  {
        respond();
        display_activations(font);
        display_rate(font);
        train_backprop(p,100,rate);
        BeginDrawing();
        ClearBackground(BLACK);
        plot_weights(weight_color);
        plot_web_positions(vertex_color);
        plot_function(p, f_color);
        plot_data(data_color);
        EndDrawing(); 
    }
    CloseWindow();  
}
