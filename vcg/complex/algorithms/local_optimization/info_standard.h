#pragma once

#include<vcg/math/quadric.h>

namespace vcg
{
	namespace tri
	{
//**Helper CLASSES**//
		template <class VERTEX_TYPE>
		class QInfoStandard
		{
		public:
			QInfoStandard() {}
			static void Init() {}
			static math::Quadric<double>& Qd(VERTEX_TYPE& v) { return v.Qd(); }
			static math::Quadric<double>& Qd(VERTEX_TYPE* v) { return v->Qd(); }
			static typename VERTEX_TYPE::ScalarType W(VERTEX_TYPE* /*v*/) { return 1.0; }
			static typename VERTEX_TYPE::ScalarType W(VERTEX_TYPE&/*v*/) { return 1.0; }
			static void Merge(VERTEX_TYPE& /*v_dest*/, VERTEX_TYPE const& /*v_del*/) {}
		};
}
}
