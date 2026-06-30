#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9A30
// Address: 0x1b9a30 - 0x1b9b98
void sub_001B9A30_0x1b9a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9A30_0x1b9a30");
#endif

    switch (ctx->pc) {
        case 0x1b9a68u: goto label_1b9a68;
        case 0x1b9b04u: goto label_1b9b04;
        case 0x1b9b18u: goto label_1b9b18;
        case 0x1b9b68u: goto label_1b9b68;
        case 0x1b9b70u: goto label_1b9b70;
        case 0x1b9b7cu: goto label_1b9b7c;
        default: break;
    }

    ctx->pc = 0x1b9a30u;

    // 0x1b9a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b9a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b9a34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9a38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b9a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9a3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b9a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b9a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b9a44: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b9a44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a48: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b9a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b9a4c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b9a4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a50: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b9a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b9a54: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b9a54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b9a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b9a5c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b9a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b9a60: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B9A60u;
    SET_GPR_U32(ctx, 31, 0x1B9A68u);
    ctx->pc = 0x1B9A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A60u;
            // 0x1b9a64: 0x263021c0  addiu       $s0, $s1, 0x21C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A68u; }
        if (ctx->pc != 0x1B9A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A68u; }
        if (ctx->pc != 0x1B9A68u) { return; }
    }
    ctx->pc = 0x1B9A68u;
label_1b9a68:
    // 0x1b9a68: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b9a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b9a6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b9a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a70: 0x34a50191  ori         $a1, $a1, 0x191
    ctx->pc = 0x1b9a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)401);
    // 0x1b9a74: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B9A74u;
    {
        const bool branch_taken_0x1b9a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A74u;
            // 0x1b9a78: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a74) {
            ctx->pc = 0x1B9AA0u;
            goto label_1b9aa0;
        }
    }
    ctx->pc = 0x1B9A7Cu;
    // 0x1b9a7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9a80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9a80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9a84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b9a84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9a88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b9a88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b9a8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b9a8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9a90: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b9a90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9a94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b9a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9a98: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B9A98u;
    ctx->pc = 0x1B9A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A98u;
            // 0x1b9a9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B9AA0u;
label_1b9aa0:
    // 0x1b9aa0: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1b9aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b9aa4: 0x1643000e  bne         $s2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B9AA4u;
    {
        const bool branch_taken_0x1b9aa4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B9AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9AA4u;
            // 0x1b9aa8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9aa4) {
            ctx->pc = 0x1B9AE0u;
            goto label_1b9ae0;
        }
    }
    ctx->pc = 0x1B9AACu;
    // 0x1b9aac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b9aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ab0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9ab4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b9ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b9ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9abc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b9abcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9ac0: 0x34a50602  ori         $a1, $a1, 0x602
    ctx->pc = 0x1b9ac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1538);
    // 0x1b9ac4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b9ac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b9ac8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b9ac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9acc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b9accu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9ad0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b9ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9ad4: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B9AD4u;
    ctx->pc = 0x1B9AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9AD4u;
            // 0x1b9ad8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B9ADCu;
    // 0x1b9adc: 0x0  nop
    ctx->pc = 0x1b9adcu;
    // NOP
label_1b9ae0:
    // 0x1b9ae0: 0x158100  sll         $s0, $s5, 4
    ctx->pc = 0x1b9ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1b9ae4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b9ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ae8: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x1b9ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b9aec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b9aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9af0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1b9af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1b9af4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b9af4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9afc: 0xc06e760  jal         func_1B9D80
    ctx->pc = 0x1B9AFCu;
    SET_GPR_U32(ctx, 31, 0x1B9B04u);
    ctx->pc = 0x1B9B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9AFCu;
            // 0x1b9b00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (runtime->hasFunction(0x1B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x1B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B04u; }
        if (ctx->pc != 0x1B9B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9D80_0x1b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B04u; }
        if (ctx->pc != 0x1B9B04u) { return; }
    }
    ctx->pc = 0x1B9B04u;
label_1b9b04:
    // 0x1b9b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b9b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b9b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b0c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1b9b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b10: 0xc0695e2  jal         func_1A5788
    ctx->pc = 0x1B9B10u;
    SET_GPR_U32(ctx, 31, 0x1B9B18u);
    ctx->pc = 0x1B9B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B10u;
            // 0x1b9b14: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5788u;
    if (runtime->hasFunction(0x1A5788u)) {
        auto targetFn = runtime->lookupFunction(0x1A5788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B18u; }
        if (ctx->pc != 0x1B9B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5788_0x1a5788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B18u; }
        if (ctx->pc != 0x1B9B18u) { return; }
    }
    ctx->pc = 0x1B9B18u;
label_1b9b18:
    // 0x1b9b18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b9b18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9b20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9b24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b9b24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9b28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b9b28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b9b2c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b9b2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9b30: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b9b30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9b34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b9b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9b38: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B38u;
            // 0x1b9b3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9B40u;
    // 0x1b9b40: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B40u;
            // 0x1b9b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9B48u;
    // 0x1b9b48: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B48u;
            // 0x1b9b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9B50u;
    // 0x1b9b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9b54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b9b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9b58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9b5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b9b60: 0xc06e6e6  jal         func_1B9B98
    ctx->pc = 0x1B9B60u;
    SET_GPR_U32(ctx, 31, 0x1B9B68u);
    ctx->pc = 0x1B9B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B60u;
            // 0x1b9b64: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9B98u;
    if (runtime->hasFunction(0x1B9B98u)) {
        auto targetFn = runtime->lookupFunction(0x1B9B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B68u; }
        if (ctx->pc != 0x1B9B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9B98_0x1b9b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B68u; }
        if (ctx->pc != 0x1B9B68u) { return; }
    }
    ctx->pc = 0x1B9B68u;
label_1b9b68:
    // 0x1b9b68: 0xc06e72a  jal         func_1B9CA8
    ctx->pc = 0x1B9B68u;
    SET_GPR_U32(ctx, 31, 0x1B9B70u);
    ctx->pc = 0x1B9B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B68u;
            // 0x1b9b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CA8u;
    if (runtime->hasFunction(0x1B9CA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B9CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B70u; }
        if (ctx->pc != 0x1B9B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9CA8_0x1b9ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B70u; }
        if (ctx->pc != 0x1B9B70u) { return; }
    }
    ctx->pc = 0x1B9B70u;
label_1b9b70:
    // 0x1b9b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b9b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b74: 0xc06e708  jal         func_1B9C20
    ctx->pc = 0x1B9B74u;
    SET_GPR_U32(ctx, 31, 0x1B9B7Cu);
    ctx->pc = 0x1B9B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B74u;
            // 0x1b9b78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C20u;
    if (runtime->hasFunction(0x1B9C20u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B7Cu; }
        if (ctx->pc != 0x1B9B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9C20_0x1b9c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B7Cu; }
        if (ctx->pc != 0x1B9B7Cu) { return; }
    }
    ctx->pc = 0x1B9B7Cu;
label_1b9b7c:
    // 0x1b9b7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9b80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b9b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B8Cu;
            // 0x1b9b90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9B94u;
    // 0x1b9b94: 0x0  nop
    ctx->pc = 0x1b9b94u;
    // NOP
}
