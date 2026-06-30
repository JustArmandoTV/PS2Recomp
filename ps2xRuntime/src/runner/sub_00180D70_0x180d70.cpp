#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180D70
// Address: 0x180d70 - 0x180df0
void sub_00180D70_0x180d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180D70_0x180d70");
#endif

    switch (ctx->pc) {
        case 0x180d90u: goto label_180d90;
        case 0x180db8u: goto label_180db8;
        case 0x180dc0u: goto label_180dc0;
        case 0x180dccu: goto label_180dcc;
        case 0x180de0u: goto label_180de0;
        default: break;
    }

    ctx->pc = 0x180d70u;

    // 0x180d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180d74: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x180d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x180d78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x180d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x180d7c: 0x24426d60  addiu       $v0, $v0, 0x6D60
    ctx->pc = 0x180d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28000));
    // 0x180d80: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x180d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x180d84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x180d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180d88: 0xc06031e  jal         func_180C78
    ctx->pc = 0x180D88u;
    SET_GPR_U32(ctx, 31, 0x180D90u);
    ctx->pc = 0x180D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180D88u;
            // 0x180d8c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C78u;
    if (runtime->hasFunction(0x180C78u)) {
        auto targetFn = runtime->lookupFunction(0x180C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D90u; }
        if (ctx->pc != 0x180D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C78_0x180c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D90u; }
        if (ctx->pc != 0x180D90u) { return; }
    }
    ctx->pc = 0x180D90u;
label_180d90:
    // 0x180d90: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x180d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x180d94: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x180d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x180d98: 0x24506d78  addiu       $s0, $v0, 0x6D78
    ctx->pc = 0x180d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28024));
    // 0x180d9c: 0x24846d80  addiu       $a0, $a0, 0x6D80
    ctx->pc = 0x180d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28032));
    // 0x180da0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x180da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x180da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x180da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180da8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x180DA8u;
    {
        const bool branch_taken_0x180da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180DA8u;
            // 0x180dac: 0x24064700  addiu       $a2, $zero, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180da8) {
            ctx->pc = 0x180DD0u;
            goto label_180dd0;
        }
    }
    ctx->pc = 0x180DB0u;
    // 0x180db0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x180DB0u;
    SET_GPR_U32(ctx, 31, 0x180DB8u);
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180DB8u; }
        if (ctx->pc != 0x180DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180DB8u; }
        if (ctx->pc != 0x180DB8u) { return; }
    }
    ctx->pc = 0x180DB8u;
label_180db8:
    // 0x180db8: 0xc060358  jal         func_180D60
    ctx->pc = 0x180DB8u;
    SET_GPR_U32(ctx, 31, 0x180DC0u);
    ctx->pc = 0x180D60u;
    if (runtime->hasFunction(0x180D60u)) {
        auto targetFn = runtime->lookupFunction(0x180D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180DC0u; }
        if (ctx->pc != 0x180DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180D60_0x180d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180DC0u; }
        if (ctx->pc != 0x180DC0u) { return; }
    }
    ctx->pc = 0x180DC0u;
label_180dc0:
    // 0x180dc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180dc4: 0xc06032a  jal         func_180CA8
    ctx->pc = 0x180DC4u;
    SET_GPR_U32(ctx, 31, 0x180DCCu);
    ctx->pc = 0x180DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180DC4u;
            // 0x180dc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CA8u;
    if (runtime->hasFunction(0x180CA8u)) {
        auto targetFn = runtime->lookupFunction(0x180CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180DCCu; }
        if (ctx->pc != 0x180DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CA8_0x180ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180DCCu; }
        if (ctx->pc != 0x180DCCu) { return; }
    }
    ctx->pc = 0x180DCCu;
label_180dcc:
    // 0x180dcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x180dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_180dd0:
    // 0x180dd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x180dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x180dd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x180dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180dd8: 0xc060324  jal         func_180C90
    ctx->pc = 0x180DD8u;
    SET_GPR_U32(ctx, 31, 0x180DE0u);
    ctx->pc = 0x180DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180DD8u;
            // 0x180ddc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C90u;
    if (runtime->hasFunction(0x180C90u)) {
        auto targetFn = runtime->lookupFunction(0x180C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180DE0u; }
        if (ctx->pc != 0x180DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C90_0x180c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180DE0u; }
        if (ctx->pc != 0x180DE0u) { return; }
    }
    ctx->pc = 0x180DE0u;
label_180de0:
    // 0x180de0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x180de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180de4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x180de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x180de8: 0x3e00008  jr          $ra
    ctx->pc = 0x180DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180DE8u;
            // 0x180dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180DF0u;
}
