#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5B28
// Address: 0x1a5b28 - 0x1a5c20
void sub_001A5B28_0x1a5b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5B28_0x1a5b28");
#endif

    switch (ctx->pc) {
        case 0x1a5b28u: goto label_1a5b28;
        case 0x1a5b2cu: goto label_1a5b2c;
        case 0x1a5b30u: goto label_1a5b30;
        case 0x1a5b34u: goto label_1a5b34;
        case 0x1a5b38u: goto label_1a5b38;
        case 0x1a5b3cu: goto label_1a5b3c;
        case 0x1a5b40u: goto label_1a5b40;
        case 0x1a5b44u: goto label_1a5b44;
        case 0x1a5b48u: goto label_1a5b48;
        case 0x1a5b4cu: goto label_1a5b4c;
        case 0x1a5b50u: goto label_1a5b50;
        case 0x1a5b54u: goto label_1a5b54;
        case 0x1a5b58u: goto label_1a5b58;
        case 0x1a5b5cu: goto label_1a5b5c;
        case 0x1a5b60u: goto label_1a5b60;
        case 0x1a5b64u: goto label_1a5b64;
        case 0x1a5b68u: goto label_1a5b68;
        case 0x1a5b6cu: goto label_1a5b6c;
        case 0x1a5b70u: goto label_1a5b70;
        case 0x1a5b74u: goto label_1a5b74;
        case 0x1a5b78u: goto label_1a5b78;
        case 0x1a5b7cu: goto label_1a5b7c;
        case 0x1a5b80u: goto label_1a5b80;
        case 0x1a5b84u: goto label_1a5b84;
        case 0x1a5b88u: goto label_1a5b88;
        case 0x1a5b8cu: goto label_1a5b8c;
        case 0x1a5b90u: goto label_1a5b90;
        case 0x1a5b94u: goto label_1a5b94;
        case 0x1a5b98u: goto label_1a5b98;
        case 0x1a5b9cu: goto label_1a5b9c;
        case 0x1a5ba0u: goto label_1a5ba0;
        case 0x1a5ba4u: goto label_1a5ba4;
        case 0x1a5ba8u: goto label_1a5ba8;
        case 0x1a5bacu: goto label_1a5bac;
        case 0x1a5bb0u: goto label_1a5bb0;
        case 0x1a5bb4u: goto label_1a5bb4;
        case 0x1a5bb8u: goto label_1a5bb8;
        case 0x1a5bbcu: goto label_1a5bbc;
        case 0x1a5bc0u: goto label_1a5bc0;
        case 0x1a5bc4u: goto label_1a5bc4;
        case 0x1a5bc8u: goto label_1a5bc8;
        case 0x1a5bccu: goto label_1a5bcc;
        case 0x1a5bd0u: goto label_1a5bd0;
        case 0x1a5bd4u: goto label_1a5bd4;
        case 0x1a5bd8u: goto label_1a5bd8;
        case 0x1a5bdcu: goto label_1a5bdc;
        case 0x1a5be0u: goto label_1a5be0;
        case 0x1a5be4u: goto label_1a5be4;
        case 0x1a5be8u: goto label_1a5be8;
        case 0x1a5becu: goto label_1a5bec;
        case 0x1a5bf0u: goto label_1a5bf0;
        case 0x1a5bf4u: goto label_1a5bf4;
        case 0x1a5bf8u: goto label_1a5bf8;
        case 0x1a5bfcu: goto label_1a5bfc;
        case 0x1a5c00u: goto label_1a5c00;
        case 0x1a5c04u: goto label_1a5c04;
        case 0x1a5c08u: goto label_1a5c08;
        case 0x1a5c0cu: goto label_1a5c0c;
        case 0x1a5c10u: goto label_1a5c10;
        case 0x1a5c14u: goto label_1a5c14;
        case 0x1a5c18u: goto label_1a5c18;
        case 0x1a5c1cu: goto label_1a5c1c;
        default: break;
    }

    ctx->pc = 0x1a5b28u;

label_1a5b28:
    // 0x1a5b28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a5b2c:
    // 0x1a5b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5b30:
    // 0x1a5b30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b34:
    // 0x1a5b34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a5b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a5b38:
    // 0x1a5b38: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a5b38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b3c:
    // 0x1a5b3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a5b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a5b40:
    // 0x1a5b40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a5b40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b44:
    // 0x1a5b44: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a5b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1a5b48:
    // 0x1a5b48: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a5b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1a5b4c:
    // 0x1a5b4c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a5b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1a5b50:
    // 0x1a5b50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a5b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5b54:
    // 0x1a5b54: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a5b58:
    // 0x1a5b58: 0x40f809  jalr        $v0
label_1a5b5c:
    if (ctx->pc == 0x1A5B5Cu) {
        ctx->pc = 0x1A5B5Cu;
            // 0x1a5b5c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B60u;
        goto label_1a5b60;
    }
    ctx->pc = 0x1A5B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5B60u);
        ctx->pc = 0x1A5B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B58u;
            // 0x1a5b5c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5B60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5B60u; }
            if (ctx->pc != 0x1A5B60u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5B60u;
label_1a5b60:
    // 0x1a5b60: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1a5b60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1a5b64:
    // 0x1a5b64: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a5b64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b68:
    // 0x1a5b68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5b6c:
    // 0x1a5b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b70:
    // 0x1a5b70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a5b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b74:
    // 0x1a5b74: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1a5b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1a5b78:
    // 0x1a5b78: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1a5b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1a5b7c:
    // 0x1a5b7c: 0x60f809  jalr        $v1
label_1a5b80:
    if (ctx->pc == 0x1A5B80u) {
        ctx->pc = 0x1A5B80u;
            // 0x1a5b80: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B84u;
        goto label_1a5b84;
    }
    ctx->pc = 0x1A5B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A5B84u);
        ctx->pc = 0x1A5B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B7Cu;
            // 0x1a5b80: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5B84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5B84u; }
            if (ctx->pc != 0x1A5B84u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5B84u;
label_1a5b84:
    // 0x1a5b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b88:
    // 0x1a5b88: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1a5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1a5b8c:
    // 0x1a5b8c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1a5b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1a5b90:
    // 0x1a5b90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a5b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b94:
    // 0x1a5b94: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1a5b94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1a5b98:
    // 0x1a5b98: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x1a5b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1a5b9c:
    // 0x1a5b9c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1a5ba0:
    if (ctx->pc == 0x1A5BA0u) {
        ctx->pc = 0x1A5BA0u;
            // 0x1a5ba0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BA4u;
        goto label_1a5ba4;
    }
    ctx->pc = 0x1A5B9Cu;
    {
        const bool branch_taken_0x1a5b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B9Cu;
            // 0x1a5ba0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b9c) {
            ctx->pc = 0x1A5BD8u;
            goto label_1a5bd8;
        }
    }
    ctx->pc = 0x1A5BA4u;
label_1a5ba4:
    // 0x1a5ba4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5ba8:
    // 0x1a5ba8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1a5ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1a5bac:
    // 0x1a5bac: 0x60f809  jalr        $v1
label_1a5bb0:
    if (ctx->pc == 0x1A5BB0u) {
        ctx->pc = 0x1A5BB4u;
        goto label_1a5bb4;
    }
    ctx->pc = 0x1A5BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A5BB4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5BB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5BB4u; }
            if (ctx->pc != 0x1A5BB4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5BB4u;
label_1a5bb4:
    // 0x1a5bb4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a5bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5bb8:
    // 0x1a5bb8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a5bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5bbc:
    // 0x1a5bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5bc0:
    // 0x1a5bc0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1a5bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_1a5bc4:
    // 0x1a5bc4: 0x40f809  jalr        $v0
label_1a5bc8:
    if (ctx->pc == 0x1A5BC8u) {
        ctx->pc = 0x1A5BC8u;
            // 0x1a5bc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BCCu;
        goto label_1a5bcc;
    }
    ctx->pc = 0x1A5BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5BCCu);
        ctx->pc = 0x1A5BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5BC4u;
            // 0x1a5bc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5BCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5BCCu; }
            if (ctx->pc != 0x1A5BCCu) { return; }
        }
        }
    }
    ctx->pc = 0x1A5BCCu;
label_1a5bcc:
    // 0x1a5bcc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a5bd0:
    if (ctx->pc == 0x1A5BD0u) {
        ctx->pc = 0x1A5BD0u;
            // 0x1a5bd0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A5BD4u;
        goto label_1a5bd4;
    }
    ctx->pc = 0x1A5BCCu;
    {
        const bool branch_taken_0x1a5bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5BCCu;
            // 0x1a5bd0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5bcc) {
            ctx->pc = 0x1A5BE4u;
            goto label_1a5be4;
        }
    }
    ctx->pc = 0x1A5BD4u;
label_1a5bd4:
    // 0x1a5bd4: 0x0  nop
    ctx->pc = 0x1a5bd4u;
    // NOP
label_1a5bd8:
    // 0x1a5bd8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1a5bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1a5bdc:
    // 0x1a5bdc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1a5bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1a5be0:
    // 0x1a5be0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a5be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5be4:
    // 0x1a5be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5be8:
    // 0x1a5be8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a5be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a5bec:
    // 0x1a5bec: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1a5becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1a5bf0:
    // 0x1a5bf0: 0x40f809  jalr        $v0
label_1a5bf4:
    if (ctx->pc == 0x1A5BF4u) {
        ctx->pc = 0x1A5BF4u;
            // 0x1a5bf4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BF8u;
        goto label_1a5bf8;
    }
    ctx->pc = 0x1A5BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5BF8u);
        ctx->pc = 0x1A5BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5BF0u;
            // 0x1a5bf4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5BF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5BF8u; }
            if (ctx->pc != 0x1A5BF8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5BF8u;
label_1a5bf8:
    // 0x1a5bf8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1a5bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a5bfc:
    // 0x1a5bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5c00:
    // 0x1a5c00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a5c04:
    // 0x1a5c04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a5c04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5c08:
    // 0x1a5c08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a5c08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a5c0c:
    // 0x1a5c0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a5c0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5c10:
    // 0x1a5c10: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a5c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a5c14:
    // 0x1a5c14: 0x3e00008  jr          $ra
label_1a5c18:
    if (ctx->pc == 0x1A5C18u) {
        ctx->pc = 0x1A5C18u;
            // 0x1a5c18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A5C1Cu;
        goto label_1a5c1c;
    }
    ctx->pc = 0x1A5C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C14u;
            // 0x1a5c18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5C1Cu;
label_1a5c1c:
    // 0x1a5c1c: 0x0  nop
    ctx->pc = 0x1a5c1cu;
    // NOP
}
