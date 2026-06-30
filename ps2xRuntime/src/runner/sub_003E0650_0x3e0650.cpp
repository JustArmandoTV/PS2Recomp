#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E0650
// Address: 0x3e0650 - 0x3e0690
void sub_003E0650_0x3e0650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0650_0x3e0650");
#endif

    switch (ctx->pc) {
        case 0x3e066cu: goto label_3e066c;
        case 0x3e067cu: goto label_3e067c;
        default: break;
    }

    ctx->pc = 0x3e0650u;

    // 0x3e0650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e0650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e0654: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3e0654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3e0658: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x3e0658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x3e065c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E065Cu;
    {
        const bool branch_taken_0x3e065c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E065Cu;
            // 0x3e0660: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e065c) {
            ctx->pc = 0x3E0674u;
            goto label_3e0674;
        }
    }
    ctx->pc = 0x3E0664u;
    // 0x3e0664: 0xc055234  jal         func_1548D0
    ctx->pc = 0x3E0664u;
    SET_GPR_U32(ctx, 31, 0x3E066Cu);
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E066Cu; }
        if (ctx->pc != 0x3E066Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E066Cu; }
        if (ctx->pc != 0x3E066Cu) { return; }
    }
    ctx->pc = 0x3E066Cu;
label_3e066c:
    // 0x3e066c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E066Cu;
    {
        const bool branch_taken_0x3e066c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E066Cu;
            // 0x3e0670: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e066c) {
            ctx->pc = 0x3E0680u;
            goto label_3e0680;
        }
    }
    ctx->pc = 0x3E0674u;
label_3e0674:
    // 0x3e0674: 0xc0550f8  jal         func_1543E0
    ctx->pc = 0x3E0674u;
    SET_GPR_U32(ctx, 31, 0x3E067Cu);
    ctx->pc = 0x1543E0u;
    if (runtime->hasFunction(0x1543E0u)) {
        auto targetFn = runtime->lookupFunction(0x1543E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E067Cu; }
        if (ctx->pc != 0x3E067Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543E0_0x1543e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E067Cu; }
        if (ctx->pc != 0x3E067Cu) { return; }
    }
    ctx->pc = 0x3E067Cu;
label_3e067c:
    // 0x3e067c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e067cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e0680:
    // 0x3e0680: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0680u;
            // 0x3e0684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E0688u;
    // 0x3e0688: 0x0  nop
    ctx->pc = 0x3e0688u;
    // NOP
    // 0x3e068c: 0x0  nop
    ctx->pc = 0x3e068cu;
    // NOP
}
