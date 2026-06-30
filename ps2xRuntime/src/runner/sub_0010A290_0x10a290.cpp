#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010A290
// Address: 0x10a290 - 0x10a368
void sub_0010A290_0x10a290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A290_0x10a290");
#endif

    switch (ctx->pc) {
        case 0x10a2ecu: goto label_10a2ec;
        case 0x10a32cu: goto label_10a32c;
        case 0x10a354u: goto label_10a354;
        default: break;
    }

    ctx->pc = 0x10a290u;

    // 0x10a290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10a290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10a294: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x10a294u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a29c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10A29Cu;
    {
        const bool branch_taken_0x10a29c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a29c) {
            ctx->pc = 0x10A2A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A29Cu;
            // 0x10a2a0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x10A2A4u;
label_10a2a4:
    // 0x10a2a4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x10a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10a2a8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x10a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10a2ac: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x10a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x10a2b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10a2b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10a2b8: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x10a2b8u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x10a2bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10a2c0: 0x1012  mflo        $v0
    ctx->pc = 0x10a2c0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x10a2c4: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x10a2c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10a2c8: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x10a2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10a2cc: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x10a2ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10a2d0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A2D0u;
    {
        const bool branch_taken_0x10a2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a2d0) {
            ctx->pc = 0x10A2D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A2D0u;
            // 0x10a2d4: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A2E0u;
            goto label_10a2e0;
        }
    }
    ctx->pc = 0x10A2D8u;
    // 0x10a2d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10A2D8u;
    {
        const bool branch_taken_0x10a2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A2D8u;
            // 0x10a2dc: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a2d8) {
            ctx->pc = 0x10A2F0u;
            goto label_10a2f0;
        }
    }
    ctx->pc = 0x10A2E0u;
label_10a2e0:
    // 0x10a2e0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x10a2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a2e4: 0xc042e16  jal         func_10B858
    ctx->pc = 0x10A2E4u;
    SET_GPR_U32(ctx, 31, 0x10A2ECu);
    ctx->pc = 0x10A2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A2E4u;
            // 0x10a2e8: 0x24a5eb18  addiu       $a1, $a1, -0x14E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A2ECu; }
        if (ctx->pc != 0x10A2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A2ECu; }
        if (ctx->pc != 0x10A2ECu) { return; }
    }
    ctx->pc = 0x10A2ECu;
label_10a2ec:
    // 0x10a2ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10a2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a2f0:
    // 0x10a2f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x10A2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A2F4u;
            // 0x10a2f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A2FCu;
    // 0x10a2fc: 0x0  nop
    ctx->pc = 0x10a2fcu;
    // NOP
    // 0x10a300: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10a300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10a304: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x10a304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10a308: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x10a308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10a30c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10a310: 0x3e00008  jr          $ra
    ctx->pc = 0x10A310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A310u;
            // 0x10a314: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A318u;
    // 0x10a318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10a318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10a31c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a320: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x10a320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10a324: 0xc042e78  jal         func_10B9E0
    ctx->pc = 0x10A324u;
    SET_GPR_U32(ctx, 31, 0x10A32Cu);
    ctx->pc = 0x10A328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A324u;
            // 0x10a328: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B9E0u;
    if (runtime->hasFunction(0x10B9E0u)) {
        auto targetFn = runtime->lookupFunction(0x10B9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A32Cu; }
        if (ctx->pc != 0x10A32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B9E0_0x10b9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A32Cu; }
        if (ctx->pc != 0x10A32Cu) { return; }
    }
    ctx->pc = 0x10A32Cu;
label_10a32c:
    // 0x10a32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a334: 0x3e00008  jr          $ra
    ctx->pc = 0x10A334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A334u;
            // 0x10a338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A33Cu;
    // 0x10a33c: 0x0  nop
    ctx->pc = 0x10a33cu;
    // NOP
    // 0x10a340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10a340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10a344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a348: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x10a348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10a34c: 0xc042eb2  jal         func_10BAC8
    ctx->pc = 0x10A34Cu;
    SET_GPR_U32(ctx, 31, 0x10A354u);
    ctx->pc = 0x10A350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A34Cu;
            // 0x10a350: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BAC8u;
    if (runtime->hasFunction(0x10BAC8u)) {
        auto targetFn = runtime->lookupFunction(0x10BAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A354u; }
        if (ctx->pc != 0x10A354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010BAC8_0x10bac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A354u; }
        if (ctx->pc != 0x10A354u) { return; }
    }
    ctx->pc = 0x10A354u;
label_10a354:
    // 0x10a354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a35c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A35Cu;
            // 0x10a360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A364u;
    // 0x10a364: 0x0  nop
    ctx->pc = 0x10a364u;
    // NOP
}
