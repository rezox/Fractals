#pragma hdrstop
#include "LIB_Complex.h"
#pragma package(smart_init)
//############################################################################## ��

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$�y���R�[�h�z

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% TDoubleC

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& private

/////////////////////////////////////////////////////////////////////// �A�N�Z�T

double TDoubleC::GetAbs2()
{
	return Pow2( R ) + Pow2( I );
}

double TDoubleC::GetAbso()
{
	return Roo2( GetAbs2() );
}

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& public

TDoubleC::TDoubleC( const double R_ )
{
	R = R_;
	I = 0.0;
}

TDoubleC::TDoubleC( const double R_, const double I_ )
{
	R = R_;
	I = I_;
}

///////////////////////////////////////////////////////////////////////// ���Z�q

TDoubleC operator+( const TDoubleC& A_, const TDoubleC& B_ )
{
	TDoubleC Result;

	Result.R = A_.R + B_.R;
	Result.I = A_.I + B_.I;

	return Result;
}

TDoubleC operator*( const TDoubleC& A_, const TDoubleC& B_ )
{
	TDoubleC Result;

	Result.R = A_.R * B_.R - A_.I * B_.I;
	Result.I = A_.I * B_.R + A_.R * B_.I;

	return Result;
}

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% TDoubleAreaC

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& private

/////////////////////////////////////////////////////////////////////// �A�N�Z�T

double TDoubleAreaC::GetSizeR()
{
	return Max.R - Min.R;
}

double TDoubleAreaC::GetSizeI()
{
	return Max.I - Min.I;
}

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& public

TDoubleAreaC::TDoubleAreaC( const double MinR_, const double MinI_, const double MaxR_, const double MaxI_ )
{
	Min.R = MinR_;
	Min.I = MinI_;
	Max.R = MaxR_;
	Max.I = MaxI_;
}
///////////////////////////////////////////////////////////////////////// ���Z�q

///////////////////////////////////////////////////////////////////////// �^�ϊ�

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$�y�N���X�z

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$�y���[�`���z

TDoubleC Pow2( const TDoubleC X_ )
{
	return X_ * X_;
}

//############################################################################## ��