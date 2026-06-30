#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9A98
// Address: 0x1a9a98 - 0x1a9b40
void sub_001A9A98_0x1a9a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9A98_0x1a9a98");
#endif

    switch (ctx->pc) {
        case 0x1a9a98u: goto label_1a9a98;
        case 0x1a9a9cu: goto label_1a9a9c;
        case 0x1a9aa0u: goto label_1a9aa0;
        case 0x1a9aa4u: goto label_1a9aa4;
        case 0x1a9aa8u: goto label_1a9aa8;
        case 0x1a9aacu: goto label_1a9aac;
        case 0x1a9ab0u: goto label_1a9ab0;
        case 0x1a9ab4u: goto label_1a9ab4;
        case 0x1a9ab8u: goto label_1a9ab8;
        case 0x1a9abcu: goto label_1a9abc;
        case 0x1a9ac0u: goto label_1a9ac0;
        case 0x1a9ac4u: goto label_1a9ac4;
        case 0x1a9ac8u: goto label_1a9ac8;
        case 0x1a9accu: goto label_1a9acc;
        case 0x1a9ad0u: goto label_1a9ad0;
        case 0x1a9ad4u: goto label_1a9ad4;
        case 0x1a9ad8u: goto label_1a9ad8;
        case 0x1a9adcu: goto label_1a9adc;
        case 0x1a9ae0u: goto label_1a9ae0;
        case 0x1a9ae4u: goto label_1a9ae4;
        case 0x1a9ae8u: goto label_1a9ae8;
        case 0x1a9aecu: goto label_1a9aec;
        case 0x1a9af0u: goto label_1a9af0;
        case 0x1a9af4u: goto label_1a9af4;
        case 0x1a9af8u: goto label_1a9af8;
        case 0x1a9afcu: goto label_1a9afc;
        case 0x1a9b00u: goto label_1a9b00;
        case 0x1a9b04u: goto label_1a9b04;
        case 0x1a9b08u: goto label_1a9b08;
        case 0x1a9b0cu: goto label_1a9b0c;
        case 0x1a9b10u: goto label_1a9b10;
        case 0x1a9b14u: goto label_1a9b14;
        case 0x1a9b18u: goto label_1a9b18;
        case 0x1a9b1cu: goto label_1a9b1c;
        case 0x1a9b20u: goto label_1a9b20;
        case 0x1a9b24u: goto label_1a9b24;
        case 0x1a9b28u: goto label_1a9b28;
        case 0x1a9b2cu: goto label_1a9b2c;
        case 0x1a9b30u: goto label_1a9b30;
        case 0x1a9b34u: goto label_1a9b34;
        case 0x1a9b38u: goto label_1a9b38;
        case 0x1a9b3cu: goto label_1a9b3c;
        default: break;
    }

    ctx->pc = 0x1a9a98u;

label_1a9a98:
    // 0x1a9a98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a9a9c:
    // 0x1a9a9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a9a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a9aa0:
    // 0x1a9aa0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a9aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a9aa4:
    // 0x1a9aa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a9aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a9aa8:
    // 0x1a9aa8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a9aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a9aac:
    // 0x1a9aac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a9aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a9ab0:
    // 0x1a9ab0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a9ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ab4:
    // 0x1a9ab4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a9ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a9ab8:
    // 0x1a9ab8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a9ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a9abc:
    // 0x1a9abc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a9ac0:
    // 0x1a9ac0: 0x40f809  jalr        $v0
label_1a9ac4:
    if (ctx->pc == 0x1A9AC4u) {
        ctx->pc = 0x1A9AC4u;
            // 0x1a9ac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9AC8u;
        goto label_1a9ac8;
    }
    ctx->pc = 0x1A9AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9AC8u);
        ctx->pc = 0x1A9AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9AC0u;
            // 0x1a9ac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A9AC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AC8u; }
            if (ctx->pc != 0x1A9AC8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A9AC8u;
label_1a9ac8:
    // 0x1a9ac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a9acc:
    // 0x1a9acc: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x1a9accu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1a9ad0:
    // 0x1a9ad0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a9ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ad4:
    // 0x1a9ad4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a9ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ad8:
    // 0x1a9ad8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_1a9adc:
    if (ctx->pc == 0x1A9ADCu) {
        ctx->pc = 0x1A9ADCu;
            // 0x1a9adc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9AE0u;
        goto label_1a9ae0;
    }
    ctx->pc = 0x1A9AD8u;
    {
        const bool branch_taken_0x1a9ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9AD8u;
            // 0x1a9adc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ad8) {
            ctx->pc = 0x1A9B28u;
            goto label_1a9b28;
        }
    }
    ctx->pc = 0x1A9AE0u;
label_1a9ae0:
    // 0x1a9ae0: 0xc06a6d0  jal         func_1A9B40
label_1a9ae4:
    if (ctx->pc == 0x1A9AE4u) {
        ctx->pc = 0x1A9AE8u;
        goto label_1a9ae8;
    }
    ctx->pc = 0x1A9AE0u;
    SET_GPR_U32(ctx, 31, 0x1A9AE8u);
    ctx->pc = 0x1A9B40u;
    if (runtime->hasFunction(0x1A9B40u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AE8u; }
        if (ctx->pc != 0x1A9AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9B40_0x1a9b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AE8u; }
        if (ctx->pc != 0x1A9AE8u) { return; }
    }
    ctx->pc = 0x1A9AE8u;
label_1a9ae8:
    // 0x1a9ae8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a9ae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9aec:
    // 0x1a9aec: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1a9af0:
    if (ctx->pc == 0x1A9AF0u) {
        ctx->pc = 0x1A9AF0u;
            // 0x1a9af0: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->pc = 0x1A9AF4u;
        goto label_1a9af4;
    }
    ctx->pc = 0x1A9AECu;
    {
        const bool branch_taken_0x1a9aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9AECu;
            // 0x1a9af0: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9aec) {
            ctx->pc = 0x1A9B28u;
            goto label_1a9b28;
        }
    }
    ctx->pc = 0x1A9AF4u;
label_1a9af4:
    // 0x1a9af4: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
label_1a9af8:
    if (ctx->pc == 0x1A9AF8u) {
        ctx->pc = 0x1A9AF8u;
            // 0x1a9af8: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->pc = 0x1A9AFCu;
        goto label_1a9afc;
    }
    ctx->pc = 0x1A9AF4u;
    {
        const bool branch_taken_0x1a9af4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1A9AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9AF4u;
            // 0x1a9af8: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9af4) {
            ctx->pc = 0x1A9B24u;
            goto label_1a9b24;
        }
    }
    ctx->pc = 0x1A9AFCu;
label_1a9afc:
    // 0x1a9afc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b00:
    // 0x1a9b00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a9b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b04:
    // 0x1a9b04: 0xc06a6d0  jal         func_1A9B40
label_1a9b08:
    if (ctx->pc == 0x1A9B08u) {
        ctx->pc = 0x1A9B08u;
            // 0x1a9b08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B0Cu;
        goto label_1a9b0c;
    }
    ctx->pc = 0x1A9B04u;
    SET_GPR_U32(ctx, 31, 0x1A9B0Cu);
    ctx->pc = 0x1A9B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B04u;
            // 0x1a9b08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B40u;
    if (runtime->hasFunction(0x1A9B40u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B0Cu; }
        if (ctx->pc != 0x1A9B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9B40_0x1a9b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B0Cu; }
        if (ctx->pc != 0x1A9B0Cu) { return; }
    }
    ctx->pc = 0x1A9B0Cu;
label_1a9b0c:
    // 0x1a9b0c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1a9b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1a9b10:
    // 0x1a9b10: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
label_1a9b14:
    if (ctx->pc == 0x1A9B14u) {
        ctx->pc = 0x1A9B14u;
            // 0x1a9b14: 0x24639bb0  addiu       $v1, $v1, -0x6450 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941616));
        ctx->pc = 0x1A9B18u;
        goto label_1a9b18;
    }
    ctx->pc = 0x1A9B10u;
    {
        const bool branch_taken_0x1a9b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1A9B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B10u;
            // 0x1a9b14: 0x24639bb0  addiu       $v1, $v1, -0x6450 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b10) {
            ctx->pc = 0x1A9B24u;
            goto label_1a9b24;
        }
    }
    ctx->pc = 0x1A9B18u;
label_1a9b18:
    // 0x1a9b18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a9b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a9b1c:
    // 0x1a9b1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a9b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a9b20:
    // 0x1a9b20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a9b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1a9b24:
    // 0x1a9b24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9b28:
    // 0x1a9b28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9b2c:
    // 0x1a9b2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a9b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a9b30:
    // 0x1a9b30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a9b30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9b34:
    // 0x1a9b34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a9b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a9b38:
    // 0x1a9b38: 0x3e00008  jr          $ra
label_1a9b3c:
    if (ctx->pc == 0x1A9B3Cu) {
        ctx->pc = 0x1A9B3Cu;
            // 0x1a9b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A9B40u;
        goto label_fallthrough_0x1a9b38;
    }
    ctx->pc = 0x1A9B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B38u;
            // 0x1a9b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a9b38:
    ctx->pc = 0x1A9B40u;
}
