#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CB60
// Address: 0x21cb60 - 0x21cce0
void sub_0021CB60_0x21cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CB60_0x21cb60");
#endif

    ctx->pc = 0x21cb60u;

    // 0x21cb60: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x21cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cb64: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21cb68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cb68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cb6c: 0x3c0c006f  lui         $t4, 0x6F
    ctx->pc = 0x21cb6cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)111 << 16));
    // 0x21cb70: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x21cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x21cb74: 0x3c0b006f  lui         $t3, 0x6F
    ctx->pc = 0x21cb74u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)111 << 16));
    // 0x21cb78: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x21cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21cb7c: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x21cb7cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x21cb80: 0xc463e7c0  lwc1        $f3, -0x1840($v1)
    ctx->pc = 0x21cb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cb84: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x21cb84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x21cb88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21cb88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21cb8c: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x21cb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x21cb90: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x21cb90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x21cb94: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x21cb94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x21cb98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x21cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x21cb9c: 0x258ce7e0  addiu       $t4, $t4, -0x1820
    ctx->pc = 0x21cb9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294961120));
    // 0x21cba0: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x21cba0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21cba4: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x21cba4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x21cba8: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x21cba8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x21cbac: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x21cbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21cbb0: 0xc563e7c4  lwc1        $f3, -0x183C($t3)
    ctx->pc = 0x21cbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4294961092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cbb4: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x21cbb4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21cbb8: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x21cbb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x21cbbc: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x21cbbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x21cbc0: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x21cbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21cbc4: 0xc543e7c8  lwc1        $f3, -0x1838($t2)
    ctx->pc = 0x21cbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294961096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cbc8: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x21cbc8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21cbcc: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x21cbccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x21cbd0: 0xe4e20008  swc1        $f2, 0x8($a3)
    ctx->pc = 0x21cbd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x21cbd4: 0xc4e2000c  lwc1        $f2, 0xC($a3)
    ctx->pc = 0x21cbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21cbd8: 0xc503e7cc  lwc1        $f3, -0x1834($t0)
    ctx->pc = 0x21cbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294961100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cbdc: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x21cbdcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21cbe0: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x21cbe0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x21cbe4: 0xe4e2000c  swc1        $f2, 0xC($a3)
    ctx->pc = 0x21cbe4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x21cbe8: 0xc4e20010  lwc1        $f2, 0x10($a3)
    ctx->pc = 0x21cbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21cbec: 0xc4c3e7d0  lwc1        $f3, -0x1830($a2)
    ctx->pc = 0x21cbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294961104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cbf0: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x21cbf0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21cbf4: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x21cbf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x21cbf8: 0xe4e20010  swc1        $f2, 0x10($a3)
    ctx->pc = 0x21cbf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x21cbfc: 0xc4e20014  lwc1        $f2, 0x14($a3)
    ctx->pc = 0x21cbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21cc00: 0xc4a3e7d4  lwc1        $f3, -0x182C($a1)
    ctx->pc = 0x21cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cc04: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x21cc04u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21cc08: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x21cc08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x21cc0c: 0xe4e20014  swc1        $f2, 0x14($a3)
    ctx->pc = 0x21cc0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x21cc10: 0xc4e20018  lwc1        $f2, 0x18($a3)
    ctx->pc = 0x21cc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21cc14: 0xc483e7d8  lwc1        $f3, -0x1828($a0)
    ctx->pc = 0x21cc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294961112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cc18: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x21cc18u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21cc1c: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x21cc1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x21cc20: 0xe4e20018  swc1        $f2, 0x18($a3)
    ctx->pc = 0x21cc20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x21cc24: 0xc4e2001c  lwc1        $f2, 0x1C($a3)
    ctx->pc = 0x21cc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21cc28: 0xc463e7dc  lwc1        $f3, -0x1824($v1)
    ctx->pc = 0x21cc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cc2c: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x21cc2cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21cc30: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x21cc30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x21cc34: 0xe4e2001c  swc1        $f2, 0x1C($a3)
    ctx->pc = 0x21cc34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x21cc38: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x21cc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21cc3c: 0xc5830000  lwc1        $f3, 0x0($t4)
    ctx->pc = 0x21cc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cc40: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x21cc40u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21cc44: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x21cc44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x21cc48: 0xe5220000  swc1        $f2, 0x0($t1)
    ctx->pc = 0x21cc48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x21cc4c: 0xc5220004  lwc1        $f2, 0x4($t1)
    ctx->pc = 0x21cc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21cc50: 0xc5830004  lwc1        $f3, 0x4($t4)
    ctx->pc = 0x21cc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cc54: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x21cc54u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21cc58: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x21cc58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x21cc5c: 0xe5220004  swc1        $f2, 0x4($t1)
    ctx->pc = 0x21cc5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x21cc60: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x21cc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21cc64: 0xc5830008  lwc1        $f3, 0x8($t4)
    ctx->pc = 0x21cc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cc68: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x21cc68u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21cc6c: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x21cc6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x21cc70: 0xe5220008  swc1        $f2, 0x8($t1)
    ctx->pc = 0x21cc70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x21cc74: 0xc522000c  lwc1        $f2, 0xC($t1)
    ctx->pc = 0x21cc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21cc78: 0xc583000c  lwc1        $f3, 0xC($t4)
    ctx->pc = 0x21cc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cc7c: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x21cc7cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21cc80: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x21cc80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x21cc84: 0xe522000c  swc1        $f2, 0xC($t1)
    ctx->pc = 0x21cc84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x21cc88: 0xc5220010  lwc1        $f2, 0x10($t1)
    ctx->pc = 0x21cc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21cc8c: 0xc5830010  lwc1        $f3, 0x10($t4)
    ctx->pc = 0x21cc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cc90: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x21cc90u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21cc94: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x21cc94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x21cc98: 0xe5220010  swc1        $f2, 0x10($t1)
    ctx->pc = 0x21cc98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    // 0x21cc9c: 0xc5220014  lwc1        $f2, 0x14($t1)
    ctx->pc = 0x21cc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21cca0: 0xc5830014  lwc1        $f3, 0x14($t4)
    ctx->pc = 0x21cca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cca4: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x21cca4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21cca8: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x21cca8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x21ccac: 0xe5220014  swc1        $f2, 0x14($t1)
    ctx->pc = 0x21ccacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 20), bits); }
    // 0x21ccb0: 0xc5220018  lwc1        $f2, 0x18($t1)
    ctx->pc = 0x21ccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ccb4: 0xc5830018  lwc1        $f3, 0x18($t4)
    ctx->pc = 0x21ccb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21ccb8: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x21ccb8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21ccbc: 0x4603009c  madd.s      $f2, $f0, $f3
    ctx->pc = 0x21ccbcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x21ccc0: 0xe5220018  swc1        $f2, 0x18($t1)
    ctx->pc = 0x21ccc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 24), bits); }
    // 0x21ccc4: 0xc522001c  lwc1        $f2, 0x1C($t1)
    ctx->pc = 0x21ccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ccc8: 0xc583001c  lwc1        $f3, 0x1C($t4)
    ctx->pc = 0x21ccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cccc: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x21ccccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21ccd0: 0x4603001c  madd.s      $f0, $f0, $f3
    ctx->pc = 0x21ccd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x21ccd4: 0x3e00008  jr          $ra
    ctx->pc = 0x21CCD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CCD4u;
            // 0x21ccd8: 0xe520001c  swc1        $f0, 0x1C($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CCDCu;
    // 0x21ccdc: 0x0  nop
    ctx->pc = 0x21ccdcu;
    // NOP
}
