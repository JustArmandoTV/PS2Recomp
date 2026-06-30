#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ACC08
// Address: 0x1acc08 - 0x1accb0
void sub_001ACC08_0x1acc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACC08_0x1acc08");
#endif

    switch (ctx->pc) {
        case 0x1acc64u: goto label_1acc64;
        case 0x1acc88u: goto label_1acc88;
        default: break;
    }

    ctx->pc = 0x1acc08u;

    // 0x1acc08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1acc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1acc0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1acc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1acc10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1acc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1acc14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1acc14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc18: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1acc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1acc1c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1acc1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1acc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1acc24: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1acc24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc28: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1acc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1acc2c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1acc2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc30: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1acc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1acc34: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1acc34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc38: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1acc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1acc3c: 0x26022028  addiu       $v0, $s0, 0x2028
    ctx->pc = 0x1acc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8232));
    // 0x1acc40: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1acc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1acc44: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1acc44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc48: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1acc48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1acc4c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1acc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1acc50: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1acc50u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1acc54: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1ACC54u;
    {
        const bool branch_taken_0x1acc54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC54u;
            // 0x1acc58: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc54) {
            ctx->pc = 0x1ACC8Cu;
            goto label_1acc8c;
        }
    }
    ctx->pc = 0x1ACC5Cu;
    // 0x1acc5c: 0xc06d34c  jal         func_1B4D30
    ctx->pc = 0x1ACC5Cu;
    SET_GPR_U32(ctx, 31, 0x1ACC64u);
    ctx->pc = 0x1B4D30u;
    if (runtime->hasFunction(0x1B4D30u)) {
        auto targetFn = runtime->lookupFunction(0x1B4D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC64u; }
        if (ctx->pc != 0x1ACC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4D30_0x1b4d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC64u; }
        if (ctx->pc != 0x1ACC64u) { return; }
    }
    ctx->pc = 0x1ACC64u;
label_1acc64:
    // 0x1acc64: 0x26040d88  addiu       $a0, $s0, 0xD88
    ctx->pc = 0x1acc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
    // 0x1acc68: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x1acc68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acc6c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1acc6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc70: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1acc70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc74: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ACC74u;
    {
        const bool branch_taken_0x1acc74 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1ACC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC74u;
            // 0x1acc78: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc74) {
            ctx->pc = 0x1ACC8Cu;
            goto label_1acc8c;
        }
    }
    ctx->pc = 0x1ACC7Cu;
    // 0x1acc7c: 0x26650118  addiu       $a1, $s3, 0x118
    ctx->pc = 0x1acc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 280));
    // 0x1acc80: 0xc06b336  jal         func_1ACCD8
    ctx->pc = 0x1ACC80u;
    SET_GPR_U32(ctx, 31, 0x1ACC88u);
    ctx->pc = 0x1ACC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC80u;
            // 0x1acc84: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACCD8u;
    if (runtime->hasFunction(0x1ACCD8u)) {
        auto targetFn = runtime->lookupFunction(0x1ACCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC88u; }
        if (ctx->pc != 0x1ACC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACCD8_0x1accd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC88u; }
        if (ctx->pc != 0x1ACC88u) { return; }
    }
    ctx->pc = 0x1ACC88u;
label_1acc88:
    // 0x1acc88: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1acc88u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_1acc8c:
    // 0x1acc8c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1acc8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1acc90: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1acc90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1acc94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1acc94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1acc98: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1acc98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1acc9c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1acc9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1acca0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1acca0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1acca4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1acca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACCA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACCA8u;
            // 0x1accac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ACCB0u;
}
