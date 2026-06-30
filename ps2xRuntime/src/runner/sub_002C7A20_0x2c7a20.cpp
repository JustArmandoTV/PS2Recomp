#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C7A20
// Address: 0x2c7a20 - 0x2c7b20
void sub_002C7A20_0x2c7a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7A20_0x2c7a20");
#endif

    switch (ctx->pc) {
        case 0x2c7a20u: goto label_2c7a20;
        case 0x2c7a24u: goto label_2c7a24;
        case 0x2c7a28u: goto label_2c7a28;
        case 0x2c7a2cu: goto label_2c7a2c;
        case 0x2c7a30u: goto label_2c7a30;
        case 0x2c7a34u: goto label_2c7a34;
        case 0x2c7a38u: goto label_2c7a38;
        case 0x2c7a3cu: goto label_2c7a3c;
        case 0x2c7a40u: goto label_2c7a40;
        case 0x2c7a44u: goto label_2c7a44;
        case 0x2c7a48u: goto label_2c7a48;
        case 0x2c7a4cu: goto label_2c7a4c;
        case 0x2c7a50u: goto label_2c7a50;
        case 0x2c7a54u: goto label_2c7a54;
        case 0x2c7a58u: goto label_2c7a58;
        case 0x2c7a5cu: goto label_2c7a5c;
        case 0x2c7a60u: goto label_2c7a60;
        case 0x2c7a64u: goto label_2c7a64;
        case 0x2c7a68u: goto label_2c7a68;
        case 0x2c7a6cu: goto label_2c7a6c;
        case 0x2c7a70u: goto label_2c7a70;
        case 0x2c7a74u: goto label_2c7a74;
        case 0x2c7a78u: goto label_2c7a78;
        case 0x2c7a7cu: goto label_2c7a7c;
        case 0x2c7a80u: goto label_2c7a80;
        case 0x2c7a84u: goto label_2c7a84;
        case 0x2c7a88u: goto label_2c7a88;
        case 0x2c7a8cu: goto label_2c7a8c;
        case 0x2c7a90u: goto label_2c7a90;
        case 0x2c7a94u: goto label_2c7a94;
        case 0x2c7a98u: goto label_2c7a98;
        case 0x2c7a9cu: goto label_2c7a9c;
        case 0x2c7aa0u: goto label_2c7aa0;
        case 0x2c7aa4u: goto label_2c7aa4;
        case 0x2c7aa8u: goto label_2c7aa8;
        case 0x2c7aacu: goto label_2c7aac;
        case 0x2c7ab0u: goto label_2c7ab0;
        case 0x2c7ab4u: goto label_2c7ab4;
        case 0x2c7ab8u: goto label_2c7ab8;
        case 0x2c7abcu: goto label_2c7abc;
        case 0x2c7ac0u: goto label_2c7ac0;
        case 0x2c7ac4u: goto label_2c7ac4;
        case 0x2c7ac8u: goto label_2c7ac8;
        case 0x2c7accu: goto label_2c7acc;
        case 0x2c7ad0u: goto label_2c7ad0;
        case 0x2c7ad4u: goto label_2c7ad4;
        case 0x2c7ad8u: goto label_2c7ad8;
        case 0x2c7adcu: goto label_2c7adc;
        case 0x2c7ae0u: goto label_2c7ae0;
        case 0x2c7ae4u: goto label_2c7ae4;
        case 0x2c7ae8u: goto label_2c7ae8;
        case 0x2c7aecu: goto label_2c7aec;
        case 0x2c7af0u: goto label_2c7af0;
        case 0x2c7af4u: goto label_2c7af4;
        case 0x2c7af8u: goto label_2c7af8;
        case 0x2c7afcu: goto label_2c7afc;
        case 0x2c7b00u: goto label_2c7b00;
        case 0x2c7b04u: goto label_2c7b04;
        case 0x2c7b08u: goto label_2c7b08;
        case 0x2c7b0cu: goto label_2c7b0c;
        case 0x2c7b10u: goto label_2c7b10;
        case 0x2c7b14u: goto label_2c7b14;
        case 0x2c7b18u: goto label_2c7b18;
        case 0x2c7b1cu: goto label_2c7b1c;
        default: break;
    }

    ctx->pc = 0x2c7a20u;

label_2c7a20:
    // 0x2c7a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c7a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c7a24:
    // 0x2c7a24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c7a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c7a28:
    // 0x2c7a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c7a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c7a2c:
    // 0x2c7a2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c7a30:
    // 0x2c7a30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a34:
    // 0x2c7a34: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2c7a38:
    if (ctx->pc == 0x2C7A38u) {
        ctx->pc = 0x2C7A38u;
            // 0x2c7a38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A3Cu;
        goto label_2c7a3c;
    }
    ctx->pc = 0x2C7A34u;
    {
        const bool branch_taken_0x2c7a34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7A34u;
            // 0x2c7a38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a34) {
            ctx->pc = 0x2C7A6Cu;
            goto label_2c7a6c;
        }
    }
    ctx->pc = 0x2C7A3Cu;
label_2c7a3c:
    // 0x2c7a3c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c7a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2c7a40:
    // 0x2c7a40: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2c7a44:
    if (ctx->pc == 0x2C7A44u) {
        ctx->pc = 0x2C7A44u;
            // 0x2c7a44: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C7A48u;
        goto label_2c7a48;
    }
    ctx->pc = 0x2C7A40u;
    {
        const bool branch_taken_0x2c7a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7a40) {
            ctx->pc = 0x2C7A44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7A40u;
            // 0x2c7a44: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7A58u;
            goto label_2c7a58;
        }
    }
    ctx->pc = 0x2C7A48u;
label_2c7a48:
    // 0x2c7a48: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2c7a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2c7a4c:
    // 0x2c7a4c: 0xc0407c0  jal         func_101F00
label_2c7a50:
    if (ctx->pc == 0x2C7A50u) {
        ctx->pc = 0x2C7A50u;
            // 0x2c7a50: 0x24a53260  addiu       $a1, $a1, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
        ctx->pc = 0x2C7A54u;
        goto label_2c7a54;
    }
    ctx->pc = 0x2C7A4Cu;
    SET_GPR_U32(ctx, 31, 0x2C7A54u);
    ctx->pc = 0x2C7A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7A4Cu;
            // 0x2c7a50: 0x24a53260  addiu       $a1, $a1, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A54u; }
        if (ctx->pc != 0x2C7A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A54u; }
        if (ctx->pc != 0x2C7A54u) { return; }
    }
    ctx->pc = 0x2C7A54u;
label_2c7a54:
    // 0x2c7a54: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c7a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c7a58:
    // 0x2c7a58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c7a58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c7a5c:
    // 0x2c7a5c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2c7a60:
    if (ctx->pc == 0x2C7A60u) {
        ctx->pc = 0x2C7A60u;
            // 0x2c7a60: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2C7A64u;
        goto label_2c7a64;
    }
    ctx->pc = 0x2C7A5Cu;
    {
        const bool branch_taken_0x2c7a5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C7A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7A5Cu;
            // 0x2c7a60: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a5c) {
            ctx->pc = 0x2C7A6Cu;
            goto label_2c7a6c;
        }
    }
    ctx->pc = 0x2C7A64u;
label_2c7a64:
    // 0x2c7a64: 0xc0400a8  jal         func_1002A0
label_2c7a68:
    if (ctx->pc == 0x2C7A68u) {
        ctx->pc = 0x2C7A68u;
            // 0x2c7a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A6Cu;
        goto label_2c7a6c;
    }
    ctx->pc = 0x2C7A64u;
    SET_GPR_U32(ctx, 31, 0x2C7A6Cu);
    ctx->pc = 0x2C7A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7A64u;
            // 0x2c7a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A6Cu; }
        if (ctx->pc != 0x2C7A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A6Cu; }
        if (ctx->pc != 0x2C7A6Cu) { return; }
    }
    ctx->pc = 0x2C7A6Cu;
label_2c7a6c:
    // 0x2c7a6c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c7a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a70:
    // 0x2c7a70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c7a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7a74:
    // 0x2c7a74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c7a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7a78:
    // 0x2c7a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7a7c:
    // 0x2c7a7c: 0x3e00008  jr          $ra
label_2c7a80:
    if (ctx->pc == 0x2C7A80u) {
        ctx->pc = 0x2C7A80u;
            // 0x2c7a80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C7A84u;
        goto label_2c7a84;
    }
    ctx->pc = 0x2C7A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7A7Cu;
            // 0x2c7a80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7A84u;
label_2c7a84:
    // 0x2c7a84: 0x0  nop
    ctx->pc = 0x2c7a84u;
    // NOP
label_2c7a88:
    // 0x2c7a88: 0x0  nop
    ctx->pc = 0x2c7a88u;
    // NOP
label_2c7a8c:
    // 0x2c7a8c: 0x0  nop
    ctx->pc = 0x2c7a8cu;
    // NOP
label_2c7a90:
    // 0x2c7a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c7a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c7a94:
    // 0x2c7a94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c7a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c7a98:
    // 0x2c7a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c7a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c7a9c:
    // 0x2c7a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c7aa0:
    // 0x2c7aa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7aa4:
    // 0x2c7aa4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_2c7aa8:
    if (ctx->pc == 0x2C7AA8u) {
        ctx->pc = 0x2C7AA8u;
            // 0x2c7aa8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7AACu;
        goto label_2c7aac;
    }
    ctx->pc = 0x2C7AA4u;
    {
        const bool branch_taken_0x2c7aa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7AA4u;
            // 0x2c7aa8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7aa4) {
            ctx->pc = 0x2C7B04u;
            goto label_2c7b04;
        }
    }
    ctx->pc = 0x2C7AACu;
label_2c7aac:
    // 0x2c7aac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c7ab0:
    // 0x2c7ab0: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x2c7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_2c7ab4:
    // 0x2c7ab4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c7ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c7ab8:
    // 0x2c7ab8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c7ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c7abc:
    // 0x2c7abc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c7abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c7ac0:
    // 0x2c7ac0: 0x320f809  jalr        $t9
label_2c7ac4:
    if (ctx->pc == 0x2C7AC4u) {
        ctx->pc = 0x2C7AC8u;
        goto label_2c7ac8;
    }
    ctx->pc = 0x2C7AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C7AC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C7AC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C7AC8u; }
            if (ctx->pc != 0x2C7AC8u) { return; }
        }
        }
    }
    ctx->pc = 0x2C7AC8u;
label_2c7ac8:
    // 0x2c7ac8: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c7acc:
    if (ctx->pc == 0x2C7ACCu) {
        ctx->pc = 0x2C7ACCu;
            // 0x2c7acc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C7AD0u;
        goto label_2c7ad0;
    }
    ctx->pc = 0x2C7AC8u;
    {
        const bool branch_taken_0x2c7ac8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ac8) {
            ctx->pc = 0x2C7ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7AC8u;
            // 0x2c7acc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7AF0u;
            goto label_2c7af0;
        }
    }
    ctx->pc = 0x2C7AD0u;
label_2c7ad0:
    // 0x2c7ad0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c7ad4:
    // 0x2c7ad4: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2c7ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2c7ad8:
    // 0x2c7ad8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2c7adc:
    if (ctx->pc == 0x2C7ADCu) {
        ctx->pc = 0x2C7ADCu;
            // 0x2c7adc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C7AE0u;
        goto label_2c7ae0;
    }
    ctx->pc = 0x2C7AD8u;
    {
        const bool branch_taken_0x2c7ad8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7AD8u;
            // 0x2c7adc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ad8) {
            ctx->pc = 0x2C7AECu;
            goto label_2c7aec;
        }
    }
    ctx->pc = 0x2C7AE0u;
label_2c7ae0:
    // 0x2c7ae0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c7ae4:
    // 0x2c7ae4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c7ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c7ae8:
    // 0x2c7ae8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c7ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c7aec:
    // 0x2c7aec: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c7aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c7af0:
    // 0x2c7af0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c7af0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c7af4:
    // 0x2c7af4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c7af8:
    if (ctx->pc == 0x2C7AF8u) {
        ctx->pc = 0x2C7AF8u;
            // 0x2c7af8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7AFCu;
        goto label_2c7afc;
    }
    ctx->pc = 0x2C7AF4u;
    {
        const bool branch_taken_0x2c7af4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c7af4) {
            ctx->pc = 0x2C7AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7AF4u;
            // 0x2c7af8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7B08u;
            goto label_2c7b08;
        }
    }
    ctx->pc = 0x2C7AFCu;
label_2c7afc:
    // 0x2c7afc: 0xc0400a8  jal         func_1002A0
label_2c7b00:
    if (ctx->pc == 0x2C7B00u) {
        ctx->pc = 0x2C7B00u;
            // 0x2c7b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B04u;
        goto label_2c7b04;
    }
    ctx->pc = 0x2C7AFCu;
    SET_GPR_U32(ctx, 31, 0x2C7B04u);
    ctx->pc = 0x2C7B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7AFCu;
            // 0x2c7b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7B04u; }
        if (ctx->pc != 0x2C7B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7B04u; }
        if (ctx->pc != 0x2C7B04u) { return; }
    }
    ctx->pc = 0x2C7B04u;
label_2c7b04:
    // 0x2c7b04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c7b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b08:
    // 0x2c7b08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c7b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7b0c:
    // 0x2c7b0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c7b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7b10:
    // 0x2c7b10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7b14:
    // 0x2c7b14: 0x3e00008  jr          $ra
label_2c7b18:
    if (ctx->pc == 0x2C7B18u) {
        ctx->pc = 0x2C7B18u;
            // 0x2c7b18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C7B1Cu;
        goto label_2c7b1c;
    }
    ctx->pc = 0x2C7B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7B14u;
            // 0x2c7b18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7B1Cu;
label_2c7b1c:
    // 0x2c7b1c: 0x0  nop
    ctx->pc = 0x2c7b1cu;
    // NOP
}
