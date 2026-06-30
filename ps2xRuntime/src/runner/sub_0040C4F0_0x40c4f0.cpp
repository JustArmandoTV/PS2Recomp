#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040C4F0
// Address: 0x40c4f0 - 0x40c530
void sub_0040C4F0_0x40c4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C4F0_0x40c4f0");
#endif

    switch (ctx->pc) {
        case 0x40c50cu: goto label_40c50c;
        case 0x40c51cu: goto label_40c51c;
        default: break;
    }

    ctx->pc = 0x40c4f0u;

    // 0x40c4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40c4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x40c4f4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x40c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x40c4f8: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x40c4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x40c4fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40C4FCu;
    {
        const bool branch_taken_0x40c4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C4FCu;
            // 0x40c500: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c4fc) {
            ctx->pc = 0x40C514u;
            goto label_40c514;
        }
    }
    ctx->pc = 0x40C504u;
    // 0x40c504: 0xc055234  jal         func_1548D0
    ctx->pc = 0x40C504u;
    SET_GPR_U32(ctx, 31, 0x40C50Cu);
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C50Cu; }
        if (ctx->pc != 0x40C50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C50Cu; }
        if (ctx->pc != 0x40C50Cu) { return; }
    }
    ctx->pc = 0x40C50Cu;
label_40c50c:
    // 0x40c50c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x40C50Cu;
    {
        const bool branch_taken_0x40c50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C50Cu;
            // 0x40c510: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c50c) {
            ctx->pc = 0x40C520u;
            goto label_40c520;
        }
    }
    ctx->pc = 0x40C514u;
label_40c514:
    // 0x40c514: 0xc0550f8  jal         func_1543E0
    ctx->pc = 0x40C514u;
    SET_GPR_U32(ctx, 31, 0x40C51Cu);
    ctx->pc = 0x1543E0u;
    if (runtime->hasFunction(0x1543E0u)) {
        auto targetFn = runtime->lookupFunction(0x1543E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C51Cu; }
        if (ctx->pc != 0x40C51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543E0_0x1543e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C51Cu; }
        if (ctx->pc != 0x40C51Cu) { return; }
    }
    ctx->pc = 0x40C51Cu;
label_40c51c:
    // 0x40c51c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40c51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40c520:
    // 0x40c520: 0x3e00008  jr          $ra
    ctx->pc = 0x40C520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C520u;
            // 0x40c524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40C528u;
    // 0x40c528: 0x0  nop
    ctx->pc = 0x40c528u;
    // NOP
    // 0x40c52c: 0x0  nop
    ctx->pc = 0x40c52cu;
    // NOP
}
