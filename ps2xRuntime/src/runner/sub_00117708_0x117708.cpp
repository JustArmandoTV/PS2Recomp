#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117708
// Address: 0x117708 - 0x1177d8
void sub_00117708_0x117708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117708_0x117708");
#endif

    switch (ctx->pc) {
        case 0x11776cu: goto label_11776c;
        case 0x1177c0u: goto label_1177c0;
        default: break;
    }

    ctx->pc = 0x117708u;

    // 0x117708: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x117708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x11770c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x11770cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x117710: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x117710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x117714: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x117714u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117718: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x117718u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 16))); // MMIO: 0x10000010
    // 0x11771c: 0xdc8afa48  ld          $t2, -0x5B8($a0)
    ctx->pc = 0x11771cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 4294965832)));
    // 0x117720: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x117720u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x117724: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117724u;
    {
        const bool branch_taken_0x117724 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x117728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117724u;
            // 0x117728: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117724) {
            ctx->pc = 0x117734u;
            goto label_117734;
        }
    }
    ctx->pc = 0x11772Cu;
    // 0x11772c: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x11772cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117730: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x117730u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_117734:
    // 0x117734: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x117734u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x117738: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x117738u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x11773c: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x11773cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x117740: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x117740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x117744: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x117744u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x117748: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x117748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x11774c: 0x3e00008  jr          $ra
    ctx->pc = 0x11774Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117754u;
    // 0x117754: 0x0  nop
    ctx->pc = 0x117754u;
    // NOP
    // 0x117758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11775c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11775cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117760: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117764: 0xc045968  jal         func_1165A0
    ctx->pc = 0x117764u;
    SET_GPR_U32(ctx, 31, 0x11776Cu);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11776Cu; }
        if (ctx->pc != 0x11776Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11776Cu; }
        if (ctx->pc != 0x11776Cu) { return; }
    }
    ctx->pc = 0x11776Cu;
label_11776c:
    // 0x11776c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11776cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x117770: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x117770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x117774: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x117774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x117778: 0x9c700000  lwu         $s0, 0x0($v1)
    ctx->pc = 0x117778u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11777c: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x11777cu;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 16))); // MMIO: 0x10000010
    // 0x117780: 0xdc8afa48  ld          $t2, -0x5B8($a0)
    ctx->pc = 0x117780u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 4294965832)));
    // 0x117784: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x117784u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x117788: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117788u;
    {
        const bool branch_taken_0x117788 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x11778Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117788u;
            // 0x11778c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117788) {
            ctx->pc = 0x117798u;
            goto label_117798;
        }
    }
    ctx->pc = 0x117790u;
    // 0x117790: 0x9c700000  lwu         $s0, 0x0($v1)
    ctx->pc = 0x117790u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117794: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x117794u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_117798:
    // 0x117798: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x117798u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x11779c: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x11779cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1177a0: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x1177a0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x1177a4: 0x20a8025  or          $s0, $s0, $t2
    ctx->pc = 0x1177a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 10));
    // 0x1177a8: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x1177a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x1177ac: 0x1308014  dsllv       $s0, $s0, $t1
    ctx->pc = 0x1177acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x1177b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1177B0u;
    {
        const bool branch_taken_0x1177b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1177B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1177B0u;
            // 0x1177b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1177b0) {
            ctx->pc = 0x1177C4u;
            goto label_1177c4;
        }
    }
    ctx->pc = 0x1177B8u;
    // 0x1177b8: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x1177B8u;
    SET_GPR_U32(ctx, 31, 0x1177C0u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1177C0u; }
        if (ctx->pc != 0x1177C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1177C0u; }
        if (ctx->pc != 0x1177C0u) { return; }
    }
    ctx->pc = 0x1177C0u;
label_1177c0:
    // 0x1177c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1177c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1177c4:
    // 0x1177c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1177c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1177c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1177c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1177cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1177CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1177D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1177CCu;
            // 0x1177d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1177D4u;
    // 0x1177d4: 0x0  nop
    ctx->pc = 0x1177d4u;
    // NOP
}
