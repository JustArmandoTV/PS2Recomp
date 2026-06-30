#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BEA68
// Address: 0x1bea68 - 0x1beb00
void sub_001BEA68_0x1bea68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEA68_0x1bea68");
#endif

    switch (ctx->pc) {
        case 0x1beaa8u: goto label_1beaa8;
        case 0x1beab4u: goto label_1beab4;
        case 0x1beac0u: goto label_1beac0;
        default: break;
    }

    ctx->pc = 0x1bea68u;

    // 0x1bea68: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA68u;
            // 0x1bea6c: 0x8c820064  lw          $v0, 0x64($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEA70u;
    // 0x1bea70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bea70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bea74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bea74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bea78: 0x587c2  srl         $s0, $a1, 31
    ctx->pc = 0x1bea78u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1bea7c: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x1bea7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1bea80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bea80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bea84: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x1bea84u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x1bea88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bea88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea8c: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1bea8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bea90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bea90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bea94: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1bea94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1bea98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bea98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bea9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1beaa0: 0xc06fac0  jal         func_1BEB00
    ctx->pc = 0x1BEAA0u;
    SET_GPR_U32(ctx, 31, 0x1BEAA8u);
    ctx->pc = 0x1BEAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEAA0u;
            // 0x1beaa4: 0x109043  sra         $s2, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEB00u;
    if (runtime->hasFunction(0x1BEB00u)) {
        auto targetFn = runtime->lookupFunction(0x1BEB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEAA8u; }
        if (ctx->pc != 0x1BEAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEB00_0x1beb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEAA8u; }
        if (ctx->pc != 0x1BEAA8u) { return; }
    }
    ctx->pc = 0x1BEAA8u;
label_1beaa8:
    // 0x1beaa8: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1beaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1beaac: 0xc06fac0  jal         func_1BEB00
    ctx->pc = 0x1BEAACu;
    SET_GPR_U32(ctx, 31, 0x1BEAB4u);
    ctx->pc = 0x1BEAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEAACu;
            // 0x1beab0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEB00u;
    if (runtime->hasFunction(0x1BEB00u)) {
        auto targetFn = runtime->lookupFunction(0x1BEB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEAB4u; }
        if (ctx->pc != 0x1BEAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEB00_0x1beb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEAB4u; }
        if (ctx->pc != 0x1BEAB4u) { return; }
    }
    ctx->pc = 0x1BEAB4u;
label_1beab4:
    // 0x1beab4: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x1beab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x1beab8: 0xc06fac0  jal         func_1BEB00
    ctx->pc = 0x1BEAB8u;
    SET_GPR_U32(ctx, 31, 0x1BEAC0u);
    ctx->pc = 0x1BEABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEAB8u;
            // 0x1beabc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEB00u;
    if (runtime->hasFunction(0x1BEB00u)) {
        auto targetFn = runtime->lookupFunction(0x1BEB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEAC0u; }
        if (ctx->pc != 0x1BEAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEB00_0x1beb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEAC0u; }
        if (ctx->pc != 0x1BEAC0u) { return; }
    }
    ctx->pc = 0x1BEAC0u;
label_1beac0:
    // 0x1beac0: 0x26240044  addiu       $a0, $s1, 0x44
    ctx->pc = 0x1beac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x1beac4: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1beac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1beac8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BEAC8u;
    {
        const bool branch_taken_0x1beac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEAC8u;
            // 0x1beacc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beac8) {
            ctx->pc = 0x1BEAE8u;
            goto label_1beae8;
        }
    }
    ctx->pc = 0x1BEAD0u;
    // 0x1bead0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bead0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bead4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bead4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bead8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bead8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beadc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1beadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1beae0: 0x806fac0  j           func_1BEB00
    ctx->pc = 0x1BEAE0u;
    ctx->pc = 0x1BEAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEAE0u;
            // 0x1beae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEB00u;
    if (runtime->hasFunction(0x1BEB00u)) {
        auto targetFn = runtime->lookupFunction(0x1BEB00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BEB00_0x1beb00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BEAE8u;
label_1beae8:
    // 0x1beae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1beae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1beaec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1beaecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1beaf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1beaf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beaf4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1beaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1beaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEAF8u;
            // 0x1beafc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEB00u;
}
