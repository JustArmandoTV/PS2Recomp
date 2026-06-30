#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00305580
// Address: 0x305580 - 0x3055c0
void sub_00305580_0x305580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305580_0x305580");
#endif

    ctx->pc = 0x305580u;

    // 0x305580: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x305580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x305584: 0xc462c570  lwc1        $f2, -0x3A90($v1)
    ctx->pc = 0x305584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x305588: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x305588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30558c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x30558cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x305590: 0xc460c570  lwc1        $f0, -0x3A90($v1)
    ctx->pc = 0x305590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305594: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x305594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x305598: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x305598u;
    {
        const bool branch_taken_0x305598 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x305598) {
            ctx->pc = 0x30559Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305598u;
            // 0x30559c: 0xac800de8  sw          $zero, 0xDE8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3055B8u;
            goto label_3055b8;
        }
    }
    ctx->pc = 0x3055A0u;
    // 0x3055a0: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x3055a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3055a4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x3055a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x3055a8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x3055a8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x3055ac: 0xc460c578  lwc1        $f0, -0x3A88($v1)
    ctx->pc = 0x3055acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3055b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3055b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3055b4: 0xe4800de8  swc1        $f0, 0xDE8($a0)
    ctx->pc = 0x3055b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3560), bits); }
label_3055b8:
    // 0x3055b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3055B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3055C0u;
}
