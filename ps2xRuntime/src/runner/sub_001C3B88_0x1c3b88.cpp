#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C3B88
// Address: 0x1c3b88 - 0x1c3c90
void sub_001C3B88_0x1c3b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3B88_0x1c3b88");
#endif

    switch (ctx->pc) {
        case 0x1c3b88u: goto label_1c3b88;
        case 0x1c3b8cu: goto label_1c3b8c;
        case 0x1c3b90u: goto label_1c3b90;
        case 0x1c3b94u: goto label_1c3b94;
        case 0x1c3b98u: goto label_1c3b98;
        case 0x1c3b9cu: goto label_1c3b9c;
        case 0x1c3ba0u: goto label_1c3ba0;
        case 0x1c3ba4u: goto label_1c3ba4;
        case 0x1c3ba8u: goto label_1c3ba8;
        case 0x1c3bacu: goto label_1c3bac;
        case 0x1c3bb0u: goto label_1c3bb0;
        case 0x1c3bb4u: goto label_1c3bb4;
        case 0x1c3bb8u: goto label_1c3bb8;
        case 0x1c3bbcu: goto label_1c3bbc;
        case 0x1c3bc0u: goto label_1c3bc0;
        case 0x1c3bc4u: goto label_1c3bc4;
        case 0x1c3bc8u: goto label_1c3bc8;
        case 0x1c3bccu: goto label_1c3bcc;
        case 0x1c3bd0u: goto label_1c3bd0;
        case 0x1c3bd4u: goto label_1c3bd4;
        case 0x1c3bd8u: goto label_1c3bd8;
        case 0x1c3bdcu: goto label_1c3bdc;
        case 0x1c3be0u: goto label_1c3be0;
        case 0x1c3be4u: goto label_1c3be4;
        case 0x1c3be8u: goto label_1c3be8;
        case 0x1c3becu: goto label_1c3bec;
        case 0x1c3bf0u: goto label_1c3bf0;
        case 0x1c3bf4u: goto label_1c3bf4;
        case 0x1c3bf8u: goto label_1c3bf8;
        case 0x1c3bfcu: goto label_1c3bfc;
        case 0x1c3c00u: goto label_1c3c00;
        case 0x1c3c04u: goto label_1c3c04;
        case 0x1c3c08u: goto label_1c3c08;
        case 0x1c3c0cu: goto label_1c3c0c;
        case 0x1c3c10u: goto label_1c3c10;
        case 0x1c3c14u: goto label_1c3c14;
        case 0x1c3c18u: goto label_1c3c18;
        case 0x1c3c1cu: goto label_1c3c1c;
        case 0x1c3c20u: goto label_1c3c20;
        case 0x1c3c24u: goto label_1c3c24;
        case 0x1c3c28u: goto label_1c3c28;
        case 0x1c3c2cu: goto label_1c3c2c;
        case 0x1c3c30u: goto label_1c3c30;
        case 0x1c3c34u: goto label_1c3c34;
        case 0x1c3c38u: goto label_1c3c38;
        case 0x1c3c3cu: goto label_1c3c3c;
        case 0x1c3c40u: goto label_1c3c40;
        case 0x1c3c44u: goto label_1c3c44;
        case 0x1c3c48u: goto label_1c3c48;
        case 0x1c3c4cu: goto label_1c3c4c;
        case 0x1c3c50u: goto label_1c3c50;
        case 0x1c3c54u: goto label_1c3c54;
        case 0x1c3c58u: goto label_1c3c58;
        case 0x1c3c5cu: goto label_1c3c5c;
        case 0x1c3c60u: goto label_1c3c60;
        case 0x1c3c64u: goto label_1c3c64;
        case 0x1c3c68u: goto label_1c3c68;
        case 0x1c3c6cu: goto label_1c3c6c;
        case 0x1c3c70u: goto label_1c3c70;
        case 0x1c3c74u: goto label_1c3c74;
        case 0x1c3c78u: goto label_1c3c78;
        case 0x1c3c7cu: goto label_1c3c7c;
        case 0x1c3c80u: goto label_1c3c80;
        case 0x1c3c84u: goto label_1c3c84;
        case 0x1c3c88u: goto label_1c3c88;
        case 0x1c3c8cu: goto label_1c3c8c;
        default: break;
    }

    ctx->pc = 0x1c3b88u;

label_1c3b88:
    // 0x1c3b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c3b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c3b8c:
    // 0x1c3b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3b90:
    // 0x1c3b90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c3b94:
    // 0x1c3b94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c3b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c3b98:
    // 0x1c3b98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c3b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c3b9c:
    // 0x1c3b9c: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
label_1c3ba0:
    if (ctx->pc == 0x1C3BA0u) {
        ctx->pc = 0x1C3BA0u;
            // 0x1c3ba0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x1C3BA4u;
        goto label_1c3ba4;
    }
    ctx->pc = 0x1C3B9Cu;
    {
        const bool branch_taken_0x1c3b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B9Cu;
            // 0x1c3ba0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b9c) {
            ctx->pc = 0x1C3C30u;
            goto label_1c3c30;
        }
    }
    ctx->pc = 0x1C3BA4u;
label_1c3ba4:
    // 0x1c3ba4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c3ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c3ba8:
    // 0x1c3ba8: 0x3c12006e  lui         $s2, 0x6E
    ctx->pc = 0x1c3ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)110 << 16));
label_1c3bac:
    // 0x1c3bac: 0x8c45a4d8  lw          $a1, -0x5B28($v0)
    ctx->pc = 0x1c3bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943960)));
label_1c3bb0:
    // 0x1c3bb0: 0x26511ee0  addiu       $s1, $s2, 0x1EE0
    ctx->pc = 0x1c3bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 7904));
label_1c3bb4:
    // 0x1c3bb4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1c3bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c3bb8:
    // 0x1c3bb8: 0x8cb00014  lw          $s0, 0x14($a1)
    ctx->pc = 0x1c3bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1c3bbc:
    // 0x1c3bbc: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1c3bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_1c3bc0:
    // 0x1c3bc0: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x1c3bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1c3bc4:
    // 0x1c3bc4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1c3bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1c3bc8:
    // 0x1c3bc8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1c3bcc:
    if (ctx->pc == 0x1C3BCCu) {
        ctx->pc = 0x1C3BCCu;
            // 0x1c3bcc: 0x26431ee0  addiu       $v1, $s2, 0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 7904));
        ctx->pc = 0x1C3BD0u;
        goto label_1c3bd0;
    }
    ctx->pc = 0x1C3BC8u;
    {
        const bool branch_taken_0x1c3bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3BC8u;
            // 0x1c3bcc: 0x26431ee0  addiu       $v1, $s2, 0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 7904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bc8) {
            ctx->pc = 0x1C3C00u;
            goto label_1c3c00;
        }
    }
    ctx->pc = 0x1C3BD0u;
label_1c3bd0:
    // 0x1c3bd0: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x1c3bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_1c3bd4:
    // 0x1c3bd4: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1c3bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1c3bd8:
    // 0x1c3bd8: 0x40f809  jalr        $v0
label_1c3bdc:
    if (ctx->pc == 0x1C3BDCu) {
        ctx->pc = 0x1C3BE0u;
        goto label_1c3be0;
    }
    ctx->pc = 0x1C3BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C3BE0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C3BE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C3BE0u; }
            if (ctx->pc != 0x1C3BE0u) { return; }
        }
        }
    }
    ctx->pc = 0x1C3BE0u;
label_1c3be0:
    // 0x1c3be0: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x1c3be0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_1c3be4:
    // 0x1c3be4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c3be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3be8:
    // 0x1c3be8: 0x83182f  dsubu       $v1, $a0, $v1
    ctx->pc = 0x1c3be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
label_1c3bec:
    // 0x1c3bec: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
label_1c3bf0:
    if (ctx->pc == 0x1C3BF0u) {
        ctx->pc = 0x1C3BF0u;
            // 0x1c3bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BF4u;
        goto label_1c3bf4;
    }
    ctx->pc = 0x1C3BECu;
    {
        const bool branch_taken_0x1c3bec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C3BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3BECu;
            // 0x1c3bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bec) {
            ctx->pc = 0x1C3C30u;
            goto label_1c3c30;
        }
    }
    ctx->pc = 0x1C3BF4u;
label_1c3bf4:
    // 0x1c3bf4: 0xfe240000  sd          $a0, 0x0($s1)
    ctx->pc = 0x1c3bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 4));
label_1c3bf8:
    // 0x1c3bf8: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x1c3bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_1c3bfc:
    // 0x1c3bfc: 0x26431ee0  addiu       $v1, $s2, 0x1EE0
    ctx->pc = 0x1c3bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 7904));
label_1c3c00:
    // 0x1c3c00: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1c3c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1c3c04:
    // 0x1c3c04: 0x2c420801  sltiu       $v0, $v0, 0x801
    ctx->pc = 0x1c3c04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2049) ? 1 : 0);
label_1c3c08:
    // 0x1c3c08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1c3c0c:
    if (ctx->pc == 0x1C3C0Cu) {
        ctx->pc = 0x1C3C0Cu;
            // 0x1c3c0c: 0x26441ee0  addiu       $a0, $s2, 0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7904));
        ctx->pc = 0x1C3C10u;
        goto label_1c3c10;
    }
    ctx->pc = 0x1C3C08u;
    {
        const bool branch_taken_0x1c3c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C08u;
            // 0x1c3c0c: 0x26441ee0  addiu       $a0, $s2, 0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c08) {
            ctx->pc = 0x1C3C20u;
            goto label_1c3c20;
        }
    }
    ctx->pc = 0x1C3C10u;
label_1c3c10:
    // 0x1c3c10: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1c3c14:
    if (ctx->pc == 0x1C3C14u) {
        ctx->pc = 0x1C3C14u;
            // 0x1c3c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C18u;
        goto label_1c3c18;
    }
    ctx->pc = 0x1C3C10u;
    {
        const bool branch_taken_0x1c3c10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C10u;
            // 0x1c3c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c10) {
            ctx->pc = 0x1C3C30u;
            goto label_1c3c30;
        }
    }
    ctx->pc = 0x1C3C18u;
label_1c3c18:
    // 0x1c3c18: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1c3c18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1c3c1c:
    // 0x1c3c1c: 0x26441ee0  addiu       $a0, $s2, 0x1EE0
    ctx->pc = 0x1c3c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7904));
label_1c3c20:
    // 0x1c3c20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3c24:
    // 0x1c3c24: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1c3c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1c3c28:
    // 0x1c3c28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c3c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c3c2c:
    // 0x1c3c2c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1c3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1c3c30:
    // 0x1c3c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3c34:
    // 0x1c3c34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c3c38:
    // 0x1c3c38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c3c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3c3c:
    // 0x1c3c3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c3c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c3c40:
    // 0x1c3c40: 0x3e00008  jr          $ra
label_1c3c44:
    if (ctx->pc == 0x1C3C44u) {
        ctx->pc = 0x1C3C44u;
            // 0x1c3c44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C3C48u;
        goto label_1c3c48;
    }
    ctx->pc = 0x1C3C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C40u;
            // 0x1c3c44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3C48u;
label_1c3c48:
    // 0x1c3c48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c3c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c3c4c:
    // 0x1c3c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c3c50:
    // 0x1c3c50: 0xc070f24  jal         func_1C3C90
label_1c3c54:
    if (ctx->pc == 0x1C3C54u) {
        ctx->pc = 0x1C3C58u;
        goto label_1c3c58;
    }
    ctx->pc = 0x1C3C50u;
    SET_GPR_U32(ctx, 31, 0x1C3C58u);
    ctx->pc = 0x1C3C90u;
    if (runtime->hasFunction(0x1C3C90u)) {
        auto targetFn = runtime->lookupFunction(0x1C3C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C58u; }
        if (ctx->pc != 0x1C3C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3C90_0x1c3c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C58u; }
        if (ctx->pc != 0x1C3C58u) { return; }
    }
    ctx->pc = 0x1C3C58u;
label_1c3c58:
    // 0x1c3c58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c3c58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3c5c:
    // 0x1c3c5c: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x1c3c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
label_1c3c60:
    // 0x1c3c60: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1c3c60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_1c3c64:
    // 0x1c3c64: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1c3c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_1c3c68:
    // 0x1c3c68: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c3c68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1c3c6c:
    // 0x1c3c6c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c3c70:
    if (ctx->pc == 0x1C3C70u) {
        ctx->pc = 0x1C3C70u;
            // 0x1c3c70: 0xa3202a  slt         $a0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x1C3C74u;
        goto label_1c3c74;
    }
    ctx->pc = 0x1C3C6Cu;
    {
        const bool branch_taken_0x1c3c6c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C3C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C6Cu;
            // 0x1c3c70: 0xa3202a  slt         $a0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c6c) {
            ctx->pc = 0x1C3C80u;
            goto label_1c3c80;
        }
    }
    ctx->pc = 0x1C3C74u;
label_1c3c74:
    // 0x1c3c74: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x1c3c74u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_1c3c78:
    // 0x1c3c78: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1c3c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_1c3c7c:
    // 0x1c3c7c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c3c7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1c3c80:
    // 0x1c3c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3c84:
    // 0x1c3c84: 0x3e00008  jr          $ra
label_1c3c88:
    if (ctx->pc == 0x1C3C88u) {
        ctx->pc = 0x1C3C88u;
            // 0x1c3c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C3C8Cu;
        goto label_1c3c8c;
    }
    ctx->pc = 0x1C3C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C84u;
            // 0x1c3c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3C8Cu;
label_1c3c8c:
    // 0x1c3c8c: 0x0  nop
    ctx->pc = 0x1c3c8cu;
    // NOP
}
