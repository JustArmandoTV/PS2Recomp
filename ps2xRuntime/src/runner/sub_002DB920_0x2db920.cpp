#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB920
// Address: 0x2db920 - 0x2db970
void sub_002DB920_0x2db920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB920_0x2db920");
#endif

    ctx->pc = 0x2db920u;

    // 0x2db920: 0x460c6841  sub.s       $f1, $f13, $f12
    ctx->pc = 0x2db920u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x2db924: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2db924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db928: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x2db928u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2db92c: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x2db92cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2db930: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2db930u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db934: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB934u;
    {
        const bool branch_taken_0x2db934 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB934u;
            // 0x2db938: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db934) {
            ctx->pc = 0x2DB944u;
            goto label_2db944;
        }
    }
    ctx->pc = 0x2DB93Cu;
    // 0x2db93c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DB93Cu;
    {
        const bool branch_taken_0x2db93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB93Cu;
            // 0x2db940: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db93c) {
            ctx->pc = 0x2DB958u;
            goto label_2db958;
        }
    }
    ctx->pc = 0x2DB944u;
label_2db944:
    // 0x2db944: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2db944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2db948: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2db948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db94c: 0x0  nop
    ctx->pc = 0x2db94cu;
    // NOP
    // 0x2db950: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2db950u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2db954: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2db954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2db958:
    // 0x2db958: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2db958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2db95c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB95Cu;
            // 0x2db960: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB964u;
    // 0x2db964: 0x0  nop
    ctx->pc = 0x2db964u;
    // NOP
    // 0x2db968: 0x0  nop
    ctx->pc = 0x2db968u;
    // NOP
    // 0x2db96c: 0x0  nop
    ctx->pc = 0x2db96cu;
    // NOP
}
