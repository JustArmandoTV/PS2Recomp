#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4BB0
// Address: 0x1a4bb0 - 0x1a4c88
void sub_001A4BB0_0x1a4bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4BB0_0x1a4bb0");
#endif

    switch (ctx->pc) {
        case 0x1a4bb0u: goto label_1a4bb0;
        case 0x1a4bb4u: goto label_1a4bb4;
        case 0x1a4bb8u: goto label_1a4bb8;
        case 0x1a4bbcu: goto label_1a4bbc;
        case 0x1a4bc0u: goto label_1a4bc0;
        case 0x1a4bc4u: goto label_1a4bc4;
        case 0x1a4bc8u: goto label_1a4bc8;
        case 0x1a4bccu: goto label_1a4bcc;
        case 0x1a4bd0u: goto label_1a4bd0;
        case 0x1a4bd4u: goto label_1a4bd4;
        case 0x1a4bd8u: goto label_1a4bd8;
        case 0x1a4bdcu: goto label_1a4bdc;
        case 0x1a4be0u: goto label_1a4be0;
        case 0x1a4be4u: goto label_1a4be4;
        case 0x1a4be8u: goto label_1a4be8;
        case 0x1a4becu: goto label_1a4bec;
        case 0x1a4bf0u: goto label_1a4bf0;
        case 0x1a4bf4u: goto label_1a4bf4;
        case 0x1a4bf8u: goto label_1a4bf8;
        case 0x1a4bfcu: goto label_1a4bfc;
        case 0x1a4c00u: goto label_1a4c00;
        case 0x1a4c04u: goto label_1a4c04;
        case 0x1a4c08u: goto label_1a4c08;
        case 0x1a4c0cu: goto label_1a4c0c;
        case 0x1a4c10u: goto label_1a4c10;
        case 0x1a4c14u: goto label_1a4c14;
        case 0x1a4c18u: goto label_1a4c18;
        case 0x1a4c1cu: goto label_1a4c1c;
        case 0x1a4c20u: goto label_1a4c20;
        case 0x1a4c24u: goto label_1a4c24;
        case 0x1a4c28u: goto label_1a4c28;
        case 0x1a4c2cu: goto label_1a4c2c;
        case 0x1a4c30u: goto label_1a4c30;
        case 0x1a4c34u: goto label_1a4c34;
        case 0x1a4c38u: goto label_1a4c38;
        case 0x1a4c3cu: goto label_1a4c3c;
        case 0x1a4c40u: goto label_1a4c40;
        case 0x1a4c44u: goto label_1a4c44;
        case 0x1a4c48u: goto label_1a4c48;
        case 0x1a4c4cu: goto label_1a4c4c;
        case 0x1a4c50u: goto label_1a4c50;
        case 0x1a4c54u: goto label_1a4c54;
        case 0x1a4c58u: goto label_1a4c58;
        case 0x1a4c5cu: goto label_1a4c5c;
        case 0x1a4c60u: goto label_1a4c60;
        case 0x1a4c64u: goto label_1a4c64;
        case 0x1a4c68u: goto label_1a4c68;
        case 0x1a4c6cu: goto label_1a4c6c;
        case 0x1a4c70u: goto label_1a4c70;
        case 0x1a4c74u: goto label_1a4c74;
        case 0x1a4c78u: goto label_1a4c78;
        case 0x1a4c7cu: goto label_1a4c7c;
        case 0x1a4c80u: goto label_1a4c80;
        case 0x1a4c84u: goto label_1a4c84;
        default: break;
    }

    ctx->pc = 0x1a4bb0u;

label_1a4bb0:
    // 0x1a4bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a4bb4:
    // 0x1a4bb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a4bb8:
    // 0x1a4bb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a4bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a4bbc:
    // 0x1a4bbc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1a4bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a4bc0:
    // 0x1a4bc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4bc4:
    // 0x1a4bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a4bc8:
    // 0x1a4bc8: 0xc06d81c  jal         func_1B6070
label_1a4bcc:
    if (ctx->pc == 0x1A4BCCu) {
        ctx->pc = 0x1A4BCCu;
            // 0x1a4bcc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BD0u;
        goto label_1a4bd0;
    }
    ctx->pc = 0x1A4BC8u;
    SET_GPR_U32(ctx, 31, 0x1A4BD0u);
    ctx->pc = 0x1A4BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4BC8u;
            // 0x1a4bcc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4BD0u; }
        if (ctx->pc != 0x1A4BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4BD0u; }
        if (ctx->pc != 0x1A4BD0u) { return; }
    }
    ctx->pc = 0x1A4BD0u;
label_1a4bd0:
    // 0x1a4bd0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1a4bd4:
    if (ctx->pc == 0x1A4BD4u) {
        ctx->pc = 0x1A4BD4u;
            // 0x1a4bd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A4BD8u;
        goto label_1a4bd8;
    }
    ctx->pc = 0x1A4BD0u;
    {
        const bool branch_taken_0x1a4bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4bd0) {
            ctx->pc = 0x1A4BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4BD0u;
            // 0x1a4bd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A4BF4u;
            goto label_1a4bf4;
        }
    }
    ctx->pc = 0x1A4BD8u;
label_1a4bd8:
    // 0x1a4bd8: 0x8e022184  lw          $v0, 0x2184($s0)
    ctx->pc = 0x1a4bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8580)));
label_1a4bdc:
    // 0x1a4bdc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a4bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1a4be0:
    // 0x1a4be0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a4be4:
    if (ctx->pc == 0x1A4BE4u) {
        ctx->pc = 0x1A4BE4u;
            // 0x1a4be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BE8u;
        goto label_1a4be8;
    }
    ctx->pc = 0x1A4BE0u;
    {
        const bool branch_taken_0x1a4be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4BE0u;
            // 0x1a4be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4be0) {
            ctx->pc = 0x1A4BF0u;
            goto label_1a4bf0;
        }
    }
    ctx->pc = 0x1A4BE8u;
label_1a4be8:
    // 0x1a4be8: 0x40f809  jalr        $v0
label_1a4bec:
    if (ctx->pc == 0x1A4BECu) {
        ctx->pc = 0x1A4BECu;
            // 0x1a4bec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BF0u;
        goto label_1a4bf0;
    }
    ctx->pc = 0x1A4BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4BF0u);
        ctx->pc = 0x1A4BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4BE8u;
            // 0x1a4bec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4BF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4BF0u; }
            if (ctx->pc != 0x1A4BF0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4BF0u;
label_1a4bf0:
    // 0x1a4bf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4bf4:
    // 0x1a4bf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4bf8:
    // 0x1a4bf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4bfc:
    // 0x1a4bfc: 0x3e00008  jr          $ra
label_1a4c00:
    if (ctx->pc == 0x1A4C00u) {
        ctx->pc = 0x1A4C00u;
            // 0x1a4c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A4C04u;
        goto label_1a4c04;
    }
    ctx->pc = 0x1A4BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4BFCu;
            // 0x1a4c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4C04u;
label_1a4c04:
    // 0x1a4c04: 0x0  nop
    ctx->pc = 0x1a4c04u;
    // NOP
label_1a4c08:
    // 0x1a4c08: 0x3e00008  jr          $ra
label_1a4c0c:
    if (ctx->pc == 0x1A4C0Cu) {
        ctx->pc = 0x1A4C0Cu;
            // 0x1a4c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C10u;
        goto label_1a4c10;
    }
    ctx->pc = 0x1A4C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C08u;
            // 0x1a4c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4C10u;
label_1a4c10:
    // 0x1a4c10: 0x3e00008  jr          $ra
label_1a4c14:
    if (ctx->pc == 0x1A4C14u) {
        ctx->pc = 0x1A4C14u;
            // 0x1a4c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C18u;
        goto label_1a4c18;
    }
    ctx->pc = 0x1A4C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C10u;
            // 0x1a4c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4C18u;
label_1a4c18:
    // 0x1a4c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a4c1c:
    // 0x1a4c1c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1a4c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a4c20:
    // 0x1a4c20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4c24:
    // 0x1a4c24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a4c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a4c28:
    // 0x1a4c28: 0xc06d81c  jal         func_1B6070
label_1a4c2c:
    if (ctx->pc == 0x1A4C2Cu) {
        ctx->pc = 0x1A4C2Cu;
            // 0x1a4c2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C30u;
        goto label_1a4c30;
    }
    ctx->pc = 0x1A4C28u;
    SET_GPR_U32(ctx, 31, 0x1A4C30u);
    ctx->pc = 0x1A4C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C28u;
            // 0x1a4c2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C30u; }
        if (ctx->pc != 0x1A4C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C30u; }
        if (ctx->pc != 0x1A4C30u) { return; }
    }
    ctx->pc = 0x1A4C30u;
label_1a4c30:
    // 0x1a4c30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a4c34:
    if (ctx->pc == 0x1A4C34u) {
        ctx->pc = 0x1A4C34u;
            // 0x1a4c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C38u;
        goto label_1a4c38;
    }
    ctx->pc = 0x1A4C30u;
    {
        const bool branch_taken_0x1a4c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C30u;
            // 0x1a4c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c30) {
            ctx->pc = 0x1A4C48u;
            goto label_1a4c48;
        }
    }
    ctx->pc = 0x1A4C38u;
label_1a4c38:
    // 0x1a4c38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4c38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4c3c:
    // 0x1a4c3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a4c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4c40:
    // 0x1a4c40: 0x8069316  j           func_1A4C58
label_1a4c44:
    if (ctx->pc == 0x1A4C44u) {
        ctx->pc = 0x1A4C44u;
            // 0x1a4c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A4C48u;
        goto label_1a4c48;
    }
    ctx->pc = 0x1A4C40u;
    ctx->pc = 0x1A4C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C40u;
            // 0x1a4c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C58u;
    goto label_1a4c58;
    ctx->pc = 0x1A4C48u;
label_1a4c48:
    // 0x1a4c48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4c4c:
    // 0x1a4c4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a4c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4c50:
    // 0x1a4c50: 0x3e00008  jr          $ra
label_1a4c54:
    if (ctx->pc == 0x1A4C54u) {
        ctx->pc = 0x1A4C54u;
            // 0x1a4c54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A4C58u;
        goto label_1a4c58;
    }
    ctx->pc = 0x1A4C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C50u;
            // 0x1a4c54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4C58u;
label_1a4c58:
    // 0x1a4c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a4c5c:
    // 0x1a4c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4c60:
    // 0x1a4c60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a4c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a4c64:
    // 0x1a4c64: 0xc069322  jal         func_1A4C88
label_1a4c68:
    if (ctx->pc == 0x1A4C68u) {
        ctx->pc = 0x1A4C68u;
            // 0x1a4c68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C6Cu;
        goto label_1a4c6c;
    }
    ctx->pc = 0x1A4C64u;
    SET_GPR_U32(ctx, 31, 0x1A4C6Cu);
    ctx->pc = 0x1A4C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C64u;
            // 0x1a4c68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C88u;
    if (runtime->hasFunction(0x1A4C88u)) {
        auto targetFn = runtime->lookupFunction(0x1A4C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C6Cu; }
        if (ctx->pc != 0x1A4C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4C88_0x1a4c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C6Cu; }
        if (ctx->pc != 0x1A4C6Cu) { return; }
    }
    ctx->pc = 0x1A4C6Cu;
label_1a4c6c:
    // 0x1a4c6c: 0xc06933e  jal         func_1A4CF8
label_1a4c70:
    if (ctx->pc == 0x1A4C70u) {
        ctx->pc = 0x1A4C70u;
            // 0x1a4c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C74u;
        goto label_1a4c74;
    }
    ctx->pc = 0x1A4C6Cu;
    SET_GPR_U32(ctx, 31, 0x1A4C74u);
    ctx->pc = 0x1A4C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C6Cu;
            // 0x1a4c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4CF8u;
    if (runtime->hasFunction(0x1A4CF8u)) {
        auto targetFn = runtime->lookupFunction(0x1A4CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C74u; }
        if (ctx->pc != 0x1A4C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4CF8_0x1a4cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C74u; }
        if (ctx->pc != 0x1A4C74u) { return; }
    }
    ctx->pc = 0x1A4C74u;
label_1a4c74:
    // 0x1a4c74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4c78:
    // 0x1a4c78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4c7c:
    // 0x1a4c7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a4c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4c80:
    // 0x1a4c80: 0x3e00008  jr          $ra
label_1a4c84:
    if (ctx->pc == 0x1A4C84u) {
        ctx->pc = 0x1A4C84u;
            // 0x1a4c84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A4C88u;
        goto label_fallthrough_0x1a4c80;
    }
    ctx->pc = 0x1A4C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C80u;
            // 0x1a4c84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a4c80:
    ctx->pc = 0x1A4C88u;
}
