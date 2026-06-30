#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5C58
// Address: 0x1c5c58 - 0x1c5ca8
void sub_001C5C58_0x1c5c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5C58_0x1c5c58");
#endif

    switch (ctx->pc) {
        case 0x1c5c68u: goto label_1c5c68;
        default: break;
    }

    ctx->pc = 0x1c5c58u;

    // 0x1c5c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c5c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5c5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c5c60: 0xc072392  jal         func_1C8E48
    ctx->pc = 0x1C5C60u;
    SET_GPR_U32(ctx, 31, 0x1C5C68u);
    ctx->pc = 0x1C8E48u;
    if (runtime->hasFunction(0x1C8E48u)) {
        auto targetFn = runtime->lookupFunction(0x1C8E48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5C68u; }
        if (ctx->pc != 0x1C5C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8E48_0x1c8e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5C68u; }
        if (ctx->pc != 0x1C5C68u) { return; }
    }
    ctx->pc = 0x1C5C68u;
label_1c5c68:
    // 0x1c5c68: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c5c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c5c6c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c5c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c5c70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5c74: 0x2484bee8  addiu       $a0, $a0, -0x4118
    ctx->pc = 0x1c5c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
    // 0x1c5c78: 0x24c6bfa0  addiu       $a2, $a2, -0x4060
    ctx->pc = 0x1c5c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950816));
    // 0x1c5c7c: 0x240501a3  addiu       $a1, $zero, 0x1A3
    ctx->pc = 0x1c5c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 419));
    // 0x1c5c80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c5c80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5c84: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5C84u;
    {
        const bool branch_taken_0x1c5c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C5C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C84u;
            // 0x1c5c88: 0x2408ff36  addiu       $t0, $zero, -0xCA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967094));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c84) {
            ctx->pc = 0x1C5C98u;
            goto label_1c5c98;
        }
    }
    ctx->pc = 0x1C5C8Cu;
    // 0x1c5c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5c90: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C5C90u;
    ctx->pc = 0x1C5C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C90u;
            // 0x1c5c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C5C98u;
label_1c5c98:
    // 0x1c5c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5c9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c5c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5CA0u;
            // 0x1c5ca4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5CA8u;
}
