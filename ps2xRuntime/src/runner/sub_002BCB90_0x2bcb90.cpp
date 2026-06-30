#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BCB90
// Address: 0x2bcb90 - 0x2bcca0
void sub_002BCB90_0x2bcb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCB90_0x2bcb90");
#endif

    switch (ctx->pc) {
        case 0x2bcb90u: goto label_2bcb90;
        case 0x2bcb94u: goto label_2bcb94;
        case 0x2bcb98u: goto label_2bcb98;
        case 0x2bcb9cu: goto label_2bcb9c;
        case 0x2bcba0u: goto label_2bcba0;
        case 0x2bcba4u: goto label_2bcba4;
        case 0x2bcba8u: goto label_2bcba8;
        case 0x2bcbacu: goto label_2bcbac;
        case 0x2bcbb0u: goto label_2bcbb0;
        case 0x2bcbb4u: goto label_2bcbb4;
        case 0x2bcbb8u: goto label_2bcbb8;
        case 0x2bcbbcu: goto label_2bcbbc;
        case 0x2bcbc0u: goto label_2bcbc0;
        case 0x2bcbc4u: goto label_2bcbc4;
        case 0x2bcbc8u: goto label_2bcbc8;
        case 0x2bcbccu: goto label_2bcbcc;
        case 0x2bcbd0u: goto label_2bcbd0;
        case 0x2bcbd4u: goto label_2bcbd4;
        case 0x2bcbd8u: goto label_2bcbd8;
        case 0x2bcbdcu: goto label_2bcbdc;
        case 0x2bcbe0u: goto label_2bcbe0;
        case 0x2bcbe4u: goto label_2bcbe4;
        case 0x2bcbe8u: goto label_2bcbe8;
        case 0x2bcbecu: goto label_2bcbec;
        case 0x2bcbf0u: goto label_2bcbf0;
        case 0x2bcbf4u: goto label_2bcbf4;
        case 0x2bcbf8u: goto label_2bcbf8;
        case 0x2bcbfcu: goto label_2bcbfc;
        case 0x2bcc00u: goto label_2bcc00;
        case 0x2bcc04u: goto label_2bcc04;
        case 0x2bcc08u: goto label_2bcc08;
        case 0x2bcc0cu: goto label_2bcc0c;
        case 0x2bcc10u: goto label_2bcc10;
        case 0x2bcc14u: goto label_2bcc14;
        case 0x2bcc18u: goto label_2bcc18;
        case 0x2bcc1cu: goto label_2bcc1c;
        case 0x2bcc20u: goto label_2bcc20;
        case 0x2bcc24u: goto label_2bcc24;
        case 0x2bcc28u: goto label_2bcc28;
        case 0x2bcc2cu: goto label_2bcc2c;
        case 0x2bcc30u: goto label_2bcc30;
        case 0x2bcc34u: goto label_2bcc34;
        case 0x2bcc38u: goto label_2bcc38;
        case 0x2bcc3cu: goto label_2bcc3c;
        case 0x2bcc40u: goto label_2bcc40;
        case 0x2bcc44u: goto label_2bcc44;
        case 0x2bcc48u: goto label_2bcc48;
        case 0x2bcc4cu: goto label_2bcc4c;
        case 0x2bcc50u: goto label_2bcc50;
        case 0x2bcc54u: goto label_2bcc54;
        case 0x2bcc58u: goto label_2bcc58;
        case 0x2bcc5cu: goto label_2bcc5c;
        case 0x2bcc60u: goto label_2bcc60;
        case 0x2bcc64u: goto label_2bcc64;
        case 0x2bcc68u: goto label_2bcc68;
        case 0x2bcc6cu: goto label_2bcc6c;
        case 0x2bcc70u: goto label_2bcc70;
        case 0x2bcc74u: goto label_2bcc74;
        case 0x2bcc78u: goto label_2bcc78;
        case 0x2bcc7cu: goto label_2bcc7c;
        case 0x2bcc80u: goto label_2bcc80;
        case 0x2bcc84u: goto label_2bcc84;
        case 0x2bcc88u: goto label_2bcc88;
        case 0x2bcc8cu: goto label_2bcc8c;
        case 0x2bcc90u: goto label_2bcc90;
        case 0x2bcc94u: goto label_2bcc94;
        case 0x2bcc98u: goto label_2bcc98;
        case 0x2bcc9cu: goto label_2bcc9c;
        default: break;
    }

    ctx->pc = 0x2bcb90u;

label_2bcb90:
    // 0x2bcb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bcb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bcb94:
    // 0x2bcb94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bcb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bcb98:
    // 0x2bcb98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bcb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bcb9c:
    // 0x2bcb9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bcb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bcba0:
    // 0x2bcba0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bcba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bcba4:
    // 0x2bcba4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2bcba8:
    if (ctx->pc == 0x2BCBA8u) {
        ctx->pc = 0x2BCBA8u;
            // 0x2bcba8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCBACu;
        goto label_2bcbac;
    }
    ctx->pc = 0x2BCBA4u;
    {
        const bool branch_taken_0x2bcba4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCBA4u;
            // 0x2bcba8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcba4) {
            ctx->pc = 0x2BCBE8u;
            goto label_2bcbe8;
        }
    }
    ctx->pc = 0x2BCBACu;
label_2bcbac:
    // 0x2bcbac: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2bcbb0:
    if (ctx->pc == 0x2BCBB0u) {
        ctx->pc = 0x2BCBB0u;
            // 0x2bcbb0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BCBB4u;
        goto label_2bcbb4;
    }
    ctx->pc = 0x2BCBACu;
    {
        const bool branch_taken_0x2bcbac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcbac) {
            ctx->pc = 0x2BCBB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCBACu;
            // 0x2bcbb0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BCBD4u;
            goto label_2bcbd4;
        }
    }
    ctx->pc = 0x2BCBB4u;
label_2bcbb4:
    // 0x2bcbb4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2bcbb8:
    if (ctx->pc == 0x2BCBB8u) {
        ctx->pc = 0x2BCBBCu;
        goto label_2bcbbc;
    }
    ctx->pc = 0x2BCBB4u;
    {
        const bool branch_taken_0x2bcbb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcbb4) {
            ctx->pc = 0x2BCBD0u;
            goto label_2bcbd0;
        }
    }
    ctx->pc = 0x2BCBBCu;
label_2bcbbc:
    // 0x2bcbbc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2bcbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2bcbc0:
    // 0x2bcbc0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bcbc4:
    if (ctx->pc == 0x2BCBC4u) {
        ctx->pc = 0x2BCBC8u;
        goto label_2bcbc8;
    }
    ctx->pc = 0x2BCBC0u;
    {
        const bool branch_taken_0x2bcbc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcbc0) {
            ctx->pc = 0x2BCBD0u;
            goto label_2bcbd0;
        }
    }
    ctx->pc = 0x2BCBC8u;
label_2bcbc8:
    // 0x2bcbc8: 0xc0400a8  jal         func_1002A0
label_2bcbcc:
    if (ctx->pc == 0x2BCBCCu) {
        ctx->pc = 0x2BCBD0u;
        goto label_2bcbd0;
    }
    ctx->pc = 0x2BCBC8u;
    SET_GPR_U32(ctx, 31, 0x2BCBD0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCBD0u; }
        if (ctx->pc != 0x2BCBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCBD0u; }
        if (ctx->pc != 0x2BCBD0u) { return; }
    }
    ctx->pc = 0x2BCBD0u;
label_2bcbd0:
    // 0x2bcbd0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bcbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bcbd4:
    // 0x2bcbd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bcbd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bcbd8:
    // 0x2bcbd8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bcbdc:
    if (ctx->pc == 0x2BCBDCu) {
        ctx->pc = 0x2BCBDCu;
            // 0x2bcbdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCBE0u;
        goto label_2bcbe0;
    }
    ctx->pc = 0x2BCBD8u;
    {
        const bool branch_taken_0x2bcbd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bcbd8) {
            ctx->pc = 0x2BCBDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCBD8u;
            // 0x2bcbdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BCBECu;
            goto label_2bcbec;
        }
    }
    ctx->pc = 0x2BCBE0u;
label_2bcbe0:
    // 0x2bcbe0: 0xc0400a8  jal         func_1002A0
label_2bcbe4:
    if (ctx->pc == 0x2BCBE4u) {
        ctx->pc = 0x2BCBE4u;
            // 0x2bcbe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCBE8u;
        goto label_2bcbe8;
    }
    ctx->pc = 0x2BCBE0u;
    SET_GPR_U32(ctx, 31, 0x2BCBE8u);
    ctx->pc = 0x2BCBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCBE0u;
            // 0x2bcbe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCBE8u; }
        if (ctx->pc != 0x2BCBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCBE8u; }
        if (ctx->pc != 0x2BCBE8u) { return; }
    }
    ctx->pc = 0x2BCBE8u;
label_2bcbe8:
    // 0x2bcbe8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bcbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bcbec:
    // 0x2bcbec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bcbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bcbf0:
    // 0x2bcbf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bcbf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bcbf4:
    // 0x2bcbf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bcbf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bcbf8:
    // 0x2bcbf8: 0x3e00008  jr          $ra
label_2bcbfc:
    if (ctx->pc == 0x2BCBFCu) {
        ctx->pc = 0x2BCBFCu;
            // 0x2bcbfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BCC00u;
        goto label_2bcc00;
    }
    ctx->pc = 0x2BCBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCBF8u;
            // 0x2bcbfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BCC00u;
label_2bcc00:
    // 0x2bcc00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bcc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bcc04:
    // 0x2bcc04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bcc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bcc08:
    // 0x2bcc08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bcc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bcc0c:
    // 0x2bcc0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bcc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bcc10:
    // 0x2bcc10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bcc10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bcc14:
    // 0x2bcc14: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_2bcc18:
    if (ctx->pc == 0x2BCC18u) {
        ctx->pc = 0x2BCC18u;
            // 0x2bcc18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC1Cu;
        goto label_2bcc1c;
    }
    ctx->pc = 0x2BCC14u;
    {
        const bool branch_taken_0x2bcc14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCC14u;
            // 0x2bcc18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc14) {
            ctx->pc = 0x2BCC74u;
            goto label_2bcc74;
        }
    }
    ctx->pc = 0x2BCC1Cu;
label_2bcc1c:
    // 0x2bcc1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bcc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bcc20:
    // 0x2bcc20: 0x24421f90  addiu       $v0, $v0, 0x1F90
    ctx->pc = 0x2bcc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8080));
label_2bcc24:
    // 0x2bcc24: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bcc24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bcc28:
    // 0x2bcc28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bcc28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bcc2c:
    // 0x2bcc2c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2bcc2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2bcc30:
    // 0x2bcc30: 0x320f809  jalr        $t9
label_2bcc34:
    if (ctx->pc == 0x2BCC34u) {
        ctx->pc = 0x2BCC38u;
        goto label_2bcc38;
    }
    ctx->pc = 0x2BCC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BCC38u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BCC38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BCC38u; }
            if (ctx->pc != 0x2BCC38u) { return; }
        }
        }
    }
    ctx->pc = 0x2BCC38u;
label_2bcc38:
    // 0x2bcc38: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2bcc3c:
    if (ctx->pc == 0x2BCC3Cu) {
        ctx->pc = 0x2BCC3Cu;
            // 0x2bcc3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BCC40u;
        goto label_2bcc40;
    }
    ctx->pc = 0x2BCC38u;
    {
        const bool branch_taken_0x2bcc38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcc38) {
            ctx->pc = 0x2BCC3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCC38u;
            // 0x2bcc3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BCC60u;
            goto label_2bcc60;
        }
    }
    ctx->pc = 0x2BCC40u;
label_2bcc40:
    // 0x2bcc40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bcc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bcc44:
    // 0x2bcc44: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2bcc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2bcc48:
    // 0x2bcc48: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2bcc4c:
    if (ctx->pc == 0x2BCC4Cu) {
        ctx->pc = 0x2BCC4Cu;
            // 0x2bcc4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BCC50u;
        goto label_2bcc50;
    }
    ctx->pc = 0x2BCC48u;
    {
        const bool branch_taken_0x2bcc48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCC48u;
            // 0x2bcc4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc48) {
            ctx->pc = 0x2BCC5Cu;
            goto label_2bcc5c;
        }
    }
    ctx->pc = 0x2BCC50u;
label_2bcc50:
    // 0x2bcc50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bcc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bcc54:
    // 0x2bcc54: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2bcc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2bcc58:
    // 0x2bcc58: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bcc58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bcc5c:
    // 0x2bcc5c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bcc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bcc60:
    // 0x2bcc60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bcc60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bcc64:
    // 0x2bcc64: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bcc68:
    if (ctx->pc == 0x2BCC68u) {
        ctx->pc = 0x2BCC68u;
            // 0x2bcc68: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC6Cu;
        goto label_2bcc6c;
    }
    ctx->pc = 0x2BCC64u;
    {
        const bool branch_taken_0x2bcc64 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bcc64) {
            ctx->pc = 0x2BCC68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCC64u;
            // 0x2bcc68: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BCC78u;
            goto label_2bcc78;
        }
    }
    ctx->pc = 0x2BCC6Cu;
label_2bcc6c:
    // 0x2bcc6c: 0xc0400a8  jal         func_1002A0
label_2bcc70:
    if (ctx->pc == 0x2BCC70u) {
        ctx->pc = 0x2BCC70u;
            // 0x2bcc70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC74u;
        goto label_2bcc74;
    }
    ctx->pc = 0x2BCC6Cu;
    SET_GPR_U32(ctx, 31, 0x2BCC74u);
    ctx->pc = 0x2BCC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCC6Cu;
            // 0x2bcc70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCC74u; }
        if (ctx->pc != 0x2BCC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCC74u; }
        if (ctx->pc != 0x2BCC74u) { return; }
    }
    ctx->pc = 0x2BCC74u;
label_2bcc74:
    // 0x2bcc74: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bcc74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bcc78:
    // 0x2bcc78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bcc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bcc7c:
    // 0x2bcc7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bcc7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bcc80:
    // 0x2bcc80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bcc80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bcc84:
    // 0x2bcc84: 0x3e00008  jr          $ra
label_2bcc88:
    if (ctx->pc == 0x2BCC88u) {
        ctx->pc = 0x2BCC88u;
            // 0x2bcc88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BCC8Cu;
        goto label_2bcc8c;
    }
    ctx->pc = 0x2BCC84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCC84u;
            // 0x2bcc88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BCC8Cu;
label_2bcc8c:
    // 0x2bcc8c: 0x0  nop
    ctx->pc = 0x2bcc8cu;
    // NOP
label_2bcc90:
    // 0x2bcc90: 0x3e00008  jr          $ra
label_2bcc94:
    if (ctx->pc == 0x2BCC94u) {
        ctx->pc = 0x2BCC98u;
        goto label_2bcc98;
    }
    ctx->pc = 0x2BCC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BCC98u;
label_2bcc98:
    // 0x2bcc98: 0x0  nop
    ctx->pc = 0x2bcc98u;
    // NOP
label_2bcc9c:
    // 0x2bcc9c: 0x0  nop
    ctx->pc = 0x2bcc9cu;
    // NOP
}
