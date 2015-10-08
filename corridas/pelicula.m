writerObj = VideoWriter('u_c.avi');
writerObj.FrameRate = 30;
open(writerObj);


for j=1:19
    s=load([num2str(j) '.dat']);
    imagesc(s);
    w = waitforbuttonpress;

    
    f(j)=getframe;
    writeVideo(writerObj,f(j));
end
%%movie(f,3)
close(writerObj);

