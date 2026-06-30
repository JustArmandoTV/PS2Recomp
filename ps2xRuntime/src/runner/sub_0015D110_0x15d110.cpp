#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D110
// Address: 0x15d110 - 0x15d1c0
void sub_0015D110_0x15d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D110_0x15d110");
#endif

    ctx->pc = 0x15d110u;

    // 0x15d110: 0x460f70c1  sub.s       $f3, $f14, $f15
    ctx->pc = 0x15d110u;
    ctx->f[3] = FPU_SUB_S(ctx->f[14], ctx->f[15]);
    // 0x15d114: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x15d114u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x15d118: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x15d118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x15d11c: 0x3c08006d  lui         $t0, 0x6D
    ctx->pc = 0x15d11cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)109 << 16));
    // 0x15d120: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x15d120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x15d124: 0x3c06006d  lui         $a2, 0x6D
    ctx->pc = 0x15d124u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)109 << 16));
    // 0x15d128: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15d128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x15d12c: 0x2508ce10  addiu       $t0, $t0, -0x31F0
    ctx->pc = 0x15d12cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954512));
    // 0x15d130: 0x460c6880  add.s       $f2, $f13, $f12
    ctx->pc = 0x15d130u;
    ctx->f[2] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
    // 0x15d134: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x15d134u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x15d138: 0x460c6941  sub.s       $f5, $f13, $f12
    ctx->pc = 0x15d138u;
    ctx->f[5] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x15d13c: 0x46051903  div.s       $f4, $f3, $f5
    ctx->pc = 0x15d13cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[4] = ctx->f[3] / ctx->f[5];
    // 0x15d140: 0x460f70c0  add.s       $f3, $f14, $f15
    ctx->pc = 0x15d140u;
    ctx->f[3] = FPU_ADD_S(ctx->f[14], ctx->f[15]);
    // 0x15d144: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x15d144u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x15d148: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x15d148u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15d14c: 0x0  nop
    ctx->pc = 0x15d14cu;
    // NOP
    // 0x15d150: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x15d150u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[1];
    // 0x15d154: 0x460c6882  mul.s       $f2, $f13, $f12
    ctx->pc = 0x15d154u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[12]);
    // 0x15d158: 0x460e7841  sub.s       $f1, $f15, $f14
    ctx->pc = 0x15d158u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[14]);
    // 0x15d15c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x15d15cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15d160: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x15d160u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[5];
    // 0x15d164: 0xc48057cc  lwc1        $f0, 0x57CC($a0)
    ctx->pc = 0x15d164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 22476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d168: 0xe4a1ce2c  swc1        $f1, -0x31D4($a1)
    ctx->pc = 0x15d168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294954540), bits); }
    // 0x15d16c: 0xe4c3ce1c  swc1        $f3, -0x31E4($a2)
    ctx->pc = 0x15d16cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294954524), bits); }
    // 0x15d170: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15d170u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x15d174: 0x46001840  add.s       $f1, $f3, $f0
    ctx->pc = 0x15d174u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x15d178: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15d178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d17c: 0x0  nop
    ctx->pc = 0x15d17cu;
    // NOP
    // 0x15d180: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15d180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d184: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15D184u;
    {
        const bool branch_taken_0x15d184 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15D188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D184u;
            // 0x15d188: 0xe461ce3c  swc1        $f1, -0x31C4($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d184) {
            ctx->pc = 0x15D190u;
            goto label_15d190;
        }
    }
    ctx->pc = 0x15D18Cu;
    // 0x15d18c: 0xe500002c  swc1        $f0, 0x2C($t0)
    ctx->pc = 0x15d18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
label_15d190:
    // 0x15d190: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15d190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d194: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x15d194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x15d198: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15d198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d19c: 0x0  nop
    ctx->pc = 0x15d19cu;
    // NOP
    // 0x15d1a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15d1a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d1a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x15D1A4u;
    {
        const bool branch_taken_0x15d1a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d1a4) {
            ctx->pc = 0x15D1B0u;
            goto label_15d1b0;
        }
    }
    ctx->pc = 0x15D1ACu;
    // 0x15d1ac: 0xe500002c  swc1        $f0, 0x2C($t0)
    ctx->pc = 0x15d1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
label_15d1b0:
    // 0x15d1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x15D1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D1B8u;
    // 0x15d1b8: 0x0  nop
    ctx->pc = 0x15d1b8u;
    // NOP
    // 0x15d1bc: 0x0  nop
    ctx->pc = 0x15d1bcu;
    // NOP
}
