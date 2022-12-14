/*
The Code is created based on the method described in the following paper
"Image Smoothing via L0 Gradient Minimization", Li Xu, Cewu Lu, Yi Xu, Jiaya Jia, ACM Transactions on Graphics,
(SIGGRAPH Asia 2011), 2011.

Based on the modification of the ToS2P (https://github.com/lllyasviel/AppearanceEraser)

*/

/*
image: 8bit RGB image
height, width: height and width of image
channel: 3 (for now)
mask: NULL or 8bit, 1channel, same size as image
kappa: (in paper), set to 2.0 if 0
lambda: (in paper), set to 2e-2 if 0
*/
int L0smoothing(unsigned char * image, 
    int height, int width, int channel,
    unsigned char * mask, float kappa, float lambda);