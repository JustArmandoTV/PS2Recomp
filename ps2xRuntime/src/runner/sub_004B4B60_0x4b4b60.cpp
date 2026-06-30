#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B4B60
// Address: 0x4b4b60 - 0x4b4d00
void sub_004B4B60_0x4b4b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4B60_0x4b4b60");
#endif

    switch (ctx->pc) {
        case 0x4b4b7cu: goto label_4b4b7c;
        case 0x4b4b9cu: goto label_4b4b9c;
        case 0x4b4bf4u: goto label_4b4bf4;
        case 0x4b4c10u: goto label_4b4c10;
        case 0x4b4c30u: goto label_4b4c30;
        case 0x4b4c90u: goto label_4b4c90;
        case 0x4b4c9cu: goto label_4b4c9c;
        case 0x4b4ca8u: goto label_4b4ca8;
        case 0x4b4cb4u: goto label_4b4cb4;
        case 0x4b4cc0u: goto label_4b4cc0;
        case 0x4b4cccu: goto label_4b4ccc;
        case 0x4b4ce4u: goto label_4b4ce4;
        default: break;
    }

    ctx->pc = 0x4b4b60u;

    // 0x4b4b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b4b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b4b64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4b4b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4b4b68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b4b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b4b6c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4b4b6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4b4b70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b4b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b4b74: 0xc12d3d0  jal         func_4B4F40
    ctx->pc = 0x4B4B74u;
    SET_GPR_U32(ctx, 31, 0x4B4B7Cu);
    ctx->pc = 0x4B4B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4B74u;
            // 0x4b4b78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B4F40u;
    if (runtime->hasFunction(0x4B4F40u)) {
        auto targetFn = runtime->lookupFunction(0x4B4F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4B7Cu; }
        if (ctx->pc != 0x4B4B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B4F40_0x4b4f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4B7Cu; }
        if (ctx->pc != 0x4B4B7Cu) { return; }
    }
    ctx->pc = 0x4B4B7Cu;
label_4b4b7c:
    // 0x4b4b7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b4b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b4b80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b4b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b4b84: 0x24630a30  addiu       $v1, $v1, 0xA30
    ctx->pc = 0x4b4b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2608));
    // 0x4b4b88: 0x24420a68  addiu       $v0, $v0, 0xA68
    ctx->pc = 0x4b4b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2664));
    // 0x4b4b8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b4b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b4b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b4b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4b94: 0xc12d3cc  jal         func_4B4F30
    ctx->pc = 0x4B4B94u;
    SET_GPR_U32(ctx, 31, 0x4B4B9Cu);
    ctx->pc = 0x4B4B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4B94u;
            // 0x4b4b98: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B4F30u;
    if (runtime->hasFunction(0x4B4F30u)) {
        auto targetFn = runtime->lookupFunction(0x4B4F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4B9Cu; }
        if (ctx->pc != 0x4B4B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B4F30_0x4b4f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4B9Cu; }
        if (ctx->pc != 0x4B4B9Cu) { return; }
    }
    ctx->pc = 0x4B4B9Cu;
label_4b4b9c:
    // 0x4b4b9c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4b4b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4b4ba0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4b4ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b4ba4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b4ba8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4b4ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4b4bac: 0x244209e0  addiu       $v0, $v0, 0x9E0
    ctx->pc = 0x4b4bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2528));
    // 0x4b4bb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b4bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b4bb4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b4bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b4bb8: 0x24420a18  addiu       $v0, $v0, 0xA18
    ctx->pc = 0x4b4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2584));
    // 0x4b4bbc: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4b4bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4b4bc0: 0x3c0240e6  lui         $v0, 0x40E6
    ctx->pc = 0x4b4bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16614 << 16));
    // 0x4b4bc4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4b4bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x4b4bc8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x4b4bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x4b4bcc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4b4bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x4b4bd0: 0x3c02409c  lui         $v0, 0x409C
    ctx->pc = 0x4b4bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16540 << 16));
    // 0x4b4bd4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x4b4bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4b4bd8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x4b4bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x4b4bdc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x4b4bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x4b4be0: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4b4be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x4b4be4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b4be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4b4be8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4b4be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4b4bec: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4B4BECu;
    SET_GPR_U32(ctx, 31, 0x4B4BF4u);
    ctx->pc = 0x4B4BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4BECu;
            // 0x4b4bf0: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4BF4u; }
        if (ctx->pc != 0x4B4BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4BF4u; }
        if (ctx->pc != 0x4B4BF4u) { return; }
    }
    ctx->pc = 0x4B4BF4u;
label_4b4bf4:
    // 0x4b4bf4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4b4bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b4bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b4bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4bfc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B4BFCu;
    {
        const bool branch_taken_0x4b4bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4BFCu;
            // 0x4b4c00: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4bfc) {
            ctx->pc = 0x4B4C14u;
            goto label_4b4c14;
        }
    }
    ctx->pc = 0x4B4C04u;
    // 0x4b4c04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4b4c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4b4c08: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4B4C08u;
    SET_GPR_U32(ctx, 31, 0x4B4C10u);
    ctx->pc = 0x4B4C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4C08u;
            // 0x4b4c0c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4C10u; }
        if (ctx->pc != 0x4B4C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4C10u; }
        if (ctx->pc != 0x4B4C10u) { return; }
    }
    ctx->pc = 0x4B4C10u;
label_4b4c10:
    // 0x4b4c10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b4c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b4c14:
    // 0x4b4c14: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4b4c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4b4c18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b4c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4c1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b4c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4c20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b4c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4c24: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4C24u;
            // 0x4b4c28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B4C2Cu;
    // 0x4b4c2c: 0x0  nop
    ctx->pc = 0x4b4c2cu;
    // NOP
label_4b4c30:
    // 0x4b4c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b4c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b4c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b4c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b4c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b4c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b4c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b4c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b4c40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b4c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4c44: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4B4C44u;
    {
        const bool branch_taken_0x4b4c44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4C44u;
            // 0x4b4c48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c44) {
            ctx->pc = 0x4B4CE4u;
            goto label_4b4ce4;
        }
    }
    ctx->pc = 0x4B4C4Cu;
    // 0x4b4c4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b4c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b4c50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b4c54: 0x24630a30  addiu       $v1, $v1, 0xA30
    ctx->pc = 0x4b4c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2608));
    // 0x4b4c58: 0x24420a68  addiu       $v0, $v0, 0xA68
    ctx->pc = 0x4b4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2664));
    // 0x4b4c5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b4c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b4c60: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4B4C60u;
    {
        const bool branch_taken_0x4b4c60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4C60u;
            // 0x4b4c64: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c60) {
            ctx->pc = 0x4B4CCCu;
            goto label_4b4ccc;
        }
    }
    ctx->pc = 0x4B4C68u;
    // 0x4b4c68: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b4c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b4c6c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b4c70: 0x24630990  addiu       $v1, $v1, 0x990
    ctx->pc = 0x4b4c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2448));
    // 0x4b4c74: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x4b4c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
    // 0x4b4c78: 0x244209c8  addiu       $v0, $v0, 0x9C8
    ctx->pc = 0x4b4c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2504));
    // 0x4b4c7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b4c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b4c80: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4b4c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4b4c84: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4b4c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4b4c88: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4B4C88u;
    SET_GPR_U32(ctx, 31, 0x4B4C90u);
    ctx->pc = 0x4B4C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4C88u;
            // 0x4b4c8c: 0x24a547a0  addiu       $a1, $a1, 0x47A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4C90u; }
        if (ctx->pc != 0x4B4C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4C90u; }
        if (ctx->pc != 0x4B4C90u) { return; }
    }
    ctx->pc = 0x4B4C90u;
label_4b4c90:
    // 0x4b4c90: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4b4c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4b4c94: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4B4C94u;
    SET_GPR_U32(ctx, 31, 0x4B4C9Cu);
    ctx->pc = 0x4B4C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4C94u;
            // 0x4b4c98: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4C9Cu; }
        if (ctx->pc != 0x4B4C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4C9Cu; }
        if (ctx->pc != 0x4B4C9Cu) { return; }
    }
    ctx->pc = 0x4B4C9Cu;
label_4b4c9c:
    // 0x4b4c9c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4b4c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4b4ca0: 0xc12d358  jal         func_4B4D60
    ctx->pc = 0x4B4CA0u;
    SET_GPR_U32(ctx, 31, 0x4B4CA8u);
    ctx->pc = 0x4B4CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4CA0u;
            // 0x4b4ca4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B4D60u;
    if (runtime->hasFunction(0x4B4D60u)) {
        auto targetFn = runtime->lookupFunction(0x4B4D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4CA8u; }
        if (ctx->pc != 0x4B4CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B4D60_0x4b4d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4CA8u; }
        if (ctx->pc != 0x4B4CA8u) { return; }
    }
    ctx->pc = 0x4B4CA8u;
label_4b4ca8:
    // 0x4b4ca8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4b4ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4b4cac: 0xc12d358  jal         func_4B4D60
    ctx->pc = 0x4B4CACu;
    SET_GPR_U32(ctx, 31, 0x4B4CB4u);
    ctx->pc = 0x4B4CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4CACu;
            // 0x4b4cb0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B4D60u;
    if (runtime->hasFunction(0x4B4D60u)) {
        auto targetFn = runtime->lookupFunction(0x4B4D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4CB4u; }
        if (ctx->pc != 0x4B4CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B4D60_0x4b4d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4CB4u; }
        if (ctx->pc != 0x4B4CB4u) { return; }
    }
    ctx->pc = 0x4B4CB4u;
label_4b4cb4:
    // 0x4b4cb4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4b4cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4b4cb8: 0xc12d340  jal         func_4B4D00
    ctx->pc = 0x4B4CB8u;
    SET_GPR_U32(ctx, 31, 0x4B4CC0u);
    ctx->pc = 0x4B4CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4CB8u;
            // 0x4b4cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B4D00u;
    if (runtime->hasFunction(0x4B4D00u)) {
        auto targetFn = runtime->lookupFunction(0x4B4D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4CC0u; }
        if (ctx->pc != 0x4B4CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B4D00_0x4b4d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4CC0u; }
        if (ctx->pc != 0x4B4CC0u) { return; }
    }
    ctx->pc = 0x4B4CC0u;
label_4b4cc0:
    // 0x4b4cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b4cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4cc4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4B4CC4u;
    SET_GPR_U32(ctx, 31, 0x4B4CCCu);
    ctx->pc = 0x4B4CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4CC4u;
            // 0x4b4cc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4CCCu; }
        if (ctx->pc != 0x4B4CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4CCCu; }
        if (ctx->pc != 0x4B4CCCu) { return; }
    }
    ctx->pc = 0x4B4CCCu;
label_4b4ccc:
    // 0x4b4ccc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4b4cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4b4cd0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b4cd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4b4cd4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4CD4u;
    {
        const bool branch_taken_0x4b4cd4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b4cd4) {
            ctx->pc = 0x4B4CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4CD4u;
            // 0x4b4cd8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4CE8u;
            goto label_4b4ce8;
        }
    }
    ctx->pc = 0x4B4CDCu;
    // 0x4b4cdc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4B4CDCu;
    SET_GPR_U32(ctx, 31, 0x4B4CE4u);
    ctx->pc = 0x4B4CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4CDCu;
            // 0x4b4ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4CE4u; }
        if (ctx->pc != 0x4B4CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4CE4u; }
        if (ctx->pc != 0x4B4CE4u) { return; }
    }
    ctx->pc = 0x4B4CE4u;
label_4b4ce4:
    // 0x4b4ce4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b4ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b4ce8:
    // 0x4b4ce8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b4ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b4cec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b4cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4cf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b4cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4CF4u;
            // 0x4b4cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B4CFCu;
    // 0x4b4cfc: 0x0  nop
    ctx->pc = 0x4b4cfcu;
    // NOP
}
