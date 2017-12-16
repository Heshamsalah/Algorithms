number_of_pairs = gets.strip.to_i
for i in (1..number_of_pairs)
    px, py, qx, qy = gets.strip.split(' ')
    px = px.to_i
    py = py.to_i
    qx = qx.to_i
    qy = qy.to_i
    rx = qx + (qx - px)
    ry = qy + (qy - py)
    puts rx.to_s + " " + ry.to_s + "\n"
end
