
#include "stdafx.h"

#include <iostream>

#define USE_EIGEN_WRAPPER
#ifdef USE_EIGEN_WRAPPER
    #include "eigen_wrapper.h"
    namespace Eigen = EigenWrapper;
#else
    #include <Eigen/Dense>
#endif

using namespace std;

int main() {
    Eigen::VectorXd vx;
    vx.resize( 4 );
    vx.setZero();
    vx( 0 ) = 5;
    vx.conservativeResize( 3 );
    vx.head( 2 )( 1 ) = 2;

    Eigen::MatrixXd mx;
    mx.resize( 3, 3 );
    mx.setIdentity();
    Eigen::Vector3d v3 = mx.col( 1 );
    v3 = v3 + vx;
    cout << "\nv3 =\n" << v3 << endl;

    Eigen::Vector3i v3i;
    v3i << 1, 2, 3;
    cout << "\nv3i =\n" << v3i << endl;

    Eigen::Matrix3d m, m3;
    m3.setConstant( 0.5 );
    m = -m3;
    //m = m * m; // m^2
    //m = m * m * m * m * m; // m^5
    m = m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m * m; // m^50
    cout << "\nm =\n" << m << endl;

    return 0;
}
