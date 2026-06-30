#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A288
// Address: 0x18a288 - 0x18a490
void sub_0018A288_0x18a288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A288_0x18a288");
#endif

    switch (ctx->pc) {
        case 0x18a288u: goto label_18a288;
        case 0x18a28cu: goto label_18a28c;
        case 0x18a290u: goto label_18a290;
        case 0x18a294u: goto label_18a294;
        case 0x18a298u: goto label_18a298;
        case 0x18a29cu: goto label_18a29c;
        case 0x18a2a0u: goto label_18a2a0;
        case 0x18a2a4u: goto label_18a2a4;
        case 0x18a2a8u: goto label_18a2a8;
        case 0x18a2acu: goto label_18a2ac;
        case 0x18a2b0u: goto label_18a2b0;
        case 0x18a2b4u: goto label_18a2b4;
        case 0x18a2b8u: goto label_18a2b8;
        case 0x18a2bcu: goto label_18a2bc;
        case 0x18a2c0u: goto label_18a2c0;
        case 0x18a2c4u: goto label_18a2c4;
        case 0x18a2c8u: goto label_18a2c8;
        case 0x18a2ccu: goto label_18a2cc;
        case 0x18a2d0u: goto label_18a2d0;
        case 0x18a2d4u: goto label_18a2d4;
        case 0x18a2d8u: goto label_18a2d8;
        case 0x18a2dcu: goto label_18a2dc;
        case 0x18a2e0u: goto label_18a2e0;
        case 0x18a2e4u: goto label_18a2e4;
        case 0x18a2e8u: goto label_18a2e8;
        case 0x18a2ecu: goto label_18a2ec;
        case 0x18a2f0u: goto label_18a2f0;
        case 0x18a2f4u: goto label_18a2f4;
        case 0x18a2f8u: goto label_18a2f8;
        case 0x18a2fcu: goto label_18a2fc;
        case 0x18a300u: goto label_18a300;
        case 0x18a304u: goto label_18a304;
        case 0x18a308u: goto label_18a308;
        case 0x18a30cu: goto label_18a30c;
        case 0x18a310u: goto label_18a310;
        case 0x18a314u: goto label_18a314;
        case 0x18a318u: goto label_18a318;
        case 0x18a31cu: goto label_18a31c;
        case 0x18a320u: goto label_18a320;
        case 0x18a324u: goto label_18a324;
        case 0x18a328u: goto label_18a328;
        case 0x18a32cu: goto label_18a32c;
        case 0x18a330u: goto label_18a330;
        case 0x18a334u: goto label_18a334;
        case 0x18a338u: goto label_18a338;
        case 0x18a33cu: goto label_18a33c;
        case 0x18a340u: goto label_18a340;
        case 0x18a344u: goto label_18a344;
        case 0x18a348u: goto label_18a348;
        case 0x18a34cu: goto label_18a34c;
        case 0x18a350u: goto label_18a350;
        case 0x18a354u: goto label_18a354;
        case 0x18a358u: goto label_18a358;
        case 0x18a35cu: goto label_18a35c;
        case 0x18a360u: goto label_18a360;
        case 0x18a364u: goto label_18a364;
        case 0x18a368u: goto label_18a368;
        case 0x18a36cu: goto label_18a36c;
        case 0x18a370u: goto label_18a370;
        case 0x18a374u: goto label_18a374;
        case 0x18a378u: goto label_18a378;
        case 0x18a37cu: goto label_18a37c;
        case 0x18a380u: goto label_18a380;
        case 0x18a384u: goto label_18a384;
        case 0x18a388u: goto label_18a388;
        case 0x18a38cu: goto label_18a38c;
        case 0x18a390u: goto label_18a390;
        case 0x18a394u: goto label_18a394;
        case 0x18a398u: goto label_18a398;
        case 0x18a39cu: goto label_18a39c;
        case 0x18a3a0u: goto label_18a3a0;
        case 0x18a3a4u: goto label_18a3a4;
        case 0x18a3a8u: goto label_18a3a8;
        case 0x18a3acu: goto label_18a3ac;
        case 0x18a3b0u: goto label_18a3b0;
        case 0x18a3b4u: goto label_18a3b4;
        case 0x18a3b8u: goto label_18a3b8;
        case 0x18a3bcu: goto label_18a3bc;
        case 0x18a3c0u: goto label_18a3c0;
        case 0x18a3c4u: goto label_18a3c4;
        case 0x18a3c8u: goto label_18a3c8;
        case 0x18a3ccu: goto label_18a3cc;
        case 0x18a3d0u: goto label_18a3d0;
        case 0x18a3d4u: goto label_18a3d4;
        case 0x18a3d8u: goto label_18a3d8;
        case 0x18a3dcu: goto label_18a3dc;
        case 0x18a3e0u: goto label_18a3e0;
        case 0x18a3e4u: goto label_18a3e4;
        case 0x18a3e8u: goto label_18a3e8;
        case 0x18a3ecu: goto label_18a3ec;
        case 0x18a3f0u: goto label_18a3f0;
        case 0x18a3f4u: goto label_18a3f4;
        case 0x18a3f8u: goto label_18a3f8;
        case 0x18a3fcu: goto label_18a3fc;
        case 0x18a400u: goto label_18a400;
        case 0x18a404u: goto label_18a404;
        case 0x18a408u: goto label_18a408;
        case 0x18a40cu: goto label_18a40c;
        case 0x18a410u: goto label_18a410;
        case 0x18a414u: goto label_18a414;
        case 0x18a418u: goto label_18a418;
        case 0x18a41cu: goto label_18a41c;
        case 0x18a420u: goto label_18a420;
        case 0x18a424u: goto label_18a424;
        case 0x18a428u: goto label_18a428;
        case 0x18a42cu: goto label_18a42c;
        case 0x18a430u: goto label_18a430;
        case 0x18a434u: goto label_18a434;
        case 0x18a438u: goto label_18a438;
        case 0x18a43cu: goto label_18a43c;
        case 0x18a440u: goto label_18a440;
        case 0x18a444u: goto label_18a444;
        case 0x18a448u: goto label_18a448;
        case 0x18a44cu: goto label_18a44c;
        case 0x18a450u: goto label_18a450;
        case 0x18a454u: goto label_18a454;
        case 0x18a458u: goto label_18a458;
        case 0x18a45cu: goto label_18a45c;
        case 0x18a460u: goto label_18a460;
        case 0x18a464u: goto label_18a464;
        case 0x18a468u: goto label_18a468;
        case 0x18a46cu: goto label_18a46c;
        case 0x18a470u: goto label_18a470;
        case 0x18a474u: goto label_18a474;
        case 0x18a478u: goto label_18a478;
        case 0x18a47cu: goto label_18a47c;
        case 0x18a480u: goto label_18a480;
        case 0x18a484u: goto label_18a484;
        case 0x18a488u: goto label_18a488;
        case 0x18a48cu: goto label_18a48c;
        default: break;
    }

    ctx->pc = 0x18a288u;

label_18a288:
    // 0x18a288: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x18a288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_18a28c:
    // 0x18a28c: 0x3e00008  jr          $ra
label_18a290:
    if (ctx->pc == 0x18A290u) {
        ctx->pc = 0x18A290u;
            // 0x18a290: 0x8c6269e8  lw          $v0, 0x69E8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27112)));
        ctx->pc = 0x18A294u;
        goto label_18a294;
    }
    ctx->pc = 0x18A28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A28Cu;
            // 0x18a290: 0x8c6269e8  lw          $v0, 0x69E8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A294u;
label_18a294:
    // 0x18a294: 0x0  nop
    ctx->pc = 0x18a294u;
    // NOP
label_18a298:
    // 0x18a298: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x18a298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_18a29c:
    // 0x18a29c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a29cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a2a0:
    // 0x18a2a0: 0x8c6369ec  lw          $v1, 0x69EC($v1)
    ctx->pc = 0x18a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27116)));
label_18a2a4:
    // 0x18a2a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a2a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a2a8:
    // 0x18a2a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_18a2ac:
    if (ctx->pc == 0x18A2ACu) {
        ctx->pc = 0x18A2ACu;
            // 0x18a2ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A2B0u;
        goto label_18a2b0;
    }
    ctx->pc = 0x18A2A8u;
    {
        const bool branch_taken_0x18a2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A2A8u;
            // 0x18a2ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2a8) {
            ctx->pc = 0x18A2B8u;
            goto label_18a2b8;
        }
    }
    ctx->pc = 0x18A2B0u;
label_18a2b0:
    // 0x18a2b0: 0x60f809  jalr        $v1
label_18a2b4:
    if (ctx->pc == 0x18A2B4u) {
        ctx->pc = 0x18A2B8u;
        goto label_18a2b8;
    }
    ctx->pc = 0x18A2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18A2B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A2B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A2B8u; }
            if (ctx->pc != 0x18A2B8u) { return; }
        }
        }
    }
    ctx->pc = 0x18A2B8u;
label_18a2b8:
    // 0x18a2b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a2bc:
    // 0x18a2bc: 0x3e00008  jr          $ra
label_18a2c0:
    if (ctx->pc == 0x18A2C0u) {
        ctx->pc = 0x18A2C0u;
            // 0x18a2c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A2C4u;
        goto label_18a2c4;
    }
    ctx->pc = 0x18A2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A2BCu;
            // 0x18a2c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A2C4u;
label_18a2c4:
    // 0x18a2c4: 0x0  nop
    ctx->pc = 0x18a2c4u;
    // NOP
label_18a2c8:
    // 0x18a2c8: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x18a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_18a2cc:
    // 0x18a2cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a2ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a2d0:
    // 0x18a2d0: 0x8c6369f0  lw          $v1, 0x69F0($v1)
    ctx->pc = 0x18a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27120)));
label_18a2d4:
    // 0x18a2d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a2d8:
    // 0x18a2d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_18a2dc:
    if (ctx->pc == 0x18A2DCu) {
        ctx->pc = 0x18A2DCu;
            // 0x18a2dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A2E0u;
        goto label_18a2e0;
    }
    ctx->pc = 0x18A2D8u;
    {
        const bool branch_taken_0x18a2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A2D8u;
            // 0x18a2dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2d8) {
            ctx->pc = 0x18A2E8u;
            goto label_18a2e8;
        }
    }
    ctx->pc = 0x18A2E0u;
label_18a2e0:
    // 0x18a2e0: 0x60f809  jalr        $v1
label_18a2e4:
    if (ctx->pc == 0x18A2E4u) {
        ctx->pc = 0x18A2E8u;
        goto label_18a2e8;
    }
    ctx->pc = 0x18A2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18A2E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A2E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A2E8u; }
            if (ctx->pc != 0x18A2E8u) { return; }
        }
        }
    }
    ctx->pc = 0x18A2E8u;
label_18a2e8:
    // 0x18a2e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a2ec:
    // 0x18a2ec: 0x3e00008  jr          $ra
label_18a2f0:
    if (ctx->pc == 0x18A2F0u) {
        ctx->pc = 0x18A2F0u;
            // 0x18a2f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A2F4u;
        goto label_18a2f4;
    }
    ctx->pc = 0x18A2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A2ECu;
            // 0x18a2f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A2F4u;
label_18a2f4:
    // 0x18a2f4: 0x0  nop
    ctx->pc = 0x18a2f4u;
    // NOP
label_18a2f8:
    // 0x18a2f8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18a2fc:
    // 0x18a2fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a2fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a300:
    // 0x18a300: 0x8c4269f4  lw          $v0, 0x69F4($v0)
    ctx->pc = 0x18a300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27124)));
label_18a304:
    // 0x18a304: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a308:
    if (ctx->pc == 0x18A308u) {
        ctx->pc = 0x18A308u;
            // 0x18a308: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A30Cu;
        goto label_18a30c;
    }
    ctx->pc = 0x18A304u;
    {
        const bool branch_taken_0x18a304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A304u;
            // 0x18a308: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a304) {
            ctx->pc = 0x18A314u;
            goto label_18a314;
        }
    }
    ctx->pc = 0x18A30Cu;
label_18a30c:
    // 0x18a30c: 0x40f809  jalr        $v0
label_18a310:
    if (ctx->pc == 0x18A310u) {
        ctx->pc = 0x18A314u;
        goto label_18a314;
    }
    ctx->pc = 0x18A30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A314u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A314u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A314u; }
            if (ctx->pc != 0x18A314u) { return; }
        }
        }
    }
    ctx->pc = 0x18A314u;
label_18a314:
    // 0x18a314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a318:
    // 0x18a318: 0x3e00008  jr          $ra
label_18a31c:
    if (ctx->pc == 0x18A31Cu) {
        ctx->pc = 0x18A31Cu;
            // 0x18a31c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A320u;
        goto label_18a320;
    }
    ctx->pc = 0x18A318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A318u;
            // 0x18a31c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A320u;
label_18a320:
    // 0x18a320: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18a320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18a324:
    // 0x18a324: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a328:
    // 0x18a328: 0x8c4269f8  lw          $v0, 0x69F8($v0)
    ctx->pc = 0x18a328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27128)));
label_18a32c:
    // 0x18a32c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a330:
    if (ctx->pc == 0x18A330u) {
        ctx->pc = 0x18A330u;
            // 0x18a330: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A334u;
        goto label_18a334;
    }
    ctx->pc = 0x18A32Cu;
    {
        const bool branch_taken_0x18a32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A32Cu;
            // 0x18a330: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a32c) {
            ctx->pc = 0x18A33Cu;
            goto label_18a33c;
        }
    }
    ctx->pc = 0x18A334u;
label_18a334:
    // 0x18a334: 0x40f809  jalr        $v0
label_18a338:
    if (ctx->pc == 0x18A338u) {
        ctx->pc = 0x18A33Cu;
        goto label_18a33c;
    }
    ctx->pc = 0x18A334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A33Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A33Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A33Cu; }
            if (ctx->pc != 0x18A33Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18A33Cu;
label_18a33c:
    // 0x18a33c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a340:
    // 0x18a340: 0x3e00008  jr          $ra
label_18a344:
    if (ctx->pc == 0x18A344u) {
        ctx->pc = 0x18A344u;
            // 0x18a344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A348u;
        goto label_18a348;
    }
    ctx->pc = 0x18A340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A340u;
            // 0x18a344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A348u;
label_18a348:
    // 0x18a348: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x18a348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_18a34c:
    // 0x18a34c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a34cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a350:
    // 0x18a350: 0x8c6369fc  lw          $v1, 0x69FC($v1)
    ctx->pc = 0x18a350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27132)));
label_18a354:
    // 0x18a354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a358:
    // 0x18a358: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_18a35c:
    if (ctx->pc == 0x18A35Cu) {
        ctx->pc = 0x18A35Cu;
            // 0x18a35c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A360u;
        goto label_18a360;
    }
    ctx->pc = 0x18A358u;
    {
        const bool branch_taken_0x18a358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A358u;
            // 0x18a35c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a358) {
            ctx->pc = 0x18A368u;
            goto label_18a368;
        }
    }
    ctx->pc = 0x18A360u;
label_18a360:
    // 0x18a360: 0x60f809  jalr        $v1
label_18a364:
    if (ctx->pc == 0x18A364u) {
        ctx->pc = 0x18A368u;
        goto label_18a368;
    }
    ctx->pc = 0x18A360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18A368u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A368u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A368u; }
            if (ctx->pc != 0x18A368u) { return; }
        }
        }
    }
    ctx->pc = 0x18A368u;
label_18a368:
    // 0x18a368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a36c:
    // 0x18a36c: 0x3e00008  jr          $ra
label_18a370:
    if (ctx->pc == 0x18A370u) {
        ctx->pc = 0x18A370u;
            // 0x18a370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A374u;
        goto label_18a374;
    }
    ctx->pc = 0x18A36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A36Cu;
            // 0x18a370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A374u;
label_18a374:
    // 0x18a374: 0x0  nop
    ctx->pc = 0x18a374u;
    // NOP
label_18a378:
    // 0x18a378: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18a378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18a37c:
    // 0x18a37c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a37cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a380:
    // 0x18a380: 0x8c426a00  lw          $v0, 0x6A00($v0)
    ctx->pc = 0x18a380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27136)));
label_18a384:
    // 0x18a384: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a388:
    if (ctx->pc == 0x18A388u) {
        ctx->pc = 0x18A388u;
            // 0x18a388: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A38Cu;
        goto label_18a38c;
    }
    ctx->pc = 0x18A384u;
    {
        const bool branch_taken_0x18a384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A384u;
            // 0x18a388: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a384) {
            ctx->pc = 0x18A394u;
            goto label_18a394;
        }
    }
    ctx->pc = 0x18A38Cu;
label_18a38c:
    // 0x18a38c: 0x40f809  jalr        $v0
label_18a390:
    if (ctx->pc == 0x18A390u) {
        ctx->pc = 0x18A394u;
        goto label_18a394;
    }
    ctx->pc = 0x18A38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A394u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A394u; }
            if (ctx->pc != 0x18A394u) { return; }
        }
        }
    }
    ctx->pc = 0x18A394u;
label_18a394:
    // 0x18a394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a398:
    // 0x18a398: 0x3e00008  jr          $ra
label_18a39c:
    if (ctx->pc == 0x18A39Cu) {
        ctx->pc = 0x18A39Cu;
            // 0x18a39c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A3A0u;
        goto label_18a3a0;
    }
    ctx->pc = 0x18A398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A398u;
            // 0x18a39c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A3A0u;
label_18a3a0:
    // 0x18a3a0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18a3a4:
    // 0x18a3a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a3a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a3a8:
    // 0x18a3a8: 0x8c426a04  lw          $v0, 0x6A04($v0)
    ctx->pc = 0x18a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27140)));
label_18a3ac:
    // 0x18a3ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a3b0:
    if (ctx->pc == 0x18A3B0u) {
        ctx->pc = 0x18A3B0u;
            // 0x18a3b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A3B4u;
        goto label_18a3b4;
    }
    ctx->pc = 0x18A3ACu;
    {
        const bool branch_taken_0x18a3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3ACu;
            // 0x18a3b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3ac) {
            ctx->pc = 0x18A3BCu;
            goto label_18a3bc;
        }
    }
    ctx->pc = 0x18A3B4u;
label_18a3b4:
    // 0x18a3b4: 0x40f809  jalr        $v0
label_18a3b8:
    if (ctx->pc == 0x18A3B8u) {
        ctx->pc = 0x18A3BCu;
        goto label_18a3bc;
    }
    ctx->pc = 0x18A3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A3BCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A3BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A3BCu; }
            if (ctx->pc != 0x18A3BCu) { return; }
        }
        }
    }
    ctx->pc = 0x18A3BCu;
label_18a3bc:
    // 0x18a3bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a3c0:
    // 0x18a3c0: 0x3e00008  jr          $ra
label_18a3c4:
    if (ctx->pc == 0x18A3C4u) {
        ctx->pc = 0x18A3C4u;
            // 0x18a3c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A3C8u;
        goto label_18a3c8;
    }
    ctx->pc = 0x18A3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3C0u;
            // 0x18a3c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A3C8u;
label_18a3c8:
    // 0x18a3c8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18a3cc:
    // 0x18a3cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a3ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a3d0:
    // 0x18a3d0: 0x8c426a08  lw          $v0, 0x6A08($v0)
    ctx->pc = 0x18a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27144)));
label_18a3d4:
    // 0x18a3d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a3d8:
    if (ctx->pc == 0x18A3D8u) {
        ctx->pc = 0x18A3D8u;
            // 0x18a3d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A3DCu;
        goto label_18a3dc;
    }
    ctx->pc = 0x18A3D4u;
    {
        const bool branch_taken_0x18a3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3D4u;
            // 0x18a3d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3d4) {
            ctx->pc = 0x18A3E4u;
            goto label_18a3e4;
        }
    }
    ctx->pc = 0x18A3DCu;
label_18a3dc:
    // 0x18a3dc: 0x40f809  jalr        $v0
label_18a3e0:
    if (ctx->pc == 0x18A3E0u) {
        ctx->pc = 0x18A3E4u;
        goto label_18a3e4;
    }
    ctx->pc = 0x18A3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A3E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A3E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A3E4u; }
            if (ctx->pc != 0x18A3E4u) { return; }
        }
        }
    }
    ctx->pc = 0x18A3E4u;
label_18a3e4:
    // 0x18a3e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a3e8:
    // 0x18a3e8: 0x3e00008  jr          $ra
label_18a3ec:
    if (ctx->pc == 0x18A3ECu) {
        ctx->pc = 0x18A3ECu;
            // 0x18a3ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A3F0u;
        goto label_18a3f0;
    }
    ctx->pc = 0x18A3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3E8u;
            // 0x18a3ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A3F0u;
label_18a3f0:
    // 0x18a3f0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18a3f4:
    // 0x18a3f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a3f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a3f8:
    // 0x18a3f8: 0x8c426a0c  lw          $v0, 0x6A0C($v0)
    ctx->pc = 0x18a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27148)));
label_18a3fc:
    // 0x18a3fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a400:
    if (ctx->pc == 0x18A400u) {
        ctx->pc = 0x18A400u;
            // 0x18a400: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A404u;
        goto label_18a404;
    }
    ctx->pc = 0x18A3FCu;
    {
        const bool branch_taken_0x18a3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3FCu;
            // 0x18a400: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3fc) {
            ctx->pc = 0x18A40Cu;
            goto label_18a40c;
        }
    }
    ctx->pc = 0x18A404u;
label_18a404:
    // 0x18a404: 0x40f809  jalr        $v0
label_18a408:
    if (ctx->pc == 0x18A408u) {
        ctx->pc = 0x18A40Cu;
        goto label_18a40c;
    }
    ctx->pc = 0x18A404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A40Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A40Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A40Cu; }
            if (ctx->pc != 0x18A40Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18A40Cu;
label_18a40c:
    // 0x18a40c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a410:
    // 0x18a410: 0x3e00008  jr          $ra
label_18a414:
    if (ctx->pc == 0x18A414u) {
        ctx->pc = 0x18A414u;
            // 0x18a414: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A418u;
        goto label_18a418;
    }
    ctx->pc = 0x18A410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A410u;
            // 0x18a414: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A418u;
label_18a418:
    // 0x18a418: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18a418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18a41c:
    // 0x18a41c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a41cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a420:
    // 0x18a420: 0x8c426a10  lw          $v0, 0x6A10($v0)
    ctx->pc = 0x18a420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27152)));
label_18a424:
    // 0x18a424: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a428:
    if (ctx->pc == 0x18A428u) {
        ctx->pc = 0x18A428u;
            // 0x18a428: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A42Cu;
        goto label_18a42c;
    }
    ctx->pc = 0x18A424u;
    {
        const bool branch_taken_0x18a424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A424u;
            // 0x18a428: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a424) {
            ctx->pc = 0x18A434u;
            goto label_18a434;
        }
    }
    ctx->pc = 0x18A42Cu;
label_18a42c:
    // 0x18a42c: 0x40f809  jalr        $v0
label_18a430:
    if (ctx->pc == 0x18A430u) {
        ctx->pc = 0x18A434u;
        goto label_18a434;
    }
    ctx->pc = 0x18A42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A434u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A434u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A434u; }
            if (ctx->pc != 0x18A434u) { return; }
        }
        }
    }
    ctx->pc = 0x18A434u;
label_18a434:
    // 0x18a434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a438:
    // 0x18a438: 0x3e00008  jr          $ra
label_18a43c:
    if (ctx->pc == 0x18A43Cu) {
        ctx->pc = 0x18A43Cu;
            // 0x18a43c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A440u;
        goto label_18a440;
    }
    ctx->pc = 0x18A438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A438u;
            // 0x18a43c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A440u;
label_18a440:
    // 0x18a440: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18a440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18a444:
    // 0x18a444: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a448:
    // 0x18a448: 0x8c426a14  lw          $v0, 0x6A14($v0)
    ctx->pc = 0x18a448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27156)));
label_18a44c:
    // 0x18a44c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a450:
    if (ctx->pc == 0x18A450u) {
        ctx->pc = 0x18A450u;
            // 0x18a450: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A454u;
        goto label_18a454;
    }
    ctx->pc = 0x18A44Cu;
    {
        const bool branch_taken_0x18a44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A44Cu;
            // 0x18a450: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a44c) {
            ctx->pc = 0x18A45Cu;
            goto label_18a45c;
        }
    }
    ctx->pc = 0x18A454u;
label_18a454:
    // 0x18a454: 0x40f809  jalr        $v0
label_18a458:
    if (ctx->pc == 0x18A458u) {
        ctx->pc = 0x18A45Cu;
        goto label_18a45c;
    }
    ctx->pc = 0x18A454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A45Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A45Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A45Cu; }
            if (ctx->pc != 0x18A45Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18A45Cu;
label_18a45c:
    // 0x18a45c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a460:
    // 0x18a460: 0x3e00008  jr          $ra
label_18a464:
    if (ctx->pc == 0x18A464u) {
        ctx->pc = 0x18A464u;
            // 0x18a464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A468u;
        goto label_18a468;
    }
    ctx->pc = 0x18A460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A460u;
            // 0x18a464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A468u;
label_18a468:
    // 0x18a468: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18a468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18a46c:
    // 0x18a46c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a46cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a470:
    // 0x18a470: 0x8c426a18  lw          $v0, 0x6A18($v0)
    ctx->pc = 0x18a470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27160)));
label_18a474:
    // 0x18a474: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a478:
    if (ctx->pc == 0x18A478u) {
        ctx->pc = 0x18A478u;
            // 0x18a478: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A47Cu;
        goto label_18a47c;
    }
    ctx->pc = 0x18A474u;
    {
        const bool branch_taken_0x18a474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A474u;
            // 0x18a478: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a474) {
            ctx->pc = 0x18A484u;
            goto label_18a484;
        }
    }
    ctx->pc = 0x18A47Cu;
label_18a47c:
    // 0x18a47c: 0x40f809  jalr        $v0
label_18a480:
    if (ctx->pc == 0x18A480u) {
        ctx->pc = 0x18A484u;
        goto label_18a484;
    }
    ctx->pc = 0x18A47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A484u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A484u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A484u; }
            if (ctx->pc != 0x18A484u) { return; }
        }
        }
    }
    ctx->pc = 0x18A484u;
label_18a484:
    // 0x18a484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a488:
    // 0x18a488: 0x3e00008  jr          $ra
label_18a48c:
    if (ctx->pc == 0x18A48Cu) {
        ctx->pc = 0x18A48Cu;
            // 0x18a48c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A490u;
        goto label_fallthrough_0x18a488;
    }
    ctx->pc = 0x18A488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A488u;
            // 0x18a48c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x18a488:
    ctx->pc = 0x18A490u;
}
