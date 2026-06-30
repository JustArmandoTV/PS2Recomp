#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173B60
// Address: 0x173b60 - 0x173b98
void sub_00173B60_0x173b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173B60_0x173b60");
#endif

    switch (ctx->pc) {
        case 0x173b74u: goto label_173b74;
        case 0x173b7cu: goto label_173b7c;
        case 0x173b84u: goto label_173b84;
        default: break;
    }

    ctx->pc = 0x173b60u;

    // 0x173b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173b64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173b68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x173b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x173b6c: 0xc0599de  jal         func_166778
    ctx->pc = 0x173B6Cu;
    SET_GPR_U32(ctx, 31, 0x173B74u);
    ctx->pc = 0x173B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173B6Cu;
            // 0x173b70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B74u; }
        if (ctx->pc != 0x173B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B74u; }
        if (ctx->pc != 0x173B74u) { return; }
    }
    ctx->pc = 0x173B74u;
label_173b74:
    // 0x173b74: 0xc05cee6  jal         func_173B98
    ctx->pc = 0x173B74u;
    SET_GPR_U32(ctx, 31, 0x173B7Cu);
    ctx->pc = 0x173B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173B74u;
            // 0x173b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173B98u;
    if (runtime->hasFunction(0x173B98u)) {
        auto targetFn = runtime->lookupFunction(0x173B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B7Cu; }
        if (ctx->pc != 0x173B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173B98_0x173b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B7Cu; }
        if (ctx->pc != 0x173B7Cu) { return; }
    }
    ctx->pc = 0x173B7Cu;
label_173b7c:
    // 0x173b7c: 0xc0599e0  jal         func_166780
    ctx->pc = 0x173B7Cu;
    SET_GPR_U32(ctx, 31, 0x173B84u);
    ctx->pc = 0x173B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173B7Cu;
            // 0x173b80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B84u; }
        if (ctx->pc != 0x173B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B84u; }
        if (ctx->pc != 0x173B84u) { return; }
    }
    ctx->pc = 0x173B84u;
label_173b84:
    // 0x173b84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x173b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173b88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x173b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173b90: 0x3e00008  jr          $ra
    ctx->pc = 0x173B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173B90u;
            // 0x173b94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173B98u;
}
