#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048A1F0
// Address: 0x48a1f0 - 0x48a240
void sub_0048A1F0_0x48a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048A1F0_0x48a1f0");
#endif

    switch (ctx->pc) {
        case 0x48a210u: goto label_48a210;
        default: break;
    }

    ctx->pc = 0x48a1f0u;

    // 0x48a1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48a1f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x48a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x48a1f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48a1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48a1fc: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x48a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x48a200: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x48a200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
    // 0x48a204: 0x8c4401a0  lw          $a0, 0x1A0($v0)
    ctx->pc = 0x48a204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x48a208: 0xc067720  jal         func_19DC80
    ctx->pc = 0x48A208u;
    SET_GPR_U32(ctx, 31, 0x48A210u);
    ctx->pc = 0x48A20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A208u;
            // 0x48a20c: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DC80u;
    if (runtime->hasFunction(0x19DC80u)) {
        auto targetFn = runtime->lookupFunction(0x19DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A210u; }
        if (ctx->pc != 0x48A210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019DC80_0x19dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A210u; }
        if (ctx->pc != 0x48A210u) { return; }
    }
    ctx->pc = 0x48A210u;
label_48a210:
    // 0x48a210: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x48a210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48a214: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x48a214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48a218: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x48a218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x48a21c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x48a21cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x48a220: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x48a220u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x48a224: 0x0  nop
    ctx->pc = 0x48a224u;
    // NOP
    // 0x48a228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48a228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48a22c: 0x3e00008  jr          $ra
    ctx->pc = 0x48A22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48A230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A22Cu;
            // 0x48a230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48A234u;
    // 0x48a234: 0x0  nop
    ctx->pc = 0x48a234u;
    // NOP
    // 0x48a238: 0x0  nop
    ctx->pc = 0x48a238u;
    // NOP
    // 0x48a23c: 0x0  nop
    ctx->pc = 0x48a23cu;
    // NOP
}
