

void move_paddle_ai ()
{
    if (ball.x > 100 && ball.dy < 0 && ball.dx > 0) // om bollen går uppåt
    {
        if (ball.y < (p2.y + PADDLE_HEIGHT/2))
            move_paddle2_up();
        if (ball.y > (p2.y + PADDLE_HEIGHT/2))
            move_paddle2_down();
    }
    if (ball.x > 100 && ball.dy > 0 && ball.dx > 0) // om bollen går nedåt
    {
        if (ball.y < (p2.y + PADDLE_HEIGHT/2))
            move_paddle2_up();
        if (ball.y > (p2.y + PADDLE_HEIGHT/2))
            move_paddle2_down();
    }
    else if (ball.dx < 0) // om ballen flyger åt vänste sidan, reset paddle2
    {
        if(p2.y>12)
        {
            move_paddle2_up();
            
        }
        if(p2.y<12)
        {
            move_paddle2_down();
        }
    }
}


