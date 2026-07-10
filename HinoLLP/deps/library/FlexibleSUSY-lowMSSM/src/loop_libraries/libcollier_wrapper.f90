# 1 "src/loop_libraries/libcollier_wrapper.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 531 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "src/loop_libraries/libcollier_wrapper.cpp" 2
! ====================================================================
! This file is part of FlexibleSUSY.
!
! FlexibleSUSY is free software: you can redistribute it and/or modify
! it under the terms of the GNU General Public License as published
! by the Free Software Foundation, either version 3 of the License,
! or (at your option) any later version.
!
! FlexibleSUSY is distributed in the hope that it will be useful, but
! WITHOUT ANY WARRANTY; without even the implied warranty of
! MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
! General Public License for more details.
!
! You should have received a copy of the GNU General Public License
! along with FlexibleSUSY. If not, see
! <http:
! ====================================================================
# 71 "src/loop_libraries/libcollier_wrapper.cpp"
module LibCollier_wrapper
   use COLLIER
   use, intrinsic :: iso_c_binding
   use, intrinsic :: iso_fortran_env
   implicit none

contains
   subroutine initialize_collier_dummy() bind(C, name='initialize_collier_impl')
      call Init_cll(4,2,"")
      call SetDeltaIR_cll(0d0, 0d0)
   end

   subroutine set_mu2_uv_dummy(scl2) bind(C, name='set_mu2_uv_impl')
      real(C_DOUBLE), intent(in) :: scl2

      call SetMuUV2_cll(scl2)
      call SetMuIR2_cll(scl2)
   end

   subroutine A0_dummy(res, m02) bind(C, name='A0_impl')
      complex(C_DOUBLE_COMPLEX), intent(in) :: m02
      complex(C_DOUBLE_COMPLEX), intent(out) :: res

      call A0_cll(res, m02)
   end

   subroutine B0_dummy(res, p10, m02, m12) bind(C, name='B0_impl')
      complex(C_DOUBLE_COMPLEX), intent(in) :: p10
      complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12
      complex(C_DOUBLE_COMPLEX), intent(out) :: res

      call B0_cll(res, p10, m02, m12)
   end

   
subroutine B1_dummy(res, p10, m02, m12) bind(C, name="B1_impl")
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Bcoeff(:,:), Bcoeffuv(:,:) 

 allocate(Bcoeff(0:1, 0:2)) 
 allocate(Bcoeffuv(0:1, 0:2)) 
 call B_cll(Bcoeff, Bcoeffuv, p10, m02, m12, 2) 

 res = Bcoeff(0,1) 

 deallocate(Bcoeff, Bcoeffuv) 
end
   
subroutine B00_dummy(res, p10, m02, m12) bind(C, name="B00_impl")
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Bcoeff(:,:), Bcoeffuv(:,:) 

 allocate(Bcoeff(0:1, 0:2)) 
 allocate(Bcoeffuv(0:1, 0:2)) 
 call B_cll(Bcoeff, Bcoeffuv, p10, m02, m12, 2) 

 res = Bcoeff(1,0) 

 deallocate(Bcoeff, Bcoeffuv) 
end

   subroutine DB0_dummy(res, p10, m02, m12) bind(C, name='DB0_impl')
      complex(C_DOUBLE_COMPLEX), intent(in) :: p10
      complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12
      complex(C_DOUBLE_COMPLEX), intent(out) :: res

      call DB0_cll(res, p10, m02, m12)
   end

   subroutine DB1_dummy(res, p10, m02, m12) bind(C, name='DB1_impl')
      complex(C_DOUBLE_COMPLEX), intent(in) :: p10
      complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12
      complex(C_DOUBLE_COMPLEX), intent(out) :: res

      call DB1_cll(res, p10, m02, m12)
   end

   subroutine DB00_dummy(res, p10, m02, m12) bind(C, name='DB00_impl')
      complex(C_DOUBLE_COMPLEX), intent(in) :: p10
      complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12
      complex(C_DOUBLE_COMPLEX), intent(out) :: res
      complex(C_DOUBLE_COMPLEX) :: resUV

      call DB00_cll(res, resUV, p10, m02, m12)
   end

   
subroutine C0_dummy(res, p10, p21, p20, m02, m12, m22) bind(C, name="C0_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p20 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Ccoeff(:,:,:), Ccoeffuv(:,:,:) 

 allocate(Ccoeff(0:1, 0:2, 0:2)) 
 allocate(Ccoeffuv(0:1, 0:2, 0:2)) 
 call C_cll(Ccoeff, Ccoeffuv, p10, p21, p20, m02, m12, m22, 2) 

 res = Ccoeff(0,0,0) 

 deallocate(Ccoeff, Ccoeffuv) 
end
   
subroutine C00_dummy(res, p10, p21, p20, m02, m12, m22) bind(C, name="C00_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p20 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Ccoeff(:,:,:), Ccoeffuv(:,:,:) 

 allocate(Ccoeff(0:1, 0:2, 0:2)) 
 allocate(Ccoeffuv(0:1, 0:2, 0:2)) 
 call C_cll(Ccoeff, Ccoeffuv, p10, p21, p20, m02, m12, m22, 2) 

 res = Ccoeff(1,0,0) 

 deallocate(Ccoeff, Ccoeffuv) 
end
   
subroutine C1_dummy(res, p10, p21, p20, m02, m12, m22) bind(C, name="C1_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p20 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Ccoeff(:,:,:), Ccoeffuv(:,:,:) 

 allocate(Ccoeff(0:1, 0:2, 0:2)) 
 allocate(Ccoeffuv(0:1, 0:2, 0:2)) 
 call C_cll(Ccoeff, Ccoeffuv, p10, p21, p20, m02, m12, m22, 2) 

 res = Ccoeff(0,1,0) 

 deallocate(Ccoeff, Ccoeffuv) 
end
   
subroutine C11_dummy(res, p10, p21, p20, m02, m12, m22) bind(C, name="C11_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p20 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Ccoeff(:,:,:), Ccoeffuv(:,:,:) 

 allocate(Ccoeff(0:1, 0:2, 0:2)) 
 allocate(Ccoeffuv(0:1, 0:2, 0:2)) 
 call C_cll(Ccoeff, Ccoeffuv, p10, p21, p20, m02, m12, m22, 2) 

 res = Ccoeff(0,2,0) 

 deallocate(Ccoeff, Ccoeffuv) 
end
   
subroutine C12_dummy(res, p10, p21, p20, m02, m12, m22) bind(C, name="C12_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p20 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Ccoeff(:,:,:), Ccoeffuv(:,:,:) 

 allocate(Ccoeff(0:1, 0:2, 0:2)) 
 allocate(Ccoeffuv(0:1, 0:2, 0:2)) 
 call C_cll(Ccoeff, Ccoeffuv, p10, p21, p20, m02, m12, m22, 2) 

 res = Ccoeff(0,1,1) 

 deallocate(Ccoeff, Ccoeffuv) 
end
   
subroutine C2_dummy(res, p10, p21, p20, m02, m12, m22) bind(C, name="C2_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p20 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Ccoeff(:,:,:), Ccoeffuv(:,:,:) 

 allocate(Ccoeff(0:1, 0:2, 0:2)) 
 allocate(Ccoeffuv(0:1, 0:2, 0:2)) 
 call C_cll(Ccoeff, Ccoeffuv, p10, p21, p20, m02, m12, m22, 2) 

 res = Ccoeff(0,0,1) 

 deallocate(Ccoeff, Ccoeffuv) 
end
   
subroutine C22_dummy(res, p10, p21, p20, m02, m12, m22) bind(C, name="C22_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p20 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Ccoeff(:,:,:), Ccoeffuv(:,:,:) 

 allocate(Ccoeff(0:1, 0:2, 0:2)) 
 allocate(Ccoeffuv(0:1, 0:2, 0:2)) 
 call C_cll(Ccoeff, Ccoeffuv, p10, p21, p20, m02, m12, m22, 2) 

 res = Ccoeff(0,0,2) 

 deallocate(Ccoeff, Ccoeffuv) 
end

   
subroutine D0_dummy(res,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32) bind(C, name="D0_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p32, p30, p20, p31 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22, m32 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Dcoeff(:,:,:,:), Dcoeffuv(:,:,:,:) 

 allocate(Dcoeff(0:1, 0:2, 0:2, 0:2)) 
 allocate(Dcoeffuv(0:1, 0:2, 0:2, 0:2)) 
 call D_cll(Dcoeff,Dcoeffuv,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32,2) 

 res = Dcoeff(0,0,0,0) 

 deallocate(Dcoeff, Dcoeffuv) 
end
   
subroutine D00_dummy(res,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32) bind(C, name="D00_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p32, p30, p20, p31 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22, m32 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Dcoeff(:,:,:,:), Dcoeffuv(:,:,:,:) 

 allocate(Dcoeff(0:1, 0:2, 0:2, 0:2)) 
 allocate(Dcoeffuv(0:1, 0:2, 0:2, 0:2)) 
 call D_cll(Dcoeff,Dcoeffuv,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32,2) 

 res = Dcoeff(1,0,0,0) 

 deallocate(Dcoeff, Dcoeffuv) 
end
   
subroutine D1_dummy(res,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32) bind(C, name="D1_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p32, p30, p20, p31 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22, m32 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Dcoeff(:,:,:,:), Dcoeffuv(:,:,:,:) 

 allocate(Dcoeff(0:1, 0:2, 0:2, 0:2)) 
 allocate(Dcoeffuv(0:1, 0:2, 0:2, 0:2)) 
 call D_cll(Dcoeff,Dcoeffuv,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32,2) 

 res = Dcoeff(0,1,0,0) 

 deallocate(Dcoeff, Dcoeffuv) 
end
   
subroutine D11_dummy(res,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32) bind(C, name="D11_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p32, p30, p20, p31 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22, m32 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Dcoeff(:,:,:,:), Dcoeffuv(:,:,:,:) 

 allocate(Dcoeff(0:1, 0:2, 0:2, 0:2)) 
 allocate(Dcoeffuv(0:1, 0:2, 0:2, 0:2)) 
 call D_cll(Dcoeff,Dcoeffuv,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32,2) 

 res = Dcoeff(0,2,0,0) 

 deallocate(Dcoeff, Dcoeffuv) 
end
   
subroutine D12_dummy(res,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32) bind(C, name="D12_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p32, p30, p20, p31 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22, m32 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Dcoeff(:,:,:,:), Dcoeffuv(:,:,:,:) 

 allocate(Dcoeff(0:1, 0:2, 0:2, 0:2)) 
 allocate(Dcoeffuv(0:1, 0:2, 0:2, 0:2)) 
 call D_cll(Dcoeff,Dcoeffuv,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32,2) 

 res = Dcoeff(0,1,1,0) 

 deallocate(Dcoeff, Dcoeffuv) 
end
   
subroutine D13_dummy(res,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32) bind(C, name="D13_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p32, p30, p20, p31 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22, m32 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Dcoeff(:,:,:,:), Dcoeffuv(:,:,:,:) 

 allocate(Dcoeff(0:1, 0:2, 0:2, 0:2)) 
 allocate(Dcoeffuv(0:1, 0:2, 0:2, 0:2)) 
 call D_cll(Dcoeff,Dcoeffuv,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32,2) 

 res = Dcoeff(0,1,0,1) 

 deallocate(Dcoeff, Dcoeffuv) 
end
   
subroutine D2_dummy(res,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32) bind(C, name="D2_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p32, p30, p20, p31 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22, m32 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Dcoeff(:,:,:,:), Dcoeffuv(:,:,:,:) 

 allocate(Dcoeff(0:1, 0:2, 0:2, 0:2)) 
 allocate(Dcoeffuv(0:1, 0:2, 0:2, 0:2)) 
 call D_cll(Dcoeff,Dcoeffuv,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32,2) 

 res = Dcoeff(0,0,1,0) 

 deallocate(Dcoeff, Dcoeffuv) 
end
   
subroutine D22_dummy(res,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32) bind(C, name="D22_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p32, p30, p20, p31 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22, m32 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Dcoeff(:,:,:,:), Dcoeffuv(:,:,:,:) 

 allocate(Dcoeff(0:1, 0:2, 0:2, 0:2)) 
 allocate(Dcoeffuv(0:1, 0:2, 0:2, 0:2)) 
 call D_cll(Dcoeff,Dcoeffuv,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32,2) 

 res = Dcoeff(0,0,2,0) 

 deallocate(Dcoeff, Dcoeffuv) 
end
   
subroutine D23_dummy(res,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32) bind(C, name="D23_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p32, p30, p20, p31 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22, m32 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Dcoeff(:,:,:,:), Dcoeffuv(:,:,:,:) 

 allocate(Dcoeff(0:1, 0:2, 0:2, 0:2)) 
 allocate(Dcoeffuv(0:1, 0:2, 0:2, 0:2)) 
 call D_cll(Dcoeff,Dcoeffuv,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32,2) 

 res = Dcoeff(0,0,1,1) 

 deallocate(Dcoeff, Dcoeffuv) 
end
   
subroutine D3_dummy(res,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32) bind(C, name="D3_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p32, p30, p20, p31 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22, m32 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Dcoeff(:,:,:,:), Dcoeffuv(:,:,:,:) 

 allocate(Dcoeff(0:1, 0:2, 0:2, 0:2)) 
 allocate(Dcoeffuv(0:1, 0:2, 0:2, 0:2)) 
 call D_cll(Dcoeff,Dcoeffuv,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32,2) 

 res = Dcoeff(0,0,0,1) 

 deallocate(Dcoeff, Dcoeffuv) 
end
   
subroutine D33_dummy(res,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32) bind(C, name="D33_impl") 
 complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p32, p30, p20, p31 
 complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22, m32 
 complex(C_DOUBLE_COMPLEX), intent(out) :: res 
 complex(REAL64), allocatable :: Dcoeff(:,:,:,:), Dcoeffuv(:,:,:,:) 

 allocate(Dcoeff(0:1, 0:2, 0:2, 0:2)) 
 allocate(Dcoeffuv(0:1, 0:2, 0:2, 0:2)) 
 call D_cll(Dcoeff,Dcoeffuv,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32,2) 

 res = Dcoeff(0,0,0,2) 

 deallocate(Dcoeff, Dcoeffuv) 
end

   subroutine get_T1_dummy(a,m02) bind(C, name='get_A_impl')
      complex(C_DOUBLE_COMPLEX), intent(in) :: m02
      complex(C_DOUBLE_COMPLEX), intent(out), dimension(1) :: a
      complex(REAL64), allocatable :: Acoeff(:), Acoeffuv(:)

      allocate(Acoeff(0:0))
      allocate(Acoeffuv(0:0))

      call A_cll(Acoeff,Acoeffuv,m02,0)
      a(1) = Acoeff(0)

      deallocate(Acoeff,Acoeffuv)
   end

   subroutine get_T2_dummy(b,p10,m02,m12) bind(C, name='get_B_impl')
      complex(C_DOUBLE_COMPLEX), intent(in) :: p10
      complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12
      complex(C_DOUBLE_COMPLEX), intent(out), dimension(3) :: b
      complex(REAL64), allocatable :: Bcoeff(:,:), Bcoeffuv(:,:)

      allocate(Bcoeff(0:1,0:2))
      allocate(Bcoeffuv(0:1,0:2))
      call B_cll(Bcoeff, Bcoeffuv, p10, m02, m12, 2)
      b(1) = Bcoeff(0,0)
      b(2) = Bcoeff(0,1)
      b(3) = Bcoeff(1,0)

      deallocate(Bcoeff,Bcoeffuv)
   end

   subroutine get_DT2_dummy(b,p10,m02,m12) bind(C, name='get_DB_impl')
      complex(C_DOUBLE_COMPLEX), intent(in) :: p10
      complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12
      complex(C_DOUBLE_COMPLEX), intent(out), dimension(3) :: b
      complex(REAL64), allocatable :: DBcoeff(:,:), DBcoeffuv(:,:)

      allocate(DBcoeff(0:1,0:2))
      allocate(DBcoeffuv(0:1,0:2))
      call DB_cll(DBcoeff, DBcoeffuv, p10, m02, m12, 2)
      b(1) = DBcoeff(0,0)
      b(2) = DBcoeff(0,1)
      b(3) = DBcoeff(1,0)

      deallocate(DBcoeff,DBcoeffuv)
   end

   subroutine get_T3_dummy(c,p10,p21,p20,m02,m12,m22) bind(C, name='get_C_impl')
      complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p20
      complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22
      complex(C_DOUBLE_COMPLEX), intent(out), dimension(7) :: c
      complex(REAL64), allocatable :: Ccoeff(:,:,:), Ccoeffuv(:,:,:)

      allocate(Ccoeff(0:1,0:2,0:2))
      allocate(Ccoeffuv(0:1,0:2,0:2))
      call C_cll(Ccoeff, Ccoeffuv, p10, p21, p20, m02, m12, m22, 2)
      c(1) = Ccoeff(0,0,0)
      c(2) = Ccoeff(0,1,0)
      c(3) = Ccoeff(0,0,1)
      c(4) = Ccoeff(1,0,0)
      c(5) = Ccoeff(0,2,0)
      c(6) = Ccoeff(0,1,1)
      c(7) = Ccoeff(0,0,2)

      deallocate(Ccoeff,Ccoeffuv)
   end

   subroutine get_T4_dummy(d,p10,p21,p32,p30,p20,p31,m02,m12,m22,m32) bind(C, name='get_D_impl')
     complex(C_DOUBLE_COMPLEX), intent(in) :: p10, p21, p32, p30, p20, p31
     complex(C_DOUBLE_COMPLEX), intent(in) :: m02, m12, m22, m32
     complex(C_DOUBLE_COMPLEX), intent(out), dimension(11) :: d
     complex(REAL64), allocatable :: TNcoeff(:),TNcoeffuv(:)
     integer :: i
     allocate(TNcoeff(11))
     allocate(TNcoeffuv(11))

     call TN_cll(TNcoeff,TNcoeffuv,[ p10,p21,p32,p30,p20,p31 ],[ m02,m12,m22,m32 ],4,2)
     do i = 1, 11
        d(i) = TNcoeff(i)
     end do

     deallocate(TNcoeff,TNcoeffuv)
   end

end module
