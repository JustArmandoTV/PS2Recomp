#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001496D0
// Address: 0x1496d0 - 0x149780
void sub_001496D0_0x1496d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001496D0_0x1496d0");
#endif

    switch (ctx->pc) {
        case 0x149734u: goto label_149734;
        case 0x149744u: goto label_149744;
        case 0x149754u: goto label_149754;
        case 0x149768u: goto label_149768;
        default: break;
    }

    ctx->pc = 0x1496d0u;

    // 0x1496d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1496d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1496d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1496d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1496d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1496d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1496dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1496dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1496e0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1496e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1496e4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1496e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1496e8: 0x30840e77  andi        $a0, $a0, 0xE77
    ctx->pc = 0x1496e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3703);
    // 0x1496ec: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1496ECu;
    {
        const bool branch_taken_0x1496ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1496F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1496ECu;
            // 0x1496f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496ec) {
            ctx->pc = 0x14975Cu;
            goto label_14975c;
        }
    }
    ctx->pc = 0x1496F4u;
    // 0x1496f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1496f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1496f8: 0x50830014  beql        $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1496F8u;
    {
        const bool branch_taken_0x1496f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1496f8) {
            ctx->pc = 0x1496FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1496F8u;
            // 0x1496fc: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14974Cu;
            goto label_14974c;
        }
    }
    ctx->pc = 0x149700u;
    // 0x149700: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x149700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x149704: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x149704u;
    {
        const bool branch_taken_0x149704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x149704) {
            ctx->pc = 0x149708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x149704u;
            // 0x149708: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14973Cu;
            goto label_14973c;
        }
    }
    ctx->pc = 0x14970Cu;
    // 0x14970c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14970cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149710: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x149710u;
    {
        const bool branch_taken_0x149710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x149710) {
            ctx->pc = 0x149714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x149710u;
            // 0x149714: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14972Cu;
            goto label_14972c;
        }
    }
    ctx->pc = 0x149718u;
    // 0x149718: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14971c: 0x50830014  beql        $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x14971Cu;
    {
        const bool branch_taken_0x14971c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14971c) {
            ctx->pc = 0x149720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14971Cu;
            // 0x149720: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x149770u;
            goto label_149770;
        }
    }
    ctx->pc = 0x149724u;
    // 0x149724: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x149724u;
    {
        const bool branch_taken_0x149724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149724) {
            ctx->pc = 0x14976Cu;
            goto label_14976c;
        }
    }
    ctx->pc = 0x14972Cu;
label_14972c:
    // 0x14972c: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x14972Cu;
    SET_GPR_U32(ctx, 31, 0x149734u);
    ctx->pc = 0x149730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14972Cu;
            // 0x149730: 0x8ca5001c  lw          $a1, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149734u; }
        if (ctx->pc != 0x149734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149734u; }
        if (ctx->pc != 0x149734u) { return; }
    }
    ctx->pc = 0x149734u;
label_149734:
    // 0x149734: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x149734u;
    {
        const bool branch_taken_0x149734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149734u;
            // 0x149738: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149734) {
            ctx->pc = 0x14976Cu;
            goto label_14976c;
        }
    }
    ctx->pc = 0x14973Cu;
label_14973c:
    // 0x14973c: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x14973Cu;
    SET_GPR_U32(ctx, 31, 0x149744u);
    ctx->pc = 0x149740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14973Cu;
            // 0x149740: 0x8ca5001c  lw          $a1, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149744u; }
        if (ctx->pc != 0x149744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149744u; }
        if (ctx->pc != 0x149744u) { return; }
    }
    ctx->pc = 0x149744u;
label_149744:
    // 0x149744: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x149744u;
    {
        const bool branch_taken_0x149744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149744u;
            // 0x149748: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149744) {
            ctx->pc = 0x14976Cu;
            goto label_14976c;
        }
    }
    ctx->pc = 0x14974Cu;
label_14974c:
    // 0x14974c: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x14974Cu;
    SET_GPR_U32(ctx, 31, 0x149754u);
    ctx->pc = 0x149750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14974Cu;
            // 0x149750: 0x8ca5001c  lw          $a1, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149754u; }
        if (ctx->pc != 0x149754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149754u; }
        if (ctx->pc != 0x149754u) { return; }
    }
    ctx->pc = 0x149754u;
label_149754:
    // 0x149754: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x149754u;
    {
        const bool branch_taken_0x149754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149754u;
            // 0x149758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149754) {
            ctx->pc = 0x14976Cu;
            goto label_14976c;
        }
    }
    ctx->pc = 0x14975Cu;
label_14975c:
    // 0x14975c: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x14975cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x149760: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x149760u;
    SET_GPR_U32(ctx, 31, 0x149768u);
    ctx->pc = 0x149764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149760u;
            // 0x149764: 0x8ca5001c  lw          $a1, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149768u; }
        if (ctx->pc != 0x149768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149768u; }
        if (ctx->pc != 0x149768u) { return; }
    }
    ctx->pc = 0x149768u;
label_149768:
    // 0x149768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14976c:
    // 0x14976c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14976cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_149770:
    // 0x149770: 0x3e00008  jr          $ra
    ctx->pc = 0x149770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149770u;
            // 0x149774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149778u;
    // 0x149778: 0x0  nop
    ctx->pc = 0x149778u;
    // NOP
    // 0x14977c: 0x0  nop
    ctx->pc = 0x14977cu;
    // NOP
}
