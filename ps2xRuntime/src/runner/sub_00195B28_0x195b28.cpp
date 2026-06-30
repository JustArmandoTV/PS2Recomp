#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00195B28
// Address: 0x195b28 - 0x195c80
void sub_00195B28_0x195b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195B28_0x195b28");
#endif

    switch (ctx->pc) {
        case 0x195b28u: goto label_195b28;
        case 0x195b2cu: goto label_195b2c;
        case 0x195b30u: goto label_195b30;
        case 0x195b34u: goto label_195b34;
        case 0x195b38u: goto label_195b38;
        case 0x195b3cu: goto label_195b3c;
        case 0x195b40u: goto label_195b40;
        case 0x195b44u: goto label_195b44;
        case 0x195b48u: goto label_195b48;
        case 0x195b4cu: goto label_195b4c;
        case 0x195b50u: goto label_195b50;
        case 0x195b54u: goto label_195b54;
        case 0x195b58u: goto label_195b58;
        case 0x195b5cu: goto label_195b5c;
        case 0x195b60u: goto label_195b60;
        case 0x195b64u: goto label_195b64;
        case 0x195b68u: goto label_195b68;
        case 0x195b6cu: goto label_195b6c;
        case 0x195b70u: goto label_195b70;
        case 0x195b74u: goto label_195b74;
        case 0x195b78u: goto label_195b78;
        case 0x195b7cu: goto label_195b7c;
        case 0x195b80u: goto label_195b80;
        case 0x195b84u: goto label_195b84;
        case 0x195b88u: goto label_195b88;
        case 0x195b8cu: goto label_195b8c;
        case 0x195b90u: goto label_195b90;
        case 0x195b94u: goto label_195b94;
        case 0x195b98u: goto label_195b98;
        case 0x195b9cu: goto label_195b9c;
        case 0x195ba0u: goto label_195ba0;
        case 0x195ba4u: goto label_195ba4;
        case 0x195ba8u: goto label_195ba8;
        case 0x195bacu: goto label_195bac;
        case 0x195bb0u: goto label_195bb0;
        case 0x195bb4u: goto label_195bb4;
        case 0x195bb8u: goto label_195bb8;
        case 0x195bbcu: goto label_195bbc;
        case 0x195bc0u: goto label_195bc0;
        case 0x195bc4u: goto label_195bc4;
        case 0x195bc8u: goto label_195bc8;
        case 0x195bccu: goto label_195bcc;
        case 0x195bd0u: goto label_195bd0;
        case 0x195bd4u: goto label_195bd4;
        case 0x195bd8u: goto label_195bd8;
        case 0x195bdcu: goto label_195bdc;
        case 0x195be0u: goto label_195be0;
        case 0x195be4u: goto label_195be4;
        case 0x195be8u: goto label_195be8;
        case 0x195becu: goto label_195bec;
        case 0x195bf0u: goto label_195bf0;
        case 0x195bf4u: goto label_195bf4;
        case 0x195bf8u: goto label_195bf8;
        case 0x195bfcu: goto label_195bfc;
        case 0x195c00u: goto label_195c00;
        case 0x195c04u: goto label_195c04;
        case 0x195c08u: goto label_195c08;
        case 0x195c0cu: goto label_195c0c;
        case 0x195c10u: goto label_195c10;
        case 0x195c14u: goto label_195c14;
        case 0x195c18u: goto label_195c18;
        case 0x195c1cu: goto label_195c1c;
        case 0x195c20u: goto label_195c20;
        case 0x195c24u: goto label_195c24;
        case 0x195c28u: goto label_195c28;
        case 0x195c2cu: goto label_195c2c;
        case 0x195c30u: goto label_195c30;
        case 0x195c34u: goto label_195c34;
        case 0x195c38u: goto label_195c38;
        case 0x195c3cu: goto label_195c3c;
        case 0x195c40u: goto label_195c40;
        case 0x195c44u: goto label_195c44;
        case 0x195c48u: goto label_195c48;
        case 0x195c4cu: goto label_195c4c;
        case 0x195c50u: goto label_195c50;
        case 0x195c54u: goto label_195c54;
        case 0x195c58u: goto label_195c58;
        case 0x195c5cu: goto label_195c5c;
        case 0x195c60u: goto label_195c60;
        case 0x195c64u: goto label_195c64;
        case 0x195c68u: goto label_195c68;
        case 0x195c6cu: goto label_195c6c;
        case 0x195c70u: goto label_195c70;
        case 0x195c74u: goto label_195c74;
        case 0x195c78u: goto label_195c78;
        case 0x195c7cu: goto label_195c7c;
        default: break;
    }

    ctx->pc = 0x195b28u;

label_195b28:
    // 0x195b28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x195b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_195b2c:
    // 0x195b2c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x195b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_195b30:
    // 0x195b30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x195b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_195b34:
    // 0x195b34: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x195b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_195b38:
    // 0x195b38: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x195b38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_195b3c:
    // 0x195b3c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x195b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_195b40:
    // 0x195b40: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x195b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_195b44:
    // 0x195b44: 0x10000032  b           . + 4 + (0x32 << 2)
label_195b48:
    if (ctx->pc == 0x195B48u) {
        ctx->pc = 0x195B48u;
            // 0x195b48: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->pc = 0x195B4Cu;
        goto label_195b4c;
    }
    ctx->pc = 0x195B44u;
    {
        const bool branch_taken_0x195b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195B44u;
            // 0x195b48: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b44) {
            ctx->pc = 0x195C10u;
            goto label_195c10;
        }
    }
    ctx->pc = 0x195B4Cu;
label_195b4c:
    // 0x195b4c: 0x0  nop
    ctx->pc = 0x195b4cu;
    // NOP
label_195b50:
    // 0x195b50: 0xc064bc8  jal         func_192F20
label_195b54:
    if (ctx->pc == 0x195B54u) {
        ctx->pc = 0x195B54u;
            // 0x195b54: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x195B58u;
        goto label_195b58;
    }
    ctx->pc = 0x195B50u;
    SET_GPR_U32(ctx, 31, 0x195B58u);
    ctx->pc = 0x195B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195B50u;
            // 0x195b54: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195B58u; }
        if (ctx->pc != 0x195B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195B58u; }
        if (ctx->pc != 0x195B58u) { return; }
    }
    ctx->pc = 0x195B58u;
label_195b58:
    // 0x195b58: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x195b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_195b5c:
    // 0x195b5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195b60:
    // 0x195b60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x195b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_195b64:
    // 0x195b64: 0x16200012  bnez        $s1, . + 4 + (0x12 << 2)
label_195b68:
    if (ctx->pc == 0x195B68u) {
        ctx->pc = 0x195B68u;
            // 0x195b68: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195B6Cu;
        goto label_195b6c;
    }
    ctx->pc = 0x195B64u;
    {
        const bool branch_taken_0x195b64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x195B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195B64u;
            // 0x195b68: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b64) {
            ctx->pc = 0x195BB0u;
            goto label_195bb0;
        }
    }
    ctx->pc = 0x195B6Cu;
label_195b6c:
    // 0x195b6c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x195b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_195b70:
    // 0x195b70: 0xc061c20  jal         func_187080
label_195b74:
    if (ctx->pc == 0x195B74u) {
        ctx->pc = 0x195B74u;
            // 0x195b74: 0x24a5fffd  addiu       $a1, $a1, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
        ctx->pc = 0x195B78u;
        goto label_195b78;
    }
    ctx->pc = 0x195B70u;
    SET_GPR_U32(ctx, 31, 0x195B78u);
    ctx->pc = 0x195B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195B70u;
            // 0x195b74: 0x24a5fffd  addiu       $a1, $a1, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195B78u; }
        if (ctx->pc != 0x195B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195B78u; }
        if (ctx->pc != 0x195B78u) { return; }
    }
    ctx->pc = 0x195B78u;
label_195b78:
    // 0x195b78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x195b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_195b7c:
    // 0x195b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195b80:
    // 0x195b80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195b84:
    // 0x195b84: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x195b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_195b88:
    // 0x195b88: 0x40f809  jalr        $v0
label_195b8c:
    if (ctx->pc == 0x195B8Cu) {
        ctx->pc = 0x195B8Cu;
            // 0x195b8c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195B90u;
        goto label_195b90;
    }
    ctx->pc = 0x195B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195B90u);
        ctx->pc = 0x195B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195B88u;
            // 0x195b8c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x195B90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x195B90u; }
            if (ctx->pc != 0x195B90u) { return; }
        }
        }
    }
    ctx->pc = 0x195B90u;
label_195b90:
    // 0x195b90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x195b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_195b94:
    // 0x195b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195b98:
    // 0x195b98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195b9c:
    // 0x195b9c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x195b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_195ba0:
    // 0x195ba0: 0x40f809  jalr        $v0
label_195ba4:
    if (ctx->pc == 0x195BA4u) {
        ctx->pc = 0x195BA4u;
            // 0x195ba4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195BA8u;
        goto label_195ba8;
    }
    ctx->pc = 0x195BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195BA8u);
        ctx->pc = 0x195BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195BA0u;
            // 0x195ba4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x195BA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x195BA8u; }
            if (ctx->pc != 0x195BA8u) { return; }
        }
        }
    }
    ctx->pc = 0x195BA8u;
label_195ba8:
    // 0x195ba8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_195bac:
    if (ctx->pc == 0x195BACu) {
        ctx->pc = 0x195BACu;
            // 0x195bac: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x195BB0u;
        goto label_195bb0;
    }
    ctx->pc = 0x195BA8u;
    {
        const bool branch_taken_0x195ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195BA8u;
            // 0x195bac: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ba8) {
            ctx->pc = 0x195C14u;
            goto label_195c14;
        }
    }
    ctx->pc = 0x195BB0u;
label_195bb0:
    // 0x195bb0: 0xc064b62  jal         func_192D88
label_195bb4:
    if (ctx->pc == 0x195BB4u) {
        ctx->pc = 0x195BB4u;
            // 0x195bb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195BB8u;
        goto label_195bb8;
    }
    ctx->pc = 0x195BB0u;
    SET_GPR_U32(ctx, 31, 0x195BB8u);
    ctx->pc = 0x195BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195BB0u;
            // 0x195bb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195BB8u; }
        if (ctx->pc != 0x195BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195BB8u; }
        if (ctx->pc != 0x195BB8u) { return; }
    }
    ctx->pc = 0x195BB8u;
label_195bb8:
    // 0x195bb8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x195bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_195bbc:
    // 0x195bbc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x195bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_195bc0:
    // 0x195bc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x195bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_195bc4:
    // 0x195bc4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x195bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_195bc8:
    // 0x195bc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x195bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195bcc:
    // 0x195bcc: 0xc061c20  jal         func_187080
label_195bd0:
    if (ctx->pc == 0x195BD0u) {
        ctx->pc = 0x195BD0u;
            // 0x195bd0: 0x2252823  subu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->pc = 0x195BD4u;
        goto label_195bd4;
    }
    ctx->pc = 0x195BCCu;
    SET_GPR_U32(ctx, 31, 0x195BD4u);
    ctx->pc = 0x195BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195BCCu;
            // 0x195bd0: 0x2252823  subu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195BD4u; }
        if (ctx->pc != 0x195BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195BD4u; }
        if (ctx->pc != 0x195BD4u) { return; }
    }
    ctx->pc = 0x195BD4u;
label_195bd4:
    // 0x195bd4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x195bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_195bd8:
    // 0x195bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195bdc:
    // 0x195bdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195be0:
    // 0x195be0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x195be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_195be4:
    // 0x195be4: 0x40f809  jalr        $v0
label_195be8:
    if (ctx->pc == 0x195BE8u) {
        ctx->pc = 0x195BE8u;
            // 0x195be8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195BECu;
        goto label_195bec;
    }
    ctx->pc = 0x195BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195BECu);
        ctx->pc = 0x195BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195BE4u;
            // 0x195be8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x195BECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x195BECu; }
            if (ctx->pc != 0x195BECu) { return; }
        }
        }
    }
    ctx->pc = 0x195BECu;
label_195bec:
    // 0x195bec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x195becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_195bf0:
    // 0x195bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195bf4:
    // 0x195bf4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x195bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_195bf8:
    // 0x195bf8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x195bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_195bfc:
    // 0x195bfc: 0x40f809  jalr        $v0
label_195c00:
    if (ctx->pc == 0x195C00u) {
        ctx->pc = 0x195C00u;
            // 0x195c00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x195C04u;
        goto label_195c04;
    }
    ctx->pc = 0x195BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195C04u);
        ctx->pc = 0x195C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195BFCu;
            // 0x195c00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x195C04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x195C04u; }
            if (ctx->pc != 0x195C04u) { return; }
        }
        }
    }
    ctx->pc = 0x195C04u;
label_195c04:
    // 0x195c04: 0x10000017  b           . + 4 + (0x17 << 2)
label_195c08:
    if (ctx->pc == 0x195C08u) {
        ctx->pc = 0x195C08u;
            // 0x195c08: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195C0Cu;
        goto label_195c0c;
    }
    ctx->pc = 0x195C04u;
    {
        const bool branch_taken_0x195c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195C04u;
            // 0x195c08: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c04) {
            ctx->pc = 0x195C64u;
            goto label_195c64;
        }
    }
    ctx->pc = 0x195C0Cu;
label_195c0c:
    // 0x195c0c: 0x0  nop
    ctx->pc = 0x195c0cu;
    // NOP
label_195c10:
    // 0x195c10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x195c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_195c14:
    // 0x195c14: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x195c14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_195c18:
    // 0x195c18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195c1c:
    // 0x195c1c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x195c1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_195c20:
    // 0x195c20: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x195c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_195c24:
    // 0x195c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195c28:
    // 0x195c28: 0x40f809  jalr        $v0
label_195c2c:
    if (ctx->pc == 0x195C2Cu) {
        ctx->pc = 0x195C2Cu;
            // 0x195c2c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195C30u;
        goto label_195c30;
    }
    ctx->pc = 0x195C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195C30u);
        ctx->pc = 0x195C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195C28u;
            // 0x195c2c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x195C30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x195C30u; }
            if (ctx->pc != 0x195C30u) { return; }
        }
        }
    }
    ctx->pc = 0x195C30u;
label_195c30:
    // 0x195c30: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x195c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_195c34:
    // 0x195c34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x195c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195c38:
    // 0x195c38: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x195c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_195c3c:
    // 0x195c3c: 0x1040ffc4  beqz        $v0, . + 4 + (-0x3C << 2)
label_195c40:
    if (ctx->pc == 0x195C40u) {
        ctx->pc = 0x195C40u;
            // 0x195c40: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x195C44u;
        goto label_195c44;
    }
    ctx->pc = 0x195C3Cu;
    {
        const bool branch_taken_0x195c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195C3Cu;
            // 0x195c40: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c3c) {
            ctx->pc = 0x195B50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_195b50;
        }
    }
    ctx->pc = 0x195C44u;
label_195c44:
    // 0x195c44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x195c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_195c48:
    // 0x195c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195c4c:
    // 0x195c4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195c50:
    // 0x195c50: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x195c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_195c54:
    // 0x195c54: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x195c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_195c58:
    // 0x195c58: 0x40f809  jalr        $v0
label_195c5c:
    if (ctx->pc == 0x195C5Cu) {
        ctx->pc = 0x195C5Cu;
            // 0x195c5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195C60u;
        goto label_195c60;
    }
    ctx->pc = 0x195C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195C60u);
        ctx->pc = 0x195C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195C58u;
            // 0x195c5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x195C60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x195C60u; }
            if (ctx->pc != 0x195C60u) { return; }
        }
        }
    }
    ctx->pc = 0x195C60u;
label_195c60:
    // 0x195c60: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x195c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_195c64:
    // 0x195c64: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x195c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_195c68:
    // 0x195c68: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x195c68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_195c6c:
    // 0x195c6c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x195c6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_195c70:
    // 0x195c70: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x195c70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_195c74:
    // 0x195c74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x195c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_195c78:
    // 0x195c78: 0x3e00008  jr          $ra
label_195c7c:
    if (ctx->pc == 0x195C7Cu) {
        ctx->pc = 0x195C7Cu;
            // 0x195c7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x195C80u;
        goto label_fallthrough_0x195c78;
    }
    ctx->pc = 0x195C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195C78u;
            // 0x195c7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x195c78:
    ctx->pc = 0x195C80u;
}
