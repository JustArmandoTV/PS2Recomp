#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CBDB0
// Address: 0x2cbdb0 - 0x2cbf20
void sub_002CBDB0_0x2cbdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBDB0_0x2cbdb0");
#endif

    switch (ctx->pc) {
        case 0x2cbdb0u: goto label_2cbdb0;
        case 0x2cbdb4u: goto label_2cbdb4;
        case 0x2cbdb8u: goto label_2cbdb8;
        case 0x2cbdbcu: goto label_2cbdbc;
        case 0x2cbdc0u: goto label_2cbdc0;
        case 0x2cbdc4u: goto label_2cbdc4;
        case 0x2cbdc8u: goto label_2cbdc8;
        case 0x2cbdccu: goto label_2cbdcc;
        case 0x2cbdd0u: goto label_2cbdd0;
        case 0x2cbdd4u: goto label_2cbdd4;
        case 0x2cbdd8u: goto label_2cbdd8;
        case 0x2cbddcu: goto label_2cbddc;
        case 0x2cbde0u: goto label_2cbde0;
        case 0x2cbde4u: goto label_2cbde4;
        case 0x2cbde8u: goto label_2cbde8;
        case 0x2cbdecu: goto label_2cbdec;
        case 0x2cbdf0u: goto label_2cbdf0;
        case 0x2cbdf4u: goto label_2cbdf4;
        case 0x2cbdf8u: goto label_2cbdf8;
        case 0x2cbdfcu: goto label_2cbdfc;
        case 0x2cbe00u: goto label_2cbe00;
        case 0x2cbe04u: goto label_2cbe04;
        case 0x2cbe08u: goto label_2cbe08;
        case 0x2cbe0cu: goto label_2cbe0c;
        case 0x2cbe10u: goto label_2cbe10;
        case 0x2cbe14u: goto label_2cbe14;
        case 0x2cbe18u: goto label_2cbe18;
        case 0x2cbe1cu: goto label_2cbe1c;
        case 0x2cbe20u: goto label_2cbe20;
        case 0x2cbe24u: goto label_2cbe24;
        case 0x2cbe28u: goto label_2cbe28;
        case 0x2cbe2cu: goto label_2cbe2c;
        case 0x2cbe30u: goto label_2cbe30;
        case 0x2cbe34u: goto label_2cbe34;
        case 0x2cbe38u: goto label_2cbe38;
        case 0x2cbe3cu: goto label_2cbe3c;
        case 0x2cbe40u: goto label_2cbe40;
        case 0x2cbe44u: goto label_2cbe44;
        case 0x2cbe48u: goto label_2cbe48;
        case 0x2cbe4cu: goto label_2cbe4c;
        case 0x2cbe50u: goto label_2cbe50;
        case 0x2cbe54u: goto label_2cbe54;
        case 0x2cbe58u: goto label_2cbe58;
        case 0x2cbe5cu: goto label_2cbe5c;
        case 0x2cbe60u: goto label_2cbe60;
        case 0x2cbe64u: goto label_2cbe64;
        case 0x2cbe68u: goto label_2cbe68;
        case 0x2cbe6cu: goto label_2cbe6c;
        case 0x2cbe70u: goto label_2cbe70;
        case 0x2cbe74u: goto label_2cbe74;
        case 0x2cbe78u: goto label_2cbe78;
        case 0x2cbe7cu: goto label_2cbe7c;
        case 0x2cbe80u: goto label_2cbe80;
        case 0x2cbe84u: goto label_2cbe84;
        case 0x2cbe88u: goto label_2cbe88;
        case 0x2cbe8cu: goto label_2cbe8c;
        case 0x2cbe90u: goto label_2cbe90;
        case 0x2cbe94u: goto label_2cbe94;
        case 0x2cbe98u: goto label_2cbe98;
        case 0x2cbe9cu: goto label_2cbe9c;
        case 0x2cbea0u: goto label_2cbea0;
        case 0x2cbea4u: goto label_2cbea4;
        case 0x2cbea8u: goto label_2cbea8;
        case 0x2cbeacu: goto label_2cbeac;
        case 0x2cbeb0u: goto label_2cbeb0;
        case 0x2cbeb4u: goto label_2cbeb4;
        case 0x2cbeb8u: goto label_2cbeb8;
        case 0x2cbebcu: goto label_2cbebc;
        case 0x2cbec0u: goto label_2cbec0;
        case 0x2cbec4u: goto label_2cbec4;
        case 0x2cbec8u: goto label_2cbec8;
        case 0x2cbeccu: goto label_2cbecc;
        case 0x2cbed0u: goto label_2cbed0;
        case 0x2cbed4u: goto label_2cbed4;
        case 0x2cbed8u: goto label_2cbed8;
        case 0x2cbedcu: goto label_2cbedc;
        case 0x2cbee0u: goto label_2cbee0;
        case 0x2cbee4u: goto label_2cbee4;
        case 0x2cbee8u: goto label_2cbee8;
        case 0x2cbeecu: goto label_2cbeec;
        case 0x2cbef0u: goto label_2cbef0;
        case 0x2cbef4u: goto label_2cbef4;
        case 0x2cbef8u: goto label_2cbef8;
        case 0x2cbefcu: goto label_2cbefc;
        case 0x2cbf00u: goto label_2cbf00;
        case 0x2cbf04u: goto label_2cbf04;
        case 0x2cbf08u: goto label_2cbf08;
        case 0x2cbf0cu: goto label_2cbf0c;
        case 0x2cbf10u: goto label_2cbf10;
        case 0x2cbf14u: goto label_2cbf14;
        case 0x2cbf18u: goto label_2cbf18;
        case 0x2cbf1cu: goto label_2cbf1c;
        default: break;
    }

    ctx->pc = 0x2cbdb0u;

label_2cbdb0:
    // 0x2cbdb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cbdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cbdb4:
    // 0x2cbdb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cbdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cbdb8:
    // 0x2cbdb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cbdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cbdbc:
    // 0x2cbdbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cbdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cbdc0:
    // 0x2cbdc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cbdc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cbdc4:
    // 0x2cbdc4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2cbdc8:
    if (ctx->pc == 0x2CBDC8u) {
        ctx->pc = 0x2CBDC8u;
            // 0x2cbdc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBDCCu;
        goto label_2cbdcc;
    }
    ctx->pc = 0x2CBDC4u;
    {
        const bool branch_taken_0x2cbdc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBDC4u;
            // 0x2cbdc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbdc4) {
            ctx->pc = 0x2CBE08u;
            goto label_2cbe08;
        }
    }
    ctx->pc = 0x2CBDCCu;
label_2cbdcc:
    // 0x2cbdcc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2cbdd0:
    if (ctx->pc == 0x2CBDD0u) {
        ctx->pc = 0x2CBDD0u;
            // 0x2cbdd0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CBDD4u;
        goto label_2cbdd4;
    }
    ctx->pc = 0x2CBDCCu;
    {
        const bool branch_taken_0x2cbdcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbdcc) {
            ctx->pc = 0x2CBDD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBDCCu;
            // 0x2cbdd0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CBDF4u;
            goto label_2cbdf4;
        }
    }
    ctx->pc = 0x2CBDD4u;
label_2cbdd4:
    // 0x2cbdd4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2cbdd8:
    if (ctx->pc == 0x2CBDD8u) {
        ctx->pc = 0x2CBDDCu;
        goto label_2cbddc;
    }
    ctx->pc = 0x2CBDD4u;
    {
        const bool branch_taken_0x2cbdd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbdd4) {
            ctx->pc = 0x2CBDF0u;
            goto label_2cbdf0;
        }
    }
    ctx->pc = 0x2CBDDCu;
label_2cbddc:
    // 0x2cbddc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2cbddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2cbde0:
    // 0x2cbde0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2cbde4:
    if (ctx->pc == 0x2CBDE4u) {
        ctx->pc = 0x2CBDE8u;
        goto label_2cbde8;
    }
    ctx->pc = 0x2CBDE0u;
    {
        const bool branch_taken_0x2cbde0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbde0) {
            ctx->pc = 0x2CBDF0u;
            goto label_2cbdf0;
        }
    }
    ctx->pc = 0x2CBDE8u;
label_2cbde8:
    // 0x2cbde8: 0xc0400a8  jal         func_1002A0
label_2cbdec:
    if (ctx->pc == 0x2CBDECu) {
        ctx->pc = 0x2CBDF0u;
        goto label_2cbdf0;
    }
    ctx->pc = 0x2CBDE8u;
    SET_GPR_U32(ctx, 31, 0x2CBDF0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBDF0u; }
        if (ctx->pc != 0x2CBDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBDF0u; }
        if (ctx->pc != 0x2CBDF0u) { return; }
    }
    ctx->pc = 0x2CBDF0u;
label_2cbdf0:
    // 0x2cbdf0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cbdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cbdf4:
    // 0x2cbdf4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cbdf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cbdf8:
    // 0x2cbdf8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cbdfc:
    if (ctx->pc == 0x2CBDFCu) {
        ctx->pc = 0x2CBDFCu;
            // 0x2cbdfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE00u;
        goto label_2cbe00;
    }
    ctx->pc = 0x2CBDF8u;
    {
        const bool branch_taken_0x2cbdf8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cbdf8) {
            ctx->pc = 0x2CBDFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBDF8u;
            // 0x2cbdfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CBE0Cu;
            goto label_2cbe0c;
        }
    }
    ctx->pc = 0x2CBE00u;
label_2cbe00:
    // 0x2cbe00: 0xc0400a8  jal         func_1002A0
label_2cbe04:
    if (ctx->pc == 0x2CBE04u) {
        ctx->pc = 0x2CBE04u;
            // 0x2cbe04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE08u;
        goto label_2cbe08;
    }
    ctx->pc = 0x2CBE00u;
    SET_GPR_U32(ctx, 31, 0x2CBE08u);
    ctx->pc = 0x2CBE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBE00u;
            // 0x2cbe04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBE08u; }
        if (ctx->pc != 0x2CBE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBE08u; }
        if (ctx->pc != 0x2CBE08u) { return; }
    }
    ctx->pc = 0x2CBE08u;
label_2cbe08:
    // 0x2cbe08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cbe08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cbe0c:
    // 0x2cbe0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cbe0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cbe10:
    // 0x2cbe10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cbe10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cbe14:
    // 0x2cbe14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cbe14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cbe18:
    // 0x2cbe18: 0x3e00008  jr          $ra
label_2cbe1c:
    if (ctx->pc == 0x2CBE1Cu) {
        ctx->pc = 0x2CBE1Cu;
            // 0x2cbe1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CBE20u;
        goto label_2cbe20;
    }
    ctx->pc = 0x2CBE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBE18u;
            // 0x2cbe1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CBE20u;
label_2cbe20:
    // 0x2cbe20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cbe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cbe24:
    // 0x2cbe24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cbe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cbe28:
    // 0x2cbe28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cbe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cbe2c:
    // 0x2cbe2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cbe2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cbe30:
    // 0x2cbe30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cbe30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cbe34:
    // 0x2cbe34: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_2cbe38:
    if (ctx->pc == 0x2CBE38u) {
        ctx->pc = 0x2CBE38u;
            // 0x2cbe38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE3Cu;
        goto label_2cbe3c;
    }
    ctx->pc = 0x2CBE34u;
    {
        const bool branch_taken_0x2cbe34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBE34u;
            // 0x2cbe38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe34) {
            ctx->pc = 0x2CBEFCu;
            goto label_2cbefc;
        }
    }
    ctx->pc = 0x2CBE3Cu;
label_2cbe3c:
    // 0x2cbe3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cbe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cbe40:
    // 0x2cbe40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cbe40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cbe44:
    // 0x2cbe44: 0x246364f0  addiu       $v1, $v1, 0x64F0
    ctx->pc = 0x2cbe44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25840));
label_2cbe48:
    // 0x2cbe48: 0x24426530  addiu       $v0, $v0, 0x6530
    ctx->pc = 0x2cbe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25904));
label_2cbe4c:
    // 0x2cbe4c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2cbe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2cbe50:
    // 0x2cbe50: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2cbe50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2cbe54:
    // 0x2cbe54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cbe54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cbe58:
    // 0x2cbe58: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2cbe58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2cbe5c:
    // 0x2cbe5c: 0x320f809  jalr        $t9
label_2cbe60:
    if (ctx->pc == 0x2CBE60u) {
        ctx->pc = 0x2CBE64u;
        goto label_2cbe64;
    }
    ctx->pc = 0x2CBE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CBE64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CBE64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CBE64u; }
            if (ctx->pc != 0x2CBE64u) { return; }
        }
        }
    }
    ctx->pc = 0x2CBE64u;
label_2cbe64:
    // 0x2cbe64: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_2cbe68:
    if (ctx->pc == 0x2CBE68u) {
        ctx->pc = 0x2CBE68u;
            // 0x2cbe68: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CBE6Cu;
        goto label_2cbe6c;
    }
    ctx->pc = 0x2CBE64u;
    {
        const bool branch_taken_0x2cbe64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbe64) {
            ctx->pc = 0x2CBE68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBE64u;
            // 0x2cbe68: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CBEE8u;
            goto label_2cbee8;
        }
    }
    ctx->pc = 0x2CBE6Cu;
label_2cbe6c:
    // 0x2cbe6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cbe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cbe70:
    // 0x2cbe70: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cbe70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cbe74:
    // 0x2cbe74: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x2cbe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_2cbe78:
    // 0x2cbe78: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x2cbe78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_2cbe7c:
    // 0x2cbe7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cbe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cbe80:
    // 0x2cbe80: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2cbe80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2cbe84:
    // 0x2cbe84: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2cbe88:
    if (ctx->pc == 0x2CBE88u) {
        ctx->pc = 0x2CBE88u;
            // 0x2cbe88: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2CBE8Cu;
        goto label_2cbe8c;
    }
    ctx->pc = 0x2CBE84u;
    {
        const bool branch_taken_0x2cbe84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBE84u;
            // 0x2cbe88: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe84) {
            ctx->pc = 0x2CBEC0u;
            goto label_2cbec0;
        }
    }
    ctx->pc = 0x2CBE8Cu;
label_2cbe8c:
    // 0x2cbe8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cbe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cbe90:
    // 0x2cbe90: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2cbe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2cbe94:
    // 0x2cbe94: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2cbe94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2cbe98:
    // 0x2cbe98: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2cbe98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2cbe9c:
    // 0x2cbe9c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2cbea0:
    if (ctx->pc == 0x2CBEA0u) {
        ctx->pc = 0x2CBEA4u;
        goto label_2cbea4;
    }
    ctx->pc = 0x2CBE9Cu;
    {
        const bool branch_taken_0x2cbe9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbe9c) {
            ctx->pc = 0x2CBEC0u;
            goto label_2cbec0;
        }
    }
    ctx->pc = 0x2CBEA4u;
label_2cbea4:
    // 0x2cbea4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2cbea8:
    if (ctx->pc == 0x2CBEA8u) {
        ctx->pc = 0x2CBEA8u;
            // 0x2cbea8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2CBEACu;
        goto label_2cbeac;
    }
    ctx->pc = 0x2CBEA4u;
    {
        const bool branch_taken_0x2cbea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbea4) {
            ctx->pc = 0x2CBEA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBEA4u;
            // 0x2cbea8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CBEC0u;
            goto label_2cbec0;
        }
    }
    ctx->pc = 0x2CBEACu;
label_2cbeac:
    // 0x2cbeac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cbeacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cbeb0:
    // 0x2cbeb0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cbeb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cbeb4:
    // 0x2cbeb4: 0x320f809  jalr        $t9
label_2cbeb8:
    if (ctx->pc == 0x2CBEB8u) {
        ctx->pc = 0x2CBEB8u;
            // 0x2cbeb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CBEBCu;
        goto label_2cbebc;
    }
    ctx->pc = 0x2CBEB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CBEBCu);
        ctx->pc = 0x2CBEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBEB4u;
            // 0x2cbeb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CBEBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CBEBCu; }
            if (ctx->pc != 0x2CBEBCu) { return; }
        }
        }
    }
    ctx->pc = 0x2CBEBCu;
label_2cbebc:
    // 0x2cbebc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2cbebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2cbec0:
    // 0x2cbec0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2cbec4:
    if (ctx->pc == 0x2CBEC4u) {
        ctx->pc = 0x2CBEC8u;
        goto label_2cbec8;
    }
    ctx->pc = 0x2CBEC0u;
    {
        const bool branch_taken_0x2cbec0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbec0) {
            ctx->pc = 0x2CBEE4u;
            goto label_2cbee4;
        }
    }
    ctx->pc = 0x2CBEC8u;
label_2cbec8:
    // 0x2cbec8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cbec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cbecc:
    // 0x2cbecc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2cbeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2cbed0:
    // 0x2cbed0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2cbed4:
    if (ctx->pc == 0x2CBED4u) {
        ctx->pc = 0x2CBED4u;
            // 0x2cbed4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2CBED8u;
        goto label_2cbed8;
    }
    ctx->pc = 0x2CBED0u;
    {
        const bool branch_taken_0x2cbed0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBED0u;
            // 0x2cbed4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbed0) {
            ctx->pc = 0x2CBEE4u;
            goto label_2cbee4;
        }
    }
    ctx->pc = 0x2CBED8u;
label_2cbed8:
    // 0x2cbed8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cbed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cbedc:
    // 0x2cbedc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2cbedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2cbee0:
    // 0x2cbee0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cbee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cbee4:
    // 0x2cbee4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cbee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cbee8:
    // 0x2cbee8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cbee8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cbeec:
    // 0x2cbeec: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cbef0:
    if (ctx->pc == 0x2CBEF0u) {
        ctx->pc = 0x2CBEF0u;
            // 0x2cbef0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBEF4u;
        goto label_2cbef4;
    }
    ctx->pc = 0x2CBEECu;
    {
        const bool branch_taken_0x2cbeec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cbeec) {
            ctx->pc = 0x2CBEF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBEECu;
            // 0x2cbef0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CBF00u;
            goto label_2cbf00;
        }
    }
    ctx->pc = 0x2CBEF4u;
label_2cbef4:
    // 0x2cbef4: 0xc0400a8  jal         func_1002A0
label_2cbef8:
    if (ctx->pc == 0x2CBEF8u) {
        ctx->pc = 0x2CBEF8u;
            // 0x2cbef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBEFCu;
        goto label_2cbefc;
    }
    ctx->pc = 0x2CBEF4u;
    SET_GPR_U32(ctx, 31, 0x2CBEFCu);
    ctx->pc = 0x2CBEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBEF4u;
            // 0x2cbef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBEFCu; }
        if (ctx->pc != 0x2CBEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBEFCu; }
        if (ctx->pc != 0x2CBEFCu) { return; }
    }
    ctx->pc = 0x2CBEFCu;
label_2cbefc:
    // 0x2cbefc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cbefcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cbf00:
    // 0x2cbf00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cbf00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cbf04:
    // 0x2cbf04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cbf04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cbf08:
    // 0x2cbf08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cbf08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cbf0c:
    // 0x2cbf0c: 0x3e00008  jr          $ra
label_2cbf10:
    if (ctx->pc == 0x2CBF10u) {
        ctx->pc = 0x2CBF10u;
            // 0x2cbf10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CBF14u;
        goto label_2cbf14;
    }
    ctx->pc = 0x2CBF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBF0Cu;
            // 0x2cbf10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CBF14u;
label_2cbf14:
    // 0x2cbf14: 0x0  nop
    ctx->pc = 0x2cbf14u;
    // NOP
label_2cbf18:
    // 0x2cbf18: 0x0  nop
    ctx->pc = 0x2cbf18u;
    // NOP
label_2cbf1c:
    // 0x2cbf1c: 0x0  nop
    ctx->pc = 0x2cbf1cu;
    // NOP
}
