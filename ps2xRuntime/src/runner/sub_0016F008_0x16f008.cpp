#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016F008
// Address: 0x16f008 - 0x16f038
void sub_0016F008_0x16f008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F008_0x16f008");
#endif

    switch (ctx->pc) {
        case 0x16f01cu: goto label_16f01c;
        default: break;
    }

    ctx->pc = 0x16f008u;

    // 0x16f008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f00c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16f00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16f010: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16f010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16f014: 0xc05bb4c  jal         func_16ED30
    ctx->pc = 0x16F014u;
    SET_GPR_U32(ctx, 31, 0x16F01Cu);
    ctx->pc = 0x16F018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F014u;
            // 0x16f018: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ED30u;
    if (runtime->hasFunction(0x16ED30u)) {
        auto targetFn = runtime->lookupFunction(0x16ED30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F01Cu; }
        if (ctx->pc != 0x16F01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ED30_0x16ed30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F01Cu; }
        if (ctx->pc != 0x16F01Cu) { return; }
    }
    ctx->pc = 0x16F01Cu;
label_16f01c:
    // 0x16f01c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f020: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16f020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16f024: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x16f024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16f028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f02c: 0x3e00008  jr          $ra
    ctx->pc = 0x16F02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F02Cu;
            // 0x16f030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16F034u;
    // 0x16f034: 0x0  nop
    ctx->pc = 0x16f034u;
    // NOP
}
