#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DBDA0
// Address: 0x3dbda0 - 0x3dbeb0
void sub_003DBDA0_0x3dbda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBDA0_0x3dbda0");
#endif

    switch (ctx->pc) {
        case 0x3dbda0u: goto label_3dbda0;
        case 0x3dbda4u: goto label_3dbda4;
        case 0x3dbda8u: goto label_3dbda8;
        case 0x3dbdacu: goto label_3dbdac;
        case 0x3dbdb0u: goto label_3dbdb0;
        case 0x3dbdb4u: goto label_3dbdb4;
        case 0x3dbdb8u: goto label_3dbdb8;
        case 0x3dbdbcu: goto label_3dbdbc;
        case 0x3dbdc0u: goto label_3dbdc0;
        case 0x3dbdc4u: goto label_3dbdc4;
        case 0x3dbdc8u: goto label_3dbdc8;
        case 0x3dbdccu: goto label_3dbdcc;
        case 0x3dbdd0u: goto label_3dbdd0;
        case 0x3dbdd4u: goto label_3dbdd4;
        case 0x3dbdd8u: goto label_3dbdd8;
        case 0x3dbddcu: goto label_3dbddc;
        case 0x3dbde0u: goto label_3dbde0;
        case 0x3dbde4u: goto label_3dbde4;
        case 0x3dbde8u: goto label_3dbde8;
        case 0x3dbdecu: goto label_3dbdec;
        case 0x3dbdf0u: goto label_3dbdf0;
        case 0x3dbdf4u: goto label_3dbdf4;
        case 0x3dbdf8u: goto label_3dbdf8;
        case 0x3dbdfcu: goto label_3dbdfc;
        case 0x3dbe00u: goto label_3dbe00;
        case 0x3dbe04u: goto label_3dbe04;
        case 0x3dbe08u: goto label_3dbe08;
        case 0x3dbe0cu: goto label_3dbe0c;
        case 0x3dbe10u: goto label_3dbe10;
        case 0x3dbe14u: goto label_3dbe14;
        case 0x3dbe18u: goto label_3dbe18;
        case 0x3dbe1cu: goto label_3dbe1c;
        case 0x3dbe20u: goto label_3dbe20;
        case 0x3dbe24u: goto label_3dbe24;
        case 0x3dbe28u: goto label_3dbe28;
        case 0x3dbe2cu: goto label_3dbe2c;
        case 0x3dbe30u: goto label_3dbe30;
        case 0x3dbe34u: goto label_3dbe34;
        case 0x3dbe38u: goto label_3dbe38;
        case 0x3dbe3cu: goto label_3dbe3c;
        case 0x3dbe40u: goto label_3dbe40;
        case 0x3dbe44u: goto label_3dbe44;
        case 0x3dbe48u: goto label_3dbe48;
        case 0x3dbe4cu: goto label_3dbe4c;
        case 0x3dbe50u: goto label_3dbe50;
        case 0x3dbe54u: goto label_3dbe54;
        case 0x3dbe58u: goto label_3dbe58;
        case 0x3dbe5cu: goto label_3dbe5c;
        case 0x3dbe60u: goto label_3dbe60;
        case 0x3dbe64u: goto label_3dbe64;
        case 0x3dbe68u: goto label_3dbe68;
        case 0x3dbe6cu: goto label_3dbe6c;
        case 0x3dbe70u: goto label_3dbe70;
        case 0x3dbe74u: goto label_3dbe74;
        case 0x3dbe78u: goto label_3dbe78;
        case 0x3dbe7cu: goto label_3dbe7c;
        case 0x3dbe80u: goto label_3dbe80;
        case 0x3dbe84u: goto label_3dbe84;
        case 0x3dbe88u: goto label_3dbe88;
        case 0x3dbe8cu: goto label_3dbe8c;
        case 0x3dbe90u: goto label_3dbe90;
        case 0x3dbe94u: goto label_3dbe94;
        case 0x3dbe98u: goto label_3dbe98;
        case 0x3dbe9cu: goto label_3dbe9c;
        case 0x3dbea0u: goto label_3dbea0;
        case 0x3dbea4u: goto label_3dbea4;
        case 0x3dbea8u: goto label_3dbea8;
        case 0x3dbeacu: goto label_3dbeac;
        default: break;
    }

    ctx->pc = 0x3dbda0u;

label_3dbda0:
    // 0x3dbda0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3dbda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3dbda4:
    // 0x3dbda4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3dbda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3dbda8:
    // 0x3dbda8: 0x3e00008  jr          $ra
label_3dbdac:
    if (ctx->pc == 0x3DBDACu) {
        ctx->pc = 0x3DBDACu;
            // 0x3dbdac: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3DBDB0u;
        goto label_3dbdb0;
    }
    ctx->pc = 0x3DBDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBDA8u;
            // 0x3dbdac: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DBDB0u;
label_3dbdb0:
    // 0x3dbdb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3dbdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3dbdb4:
    // 0x3dbdb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3dbdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dbdb8:
    // 0x3dbdb8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3dbdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3dbdbc:
    // 0x3dbdbc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3dbdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3dbdc0:
    // 0x3dbdc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3dbdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3dbdc4:
    // 0x3dbdc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dbdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3dbdc8:
    // 0x3dbdc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dbdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3dbdcc:
    // 0x3dbdcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dbdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dbdd0:
    // 0x3dbdd0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3dbdd0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3dbdd4:
    // 0x3dbdd4: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_3dbdd8:
    if (ctx->pc == 0x3DBDD8u) {
        ctx->pc = 0x3DBDD8u;
            // 0x3dbdd8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DBDDCu;
        goto label_3dbddc;
    }
    ctx->pc = 0x3DBDD4u;
    {
        const bool branch_taken_0x3dbdd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DBDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBDD4u;
            // 0x3dbdd8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbdd4) {
            ctx->pc = 0x3DBE08u;
            goto label_3dbe08;
        }
    }
    ctx->pc = 0x3DBDDCu;
label_3dbddc:
    // 0x3dbddc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3dbddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dbde0:
    // 0x3dbde0: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_3dbde4:
    if (ctx->pc == 0x3DBDE4u) {
        ctx->pc = 0x3DBDE4u;
            // 0x3dbde4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3DBDE8u;
        goto label_3dbde8;
    }
    ctx->pc = 0x3DBDE0u;
    {
        const bool branch_taken_0x3dbde0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dbde0) {
            ctx->pc = 0x3DBDE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBDE0u;
            // 0x3dbde4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DBDFCu;
            goto label_3dbdfc;
        }
    }
    ctx->pc = 0x3DBDE8u;
label_3dbde8:
    // 0x3dbde8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dbde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dbdec:
    // 0x3dbdec: 0x10a30026  beq         $a1, $v1, . + 4 + (0x26 << 2)
label_3dbdf0:
    if (ctx->pc == 0x3DBDF0u) {
        ctx->pc = 0x3DBDF4u;
        goto label_3dbdf4;
    }
    ctx->pc = 0x3DBDECu;
    {
        const bool branch_taken_0x3dbdec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dbdec) {
            ctx->pc = 0x3DBE88u;
            goto label_3dbe88;
        }
    }
    ctx->pc = 0x3DBDF4u;
label_3dbdf4:
    // 0x3dbdf4: 0x10000024  b           . + 4 + (0x24 << 2)
label_3dbdf8:
    if (ctx->pc == 0x3DBDF8u) {
        ctx->pc = 0x3DBDFCu;
        goto label_3dbdfc;
    }
    ctx->pc = 0x3DBDF4u;
    {
        const bool branch_taken_0x3dbdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbdf4) {
            ctx->pc = 0x3DBE88u;
            goto label_3dbe88;
        }
    }
    ctx->pc = 0x3DBDFCu;
label_3dbdfc:
    // 0x3dbdfc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3dbdfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3dbe00:
    // 0x3dbe00: 0x320f809  jalr        $t9
label_3dbe04:
    if (ctx->pc == 0x3DBE04u) {
        ctx->pc = 0x3DBE08u;
        goto label_3dbe08;
    }
    ctx->pc = 0x3DBE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DBE08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DBE08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DBE08u; }
            if (ctx->pc != 0x3DBE08u) { return; }
        }
        }
    }
    ctx->pc = 0x3DBE08u;
label_3dbe08:
    // 0x3dbe08: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x3dbe08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_3dbe0c:
    // 0x3dbe0c: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_3dbe10:
    if (ctx->pc == 0x3DBE10u) {
        ctx->pc = 0x3DBE14u;
        goto label_3dbe14;
    }
    ctx->pc = 0x3DBE0Cu;
    {
        const bool branch_taken_0x3dbe0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbe0c) {
            ctx->pc = 0x3DBE88u;
            goto label_3dbe88;
        }
    }
    ctx->pc = 0x3DBE14u;
label_3dbe14:
    // 0x3dbe14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3dbe14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dbe18:
    // 0x3dbe18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3dbe18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dbe1c:
    // 0x3dbe1c: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x3dbe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_3dbe20:
    // 0x3dbe20: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3dbe20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3dbe24:
    // 0x3dbe24: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x3dbe24u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3dbe28:
    // 0x3dbe28: 0xc0f7110  jal         func_3DC440
label_3dbe2c:
    if (ctx->pc == 0x3DBE2Cu) {
        ctx->pc = 0x3DBE2Cu;
            // 0x3dbe2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DBE30u;
        goto label_3dbe30;
    }
    ctx->pc = 0x3DBE28u;
    SET_GPR_U32(ctx, 31, 0x3DBE30u);
    ctx->pc = 0x3DBE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBE28u;
            // 0x3dbe2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DC440u;
    if (runtime->hasFunction(0x3DC440u)) {
        auto targetFn = runtime->lookupFunction(0x3DC440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBE30u; }
        if (ctx->pc != 0x3DBE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DC440_0x3dc440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBE30u; }
        if (ctx->pc != 0x3DBE30u) { return; }
    }
    ctx->pc = 0x3DBE30u;
label_3dbe30:
    // 0x3dbe30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dbe30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dbe34:
    // 0x3dbe34: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_3dbe38:
    if (ctx->pc == 0x3DBE38u) {
        ctx->pc = 0x3DBE3Cu;
        goto label_3dbe3c;
    }
    ctx->pc = 0x3DBE34u;
    {
        const bool branch_taken_0x3dbe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dbe34) {
            ctx->pc = 0x3DBE68u;
            goto label_3dbe68;
        }
    }
    ctx->pc = 0x3DBE3Cu;
label_3dbe3c:
    // 0x3dbe3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3dbe40:
    if (ctx->pc == 0x3DBE40u) {
        ctx->pc = 0x3DBE44u;
        goto label_3dbe44;
    }
    ctx->pc = 0x3DBE3Cu;
    {
        const bool branch_taken_0x3dbe3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbe3c) {
            ctx->pc = 0x3DBE50u;
            goto label_3dbe50;
        }
    }
    ctx->pc = 0x3DBE44u;
label_3dbe44:
    // 0x3dbe44: 0x1000000c  b           . + 4 + (0xC << 2)
label_3dbe48:
    if (ctx->pc == 0x3DBE48u) {
        ctx->pc = 0x3DBE4Cu;
        goto label_3dbe4c;
    }
    ctx->pc = 0x3DBE44u;
    {
        const bool branch_taken_0x3dbe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbe44) {
            ctx->pc = 0x3DBE78u;
            goto label_3dbe78;
        }
    }
    ctx->pc = 0x3DBE4Cu;
label_3dbe4c:
    // 0x3dbe4c: 0x0  nop
    ctx->pc = 0x3dbe4cu;
    // NOP
label_3dbe50:
    // 0x3dbe50: 0xc0f7368  jal         func_3DCDA0
label_3dbe54:
    if (ctx->pc == 0x3DBE54u) {
        ctx->pc = 0x3DBE54u;
            // 0x3dbe54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DBE58u;
        goto label_3dbe58;
    }
    ctx->pc = 0x3DBE50u;
    SET_GPR_U32(ctx, 31, 0x3DBE58u);
    ctx->pc = 0x3DBE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBE50u;
            // 0x3dbe54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DCDA0u;
    if (runtime->hasFunction(0x3DCDA0u)) {
        auto targetFn = runtime->lookupFunction(0x3DCDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBE58u; }
        if (ctx->pc != 0x3DBE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DCDA0_0x3dcda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBE58u; }
        if (ctx->pc != 0x3DBE58u) { return; }
    }
    ctx->pc = 0x3DBE58u;
label_3dbe58:
    // 0x3dbe58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dbe58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dbe5c:
    // 0x3dbe5c: 0xc0f710c  jal         func_3DC430
label_3dbe60:
    if (ctx->pc == 0x3DBE60u) {
        ctx->pc = 0x3DBE60u;
            // 0x3dbe60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DBE64u;
        goto label_3dbe64;
    }
    ctx->pc = 0x3DBE5Cu;
    SET_GPR_U32(ctx, 31, 0x3DBE64u);
    ctx->pc = 0x3DBE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBE5Cu;
            // 0x3dbe60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DC430u;
    if (runtime->hasFunction(0x3DC430u)) {
        auto targetFn = runtime->lookupFunction(0x3DC430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBE64u; }
        if (ctx->pc != 0x3DBE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DC430_0x3dc430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBE64u; }
        if (ctx->pc != 0x3DBE64u) { return; }
    }
    ctx->pc = 0x3DBE64u;
label_3dbe64:
    // 0x3dbe64: 0x0  nop
    ctx->pc = 0x3dbe64u;
    // NOP
label_3dbe68:
    // 0x3dbe68: 0xc0f6fac  jal         func_3DBEB0
label_3dbe6c:
    if (ctx->pc == 0x3DBE6Cu) {
        ctx->pc = 0x3DBE6Cu;
            // 0x3dbe6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DBE70u;
        goto label_3dbe70;
    }
    ctx->pc = 0x3DBE68u;
    SET_GPR_U32(ctx, 31, 0x3DBE70u);
    ctx->pc = 0x3DBE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBE68u;
            // 0x3dbe6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DBEB0u;
    if (runtime->hasFunction(0x3DBEB0u)) {
        auto targetFn = runtime->lookupFunction(0x3DBEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBE70u; }
        if (ctx->pc != 0x3DBE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DBEB0_0x3dbeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBE70u; }
        if (ctx->pc != 0x3DBE70u) { return; }
    }
    ctx->pc = 0x3DBE70u;
label_3dbe70:
    // 0x3dbe70: 0xc0f74e0  jal         func_3DD380
label_3dbe74:
    if (ctx->pc == 0x3DBE74u) {
        ctx->pc = 0x3DBE74u;
            // 0x3dbe74: 0x268400a4  addiu       $a0, $s4, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 164));
        ctx->pc = 0x3DBE78u;
        goto label_3dbe78;
    }
    ctx->pc = 0x3DBE70u;
    SET_GPR_U32(ctx, 31, 0x3DBE78u);
    ctx->pc = 0x3DBE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBE70u;
            // 0x3dbe74: 0x268400a4  addiu       $a0, $s4, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DD380u;
    if (runtime->hasFunction(0x3DD380u)) {
        auto targetFn = runtime->lookupFunction(0x3DD380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBE78u; }
        if (ctx->pc != 0x3DBE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DD380_0x3dd380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBE78u; }
        if (ctx->pc != 0x3DBE78u) { return; }
    }
    ctx->pc = 0x3DBE78u;
label_3dbe78:
    // 0x3dbe78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3dbe78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3dbe7c:
    // 0x3dbe7c: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x3dbe7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3dbe80:
    // 0x3dbe80: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_3dbe84:
    if (ctx->pc == 0x3DBE84u) {
        ctx->pc = 0x3DBE84u;
            // 0x3dbe84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3DBE88u;
        goto label_3dbe88;
    }
    ctx->pc = 0x3DBE80u;
    {
        const bool branch_taken_0x3dbe80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DBE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBE80u;
            // 0x3dbe84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbe80) {
            ctx->pc = 0x3DBE1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3dbe1c;
        }
    }
    ctx->pc = 0x3DBE88u;
label_3dbe88:
    // 0x3dbe88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3dbe88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3dbe8c:
    // 0x3dbe8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3dbe8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dbe90:
    // 0x3dbe90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3dbe90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dbe94:
    // 0x3dbe94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dbe94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dbe98:
    // 0x3dbe98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dbe98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dbe9c:
    // 0x3dbe9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dbe9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dbea0:
    // 0x3dbea0: 0x3e00008  jr          $ra
label_3dbea4:
    if (ctx->pc == 0x3DBEA4u) {
        ctx->pc = 0x3DBEA4u;
            // 0x3dbea4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3DBEA8u;
        goto label_3dbea8;
    }
    ctx->pc = 0x3DBEA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBEA0u;
            // 0x3dbea4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DBEA8u;
label_3dbea8:
    // 0x3dbea8: 0x0  nop
    ctx->pc = 0x3dbea8u;
    // NOP
label_3dbeac:
    // 0x3dbeac: 0x0  nop
    ctx->pc = 0x3dbeacu;
    // NOP
}
