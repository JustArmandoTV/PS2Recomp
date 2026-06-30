#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4A28
// Address: 0x1c4a28 - 0x1c4c98
void sub_001C4A28_0x1c4a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4A28_0x1c4a28");
#endif

    switch (ctx->pc) {
        case 0x1c4a68u: goto label_1c4a68;
        case 0x1c4a78u: goto label_1c4a78;
        case 0x1c4ac0u: goto label_1c4ac0;
        case 0x1c4ad0u: goto label_1c4ad0;
        case 0x1c4ae0u: goto label_1c4ae0;
        case 0x1c4af4u: goto label_1c4af4;
        default: break;
    }

    ctx->pc = 0x1c4a28u;

    // 0x1c4a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c4a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4a30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c4a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c4a34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c4a34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a38: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c4a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c4a3c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1c4a3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4a44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c4a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c4a48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c4a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c4a4c: 0x14a2002c  bne         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C4A4Cu;
    {
        const bool branch_taken_0x1c4a4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4A4Cu;
            // 0x1c4a50: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a4c) {
            ctx->pc = 0x1C4B00u;
            goto label_1c4b00;
        }
    }
    ctx->pc = 0x1C4A54u;
    // 0x1c4a54: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x1c4a54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1c4a58: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x1c4a58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c4a5c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1c4a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c4a60: 0xc071326  jal         func_1C4C98
    ctx->pc = 0x1C4A60u;
    SET_GPR_U32(ctx, 31, 0x1C4A68u);
    ctx->pc = 0x1C4A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4A60u;
            // 0x1c4a64: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4C98u;
    if (runtime->hasFunction(0x1C4C98u)) {
        auto targetFn = runtime->lookupFunction(0x1C4C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4A68u; }
        if (ctx->pc != 0x1C4A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4C98_0x1c4c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4A68u; }
        if (ctx->pc != 0x1C4A68u) { return; }
    }
    ctx->pc = 0x1C4A68u;
label_1c4a68:
    // 0x1c4a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c4a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a70: 0xc071326  jal         func_1C4C98
    ctx->pc = 0x1C4A70u;
    SET_GPR_U32(ctx, 31, 0x1C4A78u);
    ctx->pc = 0x1C4A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4A70u;
            // 0x1c4a74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4C98u;
    if (runtime->hasFunction(0x1C4C98u)) {
        auto targetFn = runtime->lookupFunction(0x1C4C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4A78u; }
        if (ctx->pc != 0x1C4A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4C98_0x1c4c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4A78u; }
        if (ctx->pc != 0x1C4A78u) { return; }
    }
    ctx->pc = 0x1C4A78u;
label_1c4a78:
    // 0x1c4a78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c4a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a7c: 0x2e620006  sltiu       $v0, $s3, 0x6
    ctx->pc = 0x1c4a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c4a80: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1C4A80u;
    {
        const bool branch_taken_0x1c4a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4A80u;
            // 0x1c4a84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a80) {
            ctx->pc = 0x1C4B98u;
            goto label_1c4b98;
        }
    }
    ctx->pc = 0x1C4A88u;
    // 0x1c4a88: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1c4a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1c4a8c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1c4a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1c4a90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c4a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4a94: 0x8c63be40  lw          $v1, -0x41C0($v1)
    ctx->pc = 0x1c4a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950464)));
    // 0x1c4a98: 0x600008  jr          $v1
    ctx->pc = 0x1C4A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4AA0u: goto label_1c4aa0;
            case 0x1C4AA8u: goto label_1c4aa8;
            case 0x1C4AB0u: goto label_1c4ab0;
            case 0x1C4AB8u: goto label_1c4ab8;
            case 0x1C4AC8u: goto label_1c4ac8;
            case 0x1C4AD8u: goto label_1c4ad8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C4AA0u;
label_1c4aa0:
    // 0x1c4aa0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C4AA0u;
    {
        const bool branch_taken_0x1c4aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4AA0u;
            // 0x1c4aa4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4aa0) {
            ctx->pc = 0x1C4AE4u;
            goto label_1c4ae4;
        }
    }
    ctx->pc = 0x1C4AA8u;
label_1c4aa8:
    // 0x1c4aa8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C4AA8u;
    {
        const bool branch_taken_0x1c4aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4AA8u;
            // 0x1c4aac: 0x245902d  daddu       $s2, $s2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4aa8) {
            ctx->pc = 0x1C4AE4u;
            goto label_1c4ae4;
        }
    }
    ctx->pc = 0x1C4AB0u;
label_1c4ab0:
    // 0x1c4ab0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C4AB0u;
    {
        const bool branch_taken_0x1c4ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4AB0u;
            // 0x1c4ab4: 0x245902f  dsubu       $s2, $s2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ab0) {
            ctx->pc = 0x1C4AE4u;
            goto label_1c4ae4;
        }
    }
    ctx->pc = 0x1C4AB8u;
label_1c4ab8:
    // 0x1c4ab8: 0xc048ce6  jal         func_123398
    ctx->pc = 0x1C4AB8u;
    SET_GPR_U32(ctx, 31, 0x1C4AC0u);
    ctx->pc = 0x1C4ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4AB8u;
            // 0x1c4abc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4AC0u; }
        if (ctx->pc != 0x1C4AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4AC0u; }
        if (ctx->pc != 0x1C4AC0u) { return; }
    }
    ctx->pc = 0x1C4AC0u;
label_1c4ac0:
    // 0x1c4ac0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4AC0u;
    {
        const bool branch_taken_0x1c4ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4AC0u;
            // 0x1c4ac4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ac0) {
            ctx->pc = 0x1C4AE4u;
            goto label_1c4ae4;
        }
    }
    ctx->pc = 0x1C4AC8u;
label_1c4ac8:
    // 0x1c4ac8: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1C4AC8u;
    SET_GPR_U32(ctx, 31, 0x1C4AD0u);
    ctx->pc = 0x1C4ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4AC8u;
            // 0x1c4acc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4AD0u; }
        if (ctx->pc != 0x1C4AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4AD0u; }
        if (ctx->pc != 0x1C4AD0u) { return; }
    }
    ctx->pc = 0x1C4AD0u;
label_1c4ad0:
    // 0x1c4ad0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4AD0u;
    {
        const bool branch_taken_0x1c4ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4AD0u;
            // 0x1c4ad4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ad0) {
            ctx->pc = 0x1C4AE4u;
            goto label_1c4ae4;
        }
    }
    ctx->pc = 0x1C4AD8u;
label_1c4ad8:
    // 0x1c4ad8: 0xc048fbc  jal         func_123EF0
    ctx->pc = 0x1C4AD8u;
    SET_GPR_U32(ctx, 31, 0x1C4AE0u);
    ctx->pc = 0x1C4ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4AD8u;
            // 0x1c4adc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EF0u;
    if (runtime->hasFunction(0x123EF0u)) {
        auto targetFn = runtime->lookupFunction(0x123EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4AE0u; }
        if (ctx->pc != 0x1C4AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123EF0_0x123ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4AE0u; }
        if (ctx->pc != 0x1C4AE0u) { return; }
    }
    ctx->pc = 0x1C4AE0u;
label_1c4ae0:
    // 0x1c4ae0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c4ae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4ae4:
    // 0x1c4ae4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c4ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c4ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4aec: 0xc07132c  jal         func_1C4CB0
    ctx->pc = 0x1C4AECu;
    SET_GPR_U32(ctx, 31, 0x1C4AF4u);
    ctx->pc = 0x1C4AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4AECu;
            // 0x1c4af0: 0x24a60004  addiu       $a2, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4CB0u;
    if (runtime->hasFunction(0x1C4CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1C4CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4AF4u; }
        if (ctx->pc != 0x1C4AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4CB0_0x1c4cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4AF4u; }
        if (ctx->pc != 0x1C4AF4u) { return; }
    }
    ctx->pc = 0x1C4AF4u;
label_1c4af4:
    // 0x1c4af4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1C4AF4u;
    {
        const bool branch_taken_0x1c4af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4AF4u;
            // 0x1c4af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4af4) {
            ctx->pc = 0x1C4B98u;
            goto label_1c4b98;
        }
    }
    ctx->pc = 0x1C4AFCu;
    // 0x1c4afc: 0x0  nop
    ctx->pc = 0x1c4afcu;
    // NOP
label_1c4b00:
    // 0x1c4b00: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4B00u;
    {
        const bool branch_taken_0x1c4b00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B00u;
            // 0x1c4b04: 0x8e870000  lw          $a3, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b00) {
            ctx->pc = 0x1C4B14u;
            goto label_1c4b14;
        }
    }
    ctx->pc = 0x1C4B08u;
    // 0x1c4b08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c4b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4b0c: 0x14a30022  bne         $a1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C4B0Cu;
    {
        const bool branch_taken_0x1c4b0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C4B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B0Cu;
            // 0x1c4b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b0c) {
            ctx->pc = 0x1C4B98u;
            goto label_1c4b98;
        }
    }
    ctx->pc = 0x1C4B14u;
label_1c4b14:
    // 0x1c4b14: 0x2e620006  sltiu       $v0, $s3, 0x6
    ctx->pc = 0x1c4b14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c4b18: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C4B18u;
    {
        const bool branch_taken_0x1c4b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B18u;
            // 0x1c4b1c: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b18) {
            ctx->pc = 0x1C4B88u;
            goto label_1c4b88;
        }
    }
    ctx->pc = 0x1C4B20u;
    // 0x1c4b20: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1c4b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1c4b24: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1c4b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1c4b28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c4b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4b2c: 0x8c63be60  lw          $v1, -0x41A0($v1)
    ctx->pc = 0x1c4b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950496)));
    // 0x1c4b30: 0x600008  jr          $v1
    ctx->pc = 0x1C4B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4B38u: goto label_1c4b38;
            case 0x1C4B40u: goto label_1c4b40;
            case 0x1C4B48u: goto label_1c4b48;
            case 0x1C4B50u: goto label_1c4b50;
            case 0x1C4B58u: goto label_1c4b58;
            case 0x1C4B70u: goto label_1c4b70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C4B38u;
label_1c4b38:
    // 0x1c4b38: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C4B38u;
    {
        const bool branch_taken_0x1c4b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B38u;
            // 0x1c4b3c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b38) {
            ctx->pc = 0x1C4B90u;
            goto label_1c4b90;
        }
    }
    ctx->pc = 0x1C4B40u;
label_1c4b40:
    // 0x1c4b40: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C4B40u;
    {
        const bool branch_taken_0x1c4b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B40u;
            // 0x1c4b44: 0xe63821  addu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b40) {
            ctx->pc = 0x1C4B90u;
            goto label_1c4b90;
        }
    }
    ctx->pc = 0x1C4B48u;
label_1c4b48:
    // 0x1c4b48: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C4B48u;
    {
        const bool branch_taken_0x1c4b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B48u;
            // 0x1c4b4c: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b48) {
            ctx->pc = 0x1C4B90u;
            goto label_1c4b90;
        }
    }
    ctx->pc = 0x1C4B50u;
label_1c4b50:
    // 0x1c4b50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C4B50u;
    {
        const bool branch_taken_0x1c4b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B50u;
            // 0x1c4b54: 0xe63818  mult        $a3, $a3, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b50) {
            ctx->pc = 0x1C4B90u;
            goto label_1c4b90;
        }
    }
    ctx->pc = 0x1C4B58u;
label_1c4b58:
    // 0x1c4b58: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x1c4b58u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x1c4b5c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C4B5Cu;
    {
        const bool branch_taken_0x1c4b5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4b5c) {
            ctx->pc = 0x1C4B60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B5Cu;
            // 0x1c4b60: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4B64u;
            goto label_1c4b64;
        }
    }
    ctx->pc = 0x1C4B64u;
label_1c4b64:
    // 0x1c4b64: 0x1012  mflo        $v0
    ctx->pc = 0x1c4b64u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c4b68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4B68u;
    {
        const bool branch_taken_0x1c4b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B68u;
            // 0x1c4b6c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b68) {
            ctx->pc = 0x1C4B90u;
            goto label_1c4b90;
        }
    }
    ctx->pc = 0x1C4B70u;
label_1c4b70:
    // 0x1c4b70: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x1c4b70u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x1c4b74: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C4B74u;
    {
        const bool branch_taken_0x1c4b74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4b74) {
            ctx->pc = 0x1C4B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B74u;
            // 0x1c4b78: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4B7Cu;
            goto label_1c4b7c;
        }
    }
    ctx->pc = 0x1C4B7Cu;
label_1c4b7c:
    // 0x1c4b7c: 0x1010  mfhi        $v0
    ctx->pc = 0x1c4b7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c4b80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4B80u;
    {
        const bool branch_taken_0x1c4b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B80u;
            // 0x1c4b84: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b80) {
            ctx->pc = 0x1C4B90u;
            goto label_1c4b90;
        }
    }
    ctx->pc = 0x1C4B88u;
label_1c4b88:
    // 0x1c4b88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4B88u;
    {
        const bool branch_taken_0x1c4b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B88u;
            // 0x1c4b8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b88) {
            ctx->pc = 0x1C4B98u;
            goto label_1c4b98;
        }
    }
    ctx->pc = 0x1C4B90u;
label_1c4b90:
    // 0x1c4b90: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x1c4b90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x1c4b94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c4b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4b98:
    // 0x1c4b98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4b9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4ba0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c4ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4ba4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c4ba4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c4ba8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c4ba8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4bac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c4bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4BB0u;
            // 0x1c4bb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4BB8u;
    // 0x1c4bb8: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1c4bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c4bbc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1c4bbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c4bc0: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x1c4bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x1c4bc4: 0x73e02  srl         $a3, $a3, 24
    ctx->pc = 0x1c4bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x1c4bc8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1c4bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4bcc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c4bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c4bd0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c4bd4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1c4bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1c4bd8: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1c4bd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1c4bdc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1c4bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1c4be0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1c4be0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c4be4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1c4be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1c4be8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c4be8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1c4bec: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1c4becu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c4bf0: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x1c4bf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c4bf4: 0x61a02  srl         $v1, $a2, 8
    ctx->pc = 0x1c4bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1c4bf8: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1c4bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1c4bfc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1c4bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c4c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c4c04: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1c4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1c4c08: 0x3084ff00  andi        $a0, $a0, 0xFF00
    ctx->pc = 0x1c4c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x1c4c0c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c4c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c4c10: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1c4c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1c4c14: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c4c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c4c18: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c4c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c4c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C1Cu;
            // 0x1c4c20: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4C24u;
    // 0x1c4c24: 0x0  nop
    ctx->pc = 0x1c4c24u;
    // NOP
    // 0x1c4c28: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x1c4c28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c4c2c: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x1c4c2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c4c30: 0x93a02  srl         $a3, $t1, 8
    ctx->pc = 0x1c4c30u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x1c4c34: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1c4c34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c4c38: 0xa4202  srl         $t0, $t2, 8
    ctx->pc = 0x1c4c38u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x1c4c3c: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x1c4c3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c4c40: 0x92a02  srl         $a1, $t1, 8
    ctx->pc = 0x1c4c40u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x1c4c44: 0x94e02  srl         $t1, $t1, 24
    ctx->pc = 0x1c4c44u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x1c4c48: 0xa3202  srl         $a2, $t2, 8
    ctx->pc = 0x1c4c48u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x1c4c4c: 0xa5602  srl         $t2, $t2, 24
    ctx->pc = 0x1c4c4cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x1c4c50: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1c4c50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1c4c54: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x1c4c54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1c4c58: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c4c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c4c5c: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x1c4c5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x1c4c60: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1c4c60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1c4c64: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1c4c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1c4c68: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1c4c68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1c4c6c: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x1c4c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1c4c70: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x1c4c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x1c4c74: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x1c4c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1c4c78: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x1c4c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x1c4c7c: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x1c4c7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x1c4c80: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1c4c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c4c84: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1c4c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1c4c88: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1c4c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1c4c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C8Cu;
            // 0x1c4c90: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4C94u;
    // 0x1c4c94: 0x0  nop
    ctx->pc = 0x1c4c94u;
    // NOP
}
