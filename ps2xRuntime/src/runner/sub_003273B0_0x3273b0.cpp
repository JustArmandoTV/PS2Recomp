#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003273B0
// Address: 0x3273b0 - 0x327560
void sub_003273B0_0x3273b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003273B0_0x3273b0");
#endif

    switch (ctx->pc) {
        case 0x3273d8u: goto label_3273d8;
        case 0x327424u: goto label_327424;
        default: break;
    }

    ctx->pc = 0x3273b0u;

    // 0x3273b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3273b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3273b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3273b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3273b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3273b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3273bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3273bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3273c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3273c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3273c4: 0x8c830668  lw          $v1, 0x668($a0)
    ctx->pc = 0x3273c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1640)));
    // 0x3273c8: 0x1460005d  bnez        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x3273C8u;
    {
        const bool branch_taken_0x3273c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3273CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3273C8u;
            // 0x3273cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3273c8) {
            ctx->pc = 0x327540u;
            goto label_327540;
        }
    }
    ctx->pc = 0x3273D0u;
    // 0x3273d0: 0xc040180  jal         func_100600
    ctx->pc = 0x3273D0u;
    SET_GPR_U32(ctx, 31, 0x3273D8u);
    ctx->pc = 0x3273D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3273D0u;
            // 0x3273d4: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3273D8u; }
        if (ctx->pc != 0x3273D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3273D8u; }
        if (ctx->pc != 0x3273D8u) { return; }
    }
    ctx->pc = 0x3273D8u;
label_3273d8:
    // 0x3273d8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3273D8u;
    {
        const bool branch_taken_0x3273d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3273d8) {
            ctx->pc = 0x3273DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3273D8u;
            // 0x3273dc: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327418u;
            goto label_327418;
        }
    }
    ctx->pc = 0x3273E0u;
    // 0x3273e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3273e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3273e4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3273e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3273e8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3273e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3273ec: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3273ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3273f0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x3273f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x3273f4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x3273f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x3273f8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x3273f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x3273fc: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x3273fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x327400: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x327400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x327404: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x327404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x327408: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x327408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x32740c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x32740cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x327410: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x327410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x327414: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x327414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_327418:
    // 0x327418: 0xae020668  sw          $v0, 0x668($s0)
    ctx->pc = 0x327418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 2));
    // 0x32741c: 0xc075128  jal         func_1D44A0
    ctx->pc = 0x32741Cu;
    SET_GPR_U32(ctx, 31, 0x327424u);
    ctx->pc = 0x327420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32741Cu;
            // 0x327420: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327424u; }
        if (ctx->pc != 0x327424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327424u; }
        if (ctx->pc != 0x327424u) { return; }
    }
    ctx->pc = 0x327424u;
label_327424:
    // 0x327424: 0x8e050668  lw          $a1, 0x668($s0)
    ctx->pc = 0x327424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1640)));
    // 0x327428: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x327428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x32742c: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x32742cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x327430: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x327430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x327434: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x327434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x327438: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x327438u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x32743c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x32743Cu;
    {
        const bool branch_taken_0x32743c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32743c) {
            ctx->pc = 0x327440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32743Cu;
            // 0x327440: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327450u;
            goto label_327450;
        }
    }
    ctx->pc = 0x327444u;
    // 0x327444: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x327444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x327448: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x327448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x32744c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x32744cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_327450:
    // 0x327450: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x327450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x327454: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x327454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x327458: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x327458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x32745c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x32745cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x327460: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x327460u;
    {
        const bool branch_taken_0x327460 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x327460) {
            ctx->pc = 0x327464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327460u;
            // 0x327464: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327474u;
            goto label_327474;
        }
    }
    ctx->pc = 0x327468u;
    // 0x327468: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x327468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x32746c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x32746cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x327470: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x327470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_327474:
    // 0x327474: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x327474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x327478: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x327478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x32747c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x32747cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x327480: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x327480u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x327484: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x327484u;
    {
        const bool branch_taken_0x327484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x327484) {
            ctx->pc = 0x327488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327484u;
            // 0x327488: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327498u;
            goto label_327498;
        }
    }
    ctx->pc = 0x32748Cu;
    // 0x32748c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32748cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x327490: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x327490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x327494: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x327494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_327498:
    // 0x327498: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x327498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x32749c: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x32749cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
    // 0x3274a0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3274a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3274a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3274a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3274a8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3274A8u;
    {
        const bool branch_taken_0x3274a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3274a8) {
            ctx->pc = 0x3274ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3274A8u;
            // 0x3274ac: 0x8e040668  lw          $a0, 0x668($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1640)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3274BCu;
            goto label_3274bc;
        }
    }
    ctx->pc = 0x3274B0u;
    // 0x3274b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3274b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3274b4: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x3274b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
    // 0x3274b8: 0x8e040668  lw          $a0, 0x668($s0)
    ctx->pc = 0x3274b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1640)));
label_3274bc:
    // 0x3274bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3274bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3274c0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3274c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x3274c4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3274c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3274c8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3274c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3274cc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3274ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3274d0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3274D0u;
    {
        const bool branch_taken_0x3274d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3274d0) {
            ctx->pc = 0x3274D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3274D0u;
            // 0x3274d4: 0x8e040668  lw          $a0, 0x668($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1640)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3274E4u;
            goto label_3274e4;
        }
    }
    ctx->pc = 0x3274D8u;
    // 0x3274d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3274d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3274dc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3274dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x3274e0: 0x8e040668  lw          $a0, 0x668($s0)
    ctx->pc = 0x3274e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1640)));
label_3274e4:
    // 0x3274e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3274e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3274e8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3274e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x3274ec: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3274ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3274f0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3274f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3274f4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3274f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3274f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3274F8u;
    {
        const bool branch_taken_0x3274f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3274f8) {
            ctx->pc = 0x327508u;
            goto label_327508;
        }
    }
    ctx->pc = 0x327500u;
    // 0x327500: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x327500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x327504: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x327504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_327508:
    // 0x327508: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x327508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x32750c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x32750cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
    // 0x327510: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x327510u;
    {
        const bool branch_taken_0x327510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x327510) {
            ctx->pc = 0x327524u;
            goto label_327524;
        }
    }
    ctx->pc = 0x327518u;
    // 0x327518: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x327518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32751c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32751cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x327520: 0xac64e3c8  sw          $a0, -0x1C38($v1)
    ctx->pc = 0x327520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 4));
label_327524:
    // 0x327524: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x327524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x327528: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x327528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
    // 0x32752c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32752Cu;
    {
        const bool branch_taken_0x32752c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32752c) {
            ctx->pc = 0x327530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32752Cu;
            // 0x327530: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327544u;
            goto label_327544;
        }
    }
    ctx->pc = 0x327534u;
    // 0x327534: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x327534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327538: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x327538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x32753c: 0xac64e3d0  sw          $a0, -0x1C30($v1)
    ctx->pc = 0x32753cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 4));
label_327540:
    // 0x327540: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x327540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_327544:
    // 0x327544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x327544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x327548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32754c: 0x3e00008  jr          $ra
    ctx->pc = 0x32754Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32754Cu;
            // 0x327550: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x327554u;
    // 0x327554: 0x0  nop
    ctx->pc = 0x327554u;
    // NOP
    // 0x327558: 0x0  nop
    ctx->pc = 0x327558u;
    // NOP
    // 0x32755c: 0x0  nop
    ctx->pc = 0x32755cu;
    // NOP
}
