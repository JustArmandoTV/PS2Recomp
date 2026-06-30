#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C3C90
// Address: 0x1c3c90 - 0x1c3ce0
void sub_001C3C90_0x1c3c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3C90_0x1c3c90");
#endif

    switch (ctx->pc) {
        case 0x1c3ca0u: goto label_1c3ca0;
        case 0x1c3cb8u: goto label_1c3cb8;
        default: break;
    }

    ctx->pc = 0x1c3c90u;

    // 0x1c3c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c3c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c3c94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c3c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c3c98: 0xc070f38  jal         func_1C3CE0
    ctx->pc = 0x1C3C98u;
    SET_GPR_U32(ctx, 31, 0x1C3CA0u);
    ctx->pc = 0x1C3C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C98u;
            // 0x1c3c9c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3CE0u;
    if (runtime->hasFunction(0x1C3CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1C3CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3CA0u; }
        if (ctx->pc != 0x1C3CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3CE0_0x1c3ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3CA0u; }
        if (ctx->pc != 0x1C3CA0u) { return; }
    }
    ctx->pc = 0x1C3CA0u;
label_1c3ca0:
    // 0x1c3ca0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C3CA0u;
    {
        const bool branch_taken_0x1c3ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3CA0u;
            // 0x1c3ca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ca0) {
            ctx->pc = 0x1C3CCCu;
            goto label_1c3ccc;
        }
    }
    ctx->pc = 0x1C3CA8u;
    // 0x1c3ca8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c3ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3cac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1c3cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c3cb0: 0xc071326  jal         func_1C4C98
    ctx->pc = 0x1C3CB0u;
    SET_GPR_U32(ctx, 31, 0x1C3CB8u);
    ctx->pc = 0x1C3CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3CB0u;
            // 0x1c3cb4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4C98u;
    if (runtime->hasFunction(0x1C4C98u)) {
        auto targetFn = runtime->lookupFunction(0x1C4C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3CB8u; }
        if (ctx->pc != 0x1C3CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4C98_0x1c4c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3CB8u; }
        if (ctx->pc != 0x1C3CB8u) { return; }
    }
    ctx->pc = 0x1C3CB8u;
label_1c3cb8:
    // 0x1c3cb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c3cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c3cbc: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x1c3cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x1c3cc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c3cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3cc4: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1c3cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c3cc8: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c3cc8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1c3ccc:
    // 0x1c3ccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c3cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3cd0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c3cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3CD4u;
            // 0x1c3cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3CDCu;
    // 0x1c3cdc: 0x0  nop
    ctx->pc = 0x1c3cdcu;
    // NOP
}
