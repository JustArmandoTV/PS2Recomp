#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173B98
// Address: 0x173b98 - 0x173c20
void sub_00173B98_0x173b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173B98_0x173b98");
#endif

    switch (ctx->pc) {
        case 0x173bb0u: goto label_173bb0;
        case 0x173bfcu: goto label_173bfc;
        case 0x173c04u: goto label_173c04;
        case 0x173c0cu: goto label_173c0c;
        default: break;
    }

    ctx->pc = 0x173b98u;

    // 0x173b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173b9c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173B9Cu;
    {
        const bool branch_taken_0x173b9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x173BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173B9Cu;
            // 0x173ba0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b9c) {
            ctx->pc = 0x173BB8u;
            goto label_173bb8;
        }
    }
    ctx->pc = 0x173BA4u;
    // 0x173ba4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x173ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x173ba8: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x173BA8u;
    SET_GPR_U32(ctx, 31, 0x173BB0u);
    ctx->pc = 0x173BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173BA8u;
            // 0x173bac: 0x24844278  addiu       $a0, $a0, 0x4278 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173BB0u; }
        if (ctx->pc != 0x173BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173BB0u; }
        if (ctx->pc != 0x173BB0u) { return; }
    }
    ctx->pc = 0x173BB0u;
label_173bb0:
    // 0x173bb0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x173BB0u;
    {
        const bool branch_taken_0x173bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173BB0u;
            // 0x173bb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173bb0) {
            ctx->pc = 0x173BD8u;
            goto label_173bd8;
        }
    }
    ctx->pc = 0x173BB8u;
label_173bb8:
    // 0x173bb8: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x173bb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x173bbc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x173bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x173bc0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x173BC0u;
    {
        const bool branch_taken_0x173bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173bc0) {
            ctx->pc = 0x173BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173BC0u;
            // 0x173bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173BD8u;
            goto label_173bd8;
        }
    }
    ctx->pc = 0x173BC8u;
    // 0x173bc8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x173bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x173bcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173bd0: 0x805c04c  j           func_170130
    ctx->pc = 0x173BD0u;
    ctx->pc = 0x173BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173BD0u;
            // 0x173bd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170130u;
    if (runtime->hasFunction(0x170130u)) {
        auto targetFn = runtime->lookupFunction(0x170130u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00170130_0x170130(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x173BD8u;
label_173bd8:
    // 0x173bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x173BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173BDCu;
            // 0x173be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173BE4u;
    // 0x173be4: 0x0  nop
    ctx->pc = 0x173be4u;
    // NOP
    // 0x173be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173bf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x173bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x173bf4: 0xc0599de  jal         func_166778
    ctx->pc = 0x173BF4u;
    SET_GPR_U32(ctx, 31, 0x173BFCu);
    ctx->pc = 0x173BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173BF4u;
            // 0x173bf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173BFCu; }
        if (ctx->pc != 0x173BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173BFCu; }
        if (ctx->pc != 0x173BFCu) { return; }
    }
    ctx->pc = 0x173BFCu;
label_173bfc:
    // 0x173bfc: 0xc05cf08  jal         func_173C20
    ctx->pc = 0x173BFCu;
    SET_GPR_U32(ctx, 31, 0x173C04u);
    ctx->pc = 0x173C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173BFCu;
            // 0x173c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173C20u;
    if (runtime->hasFunction(0x173C20u)) {
        auto targetFn = runtime->lookupFunction(0x173C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C04u; }
        if (ctx->pc != 0x173C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173C20_0x173c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C04u; }
        if (ctx->pc != 0x173C04u) { return; }
    }
    ctx->pc = 0x173C04u;
label_173c04:
    // 0x173c04: 0xc0599e0  jal         func_166780
    ctx->pc = 0x173C04u;
    SET_GPR_U32(ctx, 31, 0x173C0Cu);
    ctx->pc = 0x173C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173C04u;
            // 0x173c08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C0Cu; }
        if (ctx->pc != 0x173C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C0Cu; }
        if (ctx->pc != 0x173C0Cu) { return; }
    }
    ctx->pc = 0x173C0Cu;
label_173c0c:
    // 0x173c0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x173c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173c10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x173c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173c18: 0x3e00008  jr          $ra
    ctx->pc = 0x173C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173C18u;
            // 0x173c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173C20u;
}
