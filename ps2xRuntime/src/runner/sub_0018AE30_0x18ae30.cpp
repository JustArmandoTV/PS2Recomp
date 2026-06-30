#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018AE30
// Address: 0x18ae30 - 0x18b040
void sub_0018AE30_0x18ae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AE30_0x18ae30");
#endif

    switch (ctx->pc) {
        case 0x18ae30u: goto label_18ae30;
        case 0x18ae34u: goto label_18ae34;
        case 0x18ae38u: goto label_18ae38;
        case 0x18ae3cu: goto label_18ae3c;
        case 0x18ae40u: goto label_18ae40;
        case 0x18ae44u: goto label_18ae44;
        case 0x18ae48u: goto label_18ae48;
        case 0x18ae4cu: goto label_18ae4c;
        case 0x18ae50u: goto label_18ae50;
        case 0x18ae54u: goto label_18ae54;
        case 0x18ae58u: goto label_18ae58;
        case 0x18ae5cu: goto label_18ae5c;
        case 0x18ae60u: goto label_18ae60;
        case 0x18ae64u: goto label_18ae64;
        case 0x18ae68u: goto label_18ae68;
        case 0x18ae6cu: goto label_18ae6c;
        case 0x18ae70u: goto label_18ae70;
        case 0x18ae74u: goto label_18ae74;
        case 0x18ae78u: goto label_18ae78;
        case 0x18ae7cu: goto label_18ae7c;
        case 0x18ae80u: goto label_18ae80;
        case 0x18ae84u: goto label_18ae84;
        case 0x18ae88u: goto label_18ae88;
        case 0x18ae8cu: goto label_18ae8c;
        case 0x18ae90u: goto label_18ae90;
        case 0x18ae94u: goto label_18ae94;
        case 0x18ae98u: goto label_18ae98;
        case 0x18ae9cu: goto label_18ae9c;
        case 0x18aea0u: goto label_18aea0;
        case 0x18aea4u: goto label_18aea4;
        case 0x18aea8u: goto label_18aea8;
        case 0x18aeacu: goto label_18aeac;
        case 0x18aeb0u: goto label_18aeb0;
        case 0x18aeb4u: goto label_18aeb4;
        case 0x18aeb8u: goto label_18aeb8;
        case 0x18aebcu: goto label_18aebc;
        case 0x18aec0u: goto label_18aec0;
        case 0x18aec4u: goto label_18aec4;
        case 0x18aec8u: goto label_18aec8;
        case 0x18aeccu: goto label_18aecc;
        case 0x18aed0u: goto label_18aed0;
        case 0x18aed4u: goto label_18aed4;
        case 0x18aed8u: goto label_18aed8;
        case 0x18aedcu: goto label_18aedc;
        case 0x18aee0u: goto label_18aee0;
        case 0x18aee4u: goto label_18aee4;
        case 0x18aee8u: goto label_18aee8;
        case 0x18aeecu: goto label_18aeec;
        case 0x18aef0u: goto label_18aef0;
        case 0x18aef4u: goto label_18aef4;
        case 0x18aef8u: goto label_18aef8;
        case 0x18aefcu: goto label_18aefc;
        case 0x18af00u: goto label_18af00;
        case 0x18af04u: goto label_18af04;
        case 0x18af08u: goto label_18af08;
        case 0x18af0cu: goto label_18af0c;
        case 0x18af10u: goto label_18af10;
        case 0x18af14u: goto label_18af14;
        case 0x18af18u: goto label_18af18;
        case 0x18af1cu: goto label_18af1c;
        case 0x18af20u: goto label_18af20;
        case 0x18af24u: goto label_18af24;
        case 0x18af28u: goto label_18af28;
        case 0x18af2cu: goto label_18af2c;
        case 0x18af30u: goto label_18af30;
        case 0x18af34u: goto label_18af34;
        case 0x18af38u: goto label_18af38;
        case 0x18af3cu: goto label_18af3c;
        case 0x18af40u: goto label_18af40;
        case 0x18af44u: goto label_18af44;
        case 0x18af48u: goto label_18af48;
        case 0x18af4cu: goto label_18af4c;
        case 0x18af50u: goto label_18af50;
        case 0x18af54u: goto label_18af54;
        case 0x18af58u: goto label_18af58;
        case 0x18af5cu: goto label_18af5c;
        case 0x18af60u: goto label_18af60;
        case 0x18af64u: goto label_18af64;
        case 0x18af68u: goto label_18af68;
        case 0x18af6cu: goto label_18af6c;
        case 0x18af70u: goto label_18af70;
        case 0x18af74u: goto label_18af74;
        case 0x18af78u: goto label_18af78;
        case 0x18af7cu: goto label_18af7c;
        case 0x18af80u: goto label_18af80;
        case 0x18af84u: goto label_18af84;
        case 0x18af88u: goto label_18af88;
        case 0x18af8cu: goto label_18af8c;
        case 0x18af90u: goto label_18af90;
        case 0x18af94u: goto label_18af94;
        case 0x18af98u: goto label_18af98;
        case 0x18af9cu: goto label_18af9c;
        case 0x18afa0u: goto label_18afa0;
        case 0x18afa4u: goto label_18afa4;
        case 0x18afa8u: goto label_18afa8;
        case 0x18afacu: goto label_18afac;
        case 0x18afb0u: goto label_18afb0;
        case 0x18afb4u: goto label_18afb4;
        case 0x18afb8u: goto label_18afb8;
        case 0x18afbcu: goto label_18afbc;
        case 0x18afc0u: goto label_18afc0;
        case 0x18afc4u: goto label_18afc4;
        case 0x18afc8u: goto label_18afc8;
        case 0x18afccu: goto label_18afcc;
        case 0x18afd0u: goto label_18afd0;
        case 0x18afd4u: goto label_18afd4;
        case 0x18afd8u: goto label_18afd8;
        case 0x18afdcu: goto label_18afdc;
        case 0x18afe0u: goto label_18afe0;
        case 0x18afe4u: goto label_18afe4;
        case 0x18afe8u: goto label_18afe8;
        case 0x18afecu: goto label_18afec;
        case 0x18aff0u: goto label_18aff0;
        case 0x18aff4u: goto label_18aff4;
        case 0x18aff8u: goto label_18aff8;
        case 0x18affcu: goto label_18affc;
        case 0x18b000u: goto label_18b000;
        case 0x18b004u: goto label_18b004;
        case 0x18b008u: goto label_18b008;
        case 0x18b00cu: goto label_18b00c;
        case 0x18b010u: goto label_18b010;
        case 0x18b014u: goto label_18b014;
        case 0x18b018u: goto label_18b018;
        case 0x18b01cu: goto label_18b01c;
        case 0x18b020u: goto label_18b020;
        case 0x18b024u: goto label_18b024;
        case 0x18b028u: goto label_18b028;
        case 0x18b02cu: goto label_18b02c;
        case 0x18b030u: goto label_18b030;
        case 0x18b034u: goto label_18b034;
        case 0x18b038u: goto label_18b038;
        case 0x18b03cu: goto label_18b03c;
        default: break;
    }

    ctx->pc = 0x18ae30u;

label_18ae30:
    // 0x18ae30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18ae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18ae34:
    // 0x18ae34: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x18ae34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_18ae38:
    // 0x18ae38: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18ae38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18ae3c:
    // 0x18ae3c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x18ae3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_18ae40:
    // 0x18ae40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18ae40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18ae44:
    // 0x18ae44: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x18ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_18ae48:
    // 0x18ae48: 0x26530180  addiu       $s3, $s2, 0x180
    ctx->pc = 0x18ae48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_18ae4c:
    // 0x18ae4c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x18ae4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_18ae50:
    // 0x18ae50: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x18ae50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18ae54:
    // 0x18ae54: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x18ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_18ae58:
    // 0x18ae58: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x18ae58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_18ae5c:
    // 0x18ae5c: 0xae600494  sw          $zero, 0x494($s3)
    ctx->pc = 0x18ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1172), GPR_U32(ctx, 0));
label_18ae60:
    // 0x18ae60: 0xae600498  sw          $zero, 0x498($s3)
    ctx->pc = 0x18ae60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1176), GPR_U32(ctx, 0));
label_18ae64:
    // 0x18ae64: 0xae600308  sw          $zero, 0x308($s3)
    ctx->pc = 0x18ae64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 776), GPR_U32(ctx, 0));
label_18ae68:
    // 0x18ae68: 0x1000005d  b           . + 4 + (0x5D << 2)
label_18ae6c:
    if (ctx->pc == 0x18AE6Cu) {
        ctx->pc = 0x18AE6Cu;
            // 0x18ae6c: 0xae60030c  sw          $zero, 0x30C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 780), GPR_U32(ctx, 0));
        ctx->pc = 0x18AE70u;
        goto label_18ae70;
    }
    ctx->pc = 0x18AE68u;
    {
        const bool branch_taken_0x18ae68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE68u;
            // 0x18ae6c: 0xae60030c  sw          $zero, 0x30C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae68) {
            ctx->pc = 0x18AFE0u;
            goto label_18afe0;
        }
    }
    ctx->pc = 0x18AE70u;
label_18ae70:
    // 0x18ae70: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x18ae70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_18ae74:
    // 0x18ae74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18ae74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18ae78:
    // 0x18ae78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18ae78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ae7c:
    // 0x18ae7c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x18ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_18ae80:
    // 0x18ae80: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x18ae80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_18ae84:
    // 0x18ae84: 0x40f809  jalr        $v0
label_18ae88:
    if (ctx->pc == 0x18AE88u) {
        ctx->pc = 0x18AE88u;
            // 0x18ae88: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18AE8Cu;
        goto label_18ae8c;
    }
    ctx->pc = 0x18AE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18AE8Cu);
        ctx->pc = 0x18AE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE84u;
            // 0x18ae88: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18AE8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18AE8Cu; }
            if (ctx->pc != 0x18AE8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18AE8Cu;
label_18ae8c:
    // 0x18ae8c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x18ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18ae90:
    // 0x18ae90: 0x12020027  beq         $s0, $v0, . + 4 + (0x27 << 2)
label_18ae94:
    if (ctx->pc == 0x18AE94u) {
        ctx->pc = 0x18AE94u;
            // 0x18ae94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18AE98u;
        goto label_18ae98;
    }
    ctx->pc = 0x18AE90u;
    {
        const bool branch_taken_0x18ae90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18AE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE90u;
            // 0x18ae94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae90) {
            ctx->pc = 0x18AF30u;
            goto label_18af30;
        }
    }
    ctx->pc = 0x18AE98u;
label_18ae98:
    // 0x18ae98: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x18ae98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_18ae9c:
    // 0x18ae9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18aea0:
    if (ctx->pc == 0x18AEA0u) {
        ctx->pc = 0x18AEA0u;
            // 0x18aea0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x18AEA4u;
        goto label_18aea4;
    }
    ctx->pc = 0x18AE9Cu;
    {
        const bool branch_taken_0x18ae9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE9Cu;
            // 0x18aea0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae9c) {
            ctx->pc = 0x18AEC0u;
            goto label_18aec0;
        }
    }
    ctx->pc = 0x18AEA4u;
label_18aea4:
    // 0x18aea4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18aea8:
    // 0x18aea8: 0x1202002b  beq         $s0, $v0, . + 4 + (0x2B << 2)
label_18aeac:
    if (ctx->pc == 0x18AEACu) {
        ctx->pc = 0x18AEACu;
            // 0x18aeac: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x18AEB0u;
        goto label_18aeb0;
    }
    ctx->pc = 0x18AEA8u;
    {
        const bool branch_taken_0x18aea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18AEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AEA8u;
            // 0x18aeac: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aea8) {
            ctx->pc = 0x18AF58u;
            goto label_18af58;
        }
    }
    ctx->pc = 0x18AEB0u;
label_18aeb0:
    // 0x18aeb0: 0x12020025  beq         $s0, $v0, . + 4 + (0x25 << 2)
label_18aeb4:
    if (ctx->pc == 0x18AEB4u) {
        ctx->pc = 0x18AEB4u;
            // 0x18aeb4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x18AEB8u;
        goto label_18aeb8;
    }
    ctx->pc = 0x18AEB0u;
    {
        const bool branch_taken_0x18aeb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18AEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AEB0u;
            // 0x18aeb4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aeb0) {
            ctx->pc = 0x18AF48u;
            goto label_18af48;
        }
    }
    ctx->pc = 0x18AEB8u;
label_18aeb8:
    // 0x18aeb8: 0x1000002b  b           . + 4 + (0x2B << 2)
label_18aebc:
    if (ctx->pc == 0x18AEBCu) {
        ctx->pc = 0x18AEC0u;
        goto label_18aec0;
    }
    ctx->pc = 0x18AEB8u;
    {
        const bool branch_taken_0x18aeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aeb8) {
            ctx->pc = 0x18AF68u;
            goto label_18af68;
        }
    }
    ctx->pc = 0x18AEC0u;
label_18aec0:
    // 0x18aec0: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_18aec4:
    if (ctx->pc == 0x18AEC4u) {
        ctx->pc = 0x18AEC4u;
            // 0x18aec4: 0x2a020041  slti        $v0, $s0, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->pc = 0x18AEC8u;
        goto label_18aec8;
    }
    ctx->pc = 0x18AEC0u;
    {
        const bool branch_taken_0x18aec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18AEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AEC0u;
            // 0x18aec4: 0x2a020041  slti        $v0, $s0, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aec0) {
            ctx->pc = 0x18AEF8u;
            goto label_18aef8;
        }
    }
    ctx->pc = 0x18AEC8u;
label_18aec8:
    // 0x18aec8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_18aecc:
    if (ctx->pc == 0x18AECCu) {
        ctx->pc = 0x18AECCu;
            // 0x18aecc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x18AED0u;
        goto label_18aed0;
    }
    ctx->pc = 0x18AEC8u;
    {
        const bool branch_taken_0x18aec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AEC8u;
            // 0x18aecc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aec8) {
            ctx->pc = 0x18AEE8u;
            goto label_18aee8;
        }
    }
    ctx->pc = 0x18AED0u;
label_18aed0:
    // 0x18aed0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x18aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_18aed4:
    // 0x18aed4: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
label_18aed8:
    if (ctx->pc == 0x18AED8u) {
        ctx->pc = 0x18AED8u;
            // 0x18aed8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x18AEDCu;
        goto label_18aedc;
    }
    ctx->pc = 0x18AED4u;
    {
        const bool branch_taken_0x18aed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18AED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AED4u;
            // 0x18aed8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aed4) {
            ctx->pc = 0x18AF20u;
            goto label_18af20;
        }
    }
    ctx->pc = 0x18AEDCu;
label_18aedc:
    // 0x18aedc: 0x10000022  b           . + 4 + (0x22 << 2)
label_18aee0:
    if (ctx->pc == 0x18AEE0u) {
        ctx->pc = 0x18AEE4u;
        goto label_18aee4;
    }
    ctx->pc = 0x18AEDCu;
    {
        const bool branch_taken_0x18aedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aedc) {
            ctx->pc = 0x18AF68u;
            goto label_18af68;
        }
    }
    ctx->pc = 0x18AEE4u;
label_18aee4:
    // 0x18aee4: 0x0  nop
    ctx->pc = 0x18aee4u;
    // NOP
label_18aee8:
    // 0x18aee8: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
label_18aeec:
    if (ctx->pc == 0x18AEECu) {
        ctx->pc = 0x18AEECu;
            // 0x18aeec: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x18AEF0u;
        goto label_18aef0;
    }
    ctx->pc = 0x18AEE8u;
    {
        const bool branch_taken_0x18aee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18AEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AEE8u;
            // 0x18aeec: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aee8) {
            ctx->pc = 0x18AF10u;
            goto label_18af10;
        }
    }
    ctx->pc = 0x18AEF0u;
label_18aef0:
    // 0x18aef0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_18aef4:
    if (ctx->pc == 0x18AEF4u) {
        ctx->pc = 0x18AEF8u;
        goto label_18aef8;
    }
    ctx->pc = 0x18AEF0u;
    {
        const bool branch_taken_0x18aef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aef0) {
            ctx->pc = 0x18AF68u;
            goto label_18af68;
        }
    }
    ctx->pc = 0x18AEF8u;
label_18aef8:
    // 0x18aef8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x18aef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18aefc:
    // 0x18aefc: 0xc062c70  jal         func_18B1C0
label_18af00:
    if (ctx->pc == 0x18AF00u) {
        ctx->pc = 0x18AF00u;
            // 0x18af00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18AF04u;
        goto label_18af04;
    }
    ctx->pc = 0x18AEFCu;
    SET_GPR_U32(ctx, 31, 0x18AF04u);
    ctx->pc = 0x18AF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AEFCu;
            // 0x18af00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B1C0u;
    if (runtime->hasFunction(0x18B1C0u)) {
        auto targetFn = runtime->lookupFunction(0x18B1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF04u; }
        if (ctx->pc != 0x18AF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B1C0_0x18b1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF04u; }
        if (ctx->pc != 0x18AF04u) { return; }
    }
    ctx->pc = 0x18AF04u;
label_18af04:
    // 0x18af04: 0x10000018  b           . + 4 + (0x18 << 2)
label_18af08:
    if (ctx->pc == 0x18AF08u) {
        ctx->pc = 0x18AF08u;
            // 0x18af08: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18AF0Cu;
        goto label_18af0c;
    }
    ctx->pc = 0x18AF04u;
    {
        const bool branch_taken_0x18af04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF04u;
            // 0x18af08: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af04) {
            ctx->pc = 0x18AF68u;
            goto label_18af68;
        }
    }
    ctx->pc = 0x18AF0Cu;
label_18af0c:
    // 0x18af0c: 0x0  nop
    ctx->pc = 0x18af0cu;
    // NOP
label_18af10:
    // 0x18af10: 0xc062e66  jal         func_18B998
label_18af14:
    if (ctx->pc == 0x18AF14u) {
        ctx->pc = 0x18AF14u;
            // 0x18af14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18AF18u;
        goto label_18af18;
    }
    ctx->pc = 0x18AF10u;
    SET_GPR_U32(ctx, 31, 0x18AF18u);
    ctx->pc = 0x18AF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF10u;
            // 0x18af14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B998u;
    if (runtime->hasFunction(0x18B998u)) {
        auto targetFn = runtime->lookupFunction(0x18B998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF18u; }
        if (ctx->pc != 0x18AF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B998_0x18b998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF18u; }
        if (ctx->pc != 0x18AF18u) { return; }
    }
    ctx->pc = 0x18AF18u;
label_18af18:
    // 0x18af18: 0x10000013  b           . + 4 + (0x13 << 2)
label_18af1c:
    if (ctx->pc == 0x18AF1Cu) {
        ctx->pc = 0x18AF1Cu;
            // 0x18af1c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18AF20u;
        goto label_18af20;
    }
    ctx->pc = 0x18AF18u;
    {
        const bool branch_taken_0x18af18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF18u;
            // 0x18af1c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af18) {
            ctx->pc = 0x18AF68u;
            goto label_18af68;
        }
    }
    ctx->pc = 0x18AF20u;
label_18af20:
    // 0x18af20: 0xc062eae  jal         func_18BAB8
label_18af24:
    if (ctx->pc == 0x18AF24u) {
        ctx->pc = 0x18AF24u;
            // 0x18af24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18AF28u;
        goto label_18af28;
    }
    ctx->pc = 0x18AF20u;
    SET_GPR_U32(ctx, 31, 0x18AF28u);
    ctx->pc = 0x18AF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF20u;
            // 0x18af24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BAB8u;
    if (runtime->hasFunction(0x18BAB8u)) {
        auto targetFn = runtime->lookupFunction(0x18BAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF28u; }
        if (ctx->pc != 0x18AF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BAB8_0x18bab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF28u; }
        if (ctx->pc != 0x18AF28u) { return; }
    }
    ctx->pc = 0x18AF28u;
label_18af28:
    // 0x18af28: 0x1000000f  b           . + 4 + (0xF << 2)
label_18af2c:
    if (ctx->pc == 0x18AF2Cu) {
        ctx->pc = 0x18AF2Cu;
            // 0x18af2c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18AF30u;
        goto label_18af30;
    }
    ctx->pc = 0x18AF28u;
    {
        const bool branch_taken_0x18af28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF28u;
            // 0x18af2c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af28) {
            ctx->pc = 0x18AF68u;
            goto label_18af68;
        }
    }
    ctx->pc = 0x18AF30u;
label_18af30:
    // 0x18af30: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x18af30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18af34:
    // 0x18af34: 0xc062fa2  jal         func_18BE88
label_18af38:
    if (ctx->pc == 0x18AF38u) {
        ctx->pc = 0x18AF38u;
            // 0x18af38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18AF3Cu;
        goto label_18af3c;
    }
    ctx->pc = 0x18AF34u;
    SET_GPR_U32(ctx, 31, 0x18AF3Cu);
    ctx->pc = 0x18AF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF34u;
            // 0x18af38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BE88u;
    if (runtime->hasFunction(0x18BE88u)) {
        auto targetFn = runtime->lookupFunction(0x18BE88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF3Cu; }
        if (ctx->pc != 0x18AF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BE88_0x18be88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF3Cu; }
        if (ctx->pc != 0x18AF3Cu) { return; }
    }
    ctx->pc = 0x18AF3Cu;
label_18af3c:
    // 0x18af3c: 0x1000000a  b           . + 4 + (0xA << 2)
label_18af40:
    if (ctx->pc == 0x18AF40u) {
        ctx->pc = 0x18AF40u;
            // 0x18af40: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18AF44u;
        goto label_18af44;
    }
    ctx->pc = 0x18AF3Cu;
    {
        const bool branch_taken_0x18af3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF3Cu;
            // 0x18af40: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af3c) {
            ctx->pc = 0x18AF68u;
            goto label_18af68;
        }
    }
    ctx->pc = 0x18AF44u;
label_18af44:
    // 0x18af44: 0x0  nop
    ctx->pc = 0x18af44u;
    // NOP
label_18af48:
    // 0x18af48: 0xc063b9a  jal         func_18EE68
label_18af4c:
    if (ctx->pc == 0x18AF4Cu) {
        ctx->pc = 0x18AF4Cu;
            // 0x18af4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18AF50u;
        goto label_18af50;
    }
    ctx->pc = 0x18AF48u;
    SET_GPR_U32(ctx, 31, 0x18AF50u);
    ctx->pc = 0x18AF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF48u;
            // 0x18af4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EE68u;
    if (runtime->hasFunction(0x18EE68u)) {
        auto targetFn = runtime->lookupFunction(0x18EE68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF50u; }
        if (ctx->pc != 0x18AF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018EE68_0x18ee68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF50u; }
        if (ctx->pc != 0x18AF50u) { return; }
    }
    ctx->pc = 0x18AF50u;
label_18af50:
    // 0x18af50: 0x10000005  b           . + 4 + (0x5 << 2)
label_18af54:
    if (ctx->pc == 0x18AF54u) {
        ctx->pc = 0x18AF54u;
            // 0x18af54: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18AF58u;
        goto label_18af58;
    }
    ctx->pc = 0x18AF50u;
    {
        const bool branch_taken_0x18af50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF50u;
            // 0x18af54: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af50) {
            ctx->pc = 0x18AF68u;
            goto label_18af68;
        }
    }
    ctx->pc = 0x18AF58u;
label_18af58:
    // 0x18af58: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x18af58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18af5c:
    // 0x18af5c: 0xc063cf4  jal         func_18F3D0
label_18af60:
    if (ctx->pc == 0x18AF60u) {
        ctx->pc = 0x18AF60u;
            // 0x18af60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18AF64u;
        goto label_18af64;
    }
    ctx->pc = 0x18AF5Cu;
    SET_GPR_U32(ctx, 31, 0x18AF64u);
    ctx->pc = 0x18AF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF5Cu;
            // 0x18af60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F3D0u;
    if (runtime->hasFunction(0x18F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x18F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF64u; }
        if (ctx->pc != 0x18AF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F3D0_0x18f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF64u; }
        if (ctx->pc != 0x18AF64u) { return; }
    }
    ctx->pc = 0x18AF64u;
label_18af64:
    // 0x18af64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18af64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18af68:
    // 0x18af68: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_18af6c:
    if (ctx->pc == 0x18AF6Cu) {
        ctx->pc = 0x18AF6Cu;
            // 0x18af6c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x18AF70u;
        goto label_18af70;
    }
    ctx->pc = 0x18AF68u;
    {
        const bool branch_taken_0x18af68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18af68) {
            ctx->pc = 0x18AF6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF68u;
            // 0x18af6c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18AF90u;
            goto label_18af90;
        }
    }
    ctx->pc = 0x18AF70u;
label_18af70:
    // 0x18af70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18af70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18af74:
    // 0x18af74: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18af74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18af78:
    // 0x18af78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18af78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18af7c:
    // 0x18af7c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x18af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_18af80:
    // 0x18af80: 0x40f809  jalr        $v0
label_18af84:
    if (ctx->pc == 0x18AF84u) {
        ctx->pc = 0x18AF84u;
            // 0x18af84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x18AF88u;
        goto label_18af88;
    }
    ctx->pc = 0x18AF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18AF88u);
        ctx->pc = 0x18AF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF80u;
            // 0x18af84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18AF88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18AF88u; }
            if (ctx->pc != 0x18AF88u) { return; }
        }
        }
    }
    ctx->pc = 0x18AF88u;
label_18af88:
    // 0x18af88: 0x1000001b  b           . + 4 + (0x1B << 2)
label_18af8c:
    if (ctx->pc == 0x18AF8Cu) {
        ctx->pc = 0x18AF8Cu;
            // 0x18af8c: 0x8e660494  lw          $a2, 0x494($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
        ctx->pc = 0x18AF90u;
        goto label_18af90;
    }
    ctx->pc = 0x18AF88u;
    {
        const bool branch_taken_0x18af88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF88u;
            // 0x18af8c: 0x8e660494  lw          $a2, 0x494($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af88) {
            ctx->pc = 0x18AFF8u;
            goto label_18aff8;
        }
    }
    ctx->pc = 0x18AF90u;
label_18af90:
    // 0x18af90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18af90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18af94:
    // 0x18af94: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18af94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18af98:
    // 0x18af98: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x18af98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18af9c:
    // 0x18af9c: 0xc061c20  jal         func_187080
label_18afa0:
    if (ctx->pc == 0x18AFA0u) {
        ctx->pc = 0x18AFA0u;
            // 0x18afa0: 0x652823  subu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x18AFA4u;
        goto label_18afa4;
    }
    ctx->pc = 0x18AF9Cu;
    SET_GPR_U32(ctx, 31, 0x18AFA4u);
    ctx->pc = 0x18AFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF9Cu;
            // 0x18afa0: 0x652823  subu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFA4u; }
        if (ctx->pc != 0x18AFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFA4u; }
        if (ctx->pc != 0x18AFA4u) { return; }
    }
    ctx->pc = 0x18AFA4u;
label_18afa4:
    // 0x18afa4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18afa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18afa8:
    // 0x18afa8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18afa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18afac:
    // 0x18afac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18afacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18afb0:
    // 0x18afb0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18afb4:
    // 0x18afb4: 0x40f809  jalr        $v0
label_18afb8:
    if (ctx->pc == 0x18AFB8u) {
        ctx->pc = 0x18AFB8u;
            // 0x18afb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18AFBCu;
        goto label_18afbc;
    }
    ctx->pc = 0x18AFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18AFBCu);
        ctx->pc = 0x18AFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFB4u;
            // 0x18afb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18AFBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18AFBCu; }
            if (ctx->pc != 0x18AFBCu) { return; }
        }
        }
    }
    ctx->pc = 0x18AFBCu;
label_18afbc:
    // 0x18afbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18afbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18afc0:
    // 0x18afc0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18afc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18afc4:
    // 0x18afc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18afc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18afc8:
    // 0x18afc8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x18afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_18afcc:
    // 0x18afcc: 0x40f809  jalr        $v0
label_18afd0:
    if (ctx->pc == 0x18AFD0u) {
        ctx->pc = 0x18AFD0u;
            // 0x18afd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x18AFD4u;
        goto label_18afd4;
    }
    ctx->pc = 0x18AFCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18AFD4u);
        ctx->pc = 0x18AFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFCCu;
            // 0x18afd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18AFD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18AFD4u; }
            if (ctx->pc != 0x18AFD4u) { return; }
        }
        }
    }
    ctx->pc = 0x18AFD4u;
label_18afd4:
    // 0x18afd4: 0x8e660494  lw          $a2, 0x494($s3)
    ctx->pc = 0x18afd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
label_18afd8:
    // 0x18afd8: 0x54c00008  bnel        $a2, $zero, . + 4 + (0x8 << 2)
label_18afdc:
    if (ctx->pc == 0x18AFDCu) {
        ctx->pc = 0x18AFDCu;
            // 0x18afdc: 0x8e63049c  lw          $v1, 0x49C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
        ctx->pc = 0x18AFE0u;
        goto label_18afe0;
    }
    ctx->pc = 0x18AFD8u;
    {
        const bool branch_taken_0x18afd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x18afd8) {
            ctx->pc = 0x18AFDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFD8u;
            // 0x18afdc: 0x8e63049c  lw          $v1, 0x49C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18AFFCu;
            goto label_18affc;
        }
    }
    ctx->pc = 0x18AFE0u;
label_18afe0:
    // 0x18afe0: 0xc0656ca  jal         func_195B28
label_18afe4:
    if (ctx->pc == 0x18AFE4u) {
        ctx->pc = 0x18AFE4u;
            // 0x18afe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18AFE8u;
        goto label_18afe8;
    }
    ctx->pc = 0x18AFE0u;
    SET_GPR_U32(ctx, 31, 0x18AFE8u);
    ctx->pc = 0x18AFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFE0u;
            // 0x18afe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195B28u;
    if (runtime->hasFunction(0x195B28u)) {
        auto targetFn = runtime->lookupFunction(0x195B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFE8u; }
        if (ctx->pc != 0x18AFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195B28_0x195b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFE8u; }
        if (ctx->pc != 0x18AFE8u) { return; }
    }
    ctx->pc = 0x18AFE8u;
label_18afe8:
    // 0x18afe8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18afe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18afec:
    // 0x18afec: 0x5600ffa0  bnel        $s0, $zero, . + 4 + (-0x60 << 2)
label_18aff0:
    if (ctx->pc == 0x18AFF0u) {
        ctx->pc = 0x18AFF0u;
            // 0x18aff0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x18AFF4u;
        goto label_18aff4;
    }
    ctx->pc = 0x18AFECu;
    {
        const bool branch_taken_0x18afec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18afec) {
            ctx->pc = 0x18AFF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFECu;
            // 0x18aff0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18AE70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18ae70;
        }
    }
    ctx->pc = 0x18AFF4u;
label_18aff4:
    // 0x18aff4: 0x8e660494  lw          $a2, 0x494($s3)
    ctx->pc = 0x18aff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
label_18aff8:
    // 0x18aff8: 0x8e63049c  lw          $v1, 0x49C($s3)
    ctx->pc = 0x18aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
label_18affc:
    // 0x18affc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x18affcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_18b000:
    // 0x18b000: 0x8e6404a0  lw          $a0, 0x4A0($s3)
    ctx->pc = 0x18b000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1184)));
label_18b004:
    // 0x18b004: 0x6100a  movz        $v0, $zero, $a2
    ctx->pc = 0x18b004u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_18b008:
    // 0x18b008: 0x8e650498  lw          $a1, 0x498($s3)
    ctx->pc = 0x18b008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1176)));
label_18b00c:
    // 0x18b00c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_18b010:
    // 0x18b010: 0xae63049c  sw          $v1, 0x49C($s3)
    ctx->pc = 0x18b010u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1180), GPR_U32(ctx, 3));
label_18b014:
    // 0x18b014: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18b014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_18b018:
    // 0x18b018: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x18b018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18b01c:
    // 0x18b01c: 0xae6404a0  sw          $a0, 0x4A0($s3)
    ctx->pc = 0x18b01cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1184), GPR_U32(ctx, 4));
label_18b020:
    // 0x18b020: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x18b020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_18b024:
    // 0x18b024: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x18b024u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18b028:
    // 0x18b028: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x18b028u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_18b02c:
    // 0x18b02c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x18b02cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18b030:
    // 0x18b030: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x18b030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_18b034:
    // 0x18b034: 0x3e00008  jr          $ra
label_18b038:
    if (ctx->pc == 0x18B038u) {
        ctx->pc = 0x18B038u;
            // 0x18b038: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x18B03Cu;
        goto label_18b03c;
    }
    ctx->pc = 0x18B034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B034u;
            // 0x18b038: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B03Cu;
label_18b03c:
    // 0x18b03c: 0x0  nop
    ctx->pc = 0x18b03cu;
    // NOP
}
