#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002489D0
// Address: 0x2489d0 - 0x248be0
void sub_002489D0_0x2489d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002489D0_0x2489d0");
#endif

    switch (ctx->pc) {
        case 0x2489d0u: goto label_2489d0;
        case 0x2489d4u: goto label_2489d4;
        case 0x2489d8u: goto label_2489d8;
        case 0x2489dcu: goto label_2489dc;
        case 0x2489e0u: goto label_2489e0;
        case 0x2489e4u: goto label_2489e4;
        case 0x2489e8u: goto label_2489e8;
        case 0x2489ecu: goto label_2489ec;
        case 0x2489f0u: goto label_2489f0;
        case 0x2489f4u: goto label_2489f4;
        case 0x2489f8u: goto label_2489f8;
        case 0x2489fcu: goto label_2489fc;
        case 0x248a00u: goto label_248a00;
        case 0x248a04u: goto label_248a04;
        case 0x248a08u: goto label_248a08;
        case 0x248a0cu: goto label_248a0c;
        case 0x248a10u: goto label_248a10;
        case 0x248a14u: goto label_248a14;
        case 0x248a18u: goto label_248a18;
        case 0x248a1cu: goto label_248a1c;
        case 0x248a20u: goto label_248a20;
        case 0x248a24u: goto label_248a24;
        case 0x248a28u: goto label_248a28;
        case 0x248a2cu: goto label_248a2c;
        case 0x248a30u: goto label_248a30;
        case 0x248a34u: goto label_248a34;
        case 0x248a38u: goto label_248a38;
        case 0x248a3cu: goto label_248a3c;
        case 0x248a40u: goto label_248a40;
        case 0x248a44u: goto label_248a44;
        case 0x248a48u: goto label_248a48;
        case 0x248a4cu: goto label_248a4c;
        case 0x248a50u: goto label_248a50;
        case 0x248a54u: goto label_248a54;
        case 0x248a58u: goto label_248a58;
        case 0x248a5cu: goto label_248a5c;
        case 0x248a60u: goto label_248a60;
        case 0x248a64u: goto label_248a64;
        case 0x248a68u: goto label_248a68;
        case 0x248a6cu: goto label_248a6c;
        case 0x248a70u: goto label_248a70;
        case 0x248a74u: goto label_248a74;
        case 0x248a78u: goto label_248a78;
        case 0x248a7cu: goto label_248a7c;
        case 0x248a80u: goto label_248a80;
        case 0x248a84u: goto label_248a84;
        case 0x248a88u: goto label_248a88;
        case 0x248a8cu: goto label_248a8c;
        case 0x248a90u: goto label_248a90;
        case 0x248a94u: goto label_248a94;
        case 0x248a98u: goto label_248a98;
        case 0x248a9cu: goto label_248a9c;
        case 0x248aa0u: goto label_248aa0;
        case 0x248aa4u: goto label_248aa4;
        case 0x248aa8u: goto label_248aa8;
        case 0x248aacu: goto label_248aac;
        case 0x248ab0u: goto label_248ab0;
        case 0x248ab4u: goto label_248ab4;
        case 0x248ab8u: goto label_248ab8;
        case 0x248abcu: goto label_248abc;
        case 0x248ac0u: goto label_248ac0;
        case 0x248ac4u: goto label_248ac4;
        case 0x248ac8u: goto label_248ac8;
        case 0x248accu: goto label_248acc;
        case 0x248ad0u: goto label_248ad0;
        case 0x248ad4u: goto label_248ad4;
        case 0x248ad8u: goto label_248ad8;
        case 0x248adcu: goto label_248adc;
        case 0x248ae0u: goto label_248ae0;
        case 0x248ae4u: goto label_248ae4;
        case 0x248ae8u: goto label_248ae8;
        case 0x248aecu: goto label_248aec;
        case 0x248af0u: goto label_248af0;
        case 0x248af4u: goto label_248af4;
        case 0x248af8u: goto label_248af8;
        case 0x248afcu: goto label_248afc;
        case 0x248b00u: goto label_248b00;
        case 0x248b04u: goto label_248b04;
        case 0x248b08u: goto label_248b08;
        case 0x248b0cu: goto label_248b0c;
        case 0x248b10u: goto label_248b10;
        case 0x248b14u: goto label_248b14;
        case 0x248b18u: goto label_248b18;
        case 0x248b1cu: goto label_248b1c;
        case 0x248b20u: goto label_248b20;
        case 0x248b24u: goto label_248b24;
        case 0x248b28u: goto label_248b28;
        case 0x248b2cu: goto label_248b2c;
        case 0x248b30u: goto label_248b30;
        case 0x248b34u: goto label_248b34;
        case 0x248b38u: goto label_248b38;
        case 0x248b3cu: goto label_248b3c;
        case 0x248b40u: goto label_248b40;
        case 0x248b44u: goto label_248b44;
        case 0x248b48u: goto label_248b48;
        case 0x248b4cu: goto label_248b4c;
        case 0x248b50u: goto label_248b50;
        case 0x248b54u: goto label_248b54;
        case 0x248b58u: goto label_248b58;
        case 0x248b5cu: goto label_248b5c;
        case 0x248b60u: goto label_248b60;
        case 0x248b64u: goto label_248b64;
        case 0x248b68u: goto label_248b68;
        case 0x248b6cu: goto label_248b6c;
        case 0x248b70u: goto label_248b70;
        case 0x248b74u: goto label_248b74;
        case 0x248b78u: goto label_248b78;
        case 0x248b7cu: goto label_248b7c;
        case 0x248b80u: goto label_248b80;
        case 0x248b84u: goto label_248b84;
        case 0x248b88u: goto label_248b88;
        case 0x248b8cu: goto label_248b8c;
        case 0x248b90u: goto label_248b90;
        case 0x248b94u: goto label_248b94;
        case 0x248b98u: goto label_248b98;
        case 0x248b9cu: goto label_248b9c;
        case 0x248ba0u: goto label_248ba0;
        case 0x248ba4u: goto label_248ba4;
        case 0x248ba8u: goto label_248ba8;
        case 0x248bacu: goto label_248bac;
        case 0x248bb0u: goto label_248bb0;
        case 0x248bb4u: goto label_248bb4;
        case 0x248bb8u: goto label_248bb8;
        case 0x248bbcu: goto label_248bbc;
        case 0x248bc0u: goto label_248bc0;
        case 0x248bc4u: goto label_248bc4;
        case 0x248bc8u: goto label_248bc8;
        case 0x248bccu: goto label_248bcc;
        case 0x248bd0u: goto label_248bd0;
        case 0x248bd4u: goto label_248bd4;
        case 0x248bd8u: goto label_248bd8;
        case 0x248bdcu: goto label_248bdc;
        default: break;
    }

    ctx->pc = 0x2489d0u;

label_2489d0:
    // 0x2489d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2489d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2489d4:
    // 0x2489d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2489d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2489d8:
    // 0x2489d8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2489d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2489dc:
    // 0x2489dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2489dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2489e0:
    // 0x2489e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2489e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2489e4:
    // 0x2489e4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2489e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2489e8:
    // 0x2489e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2489e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2489ec:
    // 0x2489ec: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2489ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2489f0:
    // 0x2489f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2489f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2489f4:
    // 0x2489f4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2489f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2489f8:
    // 0x2489f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2489f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2489fc:
    // 0x2489fc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2489fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_248a00:
    // 0x248a00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x248a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_248a04:
    // 0x248a04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248a08:
    // 0x248a08: 0x8d160000  lw          $s6, 0x0($t0)
    ctx->pc = 0x248a08u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_248a0c:
    // 0x248a0c: 0xc092200  jal         func_248800
label_248a10:
    if (ctx->pc == 0x248A10u) {
        ctx->pc = 0x248A10u;
            // 0x248a10: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248A14u;
        goto label_248a14;
    }
    ctx->pc = 0x248A0Cu;
    SET_GPR_U32(ctx, 31, 0x248A14u);
    ctx->pc = 0x248A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248A0Cu;
            // 0x248a10: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x248800u;
    if (runtime->hasFunction(0x248800u)) {
        auto targetFn = runtime->lookupFunction(0x248800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A14u; }
        if (ctx->pc != 0x248A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00248800_0x248800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A14u; }
        if (ctx->pc != 0x248A14u) { return; }
    }
    ctx->pc = 0x248A14u;
label_248a14:
    // 0x248a14: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x248a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
label_248a18:
    // 0x248a18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x248a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248a1c:
    // 0x248a1c: 0xac550014  sw          $s5, 0x14($v0)
    ctx->pc = 0x248a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 21));
label_248a20:
    // 0x248a20: 0xac540018  sw          $s4, 0x18($v0)
    ctx->pc = 0x248a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 20));
label_248a24:
    // 0x248a24: 0x8ea30028  lw          $v1, 0x28($s5)
    ctx->pc = 0x248a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_248a28:
    // 0x248a28: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x248a28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
label_248a2c:
    // 0x248a2c: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x248a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_248a30:
    // 0x248a30: 0xa443000a  sh          $v1, 0xA($v0)
    ctx->pc = 0x248a30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
label_248a34:
    // 0x248a34: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x248a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_248a38:
    // 0x248a38: 0x8ea30028  lw          $v1, 0x28($s5)
    ctx->pc = 0x248a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_248a3c:
    // 0x248a3c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x248a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_248a40:
    // 0x248a40: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x248a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_248a44:
    // 0x248a44: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_248a48:
    if (ctx->pc == 0x248A48u) {
        ctx->pc = 0x248A48u;
            // 0x248a48: 0x26a40024  addiu       $a0, $s5, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
        ctx->pc = 0x248A4Cu;
        goto label_248a4c;
    }
    ctx->pc = 0x248A44u;
    {
        const bool branch_taken_0x248a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x248A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248A44u;
            // 0x248a48: 0x26a40024  addiu       $a0, $s5, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a44) {
            ctx->pc = 0x248A58u;
            goto label_248a58;
        }
    }
    ctx->pc = 0x248A4Cu;
label_248a4c:
    // 0x248a4c: 0xc0a728c  jal         func_29CA30
label_248a50:
    if (ctx->pc == 0x248A50u) {
        ctx->pc = 0x248A50u;
            // 0x248a50: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x248A54u;
        goto label_248a54;
    }
    ctx->pc = 0x248A4Cu;
    SET_GPR_U32(ctx, 31, 0x248A54u);
    ctx->pc = 0x248A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248A4Cu;
            // 0x248a50: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A54u; }
        if (ctx->pc != 0x248A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A54u; }
        if (ctx->pc != 0x248A54u) { return; }
    }
    ctx->pc = 0x248A54u;
label_248a54:
    // 0x248a54: 0x0  nop
    ctx->pc = 0x248a54u;
    // NOP
label_248a58:
    // 0x248a58: 0x8ea30028  lw          $v1, 0x28($s5)
    ctx->pc = 0x248a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_248a5c:
    // 0x248a5c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x248a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_248a60:
    // 0x248a60: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x248a60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_248a64:
    // 0x248a64: 0xaea20028  sw          $v0, 0x28($s5)
    ctx->pc = 0x248a64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 2));
label_248a68:
    // 0x248a68: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x248a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_248a6c:
    // 0x248a6c: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x248a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_248a70:
    // 0x248a70: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x248a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_248a74:
    // 0x248a74: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x248a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_248a78:
    // 0x248a78: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x248a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_248a7c:
    // 0x248a7c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_248a80:
    if (ctx->pc == 0x248A80u) {
        ctx->pc = 0x248A80u;
            // 0x248a80: 0x858021  addu        $s0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x248A84u;
        goto label_248a84;
    }
    ctx->pc = 0x248A7Cu;
    {
        const bool branch_taken_0x248a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x248A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248A7Cu;
            // 0x248a80: 0x858021  addu        $s0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a7c) {
            ctx->pc = 0x248A90u;
            goto label_248a90;
        }
    }
    ctx->pc = 0x248A84u;
label_248a84:
    // 0x248a84: 0x26840024  addiu       $a0, $s4, 0x24
    ctx->pc = 0x248a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
label_248a88:
    // 0x248a88: 0xc0a728c  jal         func_29CA30
label_248a8c:
    if (ctx->pc == 0x248A8Cu) {
        ctx->pc = 0x248A8Cu;
            // 0x248a8c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x248A90u;
        goto label_248a90;
    }
    ctx->pc = 0x248A88u;
    SET_GPR_U32(ctx, 31, 0x248A90u);
    ctx->pc = 0x248A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248A88u;
            // 0x248a8c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A90u; }
        if (ctx->pc != 0x248A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A90u; }
        if (ctx->pc != 0x248A90u) { return; }
    }
    ctx->pc = 0x248A90u;
label_248a90:
    // 0x248a90: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x248a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_248a94:
    // 0x248a94: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x248a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_248a98:
    // 0x248a98: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x248a98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_248a9c:
    // 0x248a9c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x248a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_248aa0:
    // 0x248aa0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x248aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_248aa4:
    // 0x248aa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_248aa8:
    // 0x248aa8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x248aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_248aac:
    // 0x248aac: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x248aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_248ab0:
    // 0x248ab0: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x248ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
label_248ab4:
    // 0x248ab4: 0xac550004  sw          $s5, 0x4($v0)
    ctx->pc = 0x248ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
label_248ab8:
    // 0x248ab8: 0xafb50080  sw          $s5, 0x80($sp)
    ctx->pc = 0x248ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 21));
label_248abc:
    // 0x248abc: 0xafb40084  sw          $s4, 0x84($sp)
    ctx->pc = 0x248abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 20));
label_248ac0:
    // 0x248ac0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x248ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_248ac4:
    // 0x248ac4: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x248ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_248ac8:
    // 0x248ac8: 0xafb20088  sw          $s2, 0x88($sp)
    ctx->pc = 0x248ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 18));
label_248acc:
    // 0x248acc: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x248accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_248ad0:
    // 0x248ad0: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x248ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_248ad4:
    // 0x248ad4: 0xc0a45a0  jal         func_291680
label_248ad8:
    if (ctx->pc == 0x248AD8u) {
        ctx->pc = 0x248AD8u;
            // 0x248ad8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x248ADCu;
        goto label_248adc;
    }
    ctx->pc = 0x248AD4u;
    SET_GPR_U32(ctx, 31, 0x248ADCu);
    ctx->pc = 0x248AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248AD4u;
            // 0x248ad8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248ADCu; }
        if (ctx->pc != 0x248ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248ADCu; }
        if (ctx->pc != 0x248ADCu) { return; }
    }
    ctx->pc = 0x248ADCu;
label_248adc:
    // 0x248adc: 0x96a6001a  lhu         $a2, 0x1A($s5)
    ctx->pc = 0x248adcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 26)));
label_248ae0:
    // 0x248ae0: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x248ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_248ae4:
    // 0x248ae4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x248ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_248ae8:
    // 0x248ae8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x248ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_248aec:
    // 0x248aec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x248aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_248af0:
    // 0x248af0: 0x9685001a  lhu         $a1, 0x1A($s4)
    ctx->pc = 0x248af0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 26)));
label_248af4:
    // 0x248af4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x248af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_248af8:
    // 0x248af8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x248af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_248afc:
    // 0x248afc: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x248afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_248b00:
    // 0x248b00: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x248b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_248b04:
    // 0x248b04: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x248b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_248b08:
    // 0x248b08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x248b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_248b0c:
    // 0x248b0c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x248b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_248b10:
    // 0x248b10: 0x806319f0  lb          $v1, 0x19F0($v1)
    ctx->pc = 0x248b10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 6640)));
label_248b14:
    // 0x248b14: 0xa2230010  sb          $v1, 0x10($s1)
    ctx->pc = 0x248b14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 3));
label_248b18:
    // 0x248b18: 0x82250010  lb          $a1, 0x10($s1)
    ctx->pc = 0x248b18u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_248b1c:
    // 0x248b1c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x248b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_248b20:
    // 0x248b20: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x248b20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_248b24:
    // 0x248b24: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x248b24u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_248b28:
    // 0x248b28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x248b28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_248b2c:
    // 0x248b2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x248b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_248b30:
    // 0x248b30: 0x24631a50  addiu       $v1, $v1, 0x1A50
    ctx->pc = 0x248b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6736));
label_248b34:
    // 0x248b34: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x248b34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
label_248b38:
    // 0x248b38: 0xa2330001  sb          $s3, 0x1($s1)
    ctx->pc = 0x248b38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 19));
label_248b3c:
    // 0x248b3c: 0x8c4216d4  lw          $v0, 0x16D4($v0)
    ctx->pc = 0x248b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5844)));
label_248b40:
    // 0x248b40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_248b44:
    if (ctx->pc == 0x248B44u) {
        ctx->pc = 0x248B44u;
            // 0x248b44: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x248B48u;
        goto label_248b48;
    }
    ctx->pc = 0x248B40u;
    {
        const bool branch_taken_0x248b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248B40u;
            // 0x248b44: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b40) {
            ctx->pc = 0x248B70u;
            goto label_248b70;
        }
    }
    ctx->pc = 0x248B48u;
label_248b48:
    // 0x248b48: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x248b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_248b4c:
    // 0x248b4c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x248b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_248b50:
    // 0x248b50: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x248b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_248b54:
    // 0x248b54: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x248b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_248b58:
    // 0x248b58: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x248b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_248b5c:
    // 0x248b5c: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x248b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_248b60:
    // 0x248b60: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x248b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_248b64:
    // 0x248b64: 0x10000006  b           . + 4 + (0x6 << 2)
label_248b68:
    if (ctx->pc == 0x248B68u) {
        ctx->pc = 0x248B68u;
            // 0x248b68: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x248B6Cu;
        goto label_248b6c;
    }
    ctx->pc = 0x248B64u;
    {
        const bool branch_taken_0x248b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248B64u;
            // 0x248b68: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b64) {
            ctx->pc = 0x248B80u;
            goto label_248b80;
        }
    }
    ctx->pc = 0x248B6Cu;
label_248b6c:
    // 0x248b6c: 0x0  nop
    ctx->pc = 0x248b6cu;
    // NOP
label_248b70:
    // 0x248b70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x248b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_248b74:
    // 0x248b74: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x248b74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_248b78:
    // 0x248b78: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x248b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_248b7c:
    // 0x248b7c: 0x0  nop
    ctx->pc = 0x248b7cu;
    // NOP
label_248b80:
    // 0x248b80: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x248b80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_248b84:
    // 0x248b84: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x248b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_248b88:
    // 0x248b88: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x248b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_248b8c:
    // 0x248b8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_248b90:
    // 0x248b90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x248b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_248b94:
    // 0x248b94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_248b98:
    // 0x248b98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x248b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_248b9c:
    // 0x248b9c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x248b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_248ba0:
    // 0x248ba0: 0x8c4216b0  lw          $v0, 0x16B0($v0)
    ctx->pc = 0x248ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5808)));
label_248ba4:
    // 0x248ba4: 0x40f809  jalr        $v0
label_248ba8:
    if (ctx->pc == 0x248BA8u) {
        ctx->pc = 0x248BA8u;
            // 0x248ba8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248BACu;
        goto label_248bac;
    }
    ctx->pc = 0x248BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248BACu);
        ctx->pc = 0x248BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248BA4u;
            // 0x248ba8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x248BACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x248BACu; }
            if (ctx->pc != 0x248BACu) { return; }
        }
        }
    }
    ctx->pc = 0x248BACu;
label_248bac:
    // 0x248bac: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x248bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_248bb0:
    // 0x248bb0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x248bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_248bb4:
    // 0x248bb4: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x248bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
label_248bb8:
    // 0x248bb8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x248bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_248bbc:
    // 0x248bbc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x248bbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_248bc0:
    // 0x248bc0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x248bc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_248bc4:
    // 0x248bc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x248bc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_248bc8:
    // 0x248bc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x248bc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_248bcc:
    // 0x248bcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x248bccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_248bd0:
    // 0x248bd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x248bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_248bd4:
    // 0x248bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x248bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_248bd8:
    // 0x248bd8: 0x3e00008  jr          $ra
label_248bdc:
    if (ctx->pc == 0x248BDCu) {
        ctx->pc = 0x248BDCu;
            // 0x248bdc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x248BE0u;
        goto label_fallthrough_0x248bd8;
    }
    ctx->pc = 0x248BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248BD8u;
            // 0x248bdc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x248bd8:
    ctx->pc = 0x248BE0u;
}
