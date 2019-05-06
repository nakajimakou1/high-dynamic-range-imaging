#include "core/hdrSolver.h"

using namespace shdr;

int main(int argc, char* argv[]) {
    if (argc < 3) {
        fprintf(stderr, "simpleHDR.exe [./image path] [./shutterspeed file path]\n");
        exit(0);
    }

    /*
        crfSolver : Only provide one method 
                    [debevecMethod]

        toneMapper : There are three kinds of methods you can assign
                     [photographicGlobal]
                     [photographicLocal]
                     [bilateral]
    */
    cv::Mat hdri;
    HDRSolver hdrSolver = HDRSolver(argv[1], argv[2],
                                    "debevecMethod", "photographicLocal");
    hdrSolver.solve(hdri);
    cv::imwrite("./hdr.png", hdri);

    return 0;
}

