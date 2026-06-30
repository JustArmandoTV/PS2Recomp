#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173C20
// Address: 0x173c20 - 0x173ca8
void sub_00173C20_0x173c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173C20_0x173c20");
#endif

    switch (ctx->pc) {
        case 0x173c38u: goto label_173c38;
        case 0x173c84u: goto label_173c84;
        case 0x173c8cu: goto label_173c8c;
        case 0x173c94u: goto label_173c94;
        default: break;
    }

    ctx->pc = 0x173c20u;

    // 0x173c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173c24: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173C24u;
    {
        const bool branch_taken_0x173c24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x173C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173C24u;
            // 0x173c28: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c24) {
            ctx->pc = 0x173C40u;
            goto label_173c40;
        }
    }
    ctx->pc = 0x173C2Cu;
    // 0x173c2c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x173c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x173c30: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x173C30u;
    SET_GPR_U32(ctx, 31, 0x173C38u);
    ctx->pc = 0x173C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173C30u;
            // 0x173c34: 0x248442a8  addiu       $a0, $a0, 0x42A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C38u; }
        if (ctx->pc != 0x173C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C38u; }
        if (ctx->pc != 0x173C38u) { return; }
    }
    ctx->pc = 0x173C38u;
label_173c38:
    // 0x173c38: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x173C38u;
    {
        const bool branch_taken_0x173c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173C38u;
            // 0x173c3c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c38) {
            ctx->pc = 0x173C60u;
            goto label_173c60;
        }
    }
    ctx->pc = 0x173C40u;
label_173c40:
    // 0x173c40: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x173c40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x173c44: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x173c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x173c48: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x173C48u;
    {
        const bool branch_taken_0x173c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173c48) {
            ctx->pc = 0x173C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173C48u;
            // 0x173c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173C60u;
            goto label_173c60;
        }
    }
    ctx->pc = 0x173C50u;
    // 0x173c50: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x173c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x173c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173c58: 0x805c0e6  j           func_170398
    ctx->pc = 0x173C58u;
    ctx->pc = 0x173C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173C58u;
            // 0x173c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170398u;
    {
        auto targetFn = runtime->lookupFunction(0x170398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x173C60u;
label_173c60:
    // 0x173c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173c64: 0x3e00008  jr          $ra
    ctx->pc = 0x173C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173C64u;
            // 0x173c68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173C6Cu;
    // 0x173c6c: 0x0  nop
    ctx->pc = 0x173c6cu;
    // NOP
    // 0x173c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173c74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173c78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x173c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x173c7c: 0xc0599de  jal         func_166778
    ctx->pc = 0x173C7Cu;
    SET_GPR_U32(ctx, 31, 0x173C84u);
    ctx->pc = 0x173C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173C7Cu;
            // 0x173c80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C84u; }
        if (ctx->pc != 0x173C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C84u; }
        if (ctx->pc != 0x173C84u) { return; }
    }
    ctx->pc = 0x173C84u;
label_173c84:
    // 0x173c84: 0xc05cf2a  jal         func_173CA8
    ctx->pc = 0x173C84u;
    SET_GPR_U32(ctx, 31, 0x173C8Cu);
    ctx->pc = 0x173C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173C84u;
            // 0x173c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173CA8u;
    if (runtime->hasFunction(0x173CA8u)) {
        auto targetFn = runtime->lookupFunction(0x173CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C8Cu; }
        if (ctx->pc != 0x173C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173CA8_0x173ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C8Cu; }
        if (ctx->pc != 0x173C8Cu) { return; }
    }
    ctx->pc = 0x173C8Cu;
label_173c8c:
    // 0x173c8c: 0xc0599e0  jal         func_166780
    ctx->pc = 0x173C8Cu;
    SET_GPR_U32(ctx, 31, 0x173C94u);
    ctx->pc = 0x173C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173C8Cu;
            // 0x173c90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C94u; }
        if (ctx->pc != 0x173C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C94u; }
        if (ctx->pc != 0x173C94u) { return; }
    }
    ctx->pc = 0x173C94u;
label_173c94:
    // 0x173c94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x173c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173c98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x173c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173c9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x173CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173CA0u;
            // 0x173ca4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173CA8u;
}
