#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003EEA40
// Address: 0x3eea40 - 0x3eeb10
void sub_003EEA40_0x3eea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EEA40_0x3eea40");
#endif

    switch (ctx->pc) {
        case 0x3eea40u: goto label_3eea40;
        case 0x3eea44u: goto label_3eea44;
        case 0x3eea48u: goto label_3eea48;
        case 0x3eea4cu: goto label_3eea4c;
        case 0x3eea50u: goto label_3eea50;
        case 0x3eea54u: goto label_3eea54;
        case 0x3eea58u: goto label_3eea58;
        case 0x3eea5cu: goto label_3eea5c;
        case 0x3eea60u: goto label_3eea60;
        case 0x3eea64u: goto label_3eea64;
        case 0x3eea68u: goto label_3eea68;
        case 0x3eea6cu: goto label_3eea6c;
        case 0x3eea70u: goto label_3eea70;
        case 0x3eea74u: goto label_3eea74;
        case 0x3eea78u: goto label_3eea78;
        case 0x3eea7cu: goto label_3eea7c;
        case 0x3eea80u: goto label_3eea80;
        case 0x3eea84u: goto label_3eea84;
        case 0x3eea88u: goto label_3eea88;
        case 0x3eea8cu: goto label_3eea8c;
        case 0x3eea90u: goto label_3eea90;
        case 0x3eea94u: goto label_3eea94;
        case 0x3eea98u: goto label_3eea98;
        case 0x3eea9cu: goto label_3eea9c;
        case 0x3eeaa0u: goto label_3eeaa0;
        case 0x3eeaa4u: goto label_3eeaa4;
        case 0x3eeaa8u: goto label_3eeaa8;
        case 0x3eeaacu: goto label_3eeaac;
        case 0x3eeab0u: goto label_3eeab0;
        case 0x3eeab4u: goto label_3eeab4;
        case 0x3eeab8u: goto label_3eeab8;
        case 0x3eeabcu: goto label_3eeabc;
        case 0x3eeac0u: goto label_3eeac0;
        case 0x3eeac4u: goto label_3eeac4;
        case 0x3eeac8u: goto label_3eeac8;
        case 0x3eeaccu: goto label_3eeacc;
        case 0x3eead0u: goto label_3eead0;
        case 0x3eead4u: goto label_3eead4;
        case 0x3eead8u: goto label_3eead8;
        case 0x3eeadcu: goto label_3eeadc;
        case 0x3eeae0u: goto label_3eeae0;
        case 0x3eeae4u: goto label_3eeae4;
        case 0x3eeae8u: goto label_3eeae8;
        case 0x3eeaecu: goto label_3eeaec;
        case 0x3eeaf0u: goto label_3eeaf0;
        case 0x3eeaf4u: goto label_3eeaf4;
        case 0x3eeaf8u: goto label_3eeaf8;
        case 0x3eeafcu: goto label_3eeafc;
        case 0x3eeb00u: goto label_3eeb00;
        case 0x3eeb04u: goto label_3eeb04;
        case 0x3eeb08u: goto label_3eeb08;
        case 0x3eeb0cu: goto label_3eeb0c;
        default: break;
    }

    ctx->pc = 0x3eea40u;

label_3eea40:
    // 0x3eea40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3eea44:
    // 0x3eea44: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x3eea44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_3eea48:
    // 0x3eea48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3eea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3eea4c:
    // 0x3eea4c: 0x30c30007  andi        $v1, $a2, 0x7
    ctx->pc = 0x3eea4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
label_3eea50:
    // 0x3eea50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3eea50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3eea54:
    // 0x3eea54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3eea58:
    if (ctx->pc == 0x3EEA58u) {
        ctx->pc = 0x3EEA58u;
            // 0x3eea58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EEA5Cu;
        goto label_3eea5c;
    }
    ctx->pc = 0x3EEA54u;
    {
        const bool branch_taken_0x3eea54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEA54u;
            // 0x3eea58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eea54) {
            ctx->pc = 0x3EEA64u;
            goto label_3eea64;
        }
    }
    ctx->pc = 0x3EEA5Cu;
label_3eea5c:
    // 0x3eea5c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3eea60:
    if (ctx->pc == 0x3EEA60u) {
        ctx->pc = 0x3EEA60u;
            // 0x3eea60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EEA64u;
        goto label_3eea64;
    }
    ctx->pc = 0x3EEA5Cu;
    {
        const bool branch_taken_0x3eea5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEA5Cu;
            // 0x3eea60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eea5c) {
            ctx->pc = 0x3EEA68u;
            goto label_3eea68;
        }
    }
    ctx->pc = 0x3EEA64u;
label_3eea64:
    // 0x3eea64: 0x30c70004  andi        $a3, $a2, 0x4
    ctx->pc = 0x3eea64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_3eea68:
    // 0x3eea68: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3eea68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3eea6c:
    // 0x3eea6c: 0xc10ca68  jal         func_4329A0
label_3eea70:
    if (ctx->pc == 0x3EEA70u) {
        ctx->pc = 0x3EEA70u;
            // 0x3eea70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EEA74u;
        goto label_3eea74;
    }
    ctx->pc = 0x3EEA6Cu;
    SET_GPR_U32(ctx, 31, 0x3EEA74u);
    ctx->pc = 0x3EEA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEA6Cu;
            // 0x3eea70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEA74u; }
        if (ctx->pc != 0x3EEA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEA74u; }
        if (ctx->pc != 0x3EEA74u) { return; }
    }
    ctx->pc = 0x3EEA74u;
label_3eea74:
    // 0x3eea74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3eea74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3eea78:
    // 0x3eea78: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3eea78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3eea7c:
    // 0x3eea7c: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3eea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3eea80:
    // 0x3eea80: 0x24639eb0  addiu       $v1, $v1, -0x6150
    ctx->pc = 0x3eea80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942384));
label_3eea84:
    // 0x3eea84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3eea84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3eea88:
    // 0x3eea88: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3eea88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3eea8c:
    // 0x3eea8c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3eea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3eea90:
    // 0x3eea90: 0xa20002d4  sb          $zero, 0x2D4($s0)
    ctx->pc = 0x3eea90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 724), (uint8_t)GPR_U32(ctx, 0));
label_3eea94:
    // 0x3eea94: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x3eea94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3eea98:
    // 0x3eea98: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x3eea98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_3eea9c:
    // 0x3eea9c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3eeaa0:
    if (ctx->pc == 0x3EEAA0u) {
        ctx->pc = 0x3EEAA4u;
        goto label_3eeaa4;
    }
    ctx->pc = 0x3EEA9Cu;
    {
        const bool branch_taken_0x3eea9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eea9c) {
            ctx->pc = 0x3EEAC8u;
            goto label_3eeac8;
        }
    }
    ctx->pc = 0x3EEAA4u;
label_3eeaa4:
    // 0x3eeaa4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3eeaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3eeaa8:
    // 0x3eeaa8: 0x240371f8  addiu       $v1, $zero, 0x71F8
    ctx->pc = 0x3eeaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29176));
label_3eeaac:
    // 0x3eeaac: 0x2442f890  addiu       $v0, $v0, -0x770
    ctx->pc = 0x3eeaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965392));
label_3eeab0:
    // 0x3eeab0: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x3eeab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
label_3eeab4:
    // 0x3eeab4: 0x3c023f12  lui         $v0, 0x3F12
    ctx->pc = 0x3eeab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16146 << 16));
label_3eeab8:
    // 0x3eeab8: 0xae0302dc  sw          $v1, 0x2DC($s0)
    ctx->pc = 0x3eeab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 3));
label_3eeabc:
    // 0x3eeabc: 0x34424925  ori         $v0, $v0, 0x4925
    ctx->pc = 0x3eeabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18725);
label_3eeac0:
    // 0x3eeac0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3eeac4:
    if (ctx->pc == 0x3EEAC4u) {
        ctx->pc = 0x3EEAC4u;
            // 0x3eeac4: 0xae0202e0  sw          $v0, 0x2E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
        ctx->pc = 0x3EEAC8u;
        goto label_3eeac8;
    }
    ctx->pc = 0x3EEAC0u;
    {
        const bool branch_taken_0x3eeac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEAC0u;
            // 0x3eeac4: 0xae0202e0  sw          $v0, 0x2E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeac0) {
            ctx->pc = 0x3EEAE4u;
            goto label_3eeae4;
        }
    }
    ctx->pc = 0x3EEAC8u;
label_3eeac8:
    // 0x3eeac8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3eeac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3eeacc:
    // 0x3eeacc: 0x24036ff8  addiu       $v1, $zero, 0x6FF8
    ctx->pc = 0x3eeaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28664));
label_3eead0:
    // 0x3eead0: 0x2442f930  addiu       $v0, $v0, -0x6D0
    ctx->pc = 0x3eead0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965552));
label_3eead4:
    // 0x3eead4: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x3eead4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
label_3eead8:
    // 0x3eead8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3eead8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3eeadc:
    // 0x3eeadc: 0xae0302dc  sw          $v1, 0x2DC($s0)
    ctx->pc = 0x3eeadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 3));
label_3eeae0:
    // 0x3eeae0: 0xae0202e0  sw          $v0, 0x2E0($s0)
    ctx->pc = 0x3eeae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
label_3eeae4:
    // 0x3eeae4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3eeae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3eeae8:
    // 0x3eeae8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3eeae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3eeaec:
    // 0x3eeaec: 0x320f809  jalr        $t9
label_3eeaf0:
    if (ctx->pc == 0x3EEAF0u) {
        ctx->pc = 0x3EEAF0u;
            // 0x3eeaf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EEAF4u;
        goto label_3eeaf4;
    }
    ctx->pc = 0x3EEAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EEAF4u);
        ctx->pc = 0x3EEAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEAECu;
            // 0x3eeaf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EEAF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EEAF4u; }
            if (ctx->pc != 0x3EEAF4u) { return; }
        }
        }
    }
    ctx->pc = 0x3EEAF4u;
label_3eeaf4:
    // 0x3eeaf4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3eeaf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eeaf8:
    // 0x3eeaf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3eeaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3eeafc:
    // 0x3eeafc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3eeafcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3eeb00:
    // 0x3eeb00: 0x3e00008  jr          $ra
label_3eeb04:
    if (ctx->pc == 0x3EEB04u) {
        ctx->pc = 0x3EEB04u;
            // 0x3eeb04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3EEB08u;
        goto label_3eeb08;
    }
    ctx->pc = 0x3EEB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEB00u;
            // 0x3eeb04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EEB08u;
label_3eeb08:
    // 0x3eeb08: 0x0  nop
    ctx->pc = 0x3eeb08u;
    // NOP
label_3eeb0c:
    // 0x3eeb0c: 0x0  nop
    ctx->pc = 0x3eeb0cu;
    // NOP
}
