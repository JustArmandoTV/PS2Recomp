#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164678
// Address: 0x164678 - 0x164740
void sub_00164678_0x164678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164678_0x164678");
#endif

    switch (ctx->pc) {
        case 0x164688u: goto label_164688;
        case 0x164690u: goto label_164690;
        case 0x1646a4u: goto label_1646a4;
        case 0x1646c8u: goto label_1646c8;
        case 0x1646d0u: goto label_1646d0;
        default: break;
    }

    ctx->pc = 0x164678u;

    // 0x164678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16467c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16467cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164680: 0xc05deec  jal         func_177BB0
    ctx->pc = 0x164680u;
    SET_GPR_U32(ctx, 31, 0x164688u);
    ctx->pc = 0x177BB0u;
    if (runtime->hasFunction(0x177BB0u)) {
        auto targetFn = runtime->lookupFunction(0x177BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164688u; }
        if (ctx->pc != 0x164688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177BB0_0x177bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164688u; }
        if (ctx->pc != 0x164688u) { return; }
    }
    ctx->pc = 0x164688u;
label_164688:
    // 0x164688: 0xc0590f4  jal         func_1643D0
    ctx->pc = 0x164688u;
    SET_GPR_U32(ctx, 31, 0x164690u);
    ctx->pc = 0x1643D0u;
    if (runtime->hasFunction(0x1643D0u)) {
        auto targetFn = runtime->lookupFunction(0x1643D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164690u; }
        if (ctx->pc != 0x164690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001643D0_0x1643d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164690u; }
        if (ctx->pc != 0x164690u) { return; }
    }
    ctx->pc = 0x164690u;
label_164690:
    // 0x164690: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x164690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x164694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164698: 0x24846200  addiu       $a0, $a0, 0x6200
    ctx->pc = 0x164698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25088));
    // 0x16469c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x16469Cu;
    SET_GPR_U32(ctx, 31, 0x1646A4u);
    ctx->pc = 0x1646A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16469Cu;
            // 0x1646a0: 0x24061040  addiu       $a2, $zero, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646A4u; }
        if (ctx->pc != 0x1646A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646A4u; }
        if (ctx->pc != 0x1646A4u) { return; }
    }
    ctx->pc = 0x1646A4u;
label_1646a4:
    // 0x1646a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1646a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1646a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1646ac: 0x8059196  j           func_164658
    ctx->pc = 0x1646ACu;
    ctx->pc = 0x1646B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1646ACu;
            // 0x1646b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164658u;
    {
        auto targetFn = runtime->lookupFunction(0x164658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1646B4u;
    // 0x1646b4: 0x0  nop
    ctx->pc = 0x1646b4u;
    // NOP
    // 0x1646b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1646b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1646bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1646bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1646c0: 0xc05def6  jal         func_177BD8
    ctx->pc = 0x1646C0u;
    SET_GPR_U32(ctx, 31, 0x1646C8u);
    ctx->pc = 0x177BD8u;
    if (runtime->hasFunction(0x177BD8u)) {
        auto targetFn = runtime->lookupFunction(0x177BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646C8u; }
        if (ctx->pc != 0x1646C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177BD8_0x177bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646C8u; }
        if (ctx->pc != 0x1646C8u) { return; }
    }
    ctx->pc = 0x1646C8u;
label_1646c8:
    // 0x1646c8: 0xc0590fc  jal         func_1643F0
    ctx->pc = 0x1646C8u;
    SET_GPR_U32(ctx, 31, 0x1646D0u);
    ctx->pc = 0x1643F0u;
    if (runtime->hasFunction(0x1643F0u)) {
        auto targetFn = runtime->lookupFunction(0x1643F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646D0u; }
        if (ctx->pc != 0x1646D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001643F0_0x1643f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646D0u; }
        if (ctx->pc != 0x1646D0u) { return; }
    }
    ctx->pc = 0x1646D0u;
label_1646d0:
    // 0x1646d0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1646d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1646d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1646d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1646d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1646d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646dc: 0x24846200  addiu       $a0, $a0, 0x6200
    ctx->pc = 0x1646dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25088));
    // 0x1646e0: 0x24061040  addiu       $a2, $zero, 0x1040
    ctx->pc = 0x1646e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
    // 0x1646e4: 0x804a576  j           func_1295D8
    ctx->pc = 0x1646E4u;
    ctx->pc = 0x1646E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1646E4u;
            // 0x1646e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1646ECu;
    // 0x1646ec: 0x0  nop
    ctx->pc = 0x1646ecu;
    // NOP
    // 0x1646f0: 0x8c88008c  lw          $t0, 0x8C($a0)
    ctx->pc = 0x1646f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x1646f4: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1646f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1646f8: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x1646f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x1646fc: 0x8c85008c  lw          $a1, 0x8C($a0)
    ctx->pc = 0x1646fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x164700: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x164700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x164704: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x164704u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x164708: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x164708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x16470c: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x16470cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x164710: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x164710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x164714: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x164714u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x164718: 0x3e00008  jr          $ra
    ctx->pc = 0x164718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16471Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164718u;
            // 0x16471c: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164720u;
    // 0x164720: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x164720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x164724: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x164724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x164728: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x164728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16472c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x16472cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x164730: 0xac82008c  sw          $v0, 0x8C($a0)
    ctx->pc = 0x164730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
    // 0x164734: 0x3e00008  jr          $ra
    ctx->pc = 0x164734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164734u;
            // 0x164738: 0xac830088  sw          $v1, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16473Cu;
    // 0x16473c: 0x0  nop
    ctx->pc = 0x16473cu;
    // NOP
}
