#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177C00
// Address: 0x177c00 - 0x177cd0
void sub_00177C00_0x177c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177C00_0x177c00");
#endif

    switch (ctx->pc) {
        case 0x177c28u: goto label_177c28;
        case 0x177c7cu: goto label_177c7c;
        case 0x177ca4u: goto label_177ca4;
        case 0x177cb4u: goto label_177cb4;
        default: break;
    }

    ctx->pc = 0x177c00u;

    // 0x177c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177c04: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x177c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x177c08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177c0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177c10: 0x24833f88  addiu       $v1, $a0, 0x3F88
    ctx->pc = 0x177c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16264));
    // 0x177c14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177c18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x177c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177c1c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x177C1Cu;
    {
        const bool branch_taken_0x177c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177C1Cu;
            // 0x177c20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c1c) {
            ctx->pc = 0x177C4Cu;
            goto label_177c4c;
        }
    }
    ctx->pc = 0x177C24u;
    // 0x177c24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x177c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_177c28:
    // 0x177c28: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x177c28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x177c2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x177C2Cu;
    {
        const bool branch_taken_0x177c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177C2Cu;
            // 0x177c30: 0x2463003c  addiu       $v1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c2c) {
            ctx->pc = 0x177C4Cu;
            goto label_177c4c;
        }
    }
    ctx->pc = 0x177C34u;
    // 0x177c34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x177c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177c38: 0x0  nop
    ctx->pc = 0x177c38u;
    // NOP
    // 0x177c3c: 0x0  nop
    ctx->pc = 0x177c3cu;
    // NOP
    // 0x177c40: 0x0  nop
    ctx->pc = 0x177c40u;
    // NOP
    // 0x177c44: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x177C44u;
    {
        const bool branch_taken_0x177c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177c44) {
            ctx->pc = 0x177C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177C44u;
            // 0x177c48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177C28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177c28;
        }
    }
    ctx->pc = 0x177C4Cu;
label_177c4c:
    // 0x177c4c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x177c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x177c50: 0x12230019  beq         $s1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x177C50u;
    {
        const bool branch_taken_0x177c50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x177C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177C50u;
            // 0x177c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c50) {
            ctx->pc = 0x177CB8u;
            goto label_177cb8;
        }
    }
    ctx->pc = 0x177C58u;
    // 0x177c58: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x177c58u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x177c5c: 0x24823f88  addiu       $v0, $a0, 0x3F88
    ctx->pc = 0x177c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16264));
    // 0x177c60: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x177c60u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x177c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c68: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x177c68u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x177c6c: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x177c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x177c70: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x177c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x177c74: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x177C74u;
    SET_GPR_U32(ctx, 31, 0x177C7Cu);
    ctx->pc = 0x177C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177C74u;
            // 0x177c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C7Cu; }
        if (ctx->pc != 0x177C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C7Cu; }
        if (ctx->pc != 0x177C7Cu) { return; }
    }
    ctx->pc = 0x177C7Cu;
label_177c7c:
    // 0x177c7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x177c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177c80: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x177c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x177c84: 0x240401f4  addiu       $a0, $zero, 0x1F4
    ctx->pc = 0x177c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x177c88: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x177c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x177c8c: 0x3405ac44  ori         $a1, $zero, 0xAC44
    ctx->pc = 0x177c8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44100);
    // 0x177c90: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x177c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x177c94: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x177c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x177c98: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x177c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x177c9c: 0xc0599e2  jal         func_166788
    ctx->pc = 0x177C9Cu;
    SET_GPR_U32(ctx, 31, 0x177CA4u);
    ctx->pc = 0x177CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177C9Cu;
            // 0x177ca0: 0x26070032  addiu       $a3, $s0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166788u;
    if (runtime->hasFunction(0x166788u)) {
        auto targetFn = runtime->lookupFunction(0x166788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177CA4u; }
        if (ctx->pc != 0x177CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166788_0x166788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177CA4u; }
        if (ctx->pc != 0x177CA4u) { return; }
    }
    ctx->pc = 0x177CA4u;
label_177ca4:
    // 0x177ca4: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x177ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x177ca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177cac: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x177CACu;
    SET_GPR_U32(ctx, 31, 0x177CB4u);
    ctx->pc = 0x177CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177CACu;
            // 0x177cb0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177CB4u; }
        if (ctx->pc != 0x177CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177CB4u; }
        if (ctx->pc != 0x177CB4u) { return; }
    }
    ctx->pc = 0x177CB4u;
label_177cb4:
    // 0x177cb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x177cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177cb8:
    // 0x177cb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177cbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177cc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x177cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x177CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177CC4u;
            // 0x177cc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177CCCu;
    // 0x177ccc: 0x0  nop
    ctx->pc = 0x177cccu;
    // NOP
}
