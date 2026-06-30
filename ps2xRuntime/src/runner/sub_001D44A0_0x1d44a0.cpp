#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D44A0
// Address: 0x1d44a0 - 0x1d4620
void sub_001D44A0_0x1d44a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D44A0_0x1d44a0");
#endif

    switch (ctx->pc) {
        case 0x1d44c8u: goto label_1d44c8;
        case 0x1d44e0u: goto label_1d44e0;
        case 0x1d44f4u: goto label_1d44f4;
        case 0x1d4508u: goto label_1d4508;
        case 0x1d451cu: goto label_1d451c;
        case 0x1d452cu: goto label_1d452c;
        case 0x1d4540u: goto label_1d4540;
        case 0x1d4560u: goto label_1d4560;
        case 0x1d4584u: goto label_1d4584;
        case 0x1d4590u: goto label_1d4590;
        case 0x1d45b4u: goto label_1d45b4;
        case 0x1d45c4u: goto label_1d45c4;
        case 0x1d45e4u: goto label_1d45e4;
        case 0x1d45fcu: goto label_1d45fc;
        default: break;
    }

    ctx->pc = 0x1d44a0u;

    // 0x1d44a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d44a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d44a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d44a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d44a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d44a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d44ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d44acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d44b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d44b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d44b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d44b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d44b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d44b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d44bc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d44bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d44c0: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x1D44C0u;
    SET_GPR_U32(ctx, 31, 0x1D44C8u);
    ctx->pc = 0x1D44C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D44C0u;
            // 0x1d44c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D44C8u; }
        if (ctx->pc != 0x1D44C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D44C8u; }
        if (ctx->pc != 0x1D44C8u) { return; }
    }
    ctx->pc = 0x1D44C8u;
label_1d44c8:
    // 0x1d44c8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1d44c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d44cc: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D44CCu;
    {
        const bool branch_taken_0x1d44cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d44cc) {
            ctx->pc = 0x1D44D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D44CCu;
            // 0x1d44d0: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D44E4u;
            goto label_1d44e4;
        }
    }
    ctx->pc = 0x1D44D4u;
    // 0x1d44d4: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1d44d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1d44d8: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x1D44D8u;
    SET_GPR_U32(ctx, 31, 0x1D44E0u);
    ctx->pc = 0x1D44DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D44D8u;
            // 0x1d44dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D44E0u; }
        if (ctx->pc != 0x1D44E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D44E0u; }
        if (ctx->pc != 0x1D44E0u) { return; }
    }
    ctx->pc = 0x1D44E0u;
label_1d44e0:
    // 0x1d44e0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1d44e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d44e4:
    // 0x1d44e4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D44E4u;
    {
        const bool branch_taken_0x1d44e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d44e4) {
            ctx->pc = 0x1D44E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D44E4u;
            // 0x1d44e8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D44F8u;
            goto label_1d44f8;
        }
    }
    ctx->pc = 0x1D44ECu;
    // 0x1d44ec: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x1D44ECu;
    SET_GPR_U32(ctx, 31, 0x1D44F4u);
    ctx->pc = 0x1D44F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D44ECu;
            // 0x1d44f0: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D44F4u; }
        if (ctx->pc != 0x1D44F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D44F4u; }
        if (ctx->pc != 0x1D44F4u) { return; }
    }
    ctx->pc = 0x1D44F4u;
label_1d44f4:
    // 0x1d44f4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1d44f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1d44f8:
    // 0x1d44f8: 0x50a0001b  beql        $a1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D44F8u;
    {
        const bool branch_taken_0x1d44f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d44f8) {
            ctx->pc = 0x1D44FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D44F8u;
            // 0x1d44fc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4568u;
            goto label_1d4568;
        }
    }
    ctx->pc = 0x1D4500u;
    // 0x1d4500: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x1D4500u;
    SET_GPR_U32(ctx, 31, 0x1D4508u);
    ctx->pc = 0x1D4504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4500u;
            // 0x1d4504: 0x26240014  addiu       $a0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4508u; }
        if (ctx->pc != 0x1D4508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4508u; }
        if (ctx->pc != 0x1D4508u) { return; }
    }
    ctx->pc = 0x1D4508u;
label_1d4508:
    // 0x1d4508: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d4508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d450c: 0x8c527378  lw          $s2, 0x7378($v0)
    ctx->pc = 0x1d450cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d4510: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1d4510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d4514: 0xc054508  jal         func_151420
    ctx->pc = 0x1D4514u;
    SET_GPR_U32(ctx, 31, 0x1D451Cu);
    ctx->pc = 0x1D4518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4514u;
            // 0x1d4518: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151420u;
    if (runtime->hasFunction(0x151420u)) {
        auto targetFn = runtime->lookupFunction(0x151420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D451Cu; }
        if (ctx->pc != 0x1D451Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151420_0x151420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D451Cu; }
        if (ctx->pc != 0x1D451Cu) { return; }
    }
    ctx->pc = 0x1D451Cu;
label_1d451c:
    // 0x1d451c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d451cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4520: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d4520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4524: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D4524u;
    SET_GPR_U32(ctx, 31, 0x1D452Cu);
    ctx->pc = 0x1D4528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4524u;
            // 0x1d4528: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D452Cu; }
        if (ctx->pc != 0x1D452Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D452Cu; }
        if (ctx->pc != 0x1D452Cu) { return; }
    }
    ctx->pc = 0x1D452Cu;
label_1d452c:
    // 0x1d452c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1d452cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1d4530: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1d4530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4534: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x1d4534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d4538: 0xc054590  jal         func_151640
    ctx->pc = 0x1D4538u;
    SET_GPR_U32(ctx, 31, 0x1D4540u);
    ctx->pc = 0x1D453Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4538u;
            // 0x1d453c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151640u;
    if (runtime->hasFunction(0x151640u)) {
        auto targetFn = runtime->lookupFunction(0x151640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4540u; }
        if (ctx->pc != 0x1D4540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151640_0x151640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4540u; }
        if (ctx->pc != 0x1D4540u) { return; }
    }
    ctx->pc = 0x1D4540u;
label_1d4540:
    // 0x1d4540: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d4540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d4544: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d4544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4548: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x1d4548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d454c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1d454cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x1d4550: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x1d4550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x1d4554: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1d4554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d4558: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D4558u;
    SET_GPR_U32(ctx, 31, 0x1D4560u);
    ctx->pc = 0x1D455Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4558u;
            // 0x1d455c: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4560u; }
        if (ctx->pc != 0x1D4560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4560u; }
        if (ctx->pc != 0x1D4560u) { return; }
    }
    ctx->pc = 0x1D4560u;
label_1d4560:
    // 0x1d4560: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1d4560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1d4564: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d4564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d4568:
    // 0x1d4568: 0x50a00025  beql        $a1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D4568u;
    {
        const bool branch_taken_0x1d4568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4568) {
            ctx->pc = 0x1D456Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4568u;
            // 0x1d456c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4600u;
            goto label_1d4600;
        }
    }
    ctx->pc = 0x1D4570u;
    // 0x1d4570: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d4570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d4574: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D4574u;
    {
        const bool branch_taken_0x1d4574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4574) {
            ctx->pc = 0x1D45FCu;
            goto label_1d45fc;
        }
    }
    ctx->pc = 0x1D457Cu;
    // 0x1d457c: 0xc074e24  jal         func_1D3890
    ctx->pc = 0x1D457Cu;
    SET_GPR_U32(ctx, 31, 0x1D4584u);
    ctx->pc = 0x1D4580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D457Cu;
            // 0x1d4580: 0x26240028  addiu       $a0, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3890u;
    if (runtime->hasFunction(0x1D3890u)) {
        auto targetFn = runtime->lookupFunction(0x1D3890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4584u; }
        if (ctx->pc != 0x1D4584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3890_0x1d3890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4584u; }
        if (ctx->pc != 0x1D4584u) { return; }
    }
    ctx->pc = 0x1D4584u;
label_1d4584:
    // 0x1d4584: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1d4584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d4588: 0xc074da8  jal         func_1D36A0
    ctx->pc = 0x1D4588u;
    SET_GPR_U32(ctx, 31, 0x1D4590u);
    ctx->pc = 0x1D458Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4588u;
            // 0x1d458c: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D36A0u;
    if (runtime->hasFunction(0x1D36A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D36A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4590u; }
        if (ctx->pc != 0x1D4590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D36A0_0x1d36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4590u; }
        if (ctx->pc != 0x1D4590u) { return; }
    }
    ctx->pc = 0x1D4590u;
label_1d4590:
    // 0x1d4590: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x1d4590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d4594: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D4594u;
    {
        const bool branch_taken_0x1d4594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4594) {
            ctx->pc = 0x1D4598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4594u;
            // 0x1d4598: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D459Cu;
            goto label_1d459c;
        }
    }
    ctx->pc = 0x1D459Cu;
label_1d459c:
    // 0x1d459c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d459cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d45a0: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1d45a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d45a4: 0x8c527378  lw          $s2, 0x7378($v0)
    ctx->pc = 0x1d45a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d45a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d45a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45ac: 0xc05190c  jal         func_146430
    ctx->pc = 0x1D45ACu;
    SET_GPR_U32(ctx, 31, 0x1D45B4u);
    ctx->pc = 0x1D45B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45ACu;
            // 0x1d45b0: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D45B4u; }
        if (ctx->pc != 0x1D45B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00146430_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D45B4u; }
        if (ctx->pc != 0x1D45B4u) { return; }
    }
    ctx->pc = 0x1D45B4u;
label_1d45b4:
    // 0x1d45b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d45b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d45b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45bc: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D45BCu;
    SET_GPR_U32(ctx, 31, 0x1D45C4u);
    ctx->pc = 0x1D45C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45BCu;
            // 0x1d45c0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D45C4u; }
        if (ctx->pc != 0x1D45C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D45C4u; }
        if (ctx->pc != 0x1D45C4u) { return; }
    }
    ctx->pc = 0x1D45C4u;
label_1d45c4:
    // 0x1d45c4: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1d45c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1d45c8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1d45c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d45cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d45ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d45d0: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x1d45d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d45d4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d45d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d45d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d45dc: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D45DCu;
    SET_GPR_U32(ctx, 31, 0x1D45E4u);
    ctx->pc = 0x1D45E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45DCu;
            // 0x1d45e0: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D45E4u; }
        if (ctx->pc != 0x1D45E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D45E4u; }
        if (ctx->pc != 0x1D45E4u) { return; }
    }
    ctx->pc = 0x1D45E4u;
label_1d45e4:
    // 0x1d45e4: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x1d45e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x1d45e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d45e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45ec: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1d45ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d45f0: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x1d45f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d45f4: 0xc051a64  jal         func_146990
    ctx->pc = 0x1D45F4u;
    SET_GPR_U32(ctx, 31, 0x1D45FCu);
    ctx->pc = 0x1D45F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45F4u;
            // 0x1d45f8: 0x240703ff  addiu       $a3, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146990u;
    if (runtime->hasFunction(0x146990u)) {
        auto targetFn = runtime->lookupFunction(0x146990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D45FCu; }
        if (ctx->pc != 0x1D45FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00146990_0x146990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D45FCu; }
        if (ctx->pc != 0x1D45FCu) { return; }
    }
    ctx->pc = 0x1D45FCu;
label_1d45fc:
    // 0x1d45fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d45fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d4600:
    // 0x1d4600: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d4600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d4604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d460c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D460Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D460Cu;
            // 0x1d4610: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4614u;
    // 0x1d4614: 0x0  nop
    ctx->pc = 0x1d4614u;
    // NOP
    // 0x1d4618: 0x0  nop
    ctx->pc = 0x1d4618u;
    // NOP
    // 0x1d461c: 0x0  nop
    ctx->pc = 0x1d461cu;
    // NOP
}
