#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187B90
// Address: 0x187b90 - 0x187c88
void sub_00187B90_0x187b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187B90_0x187b90");
#endif

    switch (ctx->pc) {
        case 0x187bd0u: goto label_187bd0;
        case 0x187c10u: goto label_187c10;
        case 0x187c44u: goto label_187c44;
        case 0x187c58u: goto label_187c58;
        default: break;
    }

    ctx->pc = 0x187b90u;

    // 0x187b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x187b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x187b94: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x187b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x187b98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x187b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x187b9c: 0x24505db0  addiu       $s0, $v0, 0x5DB0
    ctx->pc = 0x187b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23984));
    // 0x187ba0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x187ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x187ba4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x187ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ba8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x187ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x187bac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x187bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187bb0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x187bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x187bb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x187bb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187bb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x187bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x187bbc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x187bbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187bc0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x187BC0u;
    {
        const bool branch_taken_0x187bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187BC0u;
            // 0x187bc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bc0) {
            ctx->pc = 0x187BF4u;
            goto label_187bf4;
        }
    }
    ctx->pc = 0x187BC8u;
    // 0x187bc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187bcc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x187bccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187bd0:
    // 0x187bd0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x187bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x187bd4: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x187bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x187bd8: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x187bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x187bdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187BDCu;
    {
        const bool branch_taken_0x187bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187BDCu;
            // 0x187be0: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bdc) {
            ctx->pc = 0x187BF4u;
            goto label_187bf4;
        }
    }
    ctx->pc = 0x187BE4u;
    // 0x187be4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x187be4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x187be8: 0x0  nop
    ctx->pc = 0x187be8u;
    // NOP
    // 0x187bec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x187BECu;
    {
        const bool branch_taken_0x187bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187BECu;
            // 0x187bf0: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bec) {
            ctx->pc = 0x187BD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_187bd0;
        }
    }
    ctx->pc = 0x187BF4u;
label_187bf4:
    // 0x187bf4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x187bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x187bf8: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x187BF8u;
    {
        const bool branch_taken_0x187bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x187BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187BF8u;
            // 0x187bfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bf8) {
            ctx->pc = 0x187C6Cu;
            goto label_187c6c;
        }
    }
    ctx->pc = 0x187C00u;
    // 0x187c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c08: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x187C08u;
    SET_GPR_U32(ctx, 31, 0x187C10u);
    ctx->pc = 0x187C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187C08u;
            // 0x187c0c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C10u; }
        if (ctx->pc != 0x187C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C10u; }
        if (ctx->pc != 0x187C10u) { return; }
    }
    ctx->pc = 0x187C10u;
label_187c10:
    // 0x187c10: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x187c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x187c14: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x187c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x187c18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c1c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x187c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x187c20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x187c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c24: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x187c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x187c28: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x187c28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c2c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x187c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187c30: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x187c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x187c34: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x187c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x187c38: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x187c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x187c3c: 0xc05f1dc  jal         func_17C770
    ctx->pc = 0x187C3Cu;
    SET_GPR_U32(ctx, 31, 0x187C44u);
    ctx->pc = 0x187C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187C3Cu;
            // 0x187c40: 0xafb0000c  sw          $s0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C44u; }
        if (ctx->pc != 0x187C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C44u; }
        if (ctx->pc != 0x187C44u) { return; }
    }
    ctx->pc = 0x187C44u;
label_187c44:
    // 0x187c44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x187C44u;
    {
        const bool branch_taken_0x187c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187C44u;
            // 0x187c48: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c44) {
            ctx->pc = 0x187C60u;
            goto label_187c60;
        }
    }
    ctx->pc = 0x187C4Cu;
    // 0x187c4c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x187c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x187c50: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x187C50u;
    SET_GPR_U32(ctx, 31, 0x187C58u);
    ctx->pc = 0x187C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187C50u;
            // 0x187c54: 0x24847ed8  addiu       $a0, $a0, 0x7ED8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C58u; }
        if (ctx->pc != 0x187C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C58u; }
        if (ctx->pc != 0x187C58u) { return; }
    }
    ctx->pc = 0x187C58u;
label_187c58:
    // 0x187c58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x187C58u;
    {
        const bool branch_taken_0x187c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187C58u;
            // 0x187c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c58) {
            ctx->pc = 0x187C6Cu;
            goto label_187c6c;
        }
    }
    ctx->pc = 0x187C60u;
label_187c60:
    // 0x187c60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x187c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187c64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x187c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c68: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x187c68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_187c6c:
    // 0x187c6c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x187c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187c70: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x187c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x187c74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x187c74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187c78: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x187c78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x187c7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x187c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187c80: 0x3e00008  jr          $ra
    ctx->pc = 0x187C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187C80u;
            // 0x187c84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187C88u;
}
