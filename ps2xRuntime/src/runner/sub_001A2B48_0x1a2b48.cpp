#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2B48
// Address: 0x1a2b48 - 0x1a2c40
void sub_001A2B48_0x1a2b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2B48_0x1a2b48");
#endif

    switch (ctx->pc) {
        case 0x1a2b50u: goto label_1a2b50;
        case 0x1a2b68u: goto label_1a2b68;
        case 0x1a2b78u: goto label_1a2b78;
        case 0x1a2ba4u: goto label_1a2ba4;
        case 0x1a2bc4u: goto label_1a2bc4;
        case 0x1a2bd0u: goto label_1a2bd0;
        case 0x1a2be8u: goto label_1a2be8;
        case 0x1a2c08u: goto label_1a2c08;
        case 0x1a2c30u: goto label_1a2c30;
        default: break;
    }

    ctx->pc = 0x1a2b48u;

    // 0x1a2b48: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2B48u;
            // 0x1a2b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2B50u;
label_1a2b50:
    // 0x1a2b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2b54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2b58: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2B58u;
    {
        const bool branch_taken_0x1a2b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2B58u;
            // 0x1a2b5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b58) {
            ctx->pc = 0x1A2B6Cu;
            goto label_1a2b6c;
        }
    }
    ctx->pc = 0x1A2B60u;
    // 0x1a2b60: 0xc05c698  jal         func_171A60
    ctx->pc = 0x1A2B60u;
    SET_GPR_U32(ctx, 31, 0x1A2B68u);
    ctx->pc = 0x171A60u;
    if (runtime->hasFunction(0x171A60u)) {
        auto targetFn = runtime->lookupFunction(0x171A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2B68u; }
        if (ctx->pc != 0x1A2B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171A60_0x171a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2B68u; }
        if (ctx->pc != 0x1A2B68u) { return; }
    }
    ctx->pc = 0x1A2B68u;
label_1a2b68:
    // 0x1a2b68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2b6c:
    // 0x1a2b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2b70: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2B70u;
            // 0x1a2b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2B78u;
label_1a2b78:
    // 0x1a2b78: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2B78u;
            // 0x1a2b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2B80u;
    // 0x1a2b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2b84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2b88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a2b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2b8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a2b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a2b90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a2b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2b94: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2B94u;
    {
        const bool branch_taken_0x1a2b94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2B94u;
            // 0x1a2b98: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b94) {
            ctx->pc = 0x1A2BB0u;
            goto label_1a2bb0;
        }
    }
    ctx->pc = 0x1A2B9Cu;
    // 0x1a2b9c: 0xc05c2f2  jal         func_170BC8
    ctx->pc = 0x1A2B9Cu;
    SET_GPR_U32(ctx, 31, 0x1A2BA4u);
    ctx->pc = 0x170BC8u;
    if (runtime->hasFunction(0x170BC8u)) {
        auto targetFn = runtime->lookupFunction(0x170BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BA4u; }
        if (ctx->pc != 0x1A2BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170BC8_0x170bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BA4u; }
        if (ctx->pc != 0x1A2BA4u) { return; }
    }
    ctx->pc = 0x1A2BA4u;
label_1a2ba4:
    // 0x1a2ba4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1A2BA4u;
    {
        const bool branch_taken_0x1a2ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2BA4u;
            // 0x1a2ba8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ba4) {
            ctx->pc = 0x1A2C0Cu;
            goto label_1a2c0c;
        }
    }
    ctx->pc = 0x1A2BACu;
    // 0x1a2bac: 0x0  nop
    ctx->pc = 0x1a2bacu;
    // NOP
label_1a2bb0:
    // 0x1a2bb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2bb4: 0x54c20008  bnel        $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2BB4u;
    {
        const bool branch_taken_0x1a2bb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2bb4) {
            ctx->pc = 0x1A2BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2BB4u;
            // 0x1a2bb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2BD8u;
            goto label_1a2bd8;
        }
    }
    ctx->pc = 0x1A2BBCu;
    // 0x1a2bbc: 0xc05c30c  jal         func_170C30
    ctx->pc = 0x1A2BBCu;
    SET_GPR_U32(ctx, 31, 0x1A2BC4u);
    ctx->pc = 0x170C30u;
    if (runtime->hasFunction(0x170C30u)) {
        auto targetFn = runtime->lookupFunction(0x170C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BC4u; }
        if (ctx->pc != 0x1A2BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C30_0x170c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BC4u; }
        if (ctx->pc != 0x1A2BC4u) { return; }
    }
    ctx->pc = 0x1A2BC4u;
label_1a2bc4:
    // 0x1a2bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2bc8: 0xc05c2f2  jal         func_170BC8
    ctx->pc = 0x1A2BC8u;
    SET_GPR_U32(ctx, 31, 0x1A2BD0u);
    ctx->pc = 0x1A2BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2BC8u;
            // 0x1a2bcc: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170BC8u;
    if (runtime->hasFunction(0x170BC8u)) {
        auto targetFn = runtime->lookupFunction(0x170BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BD0u; }
        if (ctx->pc != 0x1A2BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170BC8_0x170bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BD0u; }
        if (ctx->pc != 0x1A2BD0u) { return; }
    }
    ctx->pc = 0x1A2BD0u;
label_1a2bd0:
    // 0x1a2bd0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A2BD0u;
    {
        const bool branch_taken_0x1a2bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2BD0u;
            // 0x1a2bd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2bd0) {
            ctx->pc = 0x1A2C0Cu;
            goto label_1a2c0c;
        }
    }
    ctx->pc = 0x1A2BD8u;
label_1a2bd8:
    // 0x1a2bd8: 0x54c2000c  bnel        $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A2BD8u;
    {
        const bool branch_taken_0x1a2bd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2bd8) {
            ctx->pc = 0x1A2BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2BD8u;
            // 0x1a2bdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2C0Cu;
            goto label_1a2c0c;
        }
    }
    ctx->pc = 0x1A2BE0u;
    // 0x1a2be0: 0xc05c6b0  jal         func_171AC0
    ctx->pc = 0x1A2BE0u;
    SET_GPR_U32(ctx, 31, 0x1A2BE8u);
    ctx->pc = 0x171AC0u;
    if (runtime->hasFunction(0x171AC0u)) {
        auto targetFn = runtime->lookupFunction(0x171AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BE8u; }
        if (ctx->pc != 0x1A2BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AC0_0x171ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BE8u; }
        if (ctx->pc != 0x1A2BE8u) { return; }
    }
    ctx->pc = 0x1A2BE8u;
label_1a2be8:
    // 0x1a2be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2bec: 0x244507ff  addiu       $a1, $v0, 0x7FF
    ctx->pc = 0x1a2becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1a2bf0: 0x24420ffe  addiu       $v0, $v0, 0xFFE
    ctx->pc = 0x1a2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4094));
    // 0x1a2bf4: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1a2bf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a2bf8: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1a2bf8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1a2bfc: 0x52ac3  sra         $a1, $a1, 11
    ctx->pc = 0x1a2bfcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
    // 0x1a2c00: 0xc05c2f2  jal         func_170BC8
    ctx->pc = 0x1A2C00u;
    SET_GPR_U32(ctx, 31, 0x1A2C08u);
    ctx->pc = 0x1A2C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C00u;
            // 0x1a2c04: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170BC8u;
    if (runtime->hasFunction(0x170BC8u)) {
        auto targetFn = runtime->lookupFunction(0x170BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2C08u; }
        if (ctx->pc != 0x1A2C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170BC8_0x170bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2C08u; }
        if (ctx->pc != 0x1A2C08u) { return; }
    }
    ctx->pc = 0x1A2C08u;
label_1a2c08:
    // 0x1a2c08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2c0c:
    // 0x1a2c0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2c10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2c10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2c14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a2c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2c18: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C18u;
            // 0x1a2c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2C20u;
    // 0x1a2c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2c28: 0xc05c32e  jal         func_170CB8
    ctx->pc = 0x1A2C28u;
    SET_GPR_U32(ctx, 31, 0x1A2C30u);
    ctx->pc = 0x170CB8u;
    if (runtime->hasFunction(0x170CB8u)) {
        auto targetFn = runtime->lookupFunction(0x170CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2C30u; }
        if (ctx->pc != 0x1A2C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170CB8_0x170cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2C30u; }
        if (ctx->pc != 0x1A2C30u) { return; }
    }
    ctx->pc = 0x1A2C30u;
label_1a2c30:
    // 0x1a2c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2c34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2c38: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C38u;
            // 0x1a2c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2C40u;
}
