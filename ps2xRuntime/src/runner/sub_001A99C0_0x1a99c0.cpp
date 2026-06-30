#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A99C0
// Address: 0x1a99c0 - 0x1a9a98
void sub_001A99C0_0x1a99c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A99C0_0x1a99c0");
#endif

    switch (ctx->pc) {
        case 0x1a99c0u: goto label_1a99c0;
        case 0x1a99c4u: goto label_1a99c4;
        case 0x1a99c8u: goto label_1a99c8;
        case 0x1a99ccu: goto label_1a99cc;
        case 0x1a99d0u: goto label_1a99d0;
        case 0x1a99d4u: goto label_1a99d4;
        case 0x1a99d8u: goto label_1a99d8;
        case 0x1a99dcu: goto label_1a99dc;
        case 0x1a99e0u: goto label_1a99e0;
        case 0x1a99e4u: goto label_1a99e4;
        case 0x1a99e8u: goto label_1a99e8;
        case 0x1a99ecu: goto label_1a99ec;
        case 0x1a99f0u: goto label_1a99f0;
        case 0x1a99f4u: goto label_1a99f4;
        case 0x1a99f8u: goto label_1a99f8;
        case 0x1a99fcu: goto label_1a99fc;
        case 0x1a9a00u: goto label_1a9a00;
        case 0x1a9a04u: goto label_1a9a04;
        case 0x1a9a08u: goto label_1a9a08;
        case 0x1a9a0cu: goto label_1a9a0c;
        case 0x1a9a10u: goto label_1a9a10;
        case 0x1a9a14u: goto label_1a9a14;
        case 0x1a9a18u: goto label_1a9a18;
        case 0x1a9a1cu: goto label_1a9a1c;
        case 0x1a9a20u: goto label_1a9a20;
        case 0x1a9a24u: goto label_1a9a24;
        case 0x1a9a28u: goto label_1a9a28;
        case 0x1a9a2cu: goto label_1a9a2c;
        case 0x1a9a30u: goto label_1a9a30;
        case 0x1a9a34u: goto label_1a9a34;
        case 0x1a9a38u: goto label_1a9a38;
        case 0x1a9a3cu: goto label_1a9a3c;
        case 0x1a9a40u: goto label_1a9a40;
        case 0x1a9a44u: goto label_1a9a44;
        case 0x1a9a48u: goto label_1a9a48;
        case 0x1a9a4cu: goto label_1a9a4c;
        case 0x1a9a50u: goto label_1a9a50;
        case 0x1a9a54u: goto label_1a9a54;
        case 0x1a9a58u: goto label_1a9a58;
        case 0x1a9a5cu: goto label_1a9a5c;
        case 0x1a9a60u: goto label_1a9a60;
        case 0x1a9a64u: goto label_1a9a64;
        case 0x1a9a68u: goto label_1a9a68;
        case 0x1a9a6cu: goto label_1a9a6c;
        case 0x1a9a70u: goto label_1a9a70;
        case 0x1a9a74u: goto label_1a9a74;
        case 0x1a9a78u: goto label_1a9a78;
        case 0x1a9a7cu: goto label_1a9a7c;
        case 0x1a9a80u: goto label_1a9a80;
        case 0x1a9a84u: goto label_1a9a84;
        case 0x1a9a88u: goto label_1a9a88;
        case 0x1a9a8cu: goto label_1a9a8c;
        case 0x1a9a90u: goto label_1a9a90;
        case 0x1a9a94u: goto label_1a9a94;
        default: break;
    }

    ctx->pc = 0x1a99c0u;

label_1a99c0:
    // 0x1a99c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a99c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a99c4:
    // 0x1a99c4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1a99c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a99c8:
    // 0x1a99c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a99c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a99cc:
    // 0x1a99cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a99ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a99d0:
    // 0x1a99d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a99d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1a99d4:
    // 0x1a99d4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a99d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a99d8:
    // 0x1a99d8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a99d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1a99dc:
    // 0x1a99dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a99dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a99e0:
    // 0x1a99e0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1a99e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1a99e4:
    // 0x1a99e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a99e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a99e8:
    // 0x1a99e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a99e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a99ec:
    // 0x1a99ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a99ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a99f0:
    // 0x1a99f0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1a99f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1a99f4:
    // 0x1a99f4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1a99f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a99f8:
    // 0x1a99f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a99f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a99fc:
    // 0x1a99fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9a00:
    // 0x1a9a00: 0x8ea32000  lw          $v1, 0x2000($s5)
    ctx->pc = 0x1a9a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8192)));
label_1a9a04:
    // 0x1a9a04: 0x1068001b  beq         $v1, $t0, . + 4 + (0x1B << 2)
label_1a9a08:
    if (ctx->pc == 0x1A9A08u) {
        ctx->pc = 0x1A9A08u;
            // 0x1a9a08: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A0Cu;
        goto label_1a9a0c;
    }
    ctx->pc = 0x1A9A04u;
    {
        const bool branch_taken_0x1a9a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x1A9A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A04u;
            // 0x1a9a08: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a04) {
            ctx->pc = 0x1A9A74u;
            goto label_1a9a74;
        }
    }
    ctx->pc = 0x1A9A0Cu;
label_1a9a0c:
    // 0x1a9a0c: 0xc0695f4  jal         func_1A57D0
label_1a9a10:
    if (ctx->pc == 0x1A9A10u) {
        ctx->pc = 0x1A9A14u;
        goto label_1a9a14;
    }
    ctx->pc = 0x1A9A0Cu;
    SET_GPR_U32(ctx, 31, 0x1A9A14u);
    ctx->pc = 0x1A57D0u;
    if (runtime->hasFunction(0x1A57D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A57D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A14u; }
        if (ctx->pc != 0x1A9A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A57D0_0x1a57d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A14u; }
        if (ctx->pc != 0x1A9A14u) { return; }
    }
    ctx->pc = 0x1A9A14u;
label_1a9a14:
    // 0x1a9a14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a9a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a18:
    // 0x1a9a18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a9a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9a1c:
    // 0x1a9a1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a9a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a20:
    // 0x1a9a20: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x1a9a20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a9a24:
    // 0x1a9a24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9a28:
    // 0x1a9a28: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a9a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a2c:
    // 0x1a9a2c: 0x8fb30008  lw          $s3, 0x8($sp)
    ctx->pc = 0x1a9a2cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a9a30:
    // 0x1a9a30: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1a9a34:
    if (ctx->pc == 0x1A9A34u) {
        ctx->pc = 0x1A9A34u;
            // 0x1a9a34: 0x8fb4000c  lw          $s4, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->pc = 0x1A9A38u;
        goto label_1a9a38;
    }
    ctx->pc = 0x1A9A30u;
    {
        const bool branch_taken_0x1a9a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A30u;
            // 0x1a9a34: 0x8fb4000c  lw          $s4, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a30) {
            ctx->pc = 0x1A9A74u;
            goto label_1a9a74;
        }
    }
    ctx->pc = 0x1A9A38u;
label_1a9a38:
    // 0x1a9a38: 0xc06a6a6  jal         func_1A9A98
label_1a9a3c:
    if (ctx->pc == 0x1A9A3Cu) {
        ctx->pc = 0x1A9A40u;
        goto label_1a9a40;
    }
    ctx->pc = 0x1A9A38u;
    SET_GPR_U32(ctx, 31, 0x1A9A40u);
    ctx->pc = 0x1A9A98u;
    if (runtime->hasFunction(0x1A9A98u)) {
        auto targetFn = runtime->lookupFunction(0x1A9A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A40u; }
        if (ctx->pc != 0x1A9A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9A98_0x1a9a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A40u; }
        if (ctx->pc != 0x1A9A40u) { return; }
    }
    ctx->pc = 0x1A9A40u;
label_1a9a40:
    // 0x1a9a40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a9a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a44:
    // 0x1a9a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9a48:
    // 0x1a9a48: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
label_1a9a4c:
    if (ctx->pc == 0x1A9A4Cu) {
        ctx->pc = 0x1A9A4Cu;
            // 0x1a9a4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A50u;
        goto label_1a9a50;
    }
    ctx->pc = 0x1A9A48u;
    {
        const bool branch_taken_0x1a9a48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9a48) {
            ctx->pc = 0x1A9A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A48u;
            // 0x1a9a4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9A74u;
            goto label_1a9a74;
        }
    }
    ctx->pc = 0x1A9A50u;
label_1a9a50:
    // 0x1a9a50: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_1a9a54:
    if (ctx->pc == 0x1A9A54u) {
        ctx->pc = 0x1A9A54u;
            // 0x1a9a54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A58u;
        goto label_1a9a58;
    }
    ctx->pc = 0x1A9A50u;
    {
        const bool branch_taken_0x1a9a50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A50u;
            // 0x1a9a54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a50) {
            ctx->pc = 0x1A9A60u;
            goto label_1a9a60;
        }
    }
    ctx->pc = 0x1A9A58u;
label_1a9a58:
    // 0x1a9a58: 0x240f809  jalr        $s2
label_1a9a5c:
    if (ctx->pc == 0x1A9A5Cu) {
        ctx->pc = 0x1A9A5Cu;
            // 0x1a9a5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A60u;
        goto label_1a9a60;
    }
    ctx->pc = 0x1A9A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x1A9A60u);
        ctx->pc = 0x1A9A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A58u;
            // 0x1a9a5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A9A60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A60u; }
            if (ctx->pc != 0x1A9A60u) { return; }
        }
        }
    }
    ctx->pc = 0x1A9A60u;
label_1a9a60:
    // 0x1a9a60: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_1a9a64:
    if (ctx->pc == 0x1A9A64u) {
        ctx->pc = 0x1A9A64u;
            // 0x1a9a64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A68u;
        goto label_1a9a68;
    }
    ctx->pc = 0x1A9A60u;
    {
        const bool branch_taken_0x1a9a60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A60u;
            // 0x1a9a64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a60) {
            ctx->pc = 0x1A9A70u;
            goto label_1a9a70;
        }
    }
    ctx->pc = 0x1A9A68u;
label_1a9a68:
    // 0x1a9a68: 0x260f809  jalr        $s3
label_1a9a6c:
    if (ctx->pc == 0x1A9A6Cu) {
        ctx->pc = 0x1A9A6Cu;
            // 0x1a9a6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A70u;
        goto label_1a9a70;
    }
    ctx->pc = 0x1A9A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x1A9A70u);
        ctx->pc = 0x1A9A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A68u;
            // 0x1a9a6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A9A70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A70u; }
            if (ctx->pc != 0x1A9A70u) { return; }
        }
        }
    }
    ctx->pc = 0x1A9A70u;
label_1a9a70:
    // 0x1a9a70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a9a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a74:
    // 0x1a9a74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a9a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9a78:
    // 0x1a9a78: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a9a78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a9a7c:
    // 0x1a9a7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a9a7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9a80:
    // 0x1a9a80: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a9a80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9a84:
    // 0x1a9a84: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1a9a84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9a88:
    // 0x1a9a88: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1a9a88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1a9a8c:
    // 0x1a9a8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a9a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a9a90:
    // 0x1a9a90: 0x3e00008  jr          $ra
label_1a9a94:
    if (ctx->pc == 0x1A9A94u) {
        ctx->pc = 0x1A9A94u;
            // 0x1a9a94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1A9A98u;
        goto label_fallthrough_0x1a9a90;
    }
    ctx->pc = 0x1A9A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A90u;
            // 0x1a9a94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a9a90:
    ctx->pc = 0x1A9A98u;
}
