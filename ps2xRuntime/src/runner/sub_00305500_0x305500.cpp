#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00305500
// Address: 0x305500 - 0x305580
void sub_00305500_0x305500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305500_0x305500");
#endif

    ctx->pc = 0x305500u;

    // 0x305500: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x305500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x305504: 0xc462c568  lwc1        $f2, -0x3A98($v1)
    ctx->pc = 0x305504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x305508: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x305508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30550c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x30550cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x305510: 0xc460c568  lwc1        $f0, -0x3A98($v1)
    ctx->pc = 0x305510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305514: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x305514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x305518: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x305518u;
    {
        const bool branch_taken_0x305518 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x305518) {
            ctx->pc = 0x305568u;
            goto label_305568;
        }
    }
    ctx->pc = 0x305520u;
    // 0x305520: 0x0  nop
    ctx->pc = 0x305520u;
    // NOP
    // 0x305524: 0x0  nop
    ctx->pc = 0x305524u;
    // NOP
    // 0x305528: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x305528u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x30552c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x30552cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x305530: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x305530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x305534: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x305534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x305538: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x305538u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30553c: 0x0  nop
    ctx->pc = 0x30553cu;
    // NOP
    // 0x305540: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x305540u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x305544: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x305544u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x305548: 0xc461c580  lwc1        $f1, -0x3A80($v1)
    ctx->pc = 0x305548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30554c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30554cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x305550: 0xc4a2c588  lwc1        $f2, -0x3A78($a1)
    ctx->pc = 0x305550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294952328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x305554: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x305554u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x305558: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x305558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x30555c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x30555cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x305560: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x305560u;
    {
        const bool branch_taken_0x305560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305560u;
            // 0x305564: 0xe4800690  swc1        $f0, 0x690($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x305560) {
            ctx->pc = 0x305578u;
            goto label_305578;
        }
    }
    ctx->pc = 0x305568u;
label_305568:
    // 0x305568: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x305568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x30556c: 0xc460c580  lwc1        $f0, -0x3A80($v1)
    ctx->pc = 0x30556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305570: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x305570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x305574: 0xe4800690  swc1        $f0, 0x690($a0)
    ctx->pc = 0x305574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1680), bits); }
label_305578:
    // 0x305578: 0x3e00008  jr          $ra
    ctx->pc = 0x305578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x305580u;
}
