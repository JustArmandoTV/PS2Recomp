#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036B300
// Address: 0x36b300 - 0x36b340
void sub_0036B300_0x36b300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B300_0x36b300");
#endif

    switch (ctx->pc) {
        case 0x36b31cu: goto label_36b31c;
        case 0x36b32cu: goto label_36b32c;
        default: break;
    }

    ctx->pc = 0x36b300u;

    // 0x36b300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36b300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36b304: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x36b304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x36b308: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x36b308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x36b30c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36B30Cu;
    {
        const bool branch_taken_0x36b30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B30Cu;
            // 0x36b310: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b30c) {
            ctx->pc = 0x36B324u;
            goto label_36b324;
        }
    }
    ctx->pc = 0x36B314u;
    // 0x36b314: 0xc055234  jal         func_1548D0
    ctx->pc = 0x36B314u;
    SET_GPR_U32(ctx, 31, 0x36B31Cu);
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B31Cu; }
        if (ctx->pc != 0x36B31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B31Cu; }
        if (ctx->pc != 0x36B31Cu) { return; }
    }
    ctx->pc = 0x36B31Cu;
label_36b31c:
    // 0x36b31c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36B31Cu;
    {
        const bool branch_taken_0x36b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B31Cu;
            // 0x36b320: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b31c) {
            ctx->pc = 0x36B330u;
            goto label_36b330;
        }
    }
    ctx->pc = 0x36B324u;
label_36b324:
    // 0x36b324: 0xc0550f8  jal         func_1543E0
    ctx->pc = 0x36B324u;
    SET_GPR_U32(ctx, 31, 0x36B32Cu);
    ctx->pc = 0x1543E0u;
    if (runtime->hasFunction(0x1543E0u)) {
        auto targetFn = runtime->lookupFunction(0x1543E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B32Cu; }
        if (ctx->pc != 0x36B32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543E0_0x1543e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B32Cu; }
        if (ctx->pc != 0x36B32Cu) { return; }
    }
    ctx->pc = 0x36B32Cu;
label_36b32c:
    // 0x36b32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36b32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36b330:
    // 0x36b330: 0x3e00008  jr          $ra
    ctx->pc = 0x36B330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B330u;
            // 0x36b334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36B338u;
    // 0x36b338: 0x0  nop
    ctx->pc = 0x36b338u;
    // NOP
    // 0x36b33c: 0x0  nop
    ctx->pc = 0x36b33cu;
    // NOP
}
