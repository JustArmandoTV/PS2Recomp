#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BCF20
// Address: 0x1bcf20 - 0x1bcf90
void sub_001BCF20_0x1bcf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCF20_0x1bcf20");
#endif

    switch (ctx->pc) {
        case 0x1bcf38u: goto label_1bcf38;
        default: break;
    }

    ctx->pc = 0x1bcf20u;

    // 0x1bcf20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bcf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bcf24: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bcf24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bcf28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bcf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bcf2c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bcf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bcf30: 0xc06f2e6  jal         func_1BCB98
    ctx->pc = 0x1BCF30u;
    SET_GPR_U32(ctx, 31, 0x1BCF38u);
    ctx->pc = 0x1BCF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF30u;
            // 0x1bcf34: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB98u;
    if (runtime->hasFunction(0x1BCB98u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF38u; }
        if (ctx->pc != 0x1BCF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB98_0x1bcb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF38u; }
        if (ctx->pc != 0x1BCF38u) { return; }
    }
    ctx->pc = 0x1BCF38u;
label_1bcf38:
    // 0x1bcf38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bcf38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf3c: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BCF3Cu;
    {
        const bool branch_taken_0x1bcf3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcf3c) {
            ctx->pc = 0x1BCF40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF3Cu;
            // 0x1bcf40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BCF80u;
            goto label_1bcf80;
        }
    }
    ctx->pc = 0x1BCF44u;
    // 0x1bcf44: 0x90c70010  lbu         $a3, 0x10($a2)
    ctx->pc = 0x1bcf44u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1bcf48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcf4c: 0x90c40011  lbu         $a0, 0x11($a2)
    ctx->pc = 0x1bcf4cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17)));
    // 0x1bcf50: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x1bcf50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1bcf54: 0x90c50012  lbu         $a1, 0x12($a2)
    ctx->pc = 0x1bcf54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x1bcf58: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1bcf58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bcf5c: 0x90c60013  lbu         $a2, 0x13($a2)
    ctx->pc = 0x1bcf5cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 19)));
    // 0x1bcf60: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x1bcf60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1bcf64: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x1bcf64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bcf68: 0x72200  sll         $a0, $a3, 8
    ctx->pc = 0x1bcf68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1bcf6c: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1bcf6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1bcf70: 0x71827  nor         $v1, $zero, $a3
    ctx->pc = 0x1bcf70u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x1bcf74: 0x3380a  movz        $a3, $zero, $v1
    ctx->pc = 0x1bcf74u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x1bcf78: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x1bcf78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x1bcf7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bcf7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bcf80:
    // 0x1bcf80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bcf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bcf84: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF84u;
            // 0x1bcf88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BCF8Cu;
    // 0x1bcf8c: 0x0  nop
    ctx->pc = 0x1bcf8cu;
    // NOP
}
