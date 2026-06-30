#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184BE8
// Address: 0x184be8 - 0x184ce0
void sub_00184BE8_0x184be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184BE8_0x184be8");
#endif

    switch (ctx->pc) {
        case 0x184c18u: goto label_184c18;
        case 0x184c9cu: goto label_184c9c;
        case 0x184cc4u: goto label_184cc4;
        case 0x184cccu: goto label_184ccc;
        default: break;
    }

    ctx->pc = 0x184be8u;

    // 0x184be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184bec: 0x3c06005f  lui         $a2, 0x5F
    ctx->pc = 0x184becu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)95 << 16));
    // 0x184bf0: 0x24c20298  addiu       $v0, $a2, 0x298
    ctx->pc = 0x184bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 664));
    // 0x184bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x184bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x184bf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x184bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x184bfc: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x184bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x184c00: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x184c00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x184c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x184c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184c0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x184C0Cu;
    {
        const bool branch_taken_0x184c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184C0Cu;
            // 0x184c10: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c0c) {
            ctx->pc = 0x184C3Cu;
            goto label_184c3c;
        }
    }
    ctx->pc = 0x184C14u;
    // 0x184c14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x184c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_184c18:
    // 0x184c18: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x184c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x184c1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x184C1Cu;
    {
        const bool branch_taken_0x184c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184C1Cu;
            // 0x184c20: 0x24630024  addiu       $v1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c1c) {
            ctx->pc = 0x184C3Cu;
            goto label_184c3c;
        }
    }
    ctx->pc = 0x184C24u;
    // 0x184c24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x184c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184c28: 0x0  nop
    ctx->pc = 0x184c28u;
    // NOP
    // 0x184c2c: 0x0  nop
    ctx->pc = 0x184c2cu;
    // NOP
    // 0x184c30: 0x0  nop
    ctx->pc = 0x184c30u;
    // NOP
    // 0x184c34: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x184C34u;
    {
        const bool branch_taken_0x184c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184c34) {
            ctx->pc = 0x184C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x184C34u;
            // 0x184c38: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x184C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_184c18;
        }
    }
    ctx->pc = 0x184C3Cu;
label_184c3c:
    // 0x184c3c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x184c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x184c40: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x184C40u;
    {
        const bool branch_taken_0x184c40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x184C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184C40u;
            // 0x184c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c40) {
            ctx->pc = 0x184CA0u;
            goto label_184ca0;
        }
    }
    ctx->pc = 0x184C48u;
    // 0x184c48: 0x480c0  sll         $s0, $a0, 3
    ctx->pc = 0x184c48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x184c4c: 0x24c20298  addiu       $v0, $a2, 0x298
    ctx->pc = 0x184c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 664));
    // 0x184c50: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x184c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x184c54: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x184c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x184c58: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x184c58u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x184c5c: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x184c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
    // 0x184c60: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x184c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x184c64: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x184c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x184c68: 0x24630260  addiu       $v1, $v1, 0x260
    ctx->pc = 0x184c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 608));
    // 0x184c6c: 0x24c67958  addiu       $a2, $a2, 0x7958
    ctx->pc = 0x184c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31064));
    // 0x184c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184c74: 0x24a54a38  addiu       $a1, $a1, 0x4A38
    ctx->pc = 0x184c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19000));
    // 0x184c78: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x184c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x184c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c80: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x184c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x184c84: 0xae080014  sw          $t0, 0x14($s0)
    ctx->pc = 0x184c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 8));
    // 0x184c88: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x184c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    // 0x184c8c: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x184c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x184c90: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x184c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x184c94: 0xc0613b6  jal         func_184ED8
    ctx->pc = 0x184C94u;
    SET_GPR_U32(ctx, 31, 0x184C9Cu);
    ctx->pc = 0x184C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184C94u;
            // 0x184c98: 0xae100020  sw          $s0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184ED8u;
    if (runtime->hasFunction(0x184ED8u)) {
        auto targetFn = runtime->lookupFunction(0x184ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184C9Cu; }
        if (ctx->pc != 0x184C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184ED8_0x184ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184C9Cu; }
        if (ctx->pc != 0x184C9Cu) { return; }
    }
    ctx->pc = 0x184C9Cu;
label_184c9c:
    // 0x184c9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x184c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184ca0:
    // 0x184ca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184ca4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x184ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x184CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184CA8u;
            // 0x184cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184CB0u;
    // 0x184cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184cb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x184cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x184cb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x184cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x184cbc: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x184CBCu;
    SET_GPR_U32(ctx, 31, 0x184CC4u);
    ctx->pc = 0x184CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184CBCu;
            // 0x184cc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184CC4u; }
        if (ctx->pc != 0x184CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184CC4u; }
        if (ctx->pc != 0x184CC4u) { return; }
    }
    ctx->pc = 0x184CC4u;
label_184cc4:
    // 0x184cc4: 0xc061338  jal         func_184CE0
    ctx->pc = 0x184CC4u;
    SET_GPR_U32(ctx, 31, 0x184CCCu);
    ctx->pc = 0x184CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184CC4u;
            // 0x184cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184CE0u;
    if (runtime->hasFunction(0x184CE0u)) {
        auto targetFn = runtime->lookupFunction(0x184CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184CCCu; }
        if (ctx->pc != 0x184CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184CE0_0x184ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184CCCu; }
        if (ctx->pc != 0x184CCCu) { return; }
    }
    ctx->pc = 0x184CCCu;
label_184ccc:
    // 0x184ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184cd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x184cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184cd4: 0x8061282  j           func_184A08
    ctx->pc = 0x184CD4u;
    ctx->pc = 0x184CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184CD4u;
            // 0x184cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x184CDCu;
    // 0x184cdc: 0x0  nop
    ctx->pc = 0x184cdcu;
    // NOP
}
