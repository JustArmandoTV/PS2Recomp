#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180B18
// Address: 0x180b18 - 0x180b50
void sub_00180B18_0x180b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180B18_0x180b18");
#endif

    switch (ctx->pc) {
        case 0x180b2cu: goto label_180b2c;
        case 0x180b34u: goto label_180b34;
        case 0x180b3cu: goto label_180b3c;
        default: break;
    }

    ctx->pc = 0x180b18u;

    // 0x180b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180b1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180b20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x180b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x180b24: 0xc06031a  jal         func_180C68
    ctx->pc = 0x180B24u;
    SET_GPR_U32(ctx, 31, 0x180B2Cu);
    ctx->pc = 0x180B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180B24u;
            // 0x180b28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B2Cu; }
        if (ctx->pc != 0x180B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B2Cu; }
        if (ctx->pc != 0x180B2Cu) { return; }
    }
    ctx->pc = 0x180B2Cu;
label_180b2c:
    // 0x180b2c: 0xc0602d4  jal         func_180B50
    ctx->pc = 0x180B2Cu;
    SET_GPR_U32(ctx, 31, 0x180B34u);
    ctx->pc = 0x180B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180B2Cu;
            // 0x180b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180B50u;
    if (runtime->hasFunction(0x180B50u)) {
        auto targetFn = runtime->lookupFunction(0x180B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B34u; }
        if (ctx->pc != 0x180B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180B50_0x180b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B34u; }
        if (ctx->pc != 0x180B34u) { return; }
    }
    ctx->pc = 0x180B34u;
label_180b34:
    // 0x180b34: 0xc06031c  jal         func_180C70
    ctx->pc = 0x180B34u;
    SET_GPR_U32(ctx, 31, 0x180B3Cu);
    ctx->pc = 0x180B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180B34u;
            // 0x180b38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B3Cu; }
        if (ctx->pc != 0x180B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C70_0x180c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B3Cu; }
        if (ctx->pc != 0x180B3Cu) { return; }
    }
    ctx->pc = 0x180B3Cu;
label_180b3c:
    // 0x180b3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x180b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180b40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x180b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180b48: 0x3e00008  jr          $ra
    ctx->pc = 0x180B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180B48u;
            // 0x180b4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180B50u;
}
