#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CBC40
// Address: 0x4cbc40 - 0x4cbed0
void sub_004CBC40_0x4cbc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CBC40_0x4cbc40");
#endif

    switch (ctx->pc) {
        case 0x4cbc40u: goto label_4cbc40;
        case 0x4cbc44u: goto label_4cbc44;
        case 0x4cbc48u: goto label_4cbc48;
        case 0x4cbc4cu: goto label_4cbc4c;
        case 0x4cbc50u: goto label_4cbc50;
        case 0x4cbc54u: goto label_4cbc54;
        case 0x4cbc58u: goto label_4cbc58;
        case 0x4cbc5cu: goto label_4cbc5c;
        case 0x4cbc60u: goto label_4cbc60;
        case 0x4cbc64u: goto label_4cbc64;
        case 0x4cbc68u: goto label_4cbc68;
        case 0x4cbc6cu: goto label_4cbc6c;
        case 0x4cbc70u: goto label_4cbc70;
        case 0x4cbc74u: goto label_4cbc74;
        case 0x4cbc78u: goto label_4cbc78;
        case 0x4cbc7cu: goto label_4cbc7c;
        case 0x4cbc80u: goto label_4cbc80;
        case 0x4cbc84u: goto label_4cbc84;
        case 0x4cbc88u: goto label_4cbc88;
        case 0x4cbc8cu: goto label_4cbc8c;
        case 0x4cbc90u: goto label_4cbc90;
        case 0x4cbc94u: goto label_4cbc94;
        case 0x4cbc98u: goto label_4cbc98;
        case 0x4cbc9cu: goto label_4cbc9c;
        case 0x4cbca0u: goto label_4cbca0;
        case 0x4cbca4u: goto label_4cbca4;
        case 0x4cbca8u: goto label_4cbca8;
        case 0x4cbcacu: goto label_4cbcac;
        case 0x4cbcb0u: goto label_4cbcb0;
        case 0x4cbcb4u: goto label_4cbcb4;
        case 0x4cbcb8u: goto label_4cbcb8;
        case 0x4cbcbcu: goto label_4cbcbc;
        case 0x4cbcc0u: goto label_4cbcc0;
        case 0x4cbcc4u: goto label_4cbcc4;
        case 0x4cbcc8u: goto label_4cbcc8;
        case 0x4cbcccu: goto label_4cbccc;
        case 0x4cbcd0u: goto label_4cbcd0;
        case 0x4cbcd4u: goto label_4cbcd4;
        case 0x4cbcd8u: goto label_4cbcd8;
        case 0x4cbcdcu: goto label_4cbcdc;
        case 0x4cbce0u: goto label_4cbce0;
        case 0x4cbce4u: goto label_4cbce4;
        case 0x4cbce8u: goto label_4cbce8;
        case 0x4cbcecu: goto label_4cbcec;
        case 0x4cbcf0u: goto label_4cbcf0;
        case 0x4cbcf4u: goto label_4cbcf4;
        case 0x4cbcf8u: goto label_4cbcf8;
        case 0x4cbcfcu: goto label_4cbcfc;
        case 0x4cbd00u: goto label_4cbd00;
        case 0x4cbd04u: goto label_4cbd04;
        case 0x4cbd08u: goto label_4cbd08;
        case 0x4cbd0cu: goto label_4cbd0c;
        case 0x4cbd10u: goto label_4cbd10;
        case 0x4cbd14u: goto label_4cbd14;
        case 0x4cbd18u: goto label_4cbd18;
        case 0x4cbd1cu: goto label_4cbd1c;
        case 0x4cbd20u: goto label_4cbd20;
        case 0x4cbd24u: goto label_4cbd24;
        case 0x4cbd28u: goto label_4cbd28;
        case 0x4cbd2cu: goto label_4cbd2c;
        case 0x4cbd30u: goto label_4cbd30;
        case 0x4cbd34u: goto label_4cbd34;
        case 0x4cbd38u: goto label_4cbd38;
        case 0x4cbd3cu: goto label_4cbd3c;
        case 0x4cbd40u: goto label_4cbd40;
        case 0x4cbd44u: goto label_4cbd44;
        case 0x4cbd48u: goto label_4cbd48;
        case 0x4cbd4cu: goto label_4cbd4c;
        case 0x4cbd50u: goto label_4cbd50;
        case 0x4cbd54u: goto label_4cbd54;
        case 0x4cbd58u: goto label_4cbd58;
        case 0x4cbd5cu: goto label_4cbd5c;
        case 0x4cbd60u: goto label_4cbd60;
        case 0x4cbd64u: goto label_4cbd64;
        case 0x4cbd68u: goto label_4cbd68;
        case 0x4cbd6cu: goto label_4cbd6c;
        case 0x4cbd70u: goto label_4cbd70;
        case 0x4cbd74u: goto label_4cbd74;
        case 0x4cbd78u: goto label_4cbd78;
        case 0x4cbd7cu: goto label_4cbd7c;
        case 0x4cbd80u: goto label_4cbd80;
        case 0x4cbd84u: goto label_4cbd84;
        case 0x4cbd88u: goto label_4cbd88;
        case 0x4cbd8cu: goto label_4cbd8c;
        case 0x4cbd90u: goto label_4cbd90;
        case 0x4cbd94u: goto label_4cbd94;
        case 0x4cbd98u: goto label_4cbd98;
        case 0x4cbd9cu: goto label_4cbd9c;
        case 0x4cbda0u: goto label_4cbda0;
        case 0x4cbda4u: goto label_4cbda4;
        case 0x4cbda8u: goto label_4cbda8;
        case 0x4cbdacu: goto label_4cbdac;
        case 0x4cbdb0u: goto label_4cbdb0;
        case 0x4cbdb4u: goto label_4cbdb4;
        case 0x4cbdb8u: goto label_4cbdb8;
        case 0x4cbdbcu: goto label_4cbdbc;
        case 0x4cbdc0u: goto label_4cbdc0;
        case 0x4cbdc4u: goto label_4cbdc4;
        case 0x4cbdc8u: goto label_4cbdc8;
        case 0x4cbdccu: goto label_4cbdcc;
        case 0x4cbdd0u: goto label_4cbdd0;
        case 0x4cbdd4u: goto label_4cbdd4;
        case 0x4cbdd8u: goto label_4cbdd8;
        case 0x4cbddcu: goto label_4cbddc;
        case 0x4cbde0u: goto label_4cbde0;
        case 0x4cbde4u: goto label_4cbde4;
        case 0x4cbde8u: goto label_4cbde8;
        case 0x4cbdecu: goto label_4cbdec;
        case 0x4cbdf0u: goto label_4cbdf0;
        case 0x4cbdf4u: goto label_4cbdf4;
        case 0x4cbdf8u: goto label_4cbdf8;
        case 0x4cbdfcu: goto label_4cbdfc;
        case 0x4cbe00u: goto label_4cbe00;
        case 0x4cbe04u: goto label_4cbe04;
        case 0x4cbe08u: goto label_4cbe08;
        case 0x4cbe0cu: goto label_4cbe0c;
        case 0x4cbe10u: goto label_4cbe10;
        case 0x4cbe14u: goto label_4cbe14;
        case 0x4cbe18u: goto label_4cbe18;
        case 0x4cbe1cu: goto label_4cbe1c;
        case 0x4cbe20u: goto label_4cbe20;
        case 0x4cbe24u: goto label_4cbe24;
        case 0x4cbe28u: goto label_4cbe28;
        case 0x4cbe2cu: goto label_4cbe2c;
        case 0x4cbe30u: goto label_4cbe30;
        case 0x4cbe34u: goto label_4cbe34;
        case 0x4cbe38u: goto label_4cbe38;
        case 0x4cbe3cu: goto label_4cbe3c;
        case 0x4cbe40u: goto label_4cbe40;
        case 0x4cbe44u: goto label_4cbe44;
        case 0x4cbe48u: goto label_4cbe48;
        case 0x4cbe4cu: goto label_4cbe4c;
        case 0x4cbe50u: goto label_4cbe50;
        case 0x4cbe54u: goto label_4cbe54;
        case 0x4cbe58u: goto label_4cbe58;
        case 0x4cbe5cu: goto label_4cbe5c;
        case 0x4cbe60u: goto label_4cbe60;
        case 0x4cbe64u: goto label_4cbe64;
        case 0x4cbe68u: goto label_4cbe68;
        case 0x4cbe6cu: goto label_4cbe6c;
        case 0x4cbe70u: goto label_4cbe70;
        case 0x4cbe74u: goto label_4cbe74;
        case 0x4cbe78u: goto label_4cbe78;
        case 0x4cbe7cu: goto label_4cbe7c;
        case 0x4cbe80u: goto label_4cbe80;
        case 0x4cbe84u: goto label_4cbe84;
        case 0x4cbe88u: goto label_4cbe88;
        case 0x4cbe8cu: goto label_4cbe8c;
        case 0x4cbe90u: goto label_4cbe90;
        case 0x4cbe94u: goto label_4cbe94;
        case 0x4cbe98u: goto label_4cbe98;
        case 0x4cbe9cu: goto label_4cbe9c;
        case 0x4cbea0u: goto label_4cbea0;
        case 0x4cbea4u: goto label_4cbea4;
        case 0x4cbea8u: goto label_4cbea8;
        case 0x4cbeacu: goto label_4cbeac;
        case 0x4cbeb0u: goto label_4cbeb0;
        case 0x4cbeb4u: goto label_4cbeb4;
        case 0x4cbeb8u: goto label_4cbeb8;
        case 0x4cbebcu: goto label_4cbebc;
        case 0x4cbec0u: goto label_4cbec0;
        case 0x4cbec4u: goto label_4cbec4;
        case 0x4cbec8u: goto label_4cbec8;
        case 0x4cbeccu: goto label_4cbecc;
        default: break;
    }

    ctx->pc = 0x4cbc40u;

label_4cbc40:
    // 0x4cbc40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cbc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4cbc44:
    // 0x4cbc44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4cbc48:
    // 0x4cbc48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cbc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4cbc4c:
    // 0x4cbc4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4cbc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cbc50:
    // 0x4cbc50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cbc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cbc54:
    // 0x4cbc54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cbc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cbc58:
    // 0x4cbc58: 0x8c423da0  lw          $v0, 0x3DA0($v0)
    ctx->pc = 0x4cbc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_4cbc5c:
    // 0x4cbc5c: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x4cbc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4cbc60:
    // 0x4cbc60: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4cbc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4cbc64:
    // 0x4cbc64: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x4cbc64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cbc68:
    // 0x4cbc68: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4cbc68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4cbc6c:
    // 0x4cbc6c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x4cbc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4cbc70:
    // 0x4cbc70: 0xa2230058  sb          $v1, 0x58($s1)
    ctx->pc = 0x4cbc70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 3));
label_4cbc74:
    // 0x4cbc74: 0xc04cc04  jal         func_133010
label_4cbc78:
    if (ctx->pc == 0x4CBC78u) {
        ctx->pc = 0x4CBC78u;
            // 0x4cbc78: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4CBC7Cu;
        goto label_4cbc7c;
    }
    ctx->pc = 0x4CBC74u;
    SET_GPR_U32(ctx, 31, 0x4CBC7Cu);
    ctx->pc = 0x4CBC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBC74u;
            // 0x4cbc78: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBC7Cu; }
        if (ctx->pc != 0x4CBC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBC7Cu; }
        if (ctx->pc != 0x4CBC7Cu) { return; }
    }
    ctx->pc = 0x4CBC7Cu;
label_4cbc7c:
    // 0x4cbc7c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x4cbc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4cbc80:
    // 0x4cbc80: 0xc04c720  jal         func_131C80
label_4cbc84:
    if (ctx->pc == 0x4CBC84u) {
        ctx->pc = 0x4CBC84u;
            // 0x4cbc84: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4CBC88u;
        goto label_4cbc88;
    }
    ctx->pc = 0x4CBC80u;
    SET_GPR_U32(ctx, 31, 0x4CBC88u);
    ctx->pc = 0x4CBC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBC80u;
            // 0x4cbc84: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBC88u; }
        if (ctx->pc != 0x4CBC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBC88u; }
        if (ctx->pc != 0x4CBC88u) { return; }
    }
    ctx->pc = 0x4CBC88u;
label_4cbc88:
    // 0x4cbc88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cbc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cbc8c:
    // 0x4cbc8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cbc8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cbc90:
    // 0x4cbc90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cbc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cbc94:
    // 0x4cbc94: 0x3e00008  jr          $ra
label_4cbc98:
    if (ctx->pc == 0x4CBC98u) {
        ctx->pc = 0x4CBC98u;
            // 0x4cbc98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CBC9Cu;
        goto label_4cbc9c;
    }
    ctx->pc = 0x4CBC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CBC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBC94u;
            // 0x4cbc98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CBC9Cu;
label_4cbc9c:
    // 0x4cbc9c: 0x0  nop
    ctx->pc = 0x4cbc9cu;
    // NOP
label_4cbca0:
    // 0x4cbca0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x4cbca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_4cbca4:
    // 0x4cbca4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4cbca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4cbca8:
    // 0x4cbca8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4cbca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4cbcac:
    // 0x4cbcac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4cbcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4cbcb0:
    // 0x4cbcb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4cbcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4cbcb4:
    // 0x4cbcb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4cbcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4cbcb8:
    // 0x4cbcb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4cbcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4cbcbc:
    // 0x4cbcbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4cbcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4cbcc0:
    // 0x4cbcc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4cbcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4cbcc4:
    // 0x4cbcc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cbcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cbcc8:
    // 0x4cbcc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cbcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cbccc:
    // 0x4cbccc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4cbcccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4cbcd0:
    // 0x4cbcd0: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4cbcd4:
    if (ctx->pc == 0x4CBCD4u) {
        ctx->pc = 0x4CBCD4u;
            // 0x4cbcd4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CBCD8u;
        goto label_4cbcd8;
    }
    ctx->pc = 0x4CBCD0u;
    {
        const bool branch_taken_0x4cbcd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4CBCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBCD0u;
            // 0x4cbcd4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbcd0) {
            ctx->pc = 0x4CBD20u;
            goto label_4cbd20;
        }
    }
    ctx->pc = 0x4CBCD8u;
label_4cbcd8:
    // 0x4cbcd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4cbcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cbcdc:
    // 0x4cbcdc: 0x50a30070  beql        $a1, $v1, . + 4 + (0x70 << 2)
label_4cbce0:
    if (ctx->pc == 0x4CBCE0u) {
        ctx->pc = 0x4CBCE0u;
            // 0x4cbce0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x4CBCE4u;
        goto label_4cbce4;
    }
    ctx->pc = 0x4CBCDCu;
    {
        const bool branch_taken_0x4cbcdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cbcdc) {
            ctx->pc = 0x4CBCE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBCDCu;
            // 0x4cbce0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CBEA0u;
            goto label_4cbea0;
        }
    }
    ctx->pc = 0x4CBCE4u;
label_4cbce4:
    // 0x4cbce4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4cbce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cbce8:
    // 0x4cbce8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4cbcec:
    if (ctx->pc == 0x4CBCECu) {
        ctx->pc = 0x4CBCF0u;
        goto label_4cbcf0;
    }
    ctx->pc = 0x4CBCE8u;
    {
        const bool branch_taken_0x4cbce8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cbce8) {
            ctx->pc = 0x4CBCF8u;
            goto label_4cbcf8;
        }
    }
    ctx->pc = 0x4CBCF0u;
label_4cbcf0:
    // 0x4cbcf0: 0x1000006a  b           . + 4 + (0x6A << 2)
label_4cbcf4:
    if (ctx->pc == 0x4CBCF4u) {
        ctx->pc = 0x4CBCF8u;
        goto label_4cbcf8;
    }
    ctx->pc = 0x4CBCF0u;
    {
        const bool branch_taken_0x4cbcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cbcf0) {
            ctx->pc = 0x4CBE9Cu;
            goto label_4cbe9c;
        }
    }
    ctx->pc = 0x4CBCF8u;
label_4cbcf8:
    // 0x4cbcf8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4cbcfc:
    // 0x4cbcfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cbcfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cbd00:
    // 0x4cbd00: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4cbd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4cbd04:
    // 0x4cbd04: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4cbd04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4cbd08:
    // 0x4cbd08: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4cbd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4cbd0c:
    // 0x4cbd0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4cbd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4cbd10:
    // 0x4cbd10: 0x320f809  jalr        $t9
label_4cbd14:
    if (ctx->pc == 0x4CBD14u) {
        ctx->pc = 0x4CBD14u;
            // 0x4cbd14: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4CBD18u;
        goto label_4cbd18;
    }
    ctx->pc = 0x4CBD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CBD18u);
        ctx->pc = 0x4CBD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBD10u;
            // 0x4cbd14: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CBD18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CBD18u; }
            if (ctx->pc != 0x4CBD18u) { return; }
        }
        }
    }
    ctx->pc = 0x4CBD18u;
label_4cbd18:
    // 0x4cbd18: 0x10000060  b           . + 4 + (0x60 << 2)
label_4cbd1c:
    if (ctx->pc == 0x4CBD1Cu) {
        ctx->pc = 0x4CBD20u;
        goto label_4cbd20;
    }
    ctx->pc = 0x4CBD18u;
    {
        const bool branch_taken_0x4cbd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cbd18) {
            ctx->pc = 0x4CBE9Cu;
            goto label_4cbe9c;
        }
    }
    ctx->pc = 0x4CBD20u;
label_4cbd20:
    // 0x4cbd20: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cbd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4cbd24:
    // 0x4cbd24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4cbd24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cbd28:
    // 0x4cbd28: 0x8c51e378  lw          $s1, -0x1C88($v0)
    ctx->pc = 0x4cbd28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_4cbd2c:
    // 0x4cbd2c: 0x26500084  addiu       $s0, $s2, 0x84
    ctx->pc = 0x4cbd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
label_4cbd30:
    // 0x4cbd30: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4cbd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4cbd34:
    // 0x4cbd34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cbd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cbd38:
    // 0x4cbd38: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x4cbd38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4cbd3c:
    // 0x4cbd3c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4cbd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4cbd40:
    // 0x4cbd40: 0x8cb40130  lw          $s4, 0x130($a1)
    ctx->pc = 0x4cbd40u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4cbd44:
    // 0x4cbd44: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x4cbd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4cbd48:
    // 0x4cbd48: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x4cbd48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_4cbd4c:
    // 0x4cbd4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cbd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4cbd50:
    // 0x4cbd50: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4cbd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4cbd54:
    // 0x4cbd54: 0x8c55e370  lw          $s5, -0x1C90($v0)
    ctx->pc = 0x4cbd54u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4cbd58:
    // 0x4cbd58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4cbd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4cbd5c:
    // 0x4cbd5c: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x4cbd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_4cbd60:
    // 0x4cbd60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4cbd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cbd64:
    // 0x4cbd64: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4cbd64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4cbd68:
    // 0x4cbd68: 0xc04e4a4  jal         func_139290
label_4cbd6c:
    if (ctx->pc == 0x4CBD6Cu) {
        ctx->pc = 0x4CBD6Cu;
            // 0x4cbd6c: 0x24730010  addiu       $s3, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x4CBD70u;
        goto label_4cbd70;
    }
    ctx->pc = 0x4CBD68u;
    SET_GPR_U32(ctx, 31, 0x4CBD70u);
    ctx->pc = 0x4CBD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBD68u;
            // 0x4cbd6c: 0x24730010  addiu       $s3, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBD70u; }
        if (ctx->pc != 0x4CBD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBD70u; }
        if (ctx->pc != 0x4CBD70u) { return; }
    }
    ctx->pc = 0x4CBD70u;
label_4cbd70:
    // 0x4cbd70: 0xc04e738  jal         func_139CE0
label_4cbd74:
    if (ctx->pc == 0x4CBD74u) {
        ctx->pc = 0x4CBD74u;
            // 0x4cbd74: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x4CBD78u;
        goto label_4cbd78;
    }
    ctx->pc = 0x4CBD70u;
    SET_GPR_U32(ctx, 31, 0x4CBD78u);
    ctx->pc = 0x4CBD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBD70u;
            // 0x4cbd74: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBD78u; }
        if (ctx->pc != 0x4CBD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBD78u; }
        if (ctx->pc != 0x4CBD78u) { return; }
    }
    ctx->pc = 0x4CBD78u;
label_4cbd78:
    // 0x4cbd78: 0x8e440074  lw          $a0, 0x74($s2)
    ctx->pc = 0x4cbd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_4cbd7c:
    // 0x4cbd7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4cbd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cbd80:
    // 0x4cbd80: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x4cbd80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cbd84:
    // 0x4cbd84: 0x92440058  lbu         $a0, 0x58($s2)
    ctx->pc = 0x4cbd84u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
label_4cbd88:
    // 0x4cbd88: 0x14830044  bne         $a0, $v1, . + 4 + (0x44 << 2)
label_4cbd8c:
    if (ctx->pc == 0x4CBD8Cu) {
        ctx->pc = 0x4CBD90u;
        goto label_4cbd90;
    }
    ctx->pc = 0x4CBD88u;
    {
        const bool branch_taken_0x4cbd88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4cbd88) {
            ctx->pc = 0x4CBE9Cu;
            goto label_4cbe9c;
        }
    }
    ctx->pc = 0x4CBD90u;
label_4cbd90:
    // 0x4cbd90: 0xc10d100  jal         func_434400
label_4cbd94:
    if (ctx->pc == 0x4CBD94u) {
        ctx->pc = 0x4CBD98u;
        goto label_4cbd98;
    }
    ctx->pc = 0x4CBD90u;
    SET_GPR_U32(ctx, 31, 0x4CBD98u);
    ctx->pc = 0x434400u;
    if (runtime->hasFunction(0x434400u)) {
        auto targetFn = runtime->lookupFunction(0x434400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBD98u; }
        if (ctx->pc != 0x4CBD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00434400_0x434400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBD98u; }
        if (ctx->pc != 0x4CBD98u) { return; }
    }
    ctx->pc = 0x4CBD98u;
label_4cbd98:
    // 0x4cbd98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4cbd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cbd9c:
    // 0x4cbd9c: 0xc0f8178  jal         func_3E05E0
label_4cbda0:
    if (ctx->pc == 0x4CBDA0u) {
        ctx->pc = 0x4CBDA0u;
            // 0x4cbda0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CBDA4u;
        goto label_4cbda4;
    }
    ctx->pc = 0x4CBD9Cu;
    SET_GPR_U32(ctx, 31, 0x4CBDA4u);
    ctx->pc = 0x4CBDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBD9Cu;
            // 0x4cbda0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBDA4u; }
        if (ctx->pc != 0x4CBDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBDA4u; }
        if (ctx->pc != 0x4CBDA4u) { return; }
    }
    ctx->pc = 0x4CBDA4u;
label_4cbda4:
    // 0x4cbda4: 0xc132fc8  jal         func_4CBF20
label_4cbda8:
    if (ctx->pc == 0x4CBDA8u) {
        ctx->pc = 0x4CBDA8u;
            // 0x4cbda8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CBDACu;
        goto label_4cbdac;
    }
    ctx->pc = 0x4CBDA4u;
    SET_GPR_U32(ctx, 31, 0x4CBDACu);
    ctx->pc = 0x4CBDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBDA4u;
            // 0x4cbda8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CBF20u;
    if (runtime->hasFunction(0x4CBF20u)) {
        auto targetFn = runtime->lookupFunction(0x4CBF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBDACu; }
        if (ctx->pc != 0x4CBDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CBF20_0x4cbf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBDACu; }
        if (ctx->pc != 0x4CBDACu) { return; }
    }
    ctx->pc = 0x4CBDACu;
label_4cbdac:
    // 0x4cbdac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4cbdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cbdb0:
    // 0x4cbdb0: 0x2831804  sllv        $v1, $v1, $s4
    ctx->pc = 0x4cbdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_4cbdb4:
    // 0x4cbdb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cbdb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4cbdb8:
    // 0x4cbdb8: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
label_4cbdbc:
    if (ctx->pc == 0x4CBDBCu) {
        ctx->pc = 0x4CBDC0u;
        goto label_4cbdc0;
    }
    ctx->pc = 0x4CBDB8u;
    {
        const bool branch_taken_0x4cbdb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cbdb8) {
            ctx->pc = 0x4CBE9Cu;
            goto label_4cbe9c;
        }
    }
    ctx->pc = 0x4CBDC0u;
label_4cbdc0:
    // 0x4cbdc0: 0xc0d1c14  jal         func_347050
label_4cbdc4:
    if (ctx->pc == 0x4CBDC4u) {
        ctx->pc = 0x4CBDC4u;
            // 0x4cbdc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CBDC8u;
        goto label_4cbdc8;
    }
    ctx->pc = 0x4CBDC0u;
    SET_GPR_U32(ctx, 31, 0x4CBDC8u);
    ctx->pc = 0x4CBDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBDC0u;
            // 0x4cbdc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBDC8u; }
        if (ctx->pc != 0x4CBDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBDC8u; }
        if (ctx->pc != 0x4CBDC8u) { return; }
    }
    ctx->pc = 0x4CBDC8u;
label_4cbdc8:
    // 0x4cbdc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4cbdc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cbdcc:
    // 0x4cbdcc: 0xc04f278  jal         func_13C9E0
label_4cbdd0:
    if (ctx->pc == 0x4CBDD0u) {
        ctx->pc = 0x4CBDD0u;
            // 0x4cbdd0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4CBDD4u;
        goto label_4cbdd4;
    }
    ctx->pc = 0x4CBDCCu;
    SET_GPR_U32(ctx, 31, 0x4CBDD4u);
    ctx->pc = 0x4CBDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBDCCu;
            // 0x4cbdd0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBDD4u; }
        if (ctx->pc != 0x4CBDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBDD4u; }
        if (ctx->pc != 0x4CBDD4u) { return; }
    }
    ctx->pc = 0x4CBDD4u;
label_4cbdd4:
    // 0x4cbdd4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4cbdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4cbdd8:
    // 0x4cbdd8: 0xc04f2b8  jal         func_13CAE0
label_4cbddc:
    if (ctx->pc == 0x4CBDDCu) {
        ctx->pc = 0x4CBDDCu;
            // 0x4cbddc: 0x24057fff  addiu       $a1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->pc = 0x4CBDE0u;
        goto label_4cbde0;
    }
    ctx->pc = 0x4CBDD8u;
    SET_GPR_U32(ctx, 31, 0x4CBDE0u);
    ctx->pc = 0x4CBDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBDD8u;
            // 0x4cbddc: 0x24057fff  addiu       $a1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBDE0u; }
        if (ctx->pc != 0x4CBDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBDE0u; }
        if (ctx->pc != 0x4CBDE0u) { return; }
    }
    ctx->pc = 0x4CBDE0u;
label_4cbde0:
    // 0x4cbde0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4cbde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4cbde4:
    // 0x4cbde4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x4cbde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4cbde8:
    // 0x4cbde8: 0xc04cd60  jal         func_133580
label_4cbdec:
    if (ctx->pc == 0x4CBDECu) {
        ctx->pc = 0x4CBDECu;
            // 0x4cbdec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CBDF0u;
        goto label_4cbdf0;
    }
    ctx->pc = 0x4CBDE8u;
    SET_GPR_U32(ctx, 31, 0x4CBDF0u);
    ctx->pc = 0x4CBDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBDE8u;
            // 0x4cbdec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBDF0u; }
        if (ctx->pc != 0x4CBDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBDF0u; }
        if (ctx->pc != 0x4CBDF0u) { return; }
    }
    ctx->pc = 0x4CBDF0u;
label_4cbdf0:
    // 0x4cbdf0: 0xc0d1c10  jal         func_347040
label_4cbdf4:
    if (ctx->pc == 0x4CBDF4u) {
        ctx->pc = 0x4CBDF4u;
            // 0x4cbdf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CBDF8u;
        goto label_4cbdf8;
    }
    ctx->pc = 0x4CBDF0u;
    SET_GPR_U32(ctx, 31, 0x4CBDF8u);
    ctx->pc = 0x4CBDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBDF0u;
            // 0x4cbdf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBDF8u; }
        if (ctx->pc != 0x4CBDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBDF8u; }
        if (ctx->pc != 0x4CBDF8u) { return; }
    }
    ctx->pc = 0x4CBDF8u;
label_4cbdf8:
    // 0x4cbdf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4cbdf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cbdfc:
    // 0x4cbdfc: 0xc04ce80  jal         func_133A00
label_4cbe00:
    if (ctx->pc == 0x4CBE00u) {
        ctx->pc = 0x4CBE00u;
            // 0x4cbe00: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4CBE04u;
        goto label_4cbe04;
    }
    ctx->pc = 0x4CBDFCu;
    SET_GPR_U32(ctx, 31, 0x4CBE04u);
    ctx->pc = 0x4CBE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBDFCu;
            // 0x4cbe00: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBE04u; }
        if (ctx->pc != 0x4CBE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBE04u; }
        if (ctx->pc != 0x4CBE04u) { return; }
    }
    ctx->pc = 0x4CBE04u;
label_4cbe04:
    // 0x4cbe04: 0xc0d4108  jal         func_350420
label_4cbe08:
    if (ctx->pc == 0x4CBE08u) {
        ctx->pc = 0x4CBE0Cu;
        goto label_4cbe0c;
    }
    ctx->pc = 0x4CBE04u;
    SET_GPR_U32(ctx, 31, 0x4CBE0Cu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBE0Cu; }
        if (ctx->pc != 0x4CBE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBE0Cu; }
        if (ctx->pc != 0x4CBE0Cu) { return; }
    }
    ctx->pc = 0x4CBE0Cu;
label_4cbe0c:
    // 0x4cbe0c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4cbe0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cbe10:
    // 0x4cbe10: 0xc0d4104  jal         func_350410
label_4cbe14:
    if (ctx->pc == 0x4CBE14u) {
        ctx->pc = 0x4CBE14u;
            // 0x4cbe14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CBE18u;
        goto label_4cbe18;
    }
    ctx->pc = 0x4CBE10u;
    SET_GPR_U32(ctx, 31, 0x4CBE18u);
    ctx->pc = 0x4CBE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBE10u;
            // 0x4cbe14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBE18u; }
        if (ctx->pc != 0x4CBE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBE18u; }
        if (ctx->pc != 0x4CBE18u) { return; }
    }
    ctx->pc = 0x4CBE18u;
label_4cbe18:
    // 0x4cbe18: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4cbe18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cbe1c:
    // 0x4cbe1c: 0xc132fc4  jal         func_4CBF10
label_4cbe20:
    if (ctx->pc == 0x4CBE20u) {
        ctx->pc = 0x4CBE20u;
            // 0x4cbe20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CBE24u;
        goto label_4cbe24;
    }
    ctx->pc = 0x4CBE1Cu;
    SET_GPR_U32(ctx, 31, 0x4CBE24u);
    ctx->pc = 0x4CBE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBE1Cu;
            // 0x4cbe20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CBF10u;
    if (runtime->hasFunction(0x4CBF10u)) {
        auto targetFn = runtime->lookupFunction(0x4CBF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBE24u; }
        if (ctx->pc != 0x4CBE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CBF10_0x4cbf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBE24u; }
        if (ctx->pc != 0x4CBE24u) { return; }
    }
    ctx->pc = 0x4CBE24u;
label_4cbe24:
    // 0x4cbe24: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4cbe24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4cbe28:
    // 0x4cbe28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4cbe28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4cbe2c:
    // 0x4cbe2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4cbe2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4cbe30:
    // 0x4cbe30: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x4cbe30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4cbe34:
    // 0x4cbe34: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x4cbe34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_4cbe38:
    // 0x4cbe38: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x4cbe38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4cbe3c:
    // 0x4cbe3c: 0xc0d40ac  jal         func_3502B0
label_4cbe40:
    if (ctx->pc == 0x4CBE40u) {
        ctx->pc = 0x4CBE40u;
            // 0x4cbe40: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CBE44u;
        goto label_4cbe44;
    }
    ctx->pc = 0x4CBE3Cu;
    SET_GPR_U32(ctx, 31, 0x4CBE44u);
    ctx->pc = 0x4CBE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBE3Cu;
            // 0x4cbe40: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBE44u; }
        if (ctx->pc != 0x4CBE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBE44u; }
        if (ctx->pc != 0x4CBE44u) { return; }
    }
    ctx->pc = 0x4CBE44u;
label_4cbe44:
    // 0x4cbe44: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4cbe44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4cbe48:
    // 0x4cbe48: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_4cbe4c:
    if (ctx->pc == 0x4CBE4Cu) {
        ctx->pc = 0x4CBE4Cu;
            // 0x4cbe4c: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4CBE50u;
        goto label_4cbe50;
    }
    ctx->pc = 0x4CBE48u;
    {
        const bool branch_taken_0x4cbe48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBE48u;
            // 0x4cbe4c: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbe48) {
            ctx->pc = 0x4CBE9Cu;
            goto label_4cbe9c;
        }
    }
    ctx->pc = 0x4CBE50u;
label_4cbe50:
    // 0x4cbe50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4cbe50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4cbe54:
    // 0x4cbe54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4cbe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4cbe58:
    // 0x4cbe58: 0xc04cd60  jal         func_133580
label_4cbe5c:
    if (ctx->pc == 0x4CBE5Cu) {
        ctx->pc = 0x4CBE5Cu;
            // 0x4cbe5c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4CBE60u;
        goto label_4cbe60;
    }
    ctx->pc = 0x4CBE58u;
    SET_GPR_U32(ctx, 31, 0x4CBE60u);
    ctx->pc = 0x4CBE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBE58u;
            // 0x4cbe5c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBE60u; }
        if (ctx->pc != 0x4CBE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBE60u; }
        if (ctx->pc != 0x4CBE60u) { return; }
    }
    ctx->pc = 0x4CBE60u;
label_4cbe60:
    // 0x4cbe60: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4cbe60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4cbe64:
    // 0x4cbe64: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4cbe64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4cbe68:
    // 0x4cbe68: 0x320f809  jalr        $t9
label_4cbe6c:
    if (ctx->pc == 0x4CBE6Cu) {
        ctx->pc = 0x4CBE6Cu;
            // 0x4cbe6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CBE70u;
        goto label_4cbe70;
    }
    ctx->pc = 0x4CBE68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CBE70u);
        ctx->pc = 0x4CBE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBE68u;
            // 0x4cbe6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CBE70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CBE70u; }
            if (ctx->pc != 0x4CBE70u) { return; }
        }
        }
    }
    ctx->pc = 0x4CBE70u;
label_4cbe70:
    // 0x4cbe70: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4cbe70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4cbe74:
    // 0x4cbe74: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4cbe74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cbe78:
    // 0x4cbe78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cbe78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cbe7c:
    // 0x4cbe7c: 0xc054fd4  jal         func_153F50
label_4cbe80:
    if (ctx->pc == 0x4CBE80u) {
        ctx->pc = 0x4CBE80u;
            // 0x4cbe80: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CBE84u;
        goto label_4cbe84;
    }
    ctx->pc = 0x4CBE7Cu;
    SET_GPR_U32(ctx, 31, 0x4CBE84u);
    ctx->pc = 0x4CBE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBE7Cu;
            // 0x4cbe80: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBE84u; }
        if (ctx->pc != 0x4CBE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBE84u; }
        if (ctx->pc != 0x4CBE84u) { return; }
    }
    ctx->pc = 0x4CBE84u;
label_4cbe84:
    // 0x4cbe84: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4cbe84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4cbe88:
    // 0x4cbe88: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4cbe88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4cbe8c:
    // 0x4cbe8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4cbe8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cbe90:
    // 0x4cbe90: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4cbe90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4cbe94:
    // 0x4cbe94: 0xc132fb4  jal         func_4CBED0
label_4cbe98:
    if (ctx->pc == 0x4CBE98u) {
        ctx->pc = 0x4CBE98u;
            // 0x4cbe98: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4CBE9Cu;
        goto label_4cbe9c;
    }
    ctx->pc = 0x4CBE94u;
    SET_GPR_U32(ctx, 31, 0x4CBE9Cu);
    ctx->pc = 0x4CBE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBE94u;
            // 0x4cbe98: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CBED0u;
    if (runtime->hasFunction(0x4CBED0u)) {
        auto targetFn = runtime->lookupFunction(0x4CBED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBE9Cu; }
        if (ctx->pc != 0x4CBE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CBED0_0x4cbed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBE9Cu; }
        if (ctx->pc != 0x4CBE9Cu) { return; }
    }
    ctx->pc = 0x4CBE9Cu;
label_4cbe9c:
    // 0x4cbe9c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4cbe9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4cbea0:
    // 0x4cbea0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4cbea0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4cbea4:
    // 0x4cbea4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4cbea4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4cbea8:
    // 0x4cbea8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4cbea8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4cbeac:
    // 0x4cbeac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4cbeacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4cbeb0:
    // 0x4cbeb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4cbeb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4cbeb4:
    // 0x4cbeb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4cbeb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4cbeb8:
    // 0x4cbeb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cbeb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cbebc:
    // 0x4cbebc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cbebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cbec0:
    // 0x4cbec0: 0x3e00008  jr          $ra
label_4cbec4:
    if (ctx->pc == 0x4CBEC4u) {
        ctx->pc = 0x4CBEC4u;
            // 0x4cbec4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x4CBEC8u;
        goto label_4cbec8;
    }
    ctx->pc = 0x4CBEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CBEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBEC0u;
            // 0x4cbec4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CBEC8u;
label_4cbec8:
    // 0x4cbec8: 0x0  nop
    ctx->pc = 0x4cbec8u;
    // NOP
label_4cbecc:
    // 0x4cbecc: 0x0  nop
    ctx->pc = 0x4cbeccu;
    // NOP
}
