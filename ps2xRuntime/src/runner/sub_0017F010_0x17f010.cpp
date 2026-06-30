#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F010
// Address: 0x17f010 - 0x17f040
void sub_0017F010_0x17f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F010_0x17f010");
#endif

    switch (ctx->pc) {
        case 0x17f020u: goto label_17f020;
        default: break;
    }

    ctx->pc = 0x17f010u;

    // 0x17f010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f018: 0xc05fbe2  jal         func_17EF88
    ctx->pc = 0x17F018u;
    SET_GPR_U32(ctx, 31, 0x17F020u);
    ctx->pc = 0x17EF88u;
    if (runtime->hasFunction(0x17EF88u)) {
        auto targetFn = runtime->lookupFunction(0x17EF88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F020u; }
        if (ctx->pc != 0x17F020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EF88_0x17ef88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F020u; }
        if (ctx->pc != 0x17F020u) { return; }
    }
    ctx->pc = 0x17F020u;
label_17f020:
    // 0x17f020: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x17f020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x17f024: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x17f024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x17f028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f02c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17f02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x17f030: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17f030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17f034: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17f034u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17f038: 0x3e00008  jr          $ra
    ctx->pc = 0x17F038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F038u;
            // 0x17f03c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F040u;
}
