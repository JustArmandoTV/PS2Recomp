#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173B10
// Address: 0x173b10 - 0x173b60
void sub_00173B10_0x173b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173B10_0x173b10");
#endif

    switch (ctx->pc) {
        case 0x173b28u: goto label_173b28;
        default: break;
    }

    ctx->pc = 0x173b10u;

    // 0x173b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173b14: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173B14u;
    {
        const bool branch_taken_0x173b14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x173B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173B14u;
            // 0x173b18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b14) {
            ctx->pc = 0x173B30u;
            goto label_173b30;
        }
    }
    ctx->pc = 0x173B1Cu;
    // 0x173b1c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x173b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x173b20: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x173B20u;
    SET_GPR_U32(ctx, 31, 0x173B28u);
    ctx->pc = 0x173B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173B20u;
            // 0x173b24: 0x24844248  addiu       $a0, $a0, 0x4248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B28u; }
        if (ctx->pc != 0x173B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B28u; }
        if (ctx->pc != 0x173B28u) { return; }
    }
    ctx->pc = 0x173B28u;
label_173b28:
    // 0x173b28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x173B28u;
    {
        const bool branch_taken_0x173b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173B28u;
            // 0x173b2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b28) {
            ctx->pc = 0x173B50u;
            goto label_173b50;
        }
    }
    ctx->pc = 0x173B30u;
label_173b30:
    // 0x173b30: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x173b30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x173b34: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x173b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x173b38: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x173B38u;
    {
        const bool branch_taken_0x173b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173b38) {
            ctx->pc = 0x173B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173B38u;
            // 0x173b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173B50u;
            goto label_173b50;
        }
    }
    ctx->pc = 0x173B40u;
    // 0x173b40: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x173b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x173b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173b48: 0x805c046  j           func_170118
    ctx->pc = 0x173B48u;
    ctx->pc = 0x173B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173B48u;
            // 0x173b4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170118u;
    if (runtime->hasFunction(0x170118u)) {
        auto targetFn = runtime->lookupFunction(0x170118u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00170118_0x170118(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x173B50u;
label_173b50:
    // 0x173b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173b54: 0x3e00008  jr          $ra
    ctx->pc = 0x173B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173B54u;
            // 0x173b58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173B5Cu;
    // 0x173b5c: 0x0  nop
    ctx->pc = 0x173b5cu;
    // NOP
}
