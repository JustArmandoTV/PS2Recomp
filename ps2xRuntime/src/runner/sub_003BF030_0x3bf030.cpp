#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF030
// Address: 0x3bf030 - 0x3bf0b0
void sub_003BF030_0x3bf030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF030_0x3bf030");
#endif

    ctx->pc = 0x3bf030u;

    // 0x3bf030: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x3bf030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3bf034: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF034u;
    {
        const bool branch_taken_0x3bf034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf034) {
            ctx->pc = 0x3BF05Cu;
            goto label_3bf05c;
        }
    }
    ctx->pc = 0x3BF03Cu;
    // 0x3bf03c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bf03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3bf040: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x3bf040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bf044: 0xc4406524  lwc1        $f0, 0x6524($v0)
    ctx->pc = 0x3bf044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bf048: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3bf048u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x3bf04c: 0x0  nop
    ctx->pc = 0x3bf04cu;
    // NOP
    // 0x3bf050: 0x0  nop
    ctx->pc = 0x3bf050u;
    // NOP
    // 0x3bf054: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3BF054u;
    {
        const bool branch_taken_0x3bf054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf054) {
            ctx->pc = 0x3BF06Cu;
            goto label_3bf06c;
        }
    }
    ctx->pc = 0x3BF05Cu;
label_3bf05c:
    // 0x3bf05c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bf05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3bf060: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x3bf060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bf064: 0xc440655c  lwc1        $f0, 0x655C($v0)
    ctx->pc = 0x3bf064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bf068: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3bf068u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3bf06c:
    // 0x3bf06c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3bf06cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bf070: 0x0  nop
    ctx->pc = 0x3bf070u;
    // NOP
    // 0x3bf074: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3bf074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bf078: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3BF078u;
    {
        const bool branch_taken_0x3bf078 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bf078) {
            ctx->pc = 0x3BF07Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF078u;
            // 0x3bf07c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BF088u;
            goto label_3bf088;
        }
    }
    ctx->pc = 0x3BF080u;
    // 0x3bf080: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3BF080u;
    {
        const bool branch_taken_0x3bf080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF080u;
            // 0x3bf084: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf080) {
            ctx->pc = 0x3BF0A0u;
            goto label_3bf0a0;
        }
    }
    ctx->pc = 0x3BF088u;
label_3bf088:
    // 0x3bf088: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3bf088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bf08c: 0x0  nop
    ctx->pc = 0x3bf08cu;
    // NOP
    // 0x3bf090: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3bf090u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bf094: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3BF094u;
    {
        const bool branch_taken_0x3bf094 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bf094) {
            ctx->pc = 0x3BF0A0u;
            goto label_3bf0a0;
        }
    }
    ctx->pc = 0x3BF09Cu;
    // 0x3bf09c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x3bf09cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_3bf0a0:
    // 0x3bf0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF0A8u;
    // 0x3bf0a8: 0x0  nop
    ctx->pc = 0x3bf0a8u;
    // NOP
    // 0x3bf0ac: 0x0  nop
    ctx->pc = 0x3bf0acu;
    // NOP
}
