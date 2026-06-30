#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ACB20
// Address: 0x2acb20 - 0x2acc50
void sub_002ACB20_0x2acb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACB20_0x2acb20");
#endif

    switch (ctx->pc) {
        case 0x2acba4u: goto label_2acba4;
        case 0x2acbb4u: goto label_2acbb4;
        case 0x2acc0cu: goto label_2acc0c;
        case 0x2acc24u: goto label_2acc24;
        default: break;
    }

    ctx->pc = 0x2acb20u;

    // 0x2acb20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2acb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2acb24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2acb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2acb28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2acb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2acb2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2acb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2acb30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2acb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2acb34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2acb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2acb38: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2acb38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2acb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2acb40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2acb40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb44: 0x12600037  beqz        $s3, . + 4 + (0x37 << 2)
    ctx->pc = 0x2ACB44u;
    {
        const bool branch_taken_0x2acb44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACB44u;
            // 0x2acb48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb44) {
            ctx->pc = 0x2ACC24u;
            goto label_2acc24;
        }
    }
    ctx->pc = 0x2ACB4Cu;
    // 0x2acb4c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2acb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2acb50: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2ACB50u;
    {
        const bool branch_taken_0x2acb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acb50) {
            ctx->pc = 0x2ACBD0u;
            goto label_2acbd0;
        }
    }
    ctx->pc = 0x2ACB58u;
    // 0x2acb58: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2acb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2acb5c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ACB5Cu;
    {
        const bool branch_taken_0x2acb5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acb5c) {
            ctx->pc = 0x2ACB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACB5Cu;
            // 0x2acb60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ACB78u;
            goto label_2acb78;
        }
    }
    ctx->pc = 0x2ACB64u;
    // 0x2acb64: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2acb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2acb68: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2acb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2acb6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2acb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2acb70: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x2acb70u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2acb74: 0x1010  mfhi        $v0
    ctx->pc = 0x2acb74u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2acb78:
    // 0x2acb78: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x2acb78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2acb7c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2acb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2acb80: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2acb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2acb84: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2acb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2acb88: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x2acb88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2acb8c: 0x2248021  addu        $s0, $s1, $a0
    ctx->pc = 0x2acb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2acb90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2acb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2acb94: 0x222a821  addu        $s5, $s1, $v0
    ctx->pc = 0x2acb94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2acb98: 0x12b0000d  beq         $s5, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2ACB98u;
    {
        const bool branch_taken_0x2acb98 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 16));
        if (branch_taken_0x2acb98) {
            ctx->pc = 0x2ACBD0u;
            goto label_2acbd0;
        }
    }
    ctx->pc = 0x2ACBA0u;
    // 0x2acba0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2acba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2acba4:
    // 0x2acba4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACBA4u;
    {
        const bool branch_taken_0x2acba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acba4) {
            ctx->pc = 0x2ACBB8u;
            goto label_2acbb8;
        }
    }
    ctx->pc = 0x2ACBACu;
    // 0x2acbac: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2ACBACu;
    SET_GPR_U32(ctx, 31, 0x2ACBB4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACBB4u; }
        if (ctx->pc != 0x2ACBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACBB4u; }
        if (ctx->pc != 0x2ACBB4u) { return; }
    }
    ctx->pc = 0x2ACBB4u;
label_2acbb4:
    // 0x2acbb4: 0x0  nop
    ctx->pc = 0x2acbb4u;
    // NOP
label_2acbb8:
    // 0x2acbb8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2acbb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2acbbc: 0x16b40002  bne         $s5, $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ACBBCu;
    {
        const bool branch_taken_0x2acbbc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        if (branch_taken_0x2acbbc) {
            ctx->pc = 0x2ACBC8u;
            goto label_2acbc8;
        }
    }
    ctx->pc = 0x2ACBC4u;
    // 0x2acbc4: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x2acbc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2acbc8:
    // 0x2acbc8: 0x56b0fff6  bnel        $s5, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2ACBC8u;
    {
        const bool branch_taken_0x2acbc8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 16));
        if (branch_taken_0x2acbc8) {
            ctx->pc = 0x2ACBCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACBC8u;
            // 0x2acbcc: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ACBA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2acba4;
        }
    }
    ctx->pc = 0x2ACBD0u;
label_2acbd0:
    // 0x2acbd0: 0x5260000f  beql        $s3, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2ACBD0u;
    {
        const bool branch_taken_0x2acbd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acbd0) {
            ctx->pc = 0x2ACBD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACBD0u;
            // 0x2acbd4: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ACC10u;
            goto label_2acc10;
        }
    }
    ctx->pc = 0x2ACBD8u;
    // 0x2acbd8: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x2ACBD8u;
    {
        const bool branch_taken_0x2acbd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acbd8) {
            ctx->pc = 0x2ACC0Cu;
            goto label_2acc0c;
        }
    }
    ctx->pc = 0x2ACBE0u;
    // 0x2acbe0: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x2ACBE0u;
    {
        const bool branch_taken_0x2acbe0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acbe0) {
            ctx->pc = 0x2ACC0Cu;
            goto label_2acc0c;
        }
    }
    ctx->pc = 0x2ACBE8u;
    // 0x2acbe8: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ACBE8u;
    {
        const bool branch_taken_0x2acbe8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acbe8) {
            ctx->pc = 0x2ACC0Cu;
            goto label_2acc0c;
        }
    }
    ctx->pc = 0x2ACBF0u;
    // 0x2acbf0: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ACBF0u;
    {
        const bool branch_taken_0x2acbf0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acbf0) {
            ctx->pc = 0x2ACC0Cu;
            goto label_2acc0c;
        }
    }
    ctx->pc = 0x2ACBF8u;
    // 0x2acbf8: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x2acbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2acbfc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACBFCu;
    {
        const bool branch_taken_0x2acbfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acbfc) {
            ctx->pc = 0x2ACC0Cu;
            goto label_2acc0c;
        }
    }
    ctx->pc = 0x2ACC04u;
    // 0x2acc04: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2ACC04u;
    SET_GPR_U32(ctx, 31, 0x2ACC0Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC0Cu; }
        if (ctx->pc != 0x2ACC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC0Cu; }
        if (ctx->pc != 0x2ACC0Cu) { return; }
    }
    ctx->pc = 0x2ACC0Cu;
label_2acc0c:
    // 0x2acc0c: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x2acc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_2acc10:
    // 0x2acc10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2acc10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2acc14: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACC14u;
    {
        const bool branch_taken_0x2acc14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2acc14) {
            ctx->pc = 0x2ACC18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACC14u;
            // 0x2acc18: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ACC28u;
            goto label_2acc28;
        }
    }
    ctx->pc = 0x2ACC1Cu;
    // 0x2acc1c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2ACC1Cu;
    SET_GPR_U32(ctx, 31, 0x2ACC24u);
    ctx->pc = 0x2ACC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACC1Cu;
            // 0x2acc20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC24u; }
        if (ctx->pc != 0x2ACC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC24u; }
        if (ctx->pc != 0x2ACC24u) { return; }
    }
    ctx->pc = 0x2ACC24u;
label_2acc24:
    // 0x2acc24: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2acc24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2acc28:
    // 0x2acc28: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2acc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2acc2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2acc2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2acc30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2acc30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2acc34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2acc34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2acc38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2acc38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acc3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2acc3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acc40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2acc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acc44: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACC44u;
            // 0x2acc48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ACC4Cu;
    // 0x2acc4c: 0x0  nop
    ctx->pc = 0x2acc4cu;
    // NOP
}
