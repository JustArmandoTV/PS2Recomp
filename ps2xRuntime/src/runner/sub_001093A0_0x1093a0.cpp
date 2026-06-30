#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001093A0
// Address: 0x1093a0 - 0x109468
void sub_001093A0_0x1093a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001093A0_0x1093a0");
#endif

    switch (ctx->pc) {
        case 0x1093b8u: goto label_1093b8;
        case 0x109420u: goto label_109420;
        default: break;
    }

    ctx->pc = 0x1093a0u;

    // 0x1093a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1093a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1093a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1093a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1093a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1093a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1093ac: 0xac820828  sw          $v0, 0x828($a0)
    ctx->pc = 0x1093acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2088), GPR_U32(ctx, 2));
    // 0x1093b0: 0xc045968  jal         func_1165A0
    ctx->pc = 0x1093B0u;
    SET_GPR_U32(ctx, 31, 0x1093B8u);
    ctx->pc = 0x1093B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1093B0u;
            // 0x1093b4: 0xac8001c0  sw          $zero, 0x1C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1093B8u; }
        if (ctx->pc != 0x1093B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1093B8u; }
        if (ctx->pc != 0x1093B8u) { return; }
    }
    ctx->pc = 0x1093B8u;
label_1093b8:
    // 0x1093b8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1093b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1093bc: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1093bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1093c0: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x1093c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x1093c4: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x1093c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x1093c8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1093c8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x1093cc: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x1093ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x1093d0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1093d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1093d4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1093d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1093d8: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1093d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1093dc: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x1093dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x1093e0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1093e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1093e4: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x1093e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46080);
    // 0x1093e8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1093e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1093ec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1093ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1093f0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1093f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1093f4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x1093f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x1093f8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1093f8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x1093fc: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x1093fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x109400: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x109400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x109404: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x109404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109408: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x109408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10940c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10940cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x109410: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109410u;
    {
        const bool branch_taken_0x109410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109410u;
            // 0x109414: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109410) {
            ctx->pc = 0x109424u;
            goto label_109424;
        }
    }
    ctx->pc = 0x109418u;
    // 0x109418: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x109418u;
    SET_GPR_U32(ctx, 31, 0x109420u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109420u; }
        if (ctx->pc != 0x109420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109420u; }
        if (ctx->pc != 0x109420u) { return; }
    }
    ctx->pc = 0x109420u;
label_109420:
    // 0x109420: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_109424:
    // 0x109424: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x109424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x109428: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x109428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x10942c: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x10942cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x109430: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x109430u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x109434: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x109434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x109438: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x109438u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x10943c: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x10943cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x109440: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x109440u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x109444: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x109448: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x109448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x10944c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x10944cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x109450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109454: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x109454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109458: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x109458u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10945c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10945cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109460: 0x8042f06  j           func_10BC18
    ctx->pc = 0x109460u;
    ctx->pc = 0x109464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109460u;
            // 0x109464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BC18u;
    {
        auto targetFn = runtime->lookupFunction(0x10BC18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x109468u;
}
