#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B7D60
// Address: 0x4b7d60 - 0x4b7f10
void sub_004B7D60_0x4b7d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7D60_0x4b7d60");
#endif

    ctx->pc = 0x4b7d60u;

    // 0x4b7d60: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x4b7d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4b7d64: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x4b7d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4b7d68: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x4b7d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b7d6c: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x4b7d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4b7d70: 0x4607201a  mula.s      $f4, $f7
    ctx->pc = 0x4b7d70u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x4b7d74: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x4b7d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4b7d78: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x4b7d78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x4b7d7c: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x4b7d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4b7d80: 0x4605101a  mula.s      $f2, $f5
    ctx->pc = 0x4b7d80u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x4b7d84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b7d84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b7d88: 0x4607309d  msub.s      $f2, $f6, $f7
    ctx->pc = 0x4b7d88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[7]));
    // 0x4b7d8c: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x4b7d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x4b7d90: 0x4603301a  mula.s      $f6, $f3
    ctx->pc = 0x4b7d90u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x4b7d94: 0x4605205d  msub.s      $f1, $f4, $f5
    ctx->pc = 0x4b7d94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x4b7d98: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x4b7d98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x4b7d9c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x4b7d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x4b7da0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x4b7da0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x4b7da4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x4b7da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b7da8: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x4b7da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4b7dac: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x4b7dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b7db0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4b7db0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4b7db4: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x4b7db4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x4b7db8: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x4b7db8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x4b7dbc: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x4b7dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b7dc0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x4b7dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b7dc4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4b7dc4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4b7dc8: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x4b7dc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x4b7dcc: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x4b7dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x4b7dd0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x4b7dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b7dd4: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x4b7dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b7dd8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4b7dd8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4b7ddc: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x4b7ddcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x4b7de0: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x4b7de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x4b7de4: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x4b7de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b7de8: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x4b7de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b7dec: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4b7decu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4b7df0: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x4b7df0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x4b7df4: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x4b7df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x4b7df8: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x4b7df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b7dfc: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x4b7dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4b7e00: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x4b7e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b7e04: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4b7e04u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4b7e08: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x4b7e08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x4b7e0c: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x4b7e0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x4b7e10: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x4b7e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b7e14: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x4b7e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b7e18: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4b7e18u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4b7e1c: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x4b7e1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x4b7e20: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x4b7e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x4b7e24: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x4b7e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b7e28: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x4b7e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b7e2c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4b7e2cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4b7e30: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x4b7e30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x4b7e34: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x4b7e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x4b7e38: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x4b7e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b7e3c: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x4b7e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b7e40: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4b7e40u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4b7e44: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x4b7e44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x4b7e48: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x4b7e48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x4b7e4c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x4b7e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b7e50: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x4b7e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b7e54: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x4b7e54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x4b7e58: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x4b7e58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x4b7e5c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x4b7e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b7e60: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x4b7e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b7e64: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4b7e64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4b7e68: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x4b7e68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x4b7e6c: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x4b7e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b7e70: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x4b7e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b7e74: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4b7e74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4b7e78: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x4b7e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x4b7e7c: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x4b7e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b7e80: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x4b7e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b7e84: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4b7e84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4b7e88: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x4b7e88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x4b7e8c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x4b7e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b7e90: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x4b7e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b7e94: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x4b7e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4b7e98: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x4b7e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4b7e9c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x4b7e9cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4b7ea0: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x4b7ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4b7ea4: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x4b7ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4b7ea8: 0x4603201e  madda.s     $f4, $f3
    ctx->pc = 0x4b7ea8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x4b7eac: 0xc4a8000c  lwc1        $f8, 0xC($a1)
    ctx->pc = 0x4b7eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4b7eb0: 0xc487000c  lwc1        $f7, 0xC($a0)
    ctx->pc = 0x4b7eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4b7eb4: 0x4605301e  madda.s     $f6, $f5
    ctx->pc = 0x4b7eb4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[5]));
    // 0x4b7eb8: 0x4607405c  madd.s      $f1, $f8, $f7
    ctx->pc = 0x4b7eb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[7]));
    // 0x4b7ebc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b7ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b7ec0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x4B7EC0u;
    {
        const bool branch_taken_0x4b7ec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b7ec0) {
            ctx->pc = 0x4B7EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7EC0u;
            // 0x4b7ec4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B7ECCu;
            goto label_4b7ecc;
        }
    }
    ctx->pc = 0x4B7EC8u;
    // 0x4b7ec8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4b7ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4b7ecc:
    // 0x4b7ecc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4B7ECCu;
    {
        const bool branch_taken_0x4b7ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b7ecc) {
            ctx->pc = 0x4B7F04u;
            goto label_4b7f04;
        }
    }
    ctx->pc = 0x4B7ED4u;
    // 0x4b7ed4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4b7ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b7ed8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4b7ed8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4b7edc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x4b7edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x4b7ee0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x4b7ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b7ee4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4b7ee4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4b7ee8: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x4b7ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x4b7eec: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x4b7eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b7ef0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4b7ef0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4b7ef4: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x4b7ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x4b7ef8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x4b7ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b7efc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4b7efcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4b7f00: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x4b7f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_4b7f04:
    // 0x4b7f04: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B7F0Cu;
    // 0x4b7f0c: 0x0  nop
    ctx->pc = 0x4b7f0cu;
    // NOP
}
