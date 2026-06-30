#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3AB8
// Address: 0x1a3ab8 - 0x1a3b60
void sub_001A3AB8_0x1a3ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3AB8_0x1a3ab8");
#endif

    switch (ctx->pc) {
        case 0x1a3aecu: goto label_1a3aec;
        case 0x1a3b00u: goto label_1a3b00;
        case 0x1a3b10u: goto label_1a3b10;
        default: break;
    }

    ctx->pc = 0x1a3ab8u;

    // 0x1a3ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a3abc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a3abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a3ac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ac4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a3ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a3ac8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a3ac8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3acc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3ad0: 0x2622206c  addiu       $v0, $s1, 0x206C
    ctx->pc = 0x1a3ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8300));
    // 0x1a3ad4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a3ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a3ad8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a3ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a3adc: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x1a3adcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a3ae0: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x1a3ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a3ae4: 0xc069948  jal         func_1A6520
    ctx->pc = 0x1A3AE4u;
    SET_GPR_U32(ctx, 31, 0x1A3AECu);
    ctx->pc = 0x1A3AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3AE4u;
            // 0x1a3ae8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6520u;
    if (runtime->hasFunction(0x1A6520u)) {
        auto targetFn = runtime->lookupFunction(0x1A6520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3AECu; }
        if (ctx->pc != 0x1A3AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6520_0x1a6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3AECu; }
        if (ctx->pc != 0x1A3AECu) { return; }
    }
    ctx->pc = 0x1A3AECu;
label_1a3aec:
    // 0x1a3aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3af0: 0x10530013  beq         $v0, $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A3AF0u;
    {
        const bool branch_taken_0x1a3af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A3AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3AF0u;
            // 0x1a3af4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3af0) {
            ctx->pc = 0x1A3B40u;
            goto label_1a3b40;
        }
    }
    ctx->pc = 0x1A3AF8u;
    // 0x1a3af8: 0xc069948  jal         func_1A6520
    ctx->pc = 0x1A3AF8u;
    SET_GPR_U32(ctx, 31, 0x1A3B00u);
    ctx->pc = 0x1A6520u;
    if (runtime->hasFunction(0x1A6520u)) {
        auto targetFn = runtime->lookupFunction(0x1A6520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3B00u; }
        if (ctx->pc != 0x1A3B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6520_0x1a6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3B00u; }
        if (ctx->pc != 0x1A3B00u) { return; }
    }
    ctx->pc = 0x1A3B00u;
label_1a3b00:
    // 0x1a3b00: 0x54530010  bnel        $v0, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A3B00u;
    {
        const bool branch_taken_0x1a3b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1a3b00) {
            ctx->pc = 0x1A3B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3B00u;
            // 0x1a3b04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A3B44u;
            goto label_1a3b44;
        }
    }
    ctx->pc = 0x1A3B08u;
    // 0x1a3b08: 0xc068ed8  jal         func_1A3B60
    ctx->pc = 0x1A3B08u;
    SET_GPR_U32(ctx, 31, 0x1A3B10u);
    ctx->pc = 0x1A3B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3B08u;
            // 0x1a3b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3B60u;
    if (runtime->hasFunction(0x1A3B60u)) {
        auto targetFn = runtime->lookupFunction(0x1A3B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3B10u; }
        if (ctx->pc != 0x1A3B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3B60_0x1a3b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3B10u; }
        if (ctx->pc != 0x1A3B10u) { return; }
    }
    ctx->pc = 0x1A3B10u;
label_1a3b10:
    // 0x1a3b10: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A3B10u;
    {
        const bool branch_taken_0x1a3b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3B10u;
            // 0x1a3b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3b10) {
            ctx->pc = 0x1A3B40u;
            goto label_1a3b40;
        }
    }
    ctx->pc = 0x1A3B18u;
    // 0x1a3b18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a3b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3b1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a3b1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3b20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3b24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a3b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3b28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a3b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3b2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a3b2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a3b30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a3b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3b34: 0x806993c  j           func_1A64F0
    ctx->pc = 0x1A3B34u;
    ctx->pc = 0x1A3B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3B34u;
            // 0x1a3b38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A64F0u;
    if (runtime->hasFunction(0x1A64F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A64F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A64F0_0x1a64f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A3B3Cu;
    // 0x1a3b3c: 0x0  nop
    ctx->pc = 0x1a3b3cu;
    // NOP
label_1a3b40:
    // 0x1a3b40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3b44:
    // 0x1a3b44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a3b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3b48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a3b48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3b4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a3b4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a3b50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a3b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3b54: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3B54u;
            // 0x1a3b58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3B5Cu;
    // 0x1a3b5c: 0x0  nop
    ctx->pc = 0x1a3b5cu;
    // NOP
}
