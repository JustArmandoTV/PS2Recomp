#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00502A40
// Address: 0x502a40 - 0x502b80
void sub_00502A40_0x502a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00502A40_0x502a40");
#endif

    switch (ctx->pc) {
        case 0x502a40u: goto label_502a40;
        case 0x502a44u: goto label_502a44;
        case 0x502a48u: goto label_502a48;
        case 0x502a4cu: goto label_502a4c;
        case 0x502a50u: goto label_502a50;
        case 0x502a54u: goto label_502a54;
        case 0x502a58u: goto label_502a58;
        case 0x502a5cu: goto label_502a5c;
        case 0x502a60u: goto label_502a60;
        case 0x502a64u: goto label_502a64;
        case 0x502a68u: goto label_502a68;
        case 0x502a6cu: goto label_502a6c;
        case 0x502a70u: goto label_502a70;
        case 0x502a74u: goto label_502a74;
        case 0x502a78u: goto label_502a78;
        case 0x502a7cu: goto label_502a7c;
        case 0x502a80u: goto label_502a80;
        case 0x502a84u: goto label_502a84;
        case 0x502a88u: goto label_502a88;
        case 0x502a8cu: goto label_502a8c;
        case 0x502a90u: goto label_502a90;
        case 0x502a94u: goto label_502a94;
        case 0x502a98u: goto label_502a98;
        case 0x502a9cu: goto label_502a9c;
        case 0x502aa0u: goto label_502aa0;
        case 0x502aa4u: goto label_502aa4;
        case 0x502aa8u: goto label_502aa8;
        case 0x502aacu: goto label_502aac;
        case 0x502ab0u: goto label_502ab0;
        case 0x502ab4u: goto label_502ab4;
        case 0x502ab8u: goto label_502ab8;
        case 0x502abcu: goto label_502abc;
        case 0x502ac0u: goto label_502ac0;
        case 0x502ac4u: goto label_502ac4;
        case 0x502ac8u: goto label_502ac8;
        case 0x502accu: goto label_502acc;
        case 0x502ad0u: goto label_502ad0;
        case 0x502ad4u: goto label_502ad4;
        case 0x502ad8u: goto label_502ad8;
        case 0x502adcu: goto label_502adc;
        case 0x502ae0u: goto label_502ae0;
        case 0x502ae4u: goto label_502ae4;
        case 0x502ae8u: goto label_502ae8;
        case 0x502aecu: goto label_502aec;
        case 0x502af0u: goto label_502af0;
        case 0x502af4u: goto label_502af4;
        case 0x502af8u: goto label_502af8;
        case 0x502afcu: goto label_502afc;
        case 0x502b00u: goto label_502b00;
        case 0x502b04u: goto label_502b04;
        case 0x502b08u: goto label_502b08;
        case 0x502b0cu: goto label_502b0c;
        case 0x502b10u: goto label_502b10;
        case 0x502b14u: goto label_502b14;
        case 0x502b18u: goto label_502b18;
        case 0x502b1cu: goto label_502b1c;
        case 0x502b20u: goto label_502b20;
        case 0x502b24u: goto label_502b24;
        case 0x502b28u: goto label_502b28;
        case 0x502b2cu: goto label_502b2c;
        case 0x502b30u: goto label_502b30;
        case 0x502b34u: goto label_502b34;
        case 0x502b38u: goto label_502b38;
        case 0x502b3cu: goto label_502b3c;
        case 0x502b40u: goto label_502b40;
        case 0x502b44u: goto label_502b44;
        case 0x502b48u: goto label_502b48;
        case 0x502b4cu: goto label_502b4c;
        case 0x502b50u: goto label_502b50;
        case 0x502b54u: goto label_502b54;
        case 0x502b58u: goto label_502b58;
        case 0x502b5cu: goto label_502b5c;
        case 0x502b60u: goto label_502b60;
        case 0x502b64u: goto label_502b64;
        case 0x502b68u: goto label_502b68;
        case 0x502b6cu: goto label_502b6c;
        case 0x502b70u: goto label_502b70;
        case 0x502b74u: goto label_502b74;
        case 0x502b78u: goto label_502b78;
        case 0x502b7cu: goto label_502b7c;
        default: break;
    }

    ctx->pc = 0x502a40u;

label_502a40:
    // 0x502a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x502a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_502a44:
    // 0x502a44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x502a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_502a48:
    // 0x502a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x502a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_502a4c:
    // 0x502a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x502a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_502a50:
    // 0x502a50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x502a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_502a54:
    // 0x502a54: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_502a58:
    if (ctx->pc == 0x502A58u) {
        ctx->pc = 0x502A58u;
            // 0x502a58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502A5Cu;
        goto label_502a5c;
    }
    ctx->pc = 0x502A54u;
    {
        const bool branch_taken_0x502a54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x502A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502A54u;
            // 0x502a58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502a54) {
            ctx->pc = 0x502A98u;
            goto label_502a98;
        }
    }
    ctx->pc = 0x502A5Cu;
label_502a5c:
    // 0x502a5c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_502a60:
    if (ctx->pc == 0x502A60u) {
        ctx->pc = 0x502A60u;
            // 0x502a60: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x502A64u;
        goto label_502a64;
    }
    ctx->pc = 0x502A5Cu;
    {
        const bool branch_taken_0x502a5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x502a5c) {
            ctx->pc = 0x502A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x502A5Cu;
            // 0x502a60: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502A84u;
            goto label_502a84;
        }
    }
    ctx->pc = 0x502A64u;
label_502a64:
    // 0x502a64: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_502a68:
    if (ctx->pc == 0x502A68u) {
        ctx->pc = 0x502A6Cu;
        goto label_502a6c;
    }
    ctx->pc = 0x502A64u;
    {
        const bool branch_taken_0x502a64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x502a64) {
            ctx->pc = 0x502A80u;
            goto label_502a80;
        }
    }
    ctx->pc = 0x502A6Cu;
label_502a6c:
    // 0x502a6c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x502a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_502a70:
    // 0x502a70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_502a74:
    if (ctx->pc == 0x502A74u) {
        ctx->pc = 0x502A78u;
        goto label_502a78;
    }
    ctx->pc = 0x502A70u;
    {
        const bool branch_taken_0x502a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x502a70) {
            ctx->pc = 0x502A80u;
            goto label_502a80;
        }
    }
    ctx->pc = 0x502A78u;
label_502a78:
    // 0x502a78: 0xc0400a8  jal         func_1002A0
label_502a7c:
    if (ctx->pc == 0x502A7Cu) {
        ctx->pc = 0x502A80u;
        goto label_502a80;
    }
    ctx->pc = 0x502A78u;
    SET_GPR_U32(ctx, 31, 0x502A80u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502A80u; }
        if (ctx->pc != 0x502A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502A80u; }
        if (ctx->pc != 0x502A80u) { return; }
    }
    ctx->pc = 0x502A80u;
label_502a80:
    // 0x502a80: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x502a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_502a84:
    // 0x502a84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x502a84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_502a88:
    // 0x502a88: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_502a8c:
    if (ctx->pc == 0x502A8Cu) {
        ctx->pc = 0x502A8Cu;
            // 0x502a8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502A90u;
        goto label_502a90;
    }
    ctx->pc = 0x502A88u;
    {
        const bool branch_taken_0x502a88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x502a88) {
            ctx->pc = 0x502A8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x502A88u;
            // 0x502a8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502A9Cu;
            goto label_502a9c;
        }
    }
    ctx->pc = 0x502A90u;
label_502a90:
    // 0x502a90: 0xc0400a8  jal         func_1002A0
label_502a94:
    if (ctx->pc == 0x502A94u) {
        ctx->pc = 0x502A94u;
            // 0x502a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502A98u;
        goto label_502a98;
    }
    ctx->pc = 0x502A90u;
    SET_GPR_U32(ctx, 31, 0x502A98u);
    ctx->pc = 0x502A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502A90u;
            // 0x502a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502A98u; }
        if (ctx->pc != 0x502A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502A98u; }
        if (ctx->pc != 0x502A98u) { return; }
    }
    ctx->pc = 0x502A98u;
label_502a98:
    // 0x502a98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x502a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_502a9c:
    // 0x502a9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x502a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_502aa0:
    // 0x502aa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x502aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_502aa4:
    // 0x502aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x502aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_502aa8:
    // 0x502aa8: 0x3e00008  jr          $ra
label_502aac:
    if (ctx->pc == 0x502AACu) {
        ctx->pc = 0x502AACu;
            // 0x502aac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x502AB0u;
        goto label_502ab0;
    }
    ctx->pc = 0x502AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x502AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502AA8u;
            // 0x502aac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x502AB0u;
label_502ab0:
    // 0x502ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x502ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_502ab4:
    // 0x502ab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x502ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_502ab8:
    // 0x502ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x502ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_502abc:
    // 0x502abc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x502abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_502ac0:
    // 0x502ac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x502ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_502ac4:
    // 0x502ac4: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
label_502ac8:
    if (ctx->pc == 0x502AC8u) {
        ctx->pc = 0x502AC8u;
            // 0x502ac8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502ACCu;
        goto label_502acc;
    }
    ctx->pc = 0x502AC4u;
    {
        const bool branch_taken_0x502ac4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x502AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502AC4u;
            // 0x502ac8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502ac4) {
            ctx->pc = 0x502B68u;
            goto label_502b68;
        }
    }
    ctx->pc = 0x502ACCu;
label_502acc:
    // 0x502acc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x502accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_502ad0:
    // 0x502ad0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x502ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_502ad4:
    // 0x502ad4: 0x244248f0  addiu       $v0, $v0, 0x48F0
    ctx->pc = 0x502ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18672));
label_502ad8:
    // 0x502ad8: 0x24634930  addiu       $v1, $v1, 0x4930
    ctx->pc = 0x502ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18736));
label_502adc:
    // 0x502adc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x502adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_502ae0:
    // 0x502ae0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x502ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_502ae4:
    // 0x502ae4: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x502ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_502ae8:
    // 0x502ae8: 0x2442498c  addiu       $v0, $v0, 0x498C
    ctx->pc = 0x502ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18828));
label_502aec:
    // 0x502aec: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x502aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
label_502af0:
    // 0x502af0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x502af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_502af4:
    // 0x502af4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x502af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_502af8:
    // 0x502af8: 0x320f809  jalr        $t9
label_502afc:
    if (ctx->pc == 0x502AFCu) {
        ctx->pc = 0x502B00u;
        goto label_502b00;
    }
    ctx->pc = 0x502AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x502B00u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x502B00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x502B00u; }
            if (ctx->pc != 0x502B00u) { return; }
        }
        }
    }
    ctx->pc = 0x502B00u;
label_502b00:
    // 0x502b00: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
label_502b04:
    if (ctx->pc == 0x502B04u) {
        ctx->pc = 0x502B04u;
            // 0x502b04: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x502B08u;
        goto label_502b08;
    }
    ctx->pc = 0x502B00u;
    {
        const bool branch_taken_0x502b00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x502b00) {
            ctx->pc = 0x502B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x502B00u;
            // 0x502b04: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502B54u;
            goto label_502b54;
        }
    }
    ctx->pc = 0x502B08u;
label_502b08:
    // 0x502b08: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x502b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_502b0c:
    // 0x502b0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x502b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_502b10:
    // 0x502b10: 0x24424810  addiu       $v0, $v0, 0x4810
    ctx->pc = 0x502b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18448));
label_502b14:
    // 0x502b14: 0x24634850  addiu       $v1, $v1, 0x4850
    ctx->pc = 0x502b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18512));
label_502b18:
    // 0x502b18: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x502b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_502b1c:
    // 0x502b1c: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x502b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_502b20:
    // 0x502b20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x502b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_502b24:
    // 0x502b24: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x502b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_502b28:
    // 0x502b28: 0x244248ac  addiu       $v0, $v0, 0x48AC
    ctx->pc = 0x502b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18604));
label_502b2c:
    // 0x502b2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x502b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_502b30:
    // 0x502b30: 0xc140af4  jal         func_502BD0
label_502b34:
    if (ctx->pc == 0x502B34u) {
        ctx->pc = 0x502B34u;
            // 0x502b34: 0xae2200d0  sw          $v0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x502B38u;
        goto label_502b38;
    }
    ctx->pc = 0x502B30u;
    SET_GPR_U32(ctx, 31, 0x502B38u);
    ctx->pc = 0x502B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502B30u;
            // 0x502b34: 0xae2200d0  sw          $v0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502BD0u;
    if (runtime->hasFunction(0x502BD0u)) {
        auto targetFn = runtime->lookupFunction(0x502BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502B38u; }
        if (ctx->pc != 0x502B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00502BD0_0x502bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502B38u; }
        if (ctx->pc != 0x502B38u) { return; }
    }
    ctx->pc = 0x502B38u;
label_502b38:
    // 0x502b38: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x502b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_502b3c:
    // 0x502b3c: 0xc140ae0  jal         func_502B80
label_502b40:
    if (ctx->pc == 0x502B40u) {
        ctx->pc = 0x502B40u;
            // 0x502b40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502B44u;
        goto label_502b44;
    }
    ctx->pc = 0x502B3Cu;
    SET_GPR_U32(ctx, 31, 0x502B44u);
    ctx->pc = 0x502B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502B3Cu;
            // 0x502b40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502B80u;
    if (runtime->hasFunction(0x502B80u)) {
        auto targetFn = runtime->lookupFunction(0x502B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502B44u; }
        if (ctx->pc != 0x502B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00502B80_0x502b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502B44u; }
        if (ctx->pc != 0x502B44u) { return; }
    }
    ctx->pc = 0x502B44u;
label_502b44:
    // 0x502b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x502b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_502b48:
    // 0x502b48: 0xc0aee40  jal         func_2BB900
label_502b4c:
    if (ctx->pc == 0x502B4Cu) {
        ctx->pc = 0x502B4Cu;
            // 0x502b4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502B50u;
        goto label_502b50;
    }
    ctx->pc = 0x502B48u;
    SET_GPR_U32(ctx, 31, 0x502B50u);
    ctx->pc = 0x502B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502B48u;
            // 0x502b4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502B50u; }
        if (ctx->pc != 0x502B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502B50u; }
        if (ctx->pc != 0x502B50u) { return; }
    }
    ctx->pc = 0x502B50u;
label_502b50:
    // 0x502b50: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x502b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_502b54:
    // 0x502b54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x502b54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_502b58:
    // 0x502b58: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_502b5c:
    if (ctx->pc == 0x502B5Cu) {
        ctx->pc = 0x502B5Cu;
            // 0x502b5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502B60u;
        goto label_502b60;
    }
    ctx->pc = 0x502B58u;
    {
        const bool branch_taken_0x502b58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x502b58) {
            ctx->pc = 0x502B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x502B58u;
            // 0x502b5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502B6Cu;
            goto label_502b6c;
        }
    }
    ctx->pc = 0x502B60u;
label_502b60:
    // 0x502b60: 0xc0400a8  jal         func_1002A0
label_502b64:
    if (ctx->pc == 0x502B64u) {
        ctx->pc = 0x502B64u;
            // 0x502b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502B68u;
        goto label_502b68;
    }
    ctx->pc = 0x502B60u;
    SET_GPR_U32(ctx, 31, 0x502B68u);
    ctx->pc = 0x502B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502B60u;
            // 0x502b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502B68u; }
        if (ctx->pc != 0x502B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502B68u; }
        if (ctx->pc != 0x502B68u) { return; }
    }
    ctx->pc = 0x502B68u;
label_502b68:
    // 0x502b68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x502b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_502b6c:
    // 0x502b6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x502b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_502b70:
    // 0x502b70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x502b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_502b74:
    // 0x502b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x502b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_502b78:
    // 0x502b78: 0x3e00008  jr          $ra
label_502b7c:
    if (ctx->pc == 0x502B7Cu) {
        ctx->pc = 0x502B7Cu;
            // 0x502b7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x502B80u;
        goto label_fallthrough_0x502b78;
    }
    ctx->pc = 0x502B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x502B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502B78u;
            // 0x502b7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x502b78:
    ctx->pc = 0x502B80u;
}
