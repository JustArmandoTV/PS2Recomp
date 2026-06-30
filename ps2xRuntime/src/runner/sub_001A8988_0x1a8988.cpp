#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8988
// Address: 0x1a8988 - 0x1a8be8
void sub_001A8988_0x1a8988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8988_0x1a8988");
#endif

    switch (ctx->pc) {
        case 0x1a89c4u: goto label_1a89c4;
        case 0x1a8a98u: goto label_1a8a98;
        case 0x1a8accu: goto label_1a8acc;
        case 0x1a8b48u: goto label_1a8b48;
        case 0x1a8b60u: goto label_1a8b60;
        case 0x1a8b88u: goto label_1a8b88;
        case 0x1a8b90u: goto label_1a8b90;
        case 0x1a8bbcu: goto label_1a8bbc;
        default: break;
    }

    ctx->pc = 0x1a8988u;

    // 0x1a8988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a898c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a898cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8994: 0x8061f7a  j           func_187DE8
    ctx->pc = 0x1A8994u;
    ctx->pc = 0x1A8998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8994u;
            // 0x1a8998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187DE8_0x187de8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A899Cu;
    // 0x1a899c: 0x0  nop
    ctx->pc = 0x1a899cu;
    // NOP
    // 0x1a89a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A89A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A89A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A89A0u;
            // 0x1a89a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A89A8u;
    // 0x1a89a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A89A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A89ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A89A8u;
            // 0x1a89ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A89B0u;
    // 0x1a89b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a89b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a89b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a89b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a89b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a89b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a89bc: 0xc06993c  jal         func_1A64F0
    ctx->pc = 0x1A89BCu;
    SET_GPR_U32(ctx, 31, 0x1A89C4u);
    ctx->pc = 0x1A89C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A89BCu;
            // 0x1a89c0: 0x8c851fb4  lw          $a1, 0x1FB4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A64F0u;
    if (runtime->hasFunction(0x1A64F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A64F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A89C4u; }
        if (ctx->pc != 0x1A89C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A64F0_0x1a64f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A89C4u; }
        if (ctx->pc != 0x1A89C4u) { return; }
    }
    ctx->pc = 0x1A89C4u;
label_1a89c4:
    // 0x1a89c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a89c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a89c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a89c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a89cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A89CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A89D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A89CCu;
            // 0x1a89d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A89D4u;
    // 0x1a89d4: 0x0  nop
    ctx->pc = 0x1a89d4u;
    // NOP
    // 0x1a89d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A89D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A89DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A89D8u;
            // 0x1a89dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A89E0u;
    // 0x1a89e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A89E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A89E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A89E0u;
            // 0x1a89e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A89E8u;
    // 0x1a89e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A89E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A89ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A89E8u;
            // 0x1a89ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A89F0u;
    // 0x1a89f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A89F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A89F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A89F0u;
            // 0x1a89f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A89F8u;
    // 0x1a89f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A89F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A89FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A89F8u;
            // 0x1a89fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8A00u;
    // 0x1a8a00: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A00u;
            // 0x1a8a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8A08u;
    // 0x1a8a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8a0c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a8a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8a10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8a14: 0x8c851fb4  lw          $a1, 0x1FB4($a0)
    ctx->pc = 0x1a8a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8116)));
    // 0x1a8a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8a1c: 0x8069610  j           func_1A5840
    ctx->pc = 0x1A8A1Cu;
    ctx->pc = 0x1A8A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A1Cu;
            // 0x1a8a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A5840_0x1a5840(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A8A24u;
    // 0x1a8a24: 0x0  nop
    ctx->pc = 0x1a8a24u;
    // NOP
    // 0x1a8a28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8a2c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a8a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8a34: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1a8a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8a38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a8a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8a3c: 0x8c851fb4  lw          $a1, 0x1FB4($a0)
    ctx->pc = 0x1a8a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8116)));
    // 0x1a8a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8a44: 0x8069646  j           func_1A5918
    ctx->pc = 0x1A8A44u;
    ctx->pc = 0x1A8A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A44u;
            // 0x1a8a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5918u;
    if (runtime->hasFunction(0x1A5918u)) {
        auto targetFn = runtime->lookupFunction(0x1A5918u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A5918_0x1a5918(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A8A4Cu;
    // 0x1a8a4c: 0x0  nop
    ctx->pc = 0x1a8a4cu;
    // NOP
    // 0x1a8a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8a54: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a8a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a8a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8a5c: 0x34a50501  ori         $a1, $a1, 0x501
    ctx->pc = 0x1a8a5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1281);
    // 0x1a8a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8a64: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A8A64u;
    ctx->pc = 0x1A8A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A64u;
            // 0x1a8a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A8A6Cu;
    // 0x1a8a6c: 0x0  nop
    ctx->pc = 0x1a8a6cu;
    // NOP
    // 0x1a8a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8a74: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a8a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a8a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8a7c: 0x34a50501  ori         $a1, $a1, 0x501
    ctx->pc = 0x1a8a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1281);
    // 0x1a8a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8a84: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A8A84u;
    ctx->pc = 0x1A8A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A84u;
            // 0x1a8a88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A8A8Cu;
    // 0x1a8a8c: 0x0  nop
    ctx->pc = 0x1a8a8cu;
    // NOP
    // 0x1a8a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A90u;
            // 0x1a8a94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8A98u;
label_1a8a98:
    // 0x1a8a98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a8a9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8aa0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a8aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8aa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8aa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8aac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a8aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a8ab0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a8ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ab4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a8ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a8ab8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1a8ab8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8abc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a8abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a8ac0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a8ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a8ac4: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1A8AC4u;
    SET_GPR_U32(ctx, 31, 0x1A8ACCu);
    ctx->pc = 0x1A8AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8AC4u;
            // 0x1a8ac8: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8ACCu; }
        if (ctx->pc != 0x1A8ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8ACCu; }
        if (ctx->pc != 0x1A8ACCu) { return; }
    }
    ctx->pc = 0x1A8ACCu;
label_1a8acc:
    // 0x1a8acc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a8accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a8ad0: 0x2623ff44  addiu       $v1, $s1, -0xBC
    ctx->pc = 0x1a8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967108));
    // 0x1a8ad4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a8ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ad8: 0x34a50171  ori         $a1, $a1, 0x171
    ctx->pc = 0x1a8ad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)369);
    // 0x1a8adc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A8ADCu;
    {
        const bool branch_taken_0x1a8adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8ADCu;
            // 0x1a8ae0: 0x2c630044  sltiu       $v1, $v1, 0x44 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)68) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8adc) {
            ctx->pc = 0x1A8B08u;
            goto label_1a8b08;
        }
    }
    ctx->pc = 0x1A8AE4u;
    // 0x1a8ae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8ae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8aec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a8aecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8af0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a8af0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8af4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a8af4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8af8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a8af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a8afc: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A8AFCu;
    ctx->pc = 0x1A8B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8AFCu;
            // 0x1a8b00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A8B04u;
    // 0x1a8b04: 0x0  nop
    ctx->pc = 0x1a8b04u;
    // NOP
label_1a8b08:
    // 0x1a8b08: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8B08u;
    {
        const bool branch_taken_0x1a8b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8b08) {
            ctx->pc = 0x1A8B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B08u;
            // 0x1a8b0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A8B2Cu;
            goto label_1a8b2c;
        }
    }
    ctx->pc = 0x1A8B10u;
    // 0x1a8b10: 0x8e041fec  lw          $a0, 0x1FEC($s0)
    ctx->pc = 0x1a8b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8172)));
    // 0x1a8b14: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1a8b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a8b18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a8b1c: 0xac930150  sw          $s3, 0x150($a0)
    ctx->pc = 0x1a8b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 19));
    // 0x1a8b20: 0xac72fd50  sw          $s2, -0x2B0($v1)
    ctx->pc = 0x1a8b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966608), GPR_U32(ctx, 18));
    // 0x1a8b24: 0xac940154  sw          $s4, 0x154($a0)
    ctx->pc = 0x1a8b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 20));
    // 0x1a8b28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8b2c:
    // 0x1a8b2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8b30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a8b30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8b34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a8b34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8b38: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a8b38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8b3c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a8b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a8b40: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B40u;
            // 0x1a8b44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8B48u;
label_1a8b48:
    // 0x1a8b48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8B48u;
    {
        const bool branch_taken_0x1a8b48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B48u;
            // 0x1a8b4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b48) {
            ctx->pc = 0x1A8B58u;
            goto label_1a8b58;
        }
    }
    ctx->pc = 0x1A8B50u;
    // 0x1a8b50: 0x8c831fec  lw          $v1, 0x1FEC($a0)
    ctx->pc = 0x1a8b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8172)));
    // 0x1a8b54: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a8b58:
    // 0x1a8b58: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8B60u;
label_1a8b60:
    // 0x1a8b60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8B60u;
    {
        const bool branch_taken_0x1a8b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B60u;
            // 0x1a8b64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b60) {
            ctx->pc = 0x1A8B70u;
            goto label_1a8b70;
        }
    }
    ctx->pc = 0x1A8B68u;
    // 0x1a8b68: 0x8c831fec  lw          $v1, 0x1FEC($a0)
    ctx->pc = 0x1a8b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8172)));
    // 0x1a8b6c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1a8b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1a8b70:
    // 0x1a8b70: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8B78u;
    // 0x1a8b78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8b7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8b80: 0xc06a2fa  jal         func_1A8BE8
    ctx->pc = 0x1A8B80u;
    SET_GPR_U32(ctx, 31, 0x1A8B88u);
    ctx->pc = 0x1A8BE8u;
    if (runtime->hasFunction(0x1A8BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1A8BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B88u; }
        if (ctx->pc != 0x1A8B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8BE8_0x1a8be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B88u; }
        if (ctx->pc != 0x1A8B88u) { return; }
    }
    ctx->pc = 0x1A8B88u;
label_1a8b88:
    // 0x1a8b88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8B88u;
    {
        const bool branch_taken_0x1a8b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B88u;
            // 0x1a8b8c: 0x3c05006e  lui         $a1, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)110 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b88) {
            ctx->pc = 0x1A8BB0u;
            goto label_1a8bb0;
        }
    }
    ctx->pc = 0x1A8B90u;
label_1a8b90:
    // 0x1a8b90: 0x0  nop
    ctx->pc = 0x1a8b90u;
    // NOP
    // 0x1a8b94: 0x0  nop
    ctx->pc = 0x1a8b94u;
    // NOP
    // 0x1a8b98: 0x0  nop
    ctx->pc = 0x1a8b98u;
    // NOP
    // 0x1a8b9c: 0x0  nop
    ctx->pc = 0x1a8b9cu;
    // NOP
    // 0x1a8ba0: 0x0  nop
    ctx->pc = 0x1a8ba0u;
    // NOP
    // 0x1a8ba4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A8BA4u;
    {
        const bool branch_taken_0x1a8ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ba4) {
            ctx->pc = 0x1A8B90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a8b90;
        }
    }
    ctx->pc = 0x1A8BACu;
    // 0x1a8bac: 0x0  nop
    ctx->pc = 0x1a8bacu;
    // NOP
label_1a8bb0:
    // 0x1a8bb0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1a8bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a8bb4: 0xc064a0a  jal         func_192828
    ctx->pc = 0x1A8BB4u;
    SET_GPR_U32(ctx, 31, 0x1A8BBCu);
    ctx->pc = 0x1A8BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8BB4u;
            // 0x1a8bb8: 0x24a5d260  addiu       $a1, $a1, -0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192828u;
    if (runtime->hasFunction(0x192828u)) {
        auto targetFn = runtime->lookupFunction(0x192828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BBCu; }
        if (ctx->pc != 0x1A8BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192828_0x192828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BBCu; }
        if (ctx->pc != 0x1A8BBCu) { return; }
    }
    ctx->pc = 0x1A8BBCu;
label_1a8bbc:
    // 0x1a8bbc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A8BBCu;
    {
        const bool branch_taken_0x1a8bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8BBCu;
            // 0x1a8bc0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8bbc) {
            ctx->pc = 0x1A8BD8u;
            goto label_1a8bd8;
        }
    }
    ctx->pc = 0x1A8BC4u;
    // 0x1a8bc4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a8bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a8bc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a8bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8bcc: 0x34a50d01  ori         $a1, $a1, 0xD01
    ctx->pc = 0x1a8bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3329);
    // 0x1a8bd0: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A8BD0u;
    ctx->pc = 0x1A8BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8BD0u;
            // 0x1a8bd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A8BD8u;
label_1a8bd8:
    // 0x1a8bd8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1a8bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1a8bdc: 0xac609bb0  sw          $zero, -0x6450($v1)
    ctx->pc = 0x1a8bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941616), GPR_U32(ctx, 0));
    // 0x1a8be0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8BE0u;
            // 0x1a8be4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8BE8u;
}
