#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029AF20
// Address: 0x29af20 - 0x29b0f0
void sub_0029AF20_0x29af20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AF20_0x29af20");
#endif

    switch (ctx->pc) {
        case 0x29af20u: goto label_29af20;
        case 0x29af24u: goto label_29af24;
        case 0x29af28u: goto label_29af28;
        case 0x29af2cu: goto label_29af2c;
        case 0x29af30u: goto label_29af30;
        case 0x29af34u: goto label_29af34;
        case 0x29af38u: goto label_29af38;
        case 0x29af3cu: goto label_29af3c;
        case 0x29af40u: goto label_29af40;
        case 0x29af44u: goto label_29af44;
        case 0x29af48u: goto label_29af48;
        case 0x29af4cu: goto label_29af4c;
        case 0x29af50u: goto label_29af50;
        case 0x29af54u: goto label_29af54;
        case 0x29af58u: goto label_29af58;
        case 0x29af5cu: goto label_29af5c;
        case 0x29af60u: goto label_29af60;
        case 0x29af64u: goto label_29af64;
        case 0x29af68u: goto label_29af68;
        case 0x29af6cu: goto label_29af6c;
        case 0x29af70u: goto label_29af70;
        case 0x29af74u: goto label_29af74;
        case 0x29af78u: goto label_29af78;
        case 0x29af7cu: goto label_29af7c;
        case 0x29af80u: goto label_29af80;
        case 0x29af84u: goto label_29af84;
        case 0x29af88u: goto label_29af88;
        case 0x29af8cu: goto label_29af8c;
        case 0x29af90u: goto label_29af90;
        case 0x29af94u: goto label_29af94;
        case 0x29af98u: goto label_29af98;
        case 0x29af9cu: goto label_29af9c;
        case 0x29afa0u: goto label_29afa0;
        case 0x29afa4u: goto label_29afa4;
        case 0x29afa8u: goto label_29afa8;
        case 0x29afacu: goto label_29afac;
        case 0x29afb0u: goto label_29afb0;
        case 0x29afb4u: goto label_29afb4;
        case 0x29afb8u: goto label_29afb8;
        case 0x29afbcu: goto label_29afbc;
        case 0x29afc0u: goto label_29afc0;
        case 0x29afc4u: goto label_29afc4;
        case 0x29afc8u: goto label_29afc8;
        case 0x29afccu: goto label_29afcc;
        case 0x29afd0u: goto label_29afd0;
        case 0x29afd4u: goto label_29afd4;
        case 0x29afd8u: goto label_29afd8;
        case 0x29afdcu: goto label_29afdc;
        case 0x29afe0u: goto label_29afe0;
        case 0x29afe4u: goto label_29afe4;
        case 0x29afe8u: goto label_29afe8;
        case 0x29afecu: goto label_29afec;
        case 0x29aff0u: goto label_29aff0;
        case 0x29aff4u: goto label_29aff4;
        case 0x29aff8u: goto label_29aff8;
        case 0x29affcu: goto label_29affc;
        case 0x29b000u: goto label_29b000;
        case 0x29b004u: goto label_29b004;
        case 0x29b008u: goto label_29b008;
        case 0x29b00cu: goto label_29b00c;
        case 0x29b010u: goto label_29b010;
        case 0x29b014u: goto label_29b014;
        case 0x29b018u: goto label_29b018;
        case 0x29b01cu: goto label_29b01c;
        case 0x29b020u: goto label_29b020;
        case 0x29b024u: goto label_29b024;
        case 0x29b028u: goto label_29b028;
        case 0x29b02cu: goto label_29b02c;
        case 0x29b030u: goto label_29b030;
        case 0x29b034u: goto label_29b034;
        case 0x29b038u: goto label_29b038;
        case 0x29b03cu: goto label_29b03c;
        case 0x29b040u: goto label_29b040;
        case 0x29b044u: goto label_29b044;
        case 0x29b048u: goto label_29b048;
        case 0x29b04cu: goto label_29b04c;
        case 0x29b050u: goto label_29b050;
        case 0x29b054u: goto label_29b054;
        case 0x29b058u: goto label_29b058;
        case 0x29b05cu: goto label_29b05c;
        case 0x29b060u: goto label_29b060;
        case 0x29b064u: goto label_29b064;
        case 0x29b068u: goto label_29b068;
        case 0x29b06cu: goto label_29b06c;
        case 0x29b070u: goto label_29b070;
        case 0x29b074u: goto label_29b074;
        case 0x29b078u: goto label_29b078;
        case 0x29b07cu: goto label_29b07c;
        case 0x29b080u: goto label_29b080;
        case 0x29b084u: goto label_29b084;
        case 0x29b088u: goto label_29b088;
        case 0x29b08cu: goto label_29b08c;
        case 0x29b090u: goto label_29b090;
        case 0x29b094u: goto label_29b094;
        case 0x29b098u: goto label_29b098;
        case 0x29b09cu: goto label_29b09c;
        case 0x29b0a0u: goto label_29b0a0;
        case 0x29b0a4u: goto label_29b0a4;
        case 0x29b0a8u: goto label_29b0a8;
        case 0x29b0acu: goto label_29b0ac;
        case 0x29b0b0u: goto label_29b0b0;
        case 0x29b0b4u: goto label_29b0b4;
        case 0x29b0b8u: goto label_29b0b8;
        case 0x29b0bcu: goto label_29b0bc;
        case 0x29b0c0u: goto label_29b0c0;
        case 0x29b0c4u: goto label_29b0c4;
        case 0x29b0c8u: goto label_29b0c8;
        case 0x29b0ccu: goto label_29b0cc;
        case 0x29b0d0u: goto label_29b0d0;
        case 0x29b0d4u: goto label_29b0d4;
        case 0x29b0d8u: goto label_29b0d8;
        case 0x29b0dcu: goto label_29b0dc;
        case 0x29b0e0u: goto label_29b0e0;
        case 0x29b0e4u: goto label_29b0e4;
        case 0x29b0e8u: goto label_29b0e8;
        case 0x29b0ecu: goto label_29b0ec;
        default: break;
    }

    ctx->pc = 0x29af20u;

label_29af20:
    // 0x29af20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29af20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_29af24:
    // 0x29af24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29af24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_29af28:
    // 0x29af28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29af28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_29af2c:
    // 0x29af2c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x29af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_29af30:
    // 0x29af30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29af30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29af34:
    // 0x29af34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29af34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29af38:
    // 0x29af38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29af38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29af3c:
    // 0x29af3c: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x29af3cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_29af40:
    // 0x29af40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29af40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29af44:
    // 0x29af44: 0x2652ea78  addiu       $s2, $s2, -0x1588
    ctx->pc = 0x29af44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961784));
label_29af48:
    // 0x29af48: 0x8c70ea78  lw          $s0, -0x1588($v1)
    ctx->pc = 0x29af48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961784)));
label_29af4c:
    // 0x29af4c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x29af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_29af50:
    // 0x29af50: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x29af50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_29af54:
    // 0x29af54: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_29af58:
    if (ctx->pc == 0x29AF58u) {
        ctx->pc = 0x29AF58u;
            // 0x29af58: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->pc = 0x29AF5Cu;
        goto label_29af5c;
    }
    ctx->pc = 0x29AF54u;
    {
        const bool branch_taken_0x29af54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AF54u;
            // 0x29af58: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af54) {
            ctx->pc = 0x29B000u;
            goto label_29b000;
        }
    }
    ctx->pc = 0x29AF5Cu;
label_29af5c:
    // 0x29af5c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29af60:
    // 0x29af60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29af60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29af64:
    // 0x29af64: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_29af68:
    if (ctx->pc == 0x29AF68u) {
        ctx->pc = 0x29AF6Cu;
        goto label_29af6c;
    }
    ctx->pc = 0x29AF64u;
    {
        const bool branch_taken_0x29af64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29af64) {
            ctx->pc = 0x29AFF0u;
            goto label_29aff0;
        }
    }
    ctx->pc = 0x29AF6Cu;
label_29af6c:
    // 0x29af6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29af70:
    // 0x29af70: 0x40f809  jalr        $v0
label_29af74:
    if (ctx->pc == 0x29AF74u) {
        ctx->pc = 0x29AF78u;
        goto label_29af78;
    }
    ctx->pc = 0x29AF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29AF78u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29AF78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29AF78u; }
            if (ctx->pc != 0x29AF78u) { return; }
        }
        }
    }
    ctx->pc = 0x29AF78u;
label_29af78:
    // 0x29af78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_29af7c:
    if (ctx->pc == 0x29AF7Cu) {
        ctx->pc = 0x29AF80u;
        goto label_29af80;
    }
    ctx->pc = 0x29AF78u;
    {
        const bool branch_taken_0x29af78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29af78) {
            ctx->pc = 0x29AF98u;
            goto label_29af98;
        }
    }
    ctx->pc = 0x29AF80u;
label_29af80:
    // 0x29af80: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29af80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29af84:
    // 0x29af84: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x29af84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29af88:
    // 0x29af88: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29af88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_29af8c:
    // 0x29af8c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_29af90:
    if (ctx->pc == 0x29AF90u) {
        ctx->pc = 0x29AF90u;
            // 0x29af90: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x29AF94u;
        goto label_29af94;
    }
    ctx->pc = 0x29AF8Cu;
    {
        const bool branch_taken_0x29af8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AF8Cu;
            // 0x29af90: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af8c) {
            ctx->pc = 0x29AFF8u;
            goto label_29aff8;
        }
    }
    ctx->pc = 0x29AF94u;
label_29af94:
    // 0x29af94: 0x0  nop
    ctx->pc = 0x29af94u;
    // NOP
label_29af98:
    // 0x29af98: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29af98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_29af9c:
    // 0x29af9c: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x29af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_29afa0:
    // 0x29afa0: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x29afa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_29afa4:
    // 0x29afa4: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x29afa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_29afa8:
    // 0x29afa8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_29afac:
    if (ctx->pc == 0x29AFACu) {
        ctx->pc = 0x29AFB0u;
        goto label_29afb0;
    }
    ctx->pc = 0x29AFA8u;
    {
        const bool branch_taken_0x29afa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29afa8) {
            ctx->pc = 0x29AFC0u;
            goto label_29afc0;
        }
    }
    ctx->pc = 0x29AFB0u;
label_29afb0:
    // 0x29afb0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x29afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_29afb4:
    // 0x29afb4: 0xc0a728c  jal         func_29CA30
label_29afb8:
    if (ctx->pc == 0x29AFB8u) {
        ctx->pc = 0x29AFB8u;
            // 0x29afb8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x29AFBCu;
        goto label_29afbc;
    }
    ctx->pc = 0x29AFB4u;
    SET_GPR_U32(ctx, 31, 0x29AFBCu);
    ctx->pc = 0x29AFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AFB4u;
            // 0x29afb8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AFBCu; }
        if (ctx->pc != 0x29AFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AFBCu; }
        if (ctx->pc != 0x29AFBCu) { return; }
    }
    ctx->pc = 0x29AFBCu;
label_29afbc:
    // 0x29afbc: 0x0  nop
    ctx->pc = 0x29afbcu;
    // NOP
label_29afc0:
    // 0x29afc0: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x29afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_29afc4:
    // 0x29afc4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x29afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_29afc8:
    // 0x29afc8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x29afc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29afcc:
    // 0x29afcc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29afccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_29afd0:
    // 0x29afd0: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x29afd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_29afd4:
    // 0x29afd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29afd8:
    // 0x29afd8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x29afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_29afdc:
    // 0x29afdc: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x29afdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29afe0:
    // 0x29afe0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_29afe4:
    // 0x29afe4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29afe8:
    // 0x29afe8: 0x10000003  b           . + 4 + (0x3 << 2)
label_29afec:
    if (ctx->pc == 0x29AFECu) {
        ctx->pc = 0x29AFECu;
            // 0x29afec: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x29AFF0u;
        goto label_29aff0;
    }
    ctx->pc = 0x29AFE8u;
    {
        const bool branch_taken_0x29afe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AFE8u;
            // 0x29afec: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29afe8) {
            ctx->pc = 0x29AFF8u;
            goto label_29aff8;
        }
    }
    ctx->pc = 0x29AFF0u;
label_29aff0:
    // 0x29aff0: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x29aff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29aff4:
    // 0x29aff4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x29aff4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29aff8:
    // 0x29aff8: 0x5600ffd9  bnel        $s0, $zero, . + 4 + (-0x27 << 2)
label_29affc:
    if (ctx->pc == 0x29AFFCu) {
        ctx->pc = 0x29AFFCu;
            // 0x29affc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x29B000u;
        goto label_29b000;
    }
    ctx->pc = 0x29AFF8u;
    {
        const bool branch_taken_0x29aff8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x29aff8) {
            ctx->pc = 0x29AFFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29AFF8u;
            // 0x29affc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29AF60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29af60;
        }
    }
    ctx->pc = 0x29B000u;
label_29b000:
    // 0x29b000: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x29b000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_29b004:
    // 0x29b004: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_29b008:
    if (ctx->pc == 0x29B008u) {
        ctx->pc = 0x29B00Cu;
        goto label_29b00c;
    }
    ctx->pc = 0x29B004u;
    {
        const bool branch_taken_0x29b004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b004) {
            ctx->pc = 0x29B098u;
            goto label_29b098;
        }
    }
    ctx->pc = 0x29B00Cu;
label_29b00c:
    // 0x29b00c: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x29b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_29b010:
    // 0x29b010: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x29b010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_29b014:
    // 0x29b014: 0x620001c  bltz        $s1, . + 4 + (0x1C << 2)
label_29b018:
    if (ctx->pc == 0x29B018u) {
        ctx->pc = 0x29B01Cu;
        goto label_29b01c;
    }
    ctx->pc = 0x29B014u;
    {
        const bool branch_taken_0x29b014 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x29b014) {
            ctx->pc = 0x29B088u;
            goto label_29b088;
        }
    }
    ctx->pc = 0x29B01Cu;
label_29b01c:
    // 0x29b01c: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x29b01cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_29b020:
    // 0x29b020: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29b020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_29b024:
    // 0x29b024: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29b024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_29b028:
    // 0x29b028: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x29b028u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29b02c:
    // 0x29b02c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x29b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_29b030:
    // 0x29b030: 0x40f809  jalr        $v0
label_29b034:
    if (ctx->pc == 0x29B034u) {
        ctx->pc = 0x29B038u;
        goto label_29b038;
    }
    ctx->pc = 0x29B030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29B038u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29B038u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29B038u; }
            if (ctx->pc != 0x29B038u) { return; }
        }
        }
    }
    ctx->pc = 0x29B038u;
label_29b038:
    // 0x29b038: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_29b03c:
    if (ctx->pc == 0x29B03Cu) {
        ctx->pc = 0x29B040u;
        goto label_29b040;
    }
    ctx->pc = 0x29B038u;
    {
        const bool branch_taken_0x29b038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b038) {
            ctx->pc = 0x29B078u;
            goto label_29b078;
        }
    }
    ctx->pc = 0x29B040u;
label_29b040:
    // 0x29b040: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x29b040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_29b044:
    // 0x29b044: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29b044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_29b048:
    // 0x29b048: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x29b048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_29b04c:
    // 0x29b04c: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x29b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_29b050:
    // 0x29b050: 0x26720004  addiu       $s2, $s3, 0x4
    ctx->pc = 0x29b050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_29b054:
    // 0x29b054: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x29b054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_29b058:
    // 0x29b058: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29b058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_29b05c:
    // 0x29b05c: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x29b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_29b060:
    // 0x29b060: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29b060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_29b064:
    // 0x29b064: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x29b064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_29b068:
    // 0x29b068: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29b068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29b06c:
    // 0x29b06c: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x29b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_29b070:
    // 0x29b070: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x29b070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_29b074:
    // 0x29b074: 0x0  nop
    ctx->pc = 0x29b074u;
    // NOP
label_29b078:
    // 0x29b078: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x29b078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_29b07c:
    // 0x29b07c: 0x621ffe8  bgez        $s1, . + 4 + (-0x18 << 2)
label_29b080:
    if (ctx->pc == 0x29B080u) {
        ctx->pc = 0x29B080u;
            // 0x29b080: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->pc = 0x29B084u;
        goto label_29b084;
    }
    ctx->pc = 0x29B07Cu;
    {
        const bool branch_taken_0x29b07c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x29B080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B07Cu;
            // 0x29b080: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b07c) {
            ctx->pc = 0x29B020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29b020;
        }
    }
    ctx->pc = 0x29B084u;
label_29b084:
    // 0x29b084: 0x0  nop
    ctx->pc = 0x29b084u;
    // NOP
label_29b088:
    // 0x29b088: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x29b088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_29b08c:
    // 0x29b08c: 0x5460ffe0  bnel        $v1, $zero, . + 4 + (-0x20 << 2)
label_29b090:
    if (ctx->pc == 0x29B090u) {
        ctx->pc = 0x29B090u;
            // 0x29b090: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x29B094u;
        goto label_29b094;
    }
    ctx->pc = 0x29B08Cu;
    {
        const bool branch_taken_0x29b08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b08c) {
            ctx->pc = 0x29B090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B08Cu;
            // 0x29b090: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29b010;
        }
    }
    ctx->pc = 0x29B094u;
label_29b094:
    // 0x29b094: 0x0  nop
    ctx->pc = 0x29b094u;
    // NOP
label_29b098:
    // 0x29b098: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29b098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_29b09c:
    // 0x29b09c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_29b0a0:
    // 0x29b0a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29b0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_29b0a4:
    // 0x29b0a4: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_29b0a8:
    if (ctx->pc == 0x29B0A8u) {
        ctx->pc = 0x29B0A8u;
            // 0x29b0a8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x29B0ACu;
        goto label_29b0ac;
    }
    ctx->pc = 0x29B0A4u;
    {
        const bool branch_taken_0x29b0a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b0a4) {
            ctx->pc = 0x29B0A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B0A4u;
            // 0x29b0a8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B0D4u;
            goto label_29b0d4;
        }
    }
    ctx->pc = 0x29B0ACu;
label_29b0ac:
    // 0x29b0ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b0b0:
    // 0x29b0b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_29b0b4:
    // 0x29b0b4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29b0b8:
    // 0x29b0b8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x29b0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_29b0bc:
    // 0x29b0bc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x29b0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_29b0c0:
    // 0x29b0c0: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x29b0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_29b0c4:
    // 0x29b0c4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x29b0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_29b0c8:
    // 0x29b0c8: 0xc0a7ab4  jal         func_29EAD0
label_29b0cc:
    if (ctx->pc == 0x29B0CCu) {
        ctx->pc = 0x29B0CCu;
            // 0x29b0cc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x29B0D0u;
        goto label_29b0d0;
    }
    ctx->pc = 0x29B0C8u;
    SET_GPR_U32(ctx, 31, 0x29B0D0u);
    ctx->pc = 0x29B0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B0C8u;
            // 0x29b0cc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B0D0u; }
        if (ctx->pc != 0x29B0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B0D0u; }
        if (ctx->pc != 0x29B0D0u) { return; }
    }
    ctx->pc = 0x29B0D0u;
label_29b0d0:
    // 0x29b0d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29b0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29b0d4:
    // 0x29b0d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29b0d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29b0d8:
    // 0x29b0d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29b0d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29b0dc:
    // 0x29b0dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b0dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29b0e0:
    // 0x29b0e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29b0e4:
    // 0x29b0e4: 0x3e00008  jr          $ra
label_29b0e8:
    if (ctx->pc == 0x29B0E8u) {
        ctx->pc = 0x29B0E8u;
            // 0x29b0e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x29B0ECu;
        goto label_29b0ec;
    }
    ctx->pc = 0x29B0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B0E4u;
            // 0x29b0e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B0ECu;
label_29b0ec:
    // 0x29b0ec: 0x0  nop
    ctx->pc = 0x29b0ecu;
    // NOP
}
