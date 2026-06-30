#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00275010
// Address: 0x275010 - 0x275030
void sub_00275010_0x275010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275010_0x275010");
#endif

    switch (ctx->pc) {
        case 0x275024u: goto label_275024;
        default: break;
    }

    ctx->pc = 0x275010u;

    // 0x275010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275018: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x275018u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x27501c: 0xc09d40c  jal         func_275030
    ctx->pc = 0x27501Cu;
    SET_GPR_U32(ctx, 31, 0x275024u);
    ctx->pc = 0x275020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27501Cu;
            // 0x275020: 0x83a6001c  lb          $a2, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275030u;
    if (runtime->hasFunction(0x275030u)) {
        auto targetFn = runtime->lookupFunction(0x275030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275024u; }
        if (ctx->pc != 0x275024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275030_0x275030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275024u; }
        if (ctx->pc != 0x275024u) { return; }
    }
    ctx->pc = 0x275024u;
label_275024:
    // 0x275024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275028: 0x3e00008  jr          $ra
    ctx->pc = 0x275028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27502Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275028u;
            // 0x27502c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275030u;
}
