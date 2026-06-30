#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D4310
// Address: 0x1d4310 - 0x1d44a0
void sub_001D4310_0x1d4310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4310_0x1d4310");
#endif

    switch (ctx->pc) {
        case 0x1d4348u: goto label_1d4348;
        case 0x1d4364u: goto label_1d4364;
        case 0x1d437cu: goto label_1d437c;
        case 0x1d4394u: goto label_1d4394;
        case 0x1d43a8u: goto label_1d43a8;
        case 0x1d43b8u: goto label_1d43b8;
        case 0x1d43ccu: goto label_1d43cc;
        case 0x1d43ecu: goto label_1d43ec;
        case 0x1d4408u: goto label_1d4408;
        case 0x1d4414u: goto label_1d4414;
        case 0x1d4438u: goto label_1d4438;
        case 0x1d4448u: goto label_1d4448;
        case 0x1d4468u: goto label_1d4468;
        case 0x1d4480u: goto label_1d4480;
        default: break;
    }

    ctx->pc = 0x1d4310u;

    // 0x1d4310: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d4310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d4314: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d4314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d4318: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d4318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d431c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d431cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d4320: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d4320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d4324: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d4324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d432c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d432cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4330: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1d4330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d4334: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4334u;
    {
        const bool branch_taken_0x1d4334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4334u;
            // 0x1d4338: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4334) {
            ctx->pc = 0x1D4348u;
            goto label_1d4348;
        }
    }
    ctx->pc = 0x1D433Cu;
    // 0x1d433c: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x1d433cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d4340: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x1D4340u;
    SET_GPR_U32(ctx, 31, 0x1D4348u);
    ctx->pc = 0x1D4344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4340u;
            // 0x1d4344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4348u; }
        if (ctx->pc != 0x1D4348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4348u; }
        if (ctx->pc != 0x1D4348u) { return; }
    }
    ctx->pc = 0x1D4348u;
label_1d4348:
    // 0x1d4348: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d4348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d434c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D434Cu;
    {
        const bool branch_taken_0x1d434c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d434c) {
            ctx->pc = 0x1D4350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D434Cu;
            // 0x1d4350: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4368u;
            goto label_1d4368;
        }
    }
    ctx->pc = 0x1D4354u;
    // 0x1d4354: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x1d4354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d4358: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1d4358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1d435c: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x1D435Cu;
    SET_GPR_U32(ctx, 31, 0x1D4364u);
    ctx->pc = 0x1D4360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D435Cu;
            // 0x1d4360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4364u; }
        if (ctx->pc != 0x1D4364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4364u; }
        if (ctx->pc != 0x1D4364u) { return; }
    }
    ctx->pc = 0x1D4364u;
label_1d4364:
    // 0x1d4364: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d4364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d4368:
    // 0x1d4368: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4368u;
    {
        const bool branch_taken_0x1d4368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4368) {
            ctx->pc = 0x1D436Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4368u;
            // 0x1d436c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4380u;
            goto label_1d4380;
        }
    }
    ctx->pc = 0x1D4370u;
    // 0x1d4370: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x1d4370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d4374: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x1D4374u;
    SET_GPR_U32(ctx, 31, 0x1D437Cu);
    ctx->pc = 0x1D4378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4374u;
            // 0x1d4378: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D437Cu; }
        if (ctx->pc != 0x1D437Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D437Cu; }
        if (ctx->pc != 0x1D437Cu) { return; }
    }
    ctx->pc = 0x1D437Cu;
label_1d437c:
    // 0x1d437c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1d4380:
    // 0x1d4380: 0x5060001c  beql        $v1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D4380u;
    {
        const bool branch_taken_0x1d4380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4380) {
            ctx->pc = 0x1D4384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4380u;
            // 0x1d4384: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D43F4u;
            goto label_1d43f4;
        }
    }
    ctx->pc = 0x1D4388u;
    // 0x1d4388: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x1d4388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d438c: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x1D438Cu;
    SET_GPR_U32(ctx, 31, 0x1D4394u);
    ctx->pc = 0x1D4390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D438Cu;
            // 0x1d4390: 0x26440014  addiu       $a0, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4394u; }
        if (ctx->pc != 0x1D4394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4394u; }
        if (ctx->pc != 0x1D4394u) { return; }
    }
    ctx->pc = 0x1D4394u;
label_1d4394:
    // 0x1d4394: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d4394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d4398: 0x8c537378  lw          $s3, 0x7378($v0)
    ctx->pc = 0x1d4398u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d439c: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x1d439cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1d43a0: 0xc054508  jal         func_151420
    ctx->pc = 0x1D43A0u;
    SET_GPR_U32(ctx, 31, 0x1D43A8u);
    ctx->pc = 0x1D43A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D43A0u;
            // 0x1d43a4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151420u;
    if (runtime->hasFunction(0x151420u)) {
        auto targetFn = runtime->lookupFunction(0x151420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D43A8u; }
        if (ctx->pc != 0x1D43A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151420_0x151420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D43A8u; }
        if (ctx->pc != 0x1D43A8u) { return; }
    }
    ctx->pc = 0x1D43A8u;
label_1d43a8:
    // 0x1d43a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d43a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d43acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43b0: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D43B0u;
    SET_GPR_U32(ctx, 31, 0x1D43B8u);
    ctx->pc = 0x1D43B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D43B0u;
            // 0x1d43b4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D43B8u; }
        if (ctx->pc != 0x1D43B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D43B8u; }
        if (ctx->pc != 0x1D43B8u) { return; }
    }
    ctx->pc = 0x1D43B8u;
label_1d43b8:
    // 0x1d43b8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1d43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1d43bc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1d43bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d43c0: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x1d43c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1d43c4: 0xc054590  jal         func_151640
    ctx->pc = 0x1D43C4u;
    SET_GPR_U32(ctx, 31, 0x1D43CCu);
    ctx->pc = 0x1D43C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D43C4u;
            // 0x1d43c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151640u;
    if (runtime->hasFunction(0x151640u)) {
        auto targetFn = runtime->lookupFunction(0x151640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D43CCu; }
        if (ctx->pc != 0x1D43CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151640_0x151640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D43CCu; }
        if (ctx->pc != 0x1D43CCu) { return; }
    }
    ctx->pc = 0x1D43CCu;
label_1d43cc:
    // 0x1d43cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d43ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d43d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d43d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d43d4: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x1d43d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d43d8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1d43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x1d43dc: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x1d43dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x1d43e0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1d43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d43e4: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D43E4u;
    SET_GPR_U32(ctx, 31, 0x1D43ECu);
    ctx->pc = 0x1D43E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D43E4u;
            // 0x1d43e8: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D43ECu; }
        if (ctx->pc != 0x1D43ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D43ECu; }
        if (ctx->pc != 0x1D43ECu) { return; }
    }
    ctx->pc = 0x1D43ECu;
label_1d43ec:
    // 0x1d43ec: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1d43ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x1d43f0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1d43f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d43f4:
    // 0x1d43f4: 0x50600023  beql        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D43F4u;
    {
        const bool branch_taken_0x1d43f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d43f4) {
            ctx->pc = 0x1D43F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D43F4u;
            // 0x1d43f8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4484u;
            goto label_1d4484;
        }
    }
    ctx->pc = 0x1D43FCu;
    // 0x1d43fc: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x1d43fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d4400: 0xc074e24  jal         func_1D3890
    ctx->pc = 0x1D4400u;
    SET_GPR_U32(ctx, 31, 0x1D4408u);
    ctx->pc = 0x1D4404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4400u;
            // 0x1d4404: 0x26440028  addiu       $a0, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3890u;
    if (runtime->hasFunction(0x1D3890u)) {
        auto targetFn = runtime->lookupFunction(0x1D3890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4408u; }
        if (ctx->pc != 0x1D4408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3890_0x1d3890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4408u; }
        if (ctx->pc != 0x1D4408u) { return; }
    }
    ctx->pc = 0x1D4408u;
label_1d4408:
    // 0x1d4408: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1d4408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d440c: 0xc074da8  jal         func_1D36A0
    ctx->pc = 0x1D440Cu;
    SET_GPR_U32(ctx, 31, 0x1D4414u);
    ctx->pc = 0x1D4410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D440Cu;
            // 0x1d4410: 0x26440024  addiu       $a0, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D36A0u;
    if (runtime->hasFunction(0x1D36A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D36A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4414u; }
        if (ctx->pc != 0x1D4414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D36A0_0x1d36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4414u; }
        if (ctx->pc != 0x1D4414u) { return; }
    }
    ctx->pc = 0x1D4414u;
label_1d4414:
    // 0x1d4414: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x1d4414u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d4418: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D4418u;
    {
        const bool branch_taken_0x1d4418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4418) {
            ctx->pc = 0x1D441Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4418u;
            // 0x1d441c: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4420u;
            goto label_1d4420;
        }
    }
    ctx->pc = 0x1D4420u;
label_1d4420:
    // 0x1d4420: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d4420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d4424: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1d4424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1d4428: 0x8c517378  lw          $s1, 0x7378($v0)
    ctx->pc = 0x1d4428u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d442c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d442cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4430: 0xc05190c  jal         func_146430
    ctx->pc = 0x1D4430u;
    SET_GPR_U32(ctx, 31, 0x1D4438u);
    ctx->pc = 0x1D4434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4430u;
            // 0x1d4434: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4438u; }
        if (ctx->pc != 0x1D4438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00146430_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4438u; }
        if (ctx->pc != 0x1D4438u) { return; }
    }
    ctx->pc = 0x1D4438u;
label_1d4438:
    // 0x1d4438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d443c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d443cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4440: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D4440u;
    SET_GPR_U32(ctx, 31, 0x1D4448u);
    ctx->pc = 0x1D4444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4440u;
            // 0x1d4444: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4448u; }
        if (ctx->pc != 0x1D4448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4448u; }
        if (ctx->pc != 0x1D4448u) { return; }
    }
    ctx->pc = 0x1D4448u;
label_1d4448:
    // 0x1d4448: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1d4448u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x1d444c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1d444cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d4450: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d4450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d4454: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x1d4454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d4458: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1d4458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1d445c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d445cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4460: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D4460u;
    SET_GPR_U32(ctx, 31, 0x1D4468u);
    ctx->pc = 0x1D4464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4460u;
            // 0x1d4464: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4468u; }
        if (ctx->pc != 0x1D4468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4468u; }
        if (ctx->pc != 0x1D4468u) { return; }
    }
    ctx->pc = 0x1D4468u;
label_1d4468:
    // 0x1d4468: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x1d4468u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x1d446c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d446cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4470: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x1d4470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1d4474: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x1d4474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1d4478: 0xc051a64  jal         func_146990
    ctx->pc = 0x1D4478u;
    SET_GPR_U32(ctx, 31, 0x1D4480u);
    ctx->pc = 0x1D447Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4478u;
            // 0x1d447c: 0x240703ff  addiu       $a3, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146990u;
    if (runtime->hasFunction(0x146990u)) {
        auto targetFn = runtime->lookupFunction(0x146990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4480u; }
        if (ctx->pc != 0x1D4480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00146990_0x146990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4480u; }
        if (ctx->pc != 0x1D4480u) { return; }
    }
    ctx->pc = 0x1D4480u;
label_1d4480:
    // 0x1d4480: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d4480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d4484:
    // 0x1d4484: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d4484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4488: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d4488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d448c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d448cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4494: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4494u;
            // 0x1d4498: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D449Cu;
    // 0x1d449c: 0x0  nop
    ctx->pc = 0x1d449cu;
    // NOP
}
