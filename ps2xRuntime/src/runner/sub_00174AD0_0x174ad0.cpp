#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174AD0
// Address: 0x174ad0 - 0x174c50
void sub_00174AD0_0x174ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174AD0_0x174ad0");
#endif

    switch (ctx->pc) {
        case 0x174ad0u: goto label_174ad0;
        case 0x174ad4u: goto label_174ad4;
        case 0x174ad8u: goto label_174ad8;
        case 0x174adcu: goto label_174adc;
        case 0x174ae0u: goto label_174ae0;
        case 0x174ae4u: goto label_174ae4;
        case 0x174ae8u: goto label_174ae8;
        case 0x174aecu: goto label_174aec;
        case 0x174af0u: goto label_174af0;
        case 0x174af4u: goto label_174af4;
        case 0x174af8u: goto label_174af8;
        case 0x174afcu: goto label_174afc;
        case 0x174b00u: goto label_174b00;
        case 0x174b04u: goto label_174b04;
        case 0x174b08u: goto label_174b08;
        case 0x174b0cu: goto label_174b0c;
        case 0x174b10u: goto label_174b10;
        case 0x174b14u: goto label_174b14;
        case 0x174b18u: goto label_174b18;
        case 0x174b1cu: goto label_174b1c;
        case 0x174b20u: goto label_174b20;
        case 0x174b24u: goto label_174b24;
        case 0x174b28u: goto label_174b28;
        case 0x174b2cu: goto label_174b2c;
        case 0x174b30u: goto label_174b30;
        case 0x174b34u: goto label_174b34;
        case 0x174b38u: goto label_174b38;
        case 0x174b3cu: goto label_174b3c;
        case 0x174b40u: goto label_174b40;
        case 0x174b44u: goto label_174b44;
        case 0x174b48u: goto label_174b48;
        case 0x174b4cu: goto label_174b4c;
        case 0x174b50u: goto label_174b50;
        case 0x174b54u: goto label_174b54;
        case 0x174b58u: goto label_174b58;
        case 0x174b5cu: goto label_174b5c;
        case 0x174b60u: goto label_174b60;
        case 0x174b64u: goto label_174b64;
        case 0x174b68u: goto label_174b68;
        case 0x174b6cu: goto label_174b6c;
        case 0x174b70u: goto label_174b70;
        case 0x174b74u: goto label_174b74;
        case 0x174b78u: goto label_174b78;
        case 0x174b7cu: goto label_174b7c;
        case 0x174b80u: goto label_174b80;
        case 0x174b84u: goto label_174b84;
        case 0x174b88u: goto label_174b88;
        case 0x174b8cu: goto label_174b8c;
        case 0x174b90u: goto label_174b90;
        case 0x174b94u: goto label_174b94;
        case 0x174b98u: goto label_174b98;
        case 0x174b9cu: goto label_174b9c;
        case 0x174ba0u: goto label_174ba0;
        case 0x174ba4u: goto label_174ba4;
        case 0x174ba8u: goto label_174ba8;
        case 0x174bacu: goto label_174bac;
        case 0x174bb0u: goto label_174bb0;
        case 0x174bb4u: goto label_174bb4;
        case 0x174bb8u: goto label_174bb8;
        case 0x174bbcu: goto label_174bbc;
        case 0x174bc0u: goto label_174bc0;
        case 0x174bc4u: goto label_174bc4;
        case 0x174bc8u: goto label_174bc8;
        case 0x174bccu: goto label_174bcc;
        case 0x174bd0u: goto label_174bd0;
        case 0x174bd4u: goto label_174bd4;
        case 0x174bd8u: goto label_174bd8;
        case 0x174bdcu: goto label_174bdc;
        case 0x174be0u: goto label_174be0;
        case 0x174be4u: goto label_174be4;
        case 0x174be8u: goto label_174be8;
        case 0x174becu: goto label_174bec;
        case 0x174bf0u: goto label_174bf0;
        case 0x174bf4u: goto label_174bf4;
        case 0x174bf8u: goto label_174bf8;
        case 0x174bfcu: goto label_174bfc;
        case 0x174c00u: goto label_174c00;
        case 0x174c04u: goto label_174c04;
        case 0x174c08u: goto label_174c08;
        case 0x174c0cu: goto label_174c0c;
        case 0x174c10u: goto label_174c10;
        case 0x174c14u: goto label_174c14;
        case 0x174c18u: goto label_174c18;
        case 0x174c1cu: goto label_174c1c;
        case 0x174c20u: goto label_174c20;
        case 0x174c24u: goto label_174c24;
        case 0x174c28u: goto label_174c28;
        case 0x174c2cu: goto label_174c2c;
        case 0x174c30u: goto label_174c30;
        case 0x174c34u: goto label_174c34;
        case 0x174c38u: goto label_174c38;
        case 0x174c3cu: goto label_174c3c;
        case 0x174c40u: goto label_174c40;
        case 0x174c44u: goto label_174c44;
        case 0x174c48u: goto label_174c48;
        case 0x174c4cu: goto label_174c4c;
        default: break;
    }

    ctx->pc = 0x174ad0u;

label_174ad0:
    // 0x174ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_174ad4:
    // 0x174ad4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x174ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_174ad8:
    // 0x174ad8: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x174ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
label_174adc:
    // 0x174adc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_174ae0:
    // 0x174ae0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x174ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_174ae4:
    // 0x174ae4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x174ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_174ae8:
    // 0x174ae8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x174ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_174aec:
    // 0x174aec: 0xc0599d2  jal         func_166748
label_174af0:
    if (ctx->pc == 0x174AF0u) {
        ctx->pc = 0x174AF0u;
            // 0x174af0: 0x26703f20  addiu       $s0, $s3, 0x3F20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16160));
        ctx->pc = 0x174AF4u;
        goto label_174af4;
    }
    ctx->pc = 0x174AECu;
    SET_GPR_U32(ctx, 31, 0x174AF4u);
    ctx->pc = 0x174AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174AECu;
            // 0x174af0: 0x26703f20  addiu       $s0, $s3, 0x3F20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AF4u; }
        if (ctx->pc != 0x174AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AF4u; }
        if (ctx->pc != 0x174AF4u) { return; }
    }
    ctx->pc = 0x174AF4u;
label_174af4:
    // 0x174af4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x174af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_174af8:
    // 0x174af8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_174afc:
    if (ctx->pc == 0x174AFCu) {
        ctx->pc = 0x174AFCu;
            // 0x174afc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x174B00u;
        goto label_174b00;
    }
    ctx->pc = 0x174AF8u;
    {
        const bool branch_taken_0x174af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174AF8u;
            // 0x174afc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174af8) {
            ctx->pc = 0x174B18u;
            goto label_174b18;
        }
    }
    ctx->pc = 0x174B00u;
label_174b00:
    // 0x174b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174b04:
    // 0x174b04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x174b04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174b08:
    // 0x174b08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x174b08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_174b0c:
    // 0x174b0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x174b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_174b10:
    // 0x174b10: 0x80599d8  j           func_166760
label_174b14:
    if (ctx->pc == 0x174B14u) {
        ctx->pc = 0x174B14u;
            // 0x174b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x174B18u;
        goto label_174b18;
    }
    ctx->pc = 0x174B10u;
    ctx->pc = 0x174B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174B10u;
            // 0x174b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166760_0x166760(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x174B18u;
label_174b18:
    // 0x174b18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174b1c:
    // 0x174b1c: 0xc0599d8  jal         func_166760
label_174b20:
    if (ctx->pc == 0x174B20u) {
        ctx->pc = 0x174B20u;
            // 0x174b20: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x174B24u;
        goto label_174b24;
    }
    ctx->pc = 0x174B1Cu;
    SET_GPR_U32(ctx, 31, 0x174B24u);
    ctx->pc = 0x174B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174B1Cu;
            // 0x174b20: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B24u; }
        if (ctx->pc != 0x174B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B24u; }
        if (ctx->pc != 0x174B24u) { return; }
    }
    ctx->pc = 0x174B24u;
label_174b24:
    // 0x174b24: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x174b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_174b28:
    // 0x174b28: 0x8c433efc  lw          $v1, 0x3EFC($v0)
    ctx->pc = 0x174b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16124)));
label_174b2c:
    // 0x174b2c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_174b30:
    if (ctx->pc == 0x174B30u) {
        ctx->pc = 0x174B30u;
            // 0x174b30: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x174B34u;
        goto label_174b34;
    }
    ctx->pc = 0x174B2Cu;
    {
        const bool branch_taken_0x174b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174B2Cu;
            // 0x174b30: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b2c) {
            ctx->pc = 0x174B3Cu;
            goto label_174b3c;
        }
    }
    ctx->pc = 0x174B34u;
label_174b34:
    // 0x174b34: 0x60f809  jalr        $v1
label_174b38:
    if (ctx->pc == 0x174B38u) {
        ctx->pc = 0x174B38u;
            // 0x174b38: 0x8c443f00  lw          $a0, 0x3F00($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16128)));
        ctx->pc = 0x174B3Cu;
        goto label_174b3c;
    }
    ctx->pc = 0x174B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x174B3Cu);
        ctx->pc = 0x174B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174B34u;
            // 0x174b38: 0x8c443f00  lw          $a0, 0x3F00($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16128)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x174B3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174B3Cu; }
            if (ctx->pc != 0x174B3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x174B3Cu;
label_174b3c:
    // 0x174b3c: 0xc0599d2  jal         func_166748
label_174b40:
    if (ctx->pc == 0x174B40u) {
        ctx->pc = 0x174B44u;
        goto label_174b44;
    }
    ctx->pc = 0x174B3Cu;
    SET_GPR_U32(ctx, 31, 0x174B44u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B44u; }
        if (ctx->pc != 0x174B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B44u; }
        if (ctx->pc != 0x174B44u) { return; }
    }
    ctx->pc = 0x174B44u;
label_174b44:
    // 0x174b44: 0xc05bfba  jal         func_16FEE8
label_174b48:
    if (ctx->pc == 0x174B48u) {
        ctx->pc = 0x174B4Cu;
        goto label_174b4c;
    }
    ctx->pc = 0x174B44u;
    SET_GPR_U32(ctx, 31, 0x174B4Cu);
    ctx->pc = 0x16FEE8u;
    if (runtime->hasFunction(0x16FEE8u)) {
        auto targetFn = runtime->lookupFunction(0x16FEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B4Cu; }
        if (ctx->pc != 0x174B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FEE8_0x16fee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B4Cu; }
        if (ctx->pc != 0x174B4Cu) { return; }
    }
    ctx->pc = 0x174B4Cu;
label_174b4c:
    // 0x174b4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x174b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_174b50:
    // 0x174b50: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x174b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_174b54:
    // 0x174b54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x174b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_174b58:
    // 0x174b58: 0x24709d90  addiu       $s0, $v1, -0x6270
    ctx->pc = 0x174b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942096));
label_174b5c:
    // 0x174b5c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x174b5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174b60:
    // 0x174b60: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x174b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_174b64:
    // 0x174b64: 0x0  nop
    ctx->pc = 0x174b64u;
    // NOP
label_174b68:
    // 0x174b68: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x174b68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_174b6c:
    // 0x174b6c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
label_174b70:
    if (ctx->pc == 0x174B70u) {
        ctx->pc = 0x174B70u;
            // 0x174b70: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x174B74u;
        goto label_174b74;
    }
    ctx->pc = 0x174B6Cu;
    {
        const bool branch_taken_0x174b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x174b6c) {
            ctx->pc = 0x174B70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174B6Cu;
            // 0x174b70: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174B80u;
            goto label_174b80;
        }
    }
    ctx->pc = 0x174B74u;
label_174b74:
    // 0x174b74: 0xc05de84  jal         func_177A10
label_174b78:
    if (ctx->pc == 0x174B78u) {
        ctx->pc = 0x174B78u;
            // 0x174b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174B7Cu;
        goto label_174b7c;
    }
    ctx->pc = 0x174B74u;
    SET_GPR_U32(ctx, 31, 0x174B7Cu);
    ctx->pc = 0x174B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174B74u;
            // 0x174b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177A10u;
    if (runtime->hasFunction(0x177A10u)) {
        auto targetFn = runtime->lookupFunction(0x177A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B7Cu; }
        if (ctx->pc != 0x174B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177A10_0x177a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B7Cu; }
        if (ctx->pc != 0x174B7Cu) { return; }
    }
    ctx->pc = 0x174B7Cu;
label_174b7c:
    // 0x174b7c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x174b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_174b80:
    // 0x174b80: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
label_174b84:
    if (ctx->pc == 0x174B84u) {
        ctx->pc = 0x174B84u;
            // 0x174b84: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->pc = 0x174B88u;
        goto label_174b88;
    }
    ctx->pc = 0x174B80u;
    {
        const bool branch_taken_0x174b80 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x174B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174B80u;
            // 0x174b84: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b80) {
            ctx->pc = 0x174B68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174b68;
        }
    }
    ctx->pc = 0x174B88u;
label_174b88:
    // 0x174b88: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x174b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_174b8c:
    // 0x174b8c: 0x26703f20  addiu       $s0, $s3, 0x3F20
    ctx->pc = 0x174b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16160));
label_174b90:
    // 0x174b90: 0x8c633f0c  lw          $v1, 0x3F0C($v1)
    ctx->pc = 0x174b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16140)));
label_174b94:
    // 0x174b94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x174b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_174b98:
    // 0x174b98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x174b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_174b9c:
    // 0x174b9c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_174ba0:
    if (ctx->pc == 0x174BA0u) {
        ctx->pc = 0x174BA0u;
            // 0x174ba0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x174BA4u;
        goto label_174ba4;
    }
    ctx->pc = 0x174B9Cu;
    {
        const bool branch_taken_0x174b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174B9Cu;
            // 0x174ba0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b9c) {
            ctx->pc = 0x174BACu;
            goto label_174bac;
        }
    }
    ctx->pc = 0x174BA4u;
label_174ba4:
    // 0x174ba4: 0x60f809  jalr        $v1
label_174ba8:
    if (ctx->pc == 0x174BA8u) {
        ctx->pc = 0x174BA8u;
            // 0x174ba8: 0x8c443f10  lw          $a0, 0x3F10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16144)));
        ctx->pc = 0x174BACu;
        goto label_174bac;
    }
    ctx->pc = 0x174BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x174BACu);
        ctx->pc = 0x174BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174BA4u;
            // 0x174ba8: 0x8c443f10  lw          $a0, 0x3F10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16144)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x174BACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174BACu; }
            if (ctx->pc != 0x174BACu) { return; }
        }
        }
    }
    ctx->pc = 0x174BACu;
label_174bac:
    // 0x174bac: 0xc05ba9c  jal         func_16EA70
label_174bb0:
    if (ctx->pc == 0x174BB0u) {
        ctx->pc = 0x174BB4u;
        goto label_174bb4;
    }
    ctx->pc = 0x174BACu;
    SET_GPR_U32(ctx, 31, 0x174BB4u);
    ctx->pc = 0x16EA70u;
    if (runtime->hasFunction(0x16EA70u)) {
        auto targetFn = runtime->lookupFunction(0x16EA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174BB4u; }
        if (ctx->pc != 0x174BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EA70_0x16ea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174BB4u; }
        if (ctx->pc != 0x174BB4u) { return; }
    }
    ctx->pc = 0x174BB4u;
label_174bb4:
    // 0x174bb4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x174bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_174bb8:
    // 0x174bb8: 0x8c623f28  lw          $v0, 0x3F28($v1)
    ctx->pc = 0x174bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16168)));
label_174bbc:
    // 0x174bbc: 0x28420033  slti        $v0, $v0, 0x33
    ctx->pc = 0x174bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
label_174bc0:
    // 0x174bc0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_174bc4:
    if (ctx->pc == 0x174BC4u) {
        ctx->pc = 0x174BC4u;
            // 0x174bc4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x174BC8u;
        goto label_174bc8;
    }
    ctx->pc = 0x174BC0u;
    {
        const bool branch_taken_0x174bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174bc0) {
            ctx->pc = 0x174BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174BC0u;
            // 0x174bc4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174BD4u;
            goto label_174bd4;
        }
    }
    ctx->pc = 0x174BC8u;
label_174bc8:
    // 0x174bc8: 0xc05ba9c  jal         func_16EA70
label_174bcc:
    if (ctx->pc == 0x174BCCu) {
        ctx->pc = 0x174BD0u;
        goto label_174bd0;
    }
    ctx->pc = 0x174BC8u;
    SET_GPR_U32(ctx, 31, 0x174BD0u);
    ctx->pc = 0x16EA70u;
    if (runtime->hasFunction(0x16EA70u)) {
        auto targetFn = runtime->lookupFunction(0x16EA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174BD0u; }
        if (ctx->pc != 0x174BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EA70_0x16ea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174BD0u; }
        if (ctx->pc != 0x174BD0u) { return; }
    }
    ctx->pc = 0x174BD0u;
label_174bd0:
    // 0x174bd0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x174bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_174bd4:
    // 0x174bd4: 0x8c433f14  lw          $v1, 0x3F14($v0)
    ctx->pc = 0x174bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16148)));
label_174bd8:
    // 0x174bd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_174bdc:
    if (ctx->pc == 0x174BDCu) {
        ctx->pc = 0x174BDCu;
            // 0x174bdc: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x174BE0u;
        goto label_174be0;
    }
    ctx->pc = 0x174BD8u;
    {
        const bool branch_taken_0x174bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174BD8u;
            // 0x174bdc: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bd8) {
            ctx->pc = 0x174BE8u;
            goto label_174be8;
        }
    }
    ctx->pc = 0x174BE0u;
label_174be0:
    // 0x174be0: 0x60f809  jalr        $v1
label_174be4:
    if (ctx->pc == 0x174BE4u) {
        ctx->pc = 0x174BE4u;
            // 0x174be4: 0x8c443f18  lw          $a0, 0x3F18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16152)));
        ctx->pc = 0x174BE8u;
        goto label_174be8;
    }
    ctx->pc = 0x174BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x174BE8u);
        ctx->pc = 0x174BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174BE0u;
            // 0x174be4: 0x8c443f18  lw          $a0, 0x3F18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16152)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x174BE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174BE8u; }
            if (ctx->pc != 0x174BE8u) { return; }
        }
        }
    }
    ctx->pc = 0x174BE8u;
label_174be8:
    // 0x174be8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x174be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_174bec:
    // 0x174bec: 0xc0599d8  jal         func_166760
label_174bf0:
    if (ctx->pc == 0x174BF0u) {
        ctx->pc = 0x174BF4u;
        goto label_174bf4;
    }
    ctx->pc = 0x174BECu;
    SET_GPR_U32(ctx, 31, 0x174BF4u);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174BF4u; }
        if (ctx->pc != 0x174BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174BF4u; }
        if (ctx->pc != 0x174BF4u) { return; }
    }
    ctx->pc = 0x174BF4u;
label_174bf4:
    // 0x174bf4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x174bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_174bf8:
    // 0x174bf8: 0x8c433f04  lw          $v1, 0x3F04($v0)
    ctx->pc = 0x174bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16132)));
label_174bfc:
    // 0x174bfc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_174c00:
    if (ctx->pc == 0x174C00u) {
        ctx->pc = 0x174C00u;
            // 0x174c00: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x174C04u;
        goto label_174c04;
    }
    ctx->pc = 0x174BFCu;
    {
        const bool branch_taken_0x174bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174BFCu;
            // 0x174c00: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bfc) {
            ctx->pc = 0x174C0Cu;
            goto label_174c0c;
        }
    }
    ctx->pc = 0x174C04u;
label_174c04:
    // 0x174c04: 0x60f809  jalr        $v1
label_174c08:
    if (ctx->pc == 0x174C08u) {
        ctx->pc = 0x174C08u;
            // 0x174c08: 0x8c443f08  lw          $a0, 0x3F08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16136)));
        ctx->pc = 0x174C0Cu;
        goto label_174c0c;
    }
    ctx->pc = 0x174C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x174C0Cu);
        ctx->pc = 0x174C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174C04u;
            // 0x174c08: 0x8c443f08  lw          $a0, 0x3F08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16136)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x174C0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174C0Cu; }
            if (ctx->pc != 0x174C0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x174C0Cu;
label_174c0c:
    // 0x174c0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174c10:
    // 0x174c10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x174c10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_174c14:
    // 0x174c14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x174c14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174c18:
    // 0x174c18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x174c18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_174c1c:
    // 0x174c1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x174c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_174c20:
    // 0x174c20: 0x3e00008  jr          $ra
label_174c24:
    if (ctx->pc == 0x174C24u) {
        ctx->pc = 0x174C24u;
            // 0x174c24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x174C28u;
        goto label_174c28;
    }
    ctx->pc = 0x174C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174C20u;
            // 0x174c24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174C28u;
label_174c28:
    // 0x174c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_174c2c:
    // 0x174c2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_174c30:
    // 0x174c30: 0xc0599de  jal         func_166778
label_174c34:
    if (ctx->pc == 0x174C34u) {
        ctx->pc = 0x174C38u;
        goto label_174c38;
    }
    ctx->pc = 0x174C30u;
    SET_GPR_U32(ctx, 31, 0x174C38u);
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C38u; }
        if (ctx->pc != 0x174C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C38u; }
        if (ctx->pc != 0x174C38u) { return; }
    }
    ctx->pc = 0x174C38u;
label_174c38:
    // 0x174c38: 0xc05d314  jal         func_174C50
label_174c3c:
    if (ctx->pc == 0x174C3Cu) {
        ctx->pc = 0x174C40u;
        goto label_174c40;
    }
    ctx->pc = 0x174C38u;
    SET_GPR_U32(ctx, 31, 0x174C40u);
    ctx->pc = 0x174C50u;
    if (runtime->hasFunction(0x174C50u)) {
        auto targetFn = runtime->lookupFunction(0x174C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C40u; }
        if (ctx->pc != 0x174C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174C50_0x174c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C40u; }
        if (ctx->pc != 0x174C40u) { return; }
    }
    ctx->pc = 0x174C40u;
label_174c40:
    // 0x174c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174c44:
    // 0x174c44: 0x80599e0  j           func_166780
label_174c48:
    if (ctx->pc == 0x174C48u) {
        ctx->pc = 0x174C48u;
            // 0x174c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x174C4Cu;
        goto label_174c4c;
    }
    ctx->pc = 0x174C44u;
    ctx->pc = 0x174C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174C44u;
            // 0x174c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x174C4Cu;
label_174c4c:
    // 0x174c4c: 0x0  nop
    ctx->pc = 0x174c4cu;
    // NOP
}
