#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00111248
// Address: 0x111248 - 0x111278
void sub_00111248_0x111248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111248_0x111248");
#endif

    switch (ctx->pc) {
        case 0x111258u: goto label_111258;
        case 0x111264u: goto label_111264;
        default: break;
    }

    ctx->pc = 0x111248u;

    // 0x111248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11124c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11124cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111250: 0xc04447c  jal         func_1111F0
    ctx->pc = 0x111250u;
    SET_GPR_U32(ctx, 31, 0x111258u);
    ctx->pc = 0x1111F0u;
    if (runtime->hasFunction(0x1111F0u)) {
        auto targetFn = runtime->lookupFunction(0x1111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111258u; }
        if (ctx->pc != 0x111258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001111F0_0x1111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111258u; }
        if (ctx->pc != 0x111258u) { return; }
    }
    ctx->pc = 0x111258u;
label_111258:
    // 0x111258: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x111258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x11125c: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x11125Cu;
    SET_GPR_U32(ctx, 31, 0x111264u);
    ctx->pc = 0x111260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11125Cu;
            // 0x111260: 0x8c44e444  lw          $a0, -0x1BBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960196)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111264u; }
        if (ctx->pc != 0x111264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111264u; }
        if (ctx->pc != 0x111264u) { return; }
    }
    ctx->pc = 0x111264u;
label_111264:
    // 0x111264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111268: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x111268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11126c: 0x3e00008  jr          $ra
    ctx->pc = 0x11126Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11126Cu;
            // 0x111270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x111274u;
    // 0x111274: 0x0  nop
    ctx->pc = 0x111274u;
    // NOP
}
