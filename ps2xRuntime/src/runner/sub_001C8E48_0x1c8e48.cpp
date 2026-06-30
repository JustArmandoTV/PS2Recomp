#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8E48
// Address: 0x1c8e48 - 0x1c8ec0
void sub_001C8E48_0x1c8e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8E48_0x1c8e48");
#endif

    switch (ctx->pc) {
        case 0x1c8e58u: goto label_1c8e58;
        case 0x1c8e60u: goto label_1c8e60;
        case 0x1c8e70u: goto label_1c8e70;
        case 0x1c8e78u: goto label_1c8e78;
        case 0x1c8e90u: goto label_1c8e90;
        case 0x1c8ea8u: goto label_1c8ea8;
        default: break;
    }

    ctx->pc = 0x1c8e48u;

    // 0x1c8e48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8e4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8e50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8e54: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1c8e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8e58:
    // 0x1c8e58: 0xc05ec0e  jal         func_17B038
    ctx->pc = 0x1C8E58u;
    SET_GPR_U32(ctx, 31, 0x1C8E60u);
    ctx->pc = 0x17B038u;
    if (runtime->hasFunction(0x17B038u)) {
        auto targetFn = runtime->lookupFunction(0x17B038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8E60u; }
        if (ctx->pc != 0x1C8E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B038_0x17b038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8E60u; }
        if (ctx->pc != 0x1C8E60u) { return; }
    }
    ctx->pc = 0x1C8E60u;
label_1c8e60:
    // 0x1c8e60: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1C8E60u;
    {
        const bool branch_taken_0x1c8e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1c8e60) {
            ctx->pc = 0x1C8E58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8e58;
        }
    }
    ctx->pc = 0x1C8E68u;
    // 0x1c8e68: 0xc061f74  jal         func_187DD0
    ctx->pc = 0x1C8E68u;
    SET_GPR_U32(ctx, 31, 0x1C8E70u);
    ctx->pc = 0x187DD0u;
    if (runtime->hasFunction(0x187DD0u)) {
        auto targetFn = runtime->lookupFunction(0x187DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8E70u; }
        if (ctx->pc != 0x1C8E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187DD0_0x187dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8E70u; }
        if (ctx->pc != 0x1C8E70u) { return; }
    }
    ctx->pc = 0x1C8E70u;
label_1c8e70:
    // 0x1c8e70: 0xc05ec0e  jal         func_17B038
    ctx->pc = 0x1C8E70u;
    SET_GPR_U32(ctx, 31, 0x1C8E78u);
    ctx->pc = 0x17B038u;
    if (runtime->hasFunction(0x17B038u)) {
        auto targetFn = runtime->lookupFunction(0x17B038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8E78u; }
        if (ctx->pc != 0x1C8E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B038_0x17b038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8E78u; }
        if (ctx->pc != 0x1C8E78u) { return; }
    }
    ctx->pc = 0x1C8E78u;
label_1c8e78:
    // 0x1c8e78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c8e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c8e7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8e80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8e84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c8e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c8e88: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8E88u;
            // 0x1c8e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8E90u;
label_1c8e90:
    // 0x1c8e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8e9c: 0x8061f7a  j           func_187DE8
    ctx->pc = 0x1C8E9Cu;
    ctx->pc = 0x1C8EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8E9Cu;
            // 0x1c8ea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187DE8_0x187de8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C8EA4u;
    // 0x1c8ea4: 0x0  nop
    ctx->pc = 0x1c8ea4u;
    // NOP
label_1c8ea8:
    // 0x1c8ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8eac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8eb4: 0x805ec12  j           func_17B048
    ctx->pc = 0x1C8EB4u;
    ctx->pc = 0x1C8EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8EB4u;
            // 0x1c8eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B048u;
    if (runtime->hasFunction(0x17B048u)) {
        auto targetFn = runtime->lookupFunction(0x17B048u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017B048_0x17b048(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C8EBCu;
    // 0x1c8ebc: 0x0  nop
    ctx->pc = 0x1c8ebcu;
    // NOP
}
