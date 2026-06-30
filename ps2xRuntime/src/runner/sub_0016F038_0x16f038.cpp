#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016F038
// Address: 0x16f038 - 0x16f068
void sub_0016F038_0x16f038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F038_0x16f038");
#endif

    switch (ctx->pc) {
        case 0x16f050u: goto label_16f050;
        default: break;
    }

    ctx->pc = 0x16f038u;

    // 0x16f038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f03c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16f03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16f040: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f044: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16f044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16f048: 0xc05949a  jal         func_165268
    ctx->pc = 0x16F048u;
    SET_GPR_U32(ctx, 31, 0x16F050u);
    ctx->pc = 0x16F04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F048u;
            // 0x16f04c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165268u;
    if (runtime->hasFunction(0x165268u)) {
        auto targetFn = runtime->lookupFunction(0x165268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F050u; }
        if (ctx->pc != 0x16F050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00165268_0x165268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F050u; }
        if (ctx->pc != 0x16F050u) { return; }
    }
    ctx->pc = 0x16F050u;
label_16f050:
    // 0x16f050: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x16f050u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f054: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16f054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16f058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16f058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f05c: 0x3e00008  jr          $ra
    ctx->pc = 0x16F05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F05Cu;
            // 0x16f060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16F064u;
    // 0x16f064: 0x0  nop
    ctx->pc = 0x16f064u;
    // NOP
}
