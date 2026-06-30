#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192BD0
// Address: 0x192bd0 - 0x192cc8
void sub_00192BD0_0x192bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192BD0_0x192bd0");
#endif

    switch (ctx->pc) {
        case 0x192bf8u: goto label_192bf8;
        case 0x192c28u: goto label_192c28;
        case 0x192c4cu: goto label_192c4c;
        case 0x192c58u: goto label_192c58;
        case 0x192c64u: goto label_192c64;
        case 0x192c6cu: goto label_192c6c;
        case 0x192c74u: goto label_192c74;
        case 0x192c7cu: goto label_192c7c;
        case 0x192c84u: goto label_192c84;
        case 0x192c8cu: goto label_192c8c;
        default: break;
    }

    ctx->pc = 0x192bd0u;

    // 0x192bd0: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x192bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x192bd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bd8: 0x8c626a58  lw          $v0, 0x6A58($v1)
    ctx->pc = 0x192bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27224)));
    // 0x192bdc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x192bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x192be0: 0x18a0000e  blez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x192BE0u;
    {
        const bool branch_taken_0x192be0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x192BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192BE0u;
            // 0x192be4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192be0) {
            ctx->pc = 0x192C1Cu;
            goto label_192c1c;
        }
    }
    ctx->pc = 0x192BE8u;
    // 0x192be8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x192becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192bf0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x192bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x192bf4: 0x0  nop
    ctx->pc = 0x192bf4u;
    // NOP
label_192bf8:
    // 0x192bf8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x192bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bfc: 0x10670008  beq         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x192BFCu;
    {
        const bool branch_taken_0x192bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x192C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192BFCu;
            // 0x192c00: 0x24840100  addiu       $a0, $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192bfc) {
            ctx->pc = 0x192C20u;
            goto label_192c20;
        }
    }
    ctx->pc = 0x192C04u;
    // 0x192c04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x192c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x192c08: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x192c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x192c0c: 0x0  nop
    ctx->pc = 0x192c0cu;
    // NOP
    // 0x192c10: 0x0  nop
    ctx->pc = 0x192c10u;
    // NOP
    // 0x192c14: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x192C14u;
    {
        const bool branch_taken_0x192c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192c14) {
            ctx->pc = 0x192C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192C14u;
            // 0x192c18: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_192bf8;
        }
    }
    ctx->pc = 0x192C1Cu;
label_192c1c:
    // 0x192c1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192c20:
    // 0x192c20: 0x3e00008  jr          $ra
    ctx->pc = 0x192C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192C28u;
label_192c28:
    // 0x192c28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192c2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x192c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x192c34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x192c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x192c3c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x192c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192c40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x192c44: 0xc06419c  jal         func_190670
    ctx->pc = 0x192C44u;
    SET_GPR_U32(ctx, 31, 0x192C4Cu);
    ctx->pc = 0x192C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C44u;
            // 0x192c48: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190670u;
    if (runtime->hasFunction(0x190670u)) {
        auto targetFn = runtime->lookupFunction(0x190670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C4Cu; }
        if (ctx->pc != 0x192C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190670_0x190670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C4Cu; }
        if (ctx->pc != 0x192C4Cu) { return; }
    }
    ctx->pc = 0x192C4Cu;
label_192c4c:
    // 0x192c4c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x192c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x192c50: 0xc064a64  jal         func_192990
    ctx->pc = 0x192C50u;
    SET_GPR_U32(ctx, 31, 0x192C58u);
    ctx->pc = 0x192C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C50u;
            // 0x192c54: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192990u;
    if (runtime->hasFunction(0x192990u)) {
        auto targetFn = runtime->lookupFunction(0x192990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C58u; }
        if (ctx->pc != 0x192C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192990_0x192990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C58u; }
        if (ctx->pc != 0x192C58u) { return; }
    }
    ctx->pc = 0x192C58u;
label_192c58:
    // 0x192c58: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x192c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x192c5c: 0xc064b32  jal         func_192CC8
    ctx->pc = 0x192C5Cu;
    SET_GPR_U32(ctx, 31, 0x192C64u);
    ctx->pc = 0x192C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C5Cu;
            // 0x192c60: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192CC8u;
    if (runtime->hasFunction(0x192CC8u)) {
        auto targetFn = runtime->lookupFunction(0x192CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C64u; }
        if (ctx->pc != 0x192C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192CC8_0x192cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C64u; }
        if (ctx->pc != 0x192C64u) { return; }
    }
    ctx->pc = 0x192C64u;
label_192c64:
    // 0x192c64: 0xc064b38  jal         func_192CE0
    ctx->pc = 0x192C64u;
    SET_GPR_U32(ctx, 31, 0x192C6Cu);
    ctx->pc = 0x192C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C64u;
            // 0x192c68: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192CE0u;
    if (runtime->hasFunction(0x192CE0u)) {
        auto targetFn = runtime->lookupFunction(0x192CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C6Cu; }
        if (ctx->pc != 0x192C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192CE0_0x192ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C6Cu; }
        if (ctx->pc != 0x192C6Cu) { return; }
    }
    ctx->pc = 0x192C6Cu;
label_192c6c:
    // 0x192c6c: 0xc064b38  jal         func_192CE0
    ctx->pc = 0x192C6Cu;
    SET_GPR_U32(ctx, 31, 0x192C74u);
    ctx->pc = 0x192C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C6Cu;
            // 0x192c70: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192CE0u;
    if (runtime->hasFunction(0x192CE0u)) {
        auto targetFn = runtime->lookupFunction(0x192CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C74u; }
        if (ctx->pc != 0x192C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192CE0_0x192ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C74u; }
        if (ctx->pc != 0x192C74u) { return; }
    }
    ctx->pc = 0x192C74u;
label_192c74:
    // 0x192c74: 0xc064b38  jal         func_192CE0
    ctx->pc = 0x192C74u;
    SET_GPR_U32(ctx, 31, 0x192C7Cu);
    ctx->pc = 0x192C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C74u;
            // 0x192c78: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192CE0u;
    if (runtime->hasFunction(0x192CE0u)) {
        auto targetFn = runtime->lookupFunction(0x192CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C7Cu; }
        if (ctx->pc != 0x192C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192CE0_0x192ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C7Cu; }
        if (ctx->pc != 0x192C7Cu) { return; }
    }
    ctx->pc = 0x192C7Cu;
label_192c7c:
    // 0x192c7c: 0xc064b38  jal         func_192CE0
    ctx->pc = 0x192C7Cu;
    SET_GPR_U32(ctx, 31, 0x192C84u);
    ctx->pc = 0x192C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C7Cu;
            // 0x192c80: 0x26040088  addiu       $a0, $s0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192CE0u;
    if (runtime->hasFunction(0x192CE0u)) {
        auto targetFn = runtime->lookupFunction(0x192CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C84u; }
        if (ctx->pc != 0x192C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192CE0_0x192ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C84u; }
        if (ctx->pc != 0x192C84u) { return; }
    }
    ctx->pc = 0x192C84u;
label_192c84:
    // 0x192c84: 0xc064b42  jal         func_192D08
    ctx->pc = 0x192C84u;
    SET_GPR_U32(ctx, 31, 0x192C8Cu);
    ctx->pc = 0x192C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C84u;
            // 0x192c88: 0x260400a8  addiu       $a0, $s0, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D08u;
    if (runtime->hasFunction(0x192D08u)) {
        auto targetFn = runtime->lookupFunction(0x192D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C8Cu; }
        if (ctx->pc != 0x192C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D08_0x192d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C8Cu; }
        if (ctx->pc != 0x192C8Cu) { return; }
    }
    ctx->pc = 0x192C8Cu;
label_192c8c:
    // 0x192c8c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x192c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x192c90: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x192c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x192c94: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x192c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x192c98: 0x24420938  addiu       $v0, $v0, 0x938
    ctx->pc = 0x192c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2360));
    // 0x192c9c: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x192c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x192ca0: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x192ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x192ca4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x192ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ca8: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x192ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x192cac: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x192cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x192cb0: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x192cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x192cb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x192cb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192cb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192cbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x192CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192CC0u;
            // 0x192cc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192CC8u;
}
