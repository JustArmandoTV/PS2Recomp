#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BDCB0
// Address: 0x2bdcb0 - 0x2bde10
void sub_002BDCB0_0x2bdcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDCB0_0x2bdcb0");
#endif

    switch (ctx->pc) {
        case 0x2bdcb0u: goto label_2bdcb0;
        case 0x2bdcb4u: goto label_2bdcb4;
        case 0x2bdcb8u: goto label_2bdcb8;
        case 0x2bdcbcu: goto label_2bdcbc;
        case 0x2bdcc0u: goto label_2bdcc0;
        case 0x2bdcc4u: goto label_2bdcc4;
        case 0x2bdcc8u: goto label_2bdcc8;
        case 0x2bdcccu: goto label_2bdccc;
        case 0x2bdcd0u: goto label_2bdcd0;
        case 0x2bdcd4u: goto label_2bdcd4;
        case 0x2bdcd8u: goto label_2bdcd8;
        case 0x2bdcdcu: goto label_2bdcdc;
        case 0x2bdce0u: goto label_2bdce0;
        case 0x2bdce4u: goto label_2bdce4;
        case 0x2bdce8u: goto label_2bdce8;
        case 0x2bdcecu: goto label_2bdcec;
        case 0x2bdcf0u: goto label_2bdcf0;
        case 0x2bdcf4u: goto label_2bdcf4;
        case 0x2bdcf8u: goto label_2bdcf8;
        case 0x2bdcfcu: goto label_2bdcfc;
        case 0x2bdd00u: goto label_2bdd00;
        case 0x2bdd04u: goto label_2bdd04;
        case 0x2bdd08u: goto label_2bdd08;
        case 0x2bdd0cu: goto label_2bdd0c;
        case 0x2bdd10u: goto label_2bdd10;
        case 0x2bdd14u: goto label_2bdd14;
        case 0x2bdd18u: goto label_2bdd18;
        case 0x2bdd1cu: goto label_2bdd1c;
        case 0x2bdd20u: goto label_2bdd20;
        case 0x2bdd24u: goto label_2bdd24;
        case 0x2bdd28u: goto label_2bdd28;
        case 0x2bdd2cu: goto label_2bdd2c;
        case 0x2bdd30u: goto label_2bdd30;
        case 0x2bdd34u: goto label_2bdd34;
        case 0x2bdd38u: goto label_2bdd38;
        case 0x2bdd3cu: goto label_2bdd3c;
        case 0x2bdd40u: goto label_2bdd40;
        case 0x2bdd44u: goto label_2bdd44;
        case 0x2bdd48u: goto label_2bdd48;
        case 0x2bdd4cu: goto label_2bdd4c;
        case 0x2bdd50u: goto label_2bdd50;
        case 0x2bdd54u: goto label_2bdd54;
        case 0x2bdd58u: goto label_2bdd58;
        case 0x2bdd5cu: goto label_2bdd5c;
        case 0x2bdd60u: goto label_2bdd60;
        case 0x2bdd64u: goto label_2bdd64;
        case 0x2bdd68u: goto label_2bdd68;
        case 0x2bdd6cu: goto label_2bdd6c;
        case 0x2bdd70u: goto label_2bdd70;
        case 0x2bdd74u: goto label_2bdd74;
        case 0x2bdd78u: goto label_2bdd78;
        case 0x2bdd7cu: goto label_2bdd7c;
        case 0x2bdd80u: goto label_2bdd80;
        case 0x2bdd84u: goto label_2bdd84;
        case 0x2bdd88u: goto label_2bdd88;
        case 0x2bdd8cu: goto label_2bdd8c;
        case 0x2bdd90u: goto label_2bdd90;
        case 0x2bdd94u: goto label_2bdd94;
        case 0x2bdd98u: goto label_2bdd98;
        case 0x2bdd9cu: goto label_2bdd9c;
        case 0x2bdda0u: goto label_2bdda0;
        case 0x2bdda4u: goto label_2bdda4;
        case 0x2bdda8u: goto label_2bdda8;
        case 0x2bddacu: goto label_2bddac;
        case 0x2bddb0u: goto label_2bddb0;
        case 0x2bddb4u: goto label_2bddb4;
        case 0x2bddb8u: goto label_2bddb8;
        case 0x2bddbcu: goto label_2bddbc;
        case 0x2bddc0u: goto label_2bddc0;
        case 0x2bddc4u: goto label_2bddc4;
        case 0x2bddc8u: goto label_2bddc8;
        case 0x2bddccu: goto label_2bddcc;
        case 0x2bddd0u: goto label_2bddd0;
        case 0x2bddd4u: goto label_2bddd4;
        case 0x2bddd8u: goto label_2bddd8;
        case 0x2bdddcu: goto label_2bdddc;
        case 0x2bdde0u: goto label_2bdde0;
        case 0x2bdde4u: goto label_2bdde4;
        case 0x2bdde8u: goto label_2bdde8;
        case 0x2bddecu: goto label_2bddec;
        case 0x2bddf0u: goto label_2bddf0;
        case 0x2bddf4u: goto label_2bddf4;
        case 0x2bddf8u: goto label_2bddf8;
        case 0x2bddfcu: goto label_2bddfc;
        case 0x2bde00u: goto label_2bde00;
        case 0x2bde04u: goto label_2bde04;
        case 0x2bde08u: goto label_2bde08;
        case 0x2bde0cu: goto label_2bde0c;
        default: break;
    }

    ctx->pc = 0x2bdcb0u;

label_2bdcb0:
    // 0x2bdcb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bdcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bdcb4:
    // 0x2bdcb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bdcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bdcb8:
    // 0x2bdcb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bdcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bdcbc:
    // 0x2bdcbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bdcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bdcc0:
    // 0x2bdcc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bdcc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bdcc4:
    // 0x2bdcc4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2bdcc8:
    if (ctx->pc == 0x2BDCC8u) {
        ctx->pc = 0x2BDCC8u;
            // 0x2bdcc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDCCCu;
        goto label_2bdccc;
    }
    ctx->pc = 0x2BDCC4u;
    {
        const bool branch_taken_0x2bdcc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDCC4u;
            // 0x2bdcc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdcc4) {
            ctx->pc = 0x2BDDF8u;
            goto label_2bddf8;
        }
    }
    ctx->pc = 0x2BDCCCu;
label_2bdccc:
    // 0x2bdccc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bdcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bdcd0:
    // 0x2bdcd0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bdcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bdcd4:
    // 0x2bdcd4: 0x24631de0  addiu       $v1, $v1, 0x1DE0
    ctx->pc = 0x2bdcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7648));
label_2bdcd8:
    // 0x2bdcd8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bdcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2bdcdc:
    // 0x2bdcdc: 0x24421e18  addiu       $v0, $v0, 0x1E18
    ctx->pc = 0x2bdcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7704));
label_2bdce0:
    // 0x2bdce0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bdce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bdce4:
    // 0x2bdce4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2bdce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2bdce8:
    // 0x2bdce8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2bdce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2bdcec:
    // 0x2bdcec: 0xc0407c0  jal         func_101F00
label_2bdcf0:
    if (ctx->pc == 0x2BDCF0u) {
        ctx->pc = 0x2BDCF0u;
            // 0x2bdcf0: 0x24a5dbb0  addiu       $a1, $a1, -0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958000));
        ctx->pc = 0x2BDCF4u;
        goto label_2bdcf4;
    }
    ctx->pc = 0x2BDCECu;
    SET_GPR_U32(ctx, 31, 0x2BDCF4u);
    ctx->pc = 0x2BDCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDCECu;
            // 0x2bdcf0: 0x24a5dbb0  addiu       $a1, $a1, -0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDCF4u; }
        if (ctx->pc != 0x2BDCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDCF4u; }
        if (ctx->pc != 0x2BDCF4u) { return; }
    }
    ctx->pc = 0x2BDCF4u;
label_2bdcf4:
    // 0x2bdcf4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2bdcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2bdcf8:
    // 0x2bdcf8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2bdcfc:
    if (ctx->pc == 0x2BDCFCu) {
        ctx->pc = 0x2BDCFCu;
            // 0x2bdcfc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2BDD00u;
        goto label_2bdd00;
    }
    ctx->pc = 0x2BDCF8u;
    {
        const bool branch_taken_0x2bdcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdcf8) {
            ctx->pc = 0x2BDCFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDCF8u;
            // 0x2bdcfc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BDD0Cu;
            goto label_2bdd0c;
        }
    }
    ctx->pc = 0x2BDD00u;
label_2bdd00:
    // 0x2bdd00: 0xc07507c  jal         func_1D41F0
label_2bdd04:
    if (ctx->pc == 0x2BDD04u) {
        ctx->pc = 0x2BDD04u;
            // 0x2bdd04: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2BDD08u;
        goto label_2bdd08;
    }
    ctx->pc = 0x2BDD00u;
    SET_GPR_U32(ctx, 31, 0x2BDD08u);
    ctx->pc = 0x2BDD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDD00u;
            // 0x2bdd04: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDD08u; }
        if (ctx->pc != 0x2BDD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDD08u; }
        if (ctx->pc != 0x2BDD08u) { return; }
    }
    ctx->pc = 0x2BDD08u;
label_2bdd08:
    // 0x2bdd08: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2bdd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2bdd0c:
    // 0x2bdd0c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bdd10:
    if (ctx->pc == 0x2BDD10u) {
        ctx->pc = 0x2BDD10u;
            // 0x2bdd10: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2BDD14u;
        goto label_2bdd14;
    }
    ctx->pc = 0x2BDD0Cu;
    {
        const bool branch_taken_0x2bdd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdd0c) {
            ctx->pc = 0x2BDD10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDD0Cu;
            // 0x2bdd10: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BDD3Cu;
            goto label_2bdd3c;
        }
    }
    ctx->pc = 0x2BDD14u;
label_2bdd14:
    // 0x2bdd14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bdd18:
    if (ctx->pc == 0x2BDD18u) {
        ctx->pc = 0x2BDD1Cu;
        goto label_2bdd1c;
    }
    ctx->pc = 0x2BDD14u;
    {
        const bool branch_taken_0x2bdd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdd14) {
            ctx->pc = 0x2BDD38u;
            goto label_2bdd38;
        }
    }
    ctx->pc = 0x2BDD1Cu;
label_2bdd1c:
    // 0x2bdd1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bdd20:
    if (ctx->pc == 0x2BDD20u) {
        ctx->pc = 0x2BDD24u;
        goto label_2bdd24;
    }
    ctx->pc = 0x2BDD1Cu;
    {
        const bool branch_taken_0x2bdd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdd1c) {
            ctx->pc = 0x2BDD38u;
            goto label_2bdd38;
        }
    }
    ctx->pc = 0x2BDD24u;
label_2bdd24:
    // 0x2bdd24: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2bdd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2bdd28:
    // 0x2bdd28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bdd2c:
    if (ctx->pc == 0x2BDD2Cu) {
        ctx->pc = 0x2BDD30u;
        goto label_2bdd30;
    }
    ctx->pc = 0x2BDD28u;
    {
        const bool branch_taken_0x2bdd28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdd28) {
            ctx->pc = 0x2BDD38u;
            goto label_2bdd38;
        }
    }
    ctx->pc = 0x2BDD30u;
label_2bdd30:
    // 0x2bdd30: 0xc0400a8  jal         func_1002A0
label_2bdd34:
    if (ctx->pc == 0x2BDD34u) {
        ctx->pc = 0x2BDD38u;
        goto label_2bdd38;
    }
    ctx->pc = 0x2BDD30u;
    SET_GPR_U32(ctx, 31, 0x2BDD38u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDD38u; }
        if (ctx->pc != 0x2BDD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDD38u; }
        if (ctx->pc != 0x2BDD38u) { return; }
    }
    ctx->pc = 0x2BDD38u;
label_2bdd38:
    // 0x2bdd38: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2bdd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2bdd3c:
    // 0x2bdd3c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bdd40:
    if (ctx->pc == 0x2BDD40u) {
        ctx->pc = 0x2BDD40u;
            // 0x2bdd40: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2BDD44u;
        goto label_2bdd44;
    }
    ctx->pc = 0x2BDD3Cu;
    {
        const bool branch_taken_0x2bdd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdd3c) {
            ctx->pc = 0x2BDD40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDD3Cu;
            // 0x2bdd40: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BDD6Cu;
            goto label_2bdd6c;
        }
    }
    ctx->pc = 0x2BDD44u;
label_2bdd44:
    // 0x2bdd44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bdd48:
    if (ctx->pc == 0x2BDD48u) {
        ctx->pc = 0x2BDD4Cu;
        goto label_2bdd4c;
    }
    ctx->pc = 0x2BDD44u;
    {
        const bool branch_taken_0x2bdd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdd44) {
            ctx->pc = 0x2BDD68u;
            goto label_2bdd68;
        }
    }
    ctx->pc = 0x2BDD4Cu;
label_2bdd4c:
    // 0x2bdd4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bdd50:
    if (ctx->pc == 0x2BDD50u) {
        ctx->pc = 0x2BDD54u;
        goto label_2bdd54;
    }
    ctx->pc = 0x2BDD4Cu;
    {
        const bool branch_taken_0x2bdd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdd4c) {
            ctx->pc = 0x2BDD68u;
            goto label_2bdd68;
        }
    }
    ctx->pc = 0x2BDD54u;
label_2bdd54:
    // 0x2bdd54: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2bdd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2bdd58:
    // 0x2bdd58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bdd5c:
    if (ctx->pc == 0x2BDD5Cu) {
        ctx->pc = 0x2BDD60u;
        goto label_2bdd60;
    }
    ctx->pc = 0x2BDD58u;
    {
        const bool branch_taken_0x2bdd58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdd58) {
            ctx->pc = 0x2BDD68u;
            goto label_2bdd68;
        }
    }
    ctx->pc = 0x2BDD60u;
label_2bdd60:
    // 0x2bdd60: 0xc0400a8  jal         func_1002A0
label_2bdd64:
    if (ctx->pc == 0x2BDD64u) {
        ctx->pc = 0x2BDD68u;
        goto label_2bdd68;
    }
    ctx->pc = 0x2BDD60u;
    SET_GPR_U32(ctx, 31, 0x2BDD68u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDD68u; }
        if (ctx->pc != 0x2BDD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDD68u; }
        if (ctx->pc != 0x2BDD68u) { return; }
    }
    ctx->pc = 0x2BDD68u;
label_2bdd68:
    // 0x2bdd68: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2bdd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2bdd6c:
    // 0x2bdd6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bdd70:
    if (ctx->pc == 0x2BDD70u) {
        ctx->pc = 0x2BDD74u;
        goto label_2bdd74;
    }
    ctx->pc = 0x2BDD6Cu;
    {
        const bool branch_taken_0x2bdd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdd6c) {
            ctx->pc = 0x2BDD88u;
            goto label_2bdd88;
        }
    }
    ctx->pc = 0x2BDD74u;
label_2bdd74:
    // 0x2bdd74: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bdd74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bdd78:
    // 0x2bdd78: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bdd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2bdd7c:
    // 0x2bdd7c: 0x24631dd0  addiu       $v1, $v1, 0x1DD0
    ctx->pc = 0x2bdd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7632));
label_2bdd80:
    // 0x2bdd80: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2bdd80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2bdd84:
    // 0x2bdd84: 0xac400d18  sw          $zero, 0xD18($v0)
    ctx->pc = 0x2bdd84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3352), GPR_U32(ctx, 0));
label_2bdd88:
    // 0x2bdd88: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2bdd8c:
    if (ctx->pc == 0x2BDD8Cu) {
        ctx->pc = 0x2BDD8Cu;
            // 0x2bdd8c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BDD90u;
        goto label_2bdd90;
    }
    ctx->pc = 0x2BDD88u;
    {
        const bool branch_taken_0x2bdd88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdd88) {
            ctx->pc = 0x2BDD8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDD88u;
            // 0x2bdd8c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BDDE4u;
            goto label_2bdde4;
        }
    }
    ctx->pc = 0x2BDD90u;
label_2bdd90:
    // 0x2bdd90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bdd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bdd94:
    // 0x2bdd94: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bdd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2bdd98:
    // 0x2bdd98: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bdd98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bdd9c:
    // 0x2bdd9c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2bdd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2bdda0:
    // 0x2bdda0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bdda4:
    if (ctx->pc == 0x2BDDA4u) {
        ctx->pc = 0x2BDDA4u;
            // 0x2bdda4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2BDDA8u;
        goto label_2bdda8;
    }
    ctx->pc = 0x2BDDA0u;
    {
        const bool branch_taken_0x2bdda0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdda0) {
            ctx->pc = 0x2BDDA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDA0u;
            // 0x2bdda4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BDDBCu;
            goto label_2bddbc;
        }
    }
    ctx->pc = 0x2BDDA8u;
label_2bdda8:
    // 0x2bdda8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bdda8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bddac:
    // 0x2bddac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bddacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bddb0:
    // 0x2bddb0: 0x320f809  jalr        $t9
label_2bddb4:
    if (ctx->pc == 0x2BDDB4u) {
        ctx->pc = 0x2BDDB4u;
            // 0x2bddb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BDDB8u;
        goto label_2bddb8;
    }
    ctx->pc = 0x2BDDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BDDB8u);
        ctx->pc = 0x2BDDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDB0u;
            // 0x2bddb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BDDB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDB8u; }
            if (ctx->pc != 0x2BDDB8u) { return; }
        }
        }
    }
    ctx->pc = 0x2BDDB8u;
label_2bddb8:
    // 0x2bddb8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2bddb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2bddbc:
    // 0x2bddbc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bddc0:
    if (ctx->pc == 0x2BDDC0u) {
        ctx->pc = 0x2BDDC0u;
            // 0x2bddc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDDC4u;
        goto label_2bddc4;
    }
    ctx->pc = 0x2BDDBCu;
    {
        const bool branch_taken_0x2bddbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bddbc) {
            ctx->pc = 0x2BDDC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDBCu;
            // 0x2bddc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BDDD8u;
            goto label_2bddd8;
        }
    }
    ctx->pc = 0x2BDDC4u;
label_2bddc4:
    // 0x2bddc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bddc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bddc8:
    // 0x2bddc8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bddc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bddcc:
    // 0x2bddcc: 0x320f809  jalr        $t9
label_2bddd0:
    if (ctx->pc == 0x2BDDD0u) {
        ctx->pc = 0x2BDDD0u;
            // 0x2bddd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BDDD4u;
        goto label_2bddd4;
    }
    ctx->pc = 0x2BDDCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BDDD4u);
        ctx->pc = 0x2BDDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDCCu;
            // 0x2bddd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BDDD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDD4u; }
            if (ctx->pc != 0x2BDDD4u) { return; }
        }
        }
    }
    ctx->pc = 0x2BDDD4u;
label_2bddd4:
    // 0x2bddd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bddd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bddd8:
    // 0x2bddd8: 0xc075bf8  jal         func_1D6FE0
label_2bdddc:
    if (ctx->pc == 0x2BDDDCu) {
        ctx->pc = 0x2BDDDCu;
            // 0x2bdddc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDDE0u;
        goto label_2bdde0;
    }
    ctx->pc = 0x2BDDD8u;
    SET_GPR_U32(ctx, 31, 0x2BDDE0u);
    ctx->pc = 0x2BDDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDD8u;
            // 0x2bdddc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDE0u; }
        if (ctx->pc != 0x2BDDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDE0u; }
        if (ctx->pc != 0x2BDDE0u) { return; }
    }
    ctx->pc = 0x2BDDE0u;
label_2bdde0:
    // 0x2bdde0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bdde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bdde4:
    // 0x2bdde4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bdde4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bdde8:
    // 0x2bdde8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bddec:
    if (ctx->pc == 0x2BDDECu) {
        ctx->pc = 0x2BDDECu;
            // 0x2bddec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDDF0u;
        goto label_2bddf0;
    }
    ctx->pc = 0x2BDDE8u;
    {
        const bool branch_taken_0x2bdde8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bdde8) {
            ctx->pc = 0x2BDDECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDE8u;
            // 0x2bddec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BDDFCu;
            goto label_2bddfc;
        }
    }
    ctx->pc = 0x2BDDF0u;
label_2bddf0:
    // 0x2bddf0: 0xc0400a8  jal         func_1002A0
label_2bddf4:
    if (ctx->pc == 0x2BDDF4u) {
        ctx->pc = 0x2BDDF4u;
            // 0x2bddf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDDF8u;
        goto label_2bddf8;
    }
    ctx->pc = 0x2BDDF0u;
    SET_GPR_U32(ctx, 31, 0x2BDDF8u);
    ctx->pc = 0x2BDDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDF0u;
            // 0x2bddf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDF8u; }
        if (ctx->pc != 0x2BDDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDF8u; }
        if (ctx->pc != 0x2BDDF8u) { return; }
    }
    ctx->pc = 0x2BDDF8u;
label_2bddf8:
    // 0x2bddf8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bddf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bddfc:
    // 0x2bddfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bddfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bde00:
    // 0x2bde00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bde00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bde04:
    // 0x2bde04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bde04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bde08:
    // 0x2bde08: 0x3e00008  jr          $ra
label_2bde0c:
    if (ctx->pc == 0x2BDE0Cu) {
        ctx->pc = 0x2BDE0Cu;
            // 0x2bde0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BDE10u;
        goto label_fallthrough_0x2bde08;
    }
    ctx->pc = 0x2BDE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE08u;
            // 0x2bde0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bde08:
    ctx->pc = 0x2BDE10u;
}
