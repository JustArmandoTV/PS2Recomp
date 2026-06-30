#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EA4E0
// Address: 0x2ea4e0 - 0x2eaa80
void sub_002EA4E0_0x2ea4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA4E0_0x2ea4e0");
#endif

    switch (ctx->pc) {
        case 0x2ea5a8u: goto label_2ea5a8;
        case 0x2ea5ccu: goto label_2ea5cc;
        case 0x2ea5f0u: goto label_2ea5f0;
        case 0x2ea614u: goto label_2ea614;
        case 0x2ea638u: goto label_2ea638;
        case 0x2ea65cu: goto label_2ea65c;
        case 0x2ea680u: goto label_2ea680;
        case 0x2ea6a4u: goto label_2ea6a4;
        case 0x2ea6ccu: goto label_2ea6cc;
        case 0x2ea6f0u: goto label_2ea6f0;
        case 0x2ea730u: goto label_2ea730;
        case 0x2ea758u: goto label_2ea758;
        case 0x2ea780u: goto label_2ea780;
        case 0x2ea7a8u: goto label_2ea7a8;
        case 0x2ea7ccu: goto label_2ea7cc;
        case 0x2ea7f0u: goto label_2ea7f0;
        case 0x2ea828u: goto label_2ea828;
        case 0x2ea850u: goto label_2ea850;
        case 0x2ea878u: goto label_2ea878;
        case 0x2ea8a0u: goto label_2ea8a0;
        case 0x2ea8ccu: goto label_2ea8cc;
        case 0x2ea8f0u: goto label_2ea8f0;
        case 0x2ea938u: goto label_2ea938;
        case 0x2ea960u: goto label_2ea960;
        case 0x2ea988u: goto label_2ea988;
        case 0x2ea9b4u: goto label_2ea9b4;
        case 0x2ea9d8u: goto label_2ea9d8;
        case 0x2ea9fcu: goto label_2ea9fc;
        case 0x2eaa20u: goto label_2eaa20;
        case 0x2eaa40u: goto label_2eaa40;
        case 0x2eaa4cu: goto label_2eaa4c;
        default: break;
    }

    ctx->pc = 0x2ea4e0u;

    // 0x2ea4e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ea4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ea4e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ea4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ea4e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ea4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ea4ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ea4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ea4f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ea4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ea4f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ea4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ea4f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ea4f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea4fc: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x2ea4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x2ea500: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ea500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ea504: 0xac8014b0  sw          $zero, 0x14B0($a0)
    ctx->pc = 0x2ea504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5296), GPR_U32(ctx, 0));
    // 0x2ea508: 0x8cc30788  lw          $v1, 0x788($a2)
    ctx->pc = 0x2ea508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1928)));
    // 0x2ea50c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2ea50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ea510: 0x8cc60968  lw          $a2, 0x968($a2)
    ctx->pc = 0x2ea510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
    // 0x2ea514: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x2ea514u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ea518: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2ea518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2ea51c: 0x10c400f6  beq         $a2, $a0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x2EA51Cu;
    {
        const bool branch_taken_0x2ea51c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EA520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA51Cu;
            // 0x2ea520: 0x306700ff  andi        $a3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea51c) {
            ctx->pc = 0x2EA8F8u;
            goto label_2ea8f8;
        }
    }
    ctx->pc = 0x2EA524u;
    // 0x2ea524: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2ea524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ea528: 0x10c300df  beq         $a2, $v1, . + 4 + (0xDF << 2)
    ctx->pc = 0x2EA528u;
    {
        const bool branch_taken_0x2ea528 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea528) {
            ctx->pc = 0x2EA8A8u;
            goto label_2ea8a8;
        }
    }
    ctx->pc = 0x2EA530u;
    // 0x2ea530: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2ea530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ea534: 0x10c300b0  beq         $a2, $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2EA534u;
    {
        const bool branch_taken_0x2ea534 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea534) {
            ctx->pc = 0x2EA7F8u;
            goto label_2ea7f8;
        }
    }
    ctx->pc = 0x2EA53Cu;
    // 0x2ea53c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea540: 0x50c4006d  beql        $a2, $a0, . + 4 + (0x6D << 2)
    ctx->pc = 0x2EA540u;
    {
        const bool branch_taken_0x2ea540 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ea540) {
            ctx->pc = 0x2EA544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA540u;
            // 0x2ea544: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA6F8u;
            goto label_2ea6f8;
        }
    }
    ctx->pc = 0x2EA548u;
    // 0x2ea548: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ea548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ea54c: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA54Cu;
    {
        const bool branch_taken_0x2ea54c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea54c) {
            ctx->pc = 0x2EA55Cu;
            goto label_2ea55c;
        }
    }
    ctx->pc = 0x2EA554u;
    // 0x2ea554: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x2EA554u;
    {
        const bool branch_taken_0x2ea554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA554u;
            // 0x2ea558: 0x3c0200af  lui         $v0, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea554) {
            ctx->pc = 0x2EA9BCu;
            goto label_2ea9bc;
        }
    }
    ctx->pc = 0x2EA55Cu;
label_2ea55c:
    // 0x2ea55c: 0x10a30053  beq         $a1, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x2EA55Cu;
    {
        const bool branch_taken_0x2ea55c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea55c) {
            ctx->pc = 0x2EA6ACu;
            goto label_2ea6ac;
        }
    }
    ctx->pc = 0x2EA564u;
    // 0x2ea564: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2ea564u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea568: 0x10aa003e  beq         $a1, $t2, . + 4 + (0x3E << 2)
    ctx->pc = 0x2EA568u;
    {
        const bool branch_taken_0x2ea568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        if (branch_taken_0x2ea568) {
            ctx->pc = 0x2EA664u;
            goto label_2ea664;
        }
    }
    ctx->pc = 0x2EA570u;
    // 0x2ea570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ea570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea574: 0x10a30020  beq         $a1, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EA574u;
    {
        const bool branch_taken_0x2ea574 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea574) {
            ctx->pc = 0x2EA5F8u;
            goto label_2ea5f8;
        }
    }
    ctx->pc = 0x2EA57Cu;
    // 0x2ea57c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA57Cu;
    {
        const bool branch_taken_0x2ea57c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea57c) {
            ctx->pc = 0x2EA58Cu;
            goto label_2ea58c;
        }
    }
    ctx->pc = 0x2EA584u;
    // 0x2ea584: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x2EA584u;
    {
        const bool branch_taken_0x2ea584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea584) {
            ctx->pc = 0x2EAA20u;
            goto label_2eaa20;
        }
    }
    ctx->pc = 0x2EA58Cu;
label_2ea58c:
    // 0x2ea58c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea590: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x2ea590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2ea594: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea594u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea598: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea59c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ea59cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5a0: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA5A0u;
    SET_GPR_U32(ctx, 31, 0x2EA5A8u);
    ctx->pc = 0x2EA5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA5A0u;
            // 0x2ea5a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA5A8u; }
        if (ctx->pc != 0x2EA5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA5A8u; }
        if (ctx->pc != 0x2EA5A8u) { return; }
    }
    ctx->pc = 0x2EA5A8u;
label_2ea5a8:
    // 0x2ea5a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea5ac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea5b0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea5b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea5b4: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2ea5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2ea5b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ea5bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea5c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5c4: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA5C4u;
    SET_GPR_U32(ctx, 31, 0x2EA5CCu);
    ctx->pc = 0x2EA5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA5C4u;
            // 0x2ea5c8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA5CCu; }
        if (ctx->pc != 0x2EA5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA5CCu; }
        if (ctx->pc != 0x2EA5CCu) { return; }
    }
    ctx->pc = 0x2EA5CCu;
label_2ea5cc:
    // 0x2ea5cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea5d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ea5d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5d4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea5d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea5d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea5dc: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2ea5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2ea5e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea5e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5e8: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA5E8u;
    SET_GPR_U32(ctx, 31, 0x2EA5F0u);
    ctx->pc = 0x2EA5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA5E8u;
            // 0x2ea5ec: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA5F0u; }
        if (ctx->pc != 0x2EA5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA5F0u; }
        if (ctx->pc != 0x2EA5F0u) { return; }
    }
    ctx->pc = 0x2EA5F0u;
label_2ea5f0:
    // 0x2ea5f0: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x2EA5F0u;
    {
        const bool branch_taken_0x2ea5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea5f0) {
            ctx->pc = 0x2EAA20u;
            goto label_2eaa20;
        }
    }
    ctx->pc = 0x2EA5F8u;
label_2ea5f8:
    // 0x2ea5f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea5fc: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x2ea5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2ea600: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea600u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea604: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea608: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ea608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea60c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA60Cu;
    SET_GPR_U32(ctx, 31, 0x2EA614u);
    ctx->pc = 0x2EA610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA60Cu;
            // 0x2ea610: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA614u; }
        if (ctx->pc != 0x2EA614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA614u; }
        if (ctx->pc != 0x2EA614u) { return; }
    }
    ctx->pc = 0x2EA614u;
label_2ea614:
    // 0x2ea614: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea618: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea61c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea61cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea620: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2ea620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2ea624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea628: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ea628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea62c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea62cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea630: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA630u;
    SET_GPR_U32(ctx, 31, 0x2EA638u);
    ctx->pc = 0x2EA634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA630u;
            // 0x2ea634: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA638u; }
        if (ctx->pc != 0x2EA638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA638u; }
        if (ctx->pc != 0x2EA638u) { return; }
    }
    ctx->pc = 0x2EA638u;
label_2ea638:
    // 0x2ea638: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea63c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ea63cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea640: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea640u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea644: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea648: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x2ea648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2ea64c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea650: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea650u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea654: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA654u;
    SET_GPR_U32(ctx, 31, 0x2EA65Cu);
    ctx->pc = 0x2EA658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA654u;
            // 0x2ea658: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA65Cu; }
        if (ctx->pc != 0x2EA65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA65Cu; }
        if (ctx->pc != 0x2EA65Cu) { return; }
    }
    ctx->pc = 0x2EA65Cu;
label_2ea65c:
    // 0x2ea65c: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x2EA65Cu;
    {
        const bool branch_taken_0x2ea65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea65c) {
            ctx->pc = 0x2EAA20u;
            goto label_2eaa20;
        }
    }
    ctx->pc = 0x2EA664u;
label_2ea664:
    // 0x2ea664: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea668: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x2ea668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2ea66c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea66cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea674: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ea674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea678: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA678u;
    SET_GPR_U32(ctx, 31, 0x2EA680u);
    ctx->pc = 0x2EA67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA678u;
            // 0x2ea67c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA680u; }
        if (ctx->pc != 0x2EA680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA680u; }
        if (ctx->pc != 0x2EA680u) { return; }
    }
    ctx->pc = 0x2EA680u;
label_2ea680:
    // 0x2ea680: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea684: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ea684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea688: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea688u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea68c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea690: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x2ea690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2ea694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea698: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea69c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA69Cu;
    SET_GPR_U32(ctx, 31, 0x2EA6A4u);
    ctx->pc = 0x2EA6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA69Cu;
            // 0x2ea6a0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA6A4u; }
        if (ctx->pc != 0x2EA6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA6A4u; }
        if (ctx->pc != 0x2EA6A4u) { return; }
    }
    ctx->pc = 0x2EA6A4u;
label_2ea6a4:
    // 0x2ea6a4: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x2EA6A4u;
    {
        const bool branch_taken_0x2ea6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea6a4) {
            ctx->pc = 0x2EAA20u;
            goto label_2eaa20;
        }
    }
    ctx->pc = 0x2EA6ACu;
label_2ea6ac:
    // 0x2ea6ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea6b0: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x2ea6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2ea6b4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea6b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea6b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ea6bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea6c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6c4: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA6C4u;
    SET_GPR_U32(ctx, 31, 0x2EA6CCu);
    ctx->pc = 0x2EA6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA6C4u;
            // 0x2ea6c8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA6CCu; }
        if (ctx->pc != 0x2EA6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA6CCu; }
        if (ctx->pc != 0x2EA6CCu) { return; }
    }
    ctx->pc = 0x2EA6CCu;
label_2ea6cc:
    // 0x2ea6cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea6d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ea6d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6d4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea6d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea6dc: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x2ea6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2ea6e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea6e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6e8: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA6E8u;
    SET_GPR_U32(ctx, 31, 0x2EA6F0u);
    ctx->pc = 0x2EA6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA6E8u;
            // 0x2ea6ec: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA6F0u; }
        if (ctx->pc != 0x2EA6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA6F0u; }
        if (ctx->pc != 0x2EA6F0u) { return; }
    }
    ctx->pc = 0x2EA6F0u;
label_2ea6f0:
    // 0x2ea6f0: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x2EA6F0u;
    {
        const bool branch_taken_0x2ea6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea6f0) {
            ctx->pc = 0x2EAA20u;
            goto label_2eaa20;
        }
    }
    ctx->pc = 0x2EA6F8u;
label_2ea6f8:
    // 0x2ea6f8: 0x10a30023  beq         $a1, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2EA6F8u;
    {
        const bool branch_taken_0x2ea6f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea6f8) {
            ctx->pc = 0x2EA788u;
            goto label_2ea788;
        }
    }
    ctx->pc = 0x2EA700u;
    // 0x2ea700: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA700u;
    {
        const bool branch_taken_0x2ea700 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea700) {
            ctx->pc = 0x2EA704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA700u;
            // 0x2ea704: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA710u;
            goto label_2ea710;
        }
    }
    ctx->pc = 0x2EA708u;
    // 0x2ea708: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x2EA708u;
    {
        const bool branch_taken_0x2ea708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea708) {
            ctx->pc = 0x2EAA20u;
            goto label_2eaa20;
        }
    }
    ctx->pc = 0x2EA710u;
label_2ea710:
    // 0x2ea710: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x2ea710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2ea714: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2ea714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea718: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ea718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea71c: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2ea71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ea720: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2ea720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ea724: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x2ea724u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2ea728: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x2EA728u;
    SET_GPR_U32(ctx, 31, 0x2EA730u);
    ctx->pc = 0x2EA72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA728u;
            // 0x2ea72c: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA730u; }
        if (ctx->pc != 0x2EA730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA730u; }
        if (ctx->pc != 0x2EA730u) { return; }
    }
    ctx->pc = 0x2EA730u;
label_2ea730:
    // 0x2ea730: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2ea730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ea734: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea738: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2ea738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea73c: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2ea73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2ea740: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2ea740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ea744: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ea744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea748: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2ea748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ea74c: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x2ea74cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2ea750: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x2EA750u;
    SET_GPR_U32(ctx, 31, 0x2EA758u);
    ctx->pc = 0x2EA754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA750u;
            // 0x2ea754: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA758u; }
        if (ctx->pc != 0x2EA758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA758u; }
        if (ctx->pc != 0x2EA758u) { return; }
    }
    ctx->pc = 0x2EA758u;
label_2ea758:
    // 0x2ea758: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2ea758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ea75c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea760: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2ea760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea764: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2ea764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2ea768: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2ea768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ea76c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ea76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea770: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2ea770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ea774: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x2ea774u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2ea778: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x2EA778u;
    SET_GPR_U32(ctx, 31, 0x2EA780u);
    ctx->pc = 0x2EA77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA778u;
            // 0x2ea77c: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA780u; }
        if (ctx->pc != 0x2EA780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA780u; }
        if (ctx->pc != 0x2EA780u) { return; }
    }
    ctx->pc = 0x2EA780u;
label_2ea780:
    // 0x2ea780: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x2EA780u;
    {
        const bool branch_taken_0x2ea780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea780) {
            ctx->pc = 0x2EAA20u;
            goto label_2eaa20;
        }
    }
    ctx->pc = 0x2EA788u;
label_2ea788:
    // 0x2ea788: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea78c: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x2ea78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2ea790: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea790u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea794: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea798: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ea798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea79c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea79cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7a0: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA7A0u;
    SET_GPR_U32(ctx, 31, 0x2EA7A8u);
    ctx->pc = 0x2EA7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA7A0u;
            // 0x2ea7a4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA7A8u; }
        if (ctx->pc != 0x2EA7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA7A8u; }
        if (ctx->pc != 0x2EA7A8u) { return; }
    }
    ctx->pc = 0x2EA7A8u;
label_2ea7a8:
    // 0x2ea7a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea7ac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea7b0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea7b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea7b4: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2ea7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2ea7b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea7b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ea7bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea7c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7c4: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA7C4u;
    SET_GPR_U32(ctx, 31, 0x2EA7CCu);
    ctx->pc = 0x2EA7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA7C4u;
            // 0x2ea7c8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA7CCu; }
        if (ctx->pc != 0x2EA7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA7CCu; }
        if (ctx->pc != 0x2EA7CCu) { return; }
    }
    ctx->pc = 0x2EA7CCu;
label_2ea7cc:
    // 0x2ea7cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea7d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ea7d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7d4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea7d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea7d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea7dc: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2ea7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2ea7e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea7e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7e8: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA7E8u;
    SET_GPR_U32(ctx, 31, 0x2EA7F0u);
    ctx->pc = 0x2EA7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA7E8u;
            // 0x2ea7ec: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA7F0u; }
        if (ctx->pc != 0x2EA7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA7F0u; }
        if (ctx->pc != 0x2EA7F0u) { return; }
    }
    ctx->pc = 0x2EA7F0u;
label_2ea7f0:
    // 0x2ea7f0: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2EA7F0u;
    {
        const bool branch_taken_0x2ea7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea7f0) {
            ctx->pc = 0x2EAA20u;
            goto label_2eaa20;
        }
    }
    ctx->pc = 0x2EA7F8u;
label_2ea7f8:
    // 0x2ea7f8: 0x54e0000c  bnel        $a3, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2EA7F8u;
    {
        const bool branch_taken_0x2ea7f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea7f8) {
            ctx->pc = 0x2EA7FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA7F8u;
            // 0x2ea7fc: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA82Cu;
            goto label_2ea82c;
        }
    }
    ctx->pc = 0x2EA800u;
    // 0x2ea800: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2ea800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ea804: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea808: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2ea808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea80c: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x2ea80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2ea810: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2ea810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ea814: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ea814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea818: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2ea818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ea81c: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x2ea81cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2ea820: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x2EA820u;
    SET_GPR_U32(ctx, 31, 0x2EA828u);
    ctx->pc = 0x2EA824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA820u;
            // 0x2ea824: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA828u; }
        if (ctx->pc != 0x2EA828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA828u; }
        if (ctx->pc != 0x2EA828u) { return; }
    }
    ctx->pc = 0x2EA828u;
label_2ea828:
    // 0x2ea828: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2ea828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ea82c:
    // 0x2ea82c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea830: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2ea830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea834: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x2ea834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2ea838: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2ea838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ea83c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ea83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea840: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2ea840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ea844: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x2ea844u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2ea848: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x2EA848u;
    SET_GPR_U32(ctx, 31, 0x2EA850u);
    ctx->pc = 0x2EA84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA848u;
            // 0x2ea84c: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA850u; }
        if (ctx->pc != 0x2EA850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA850u; }
        if (ctx->pc != 0x2EA850u) { return; }
    }
    ctx->pc = 0x2EA850u;
label_2ea850:
    // 0x2ea850: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2ea850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ea854: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea858: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2ea858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea85c: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2ea85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2ea860: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2ea860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ea864: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ea864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea868: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2ea868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ea86c: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x2ea86cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2ea870: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x2EA870u;
    SET_GPR_U32(ctx, 31, 0x2EA878u);
    ctx->pc = 0x2EA874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA870u;
            // 0x2ea874: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA878u; }
        if (ctx->pc != 0x2EA878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA878u; }
        if (ctx->pc != 0x2EA878u) { return; }
    }
    ctx->pc = 0x2EA878u;
label_2ea878:
    // 0x2ea878: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2ea878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ea87c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea880: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2ea880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea884: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x2ea884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2ea888: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2ea888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ea88c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ea88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea890: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2ea890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ea894: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x2ea894u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2ea898: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x2EA898u;
    SET_GPR_U32(ctx, 31, 0x2EA8A0u);
    ctx->pc = 0x2EA89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA898u;
            // 0x2ea89c: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA8A0u; }
        if (ctx->pc != 0x2EA8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA8A0u; }
        if (ctx->pc != 0x2EA8A0u) { return; }
    }
    ctx->pc = 0x2EA8A0u;
label_2ea8a0:
    // 0x2ea8a0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2EA8A0u;
    {
        const bool branch_taken_0x2ea8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea8a0) {
            ctx->pc = 0x2EAA20u;
            goto label_2eaa20;
        }
    }
    ctx->pc = 0x2EA8A8u;
label_2ea8a8:
    // 0x2ea8a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea8ac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea8b0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea8b4: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x2ea8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2ea8b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea8b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea8bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ea8bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea8c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea8c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea8c4: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA8C4u;
    SET_GPR_U32(ctx, 31, 0x2EA8CCu);
    ctx->pc = 0x2EA8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA8C4u;
            // 0x2ea8c8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA8CCu; }
        if (ctx->pc != 0x2EA8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA8CCu; }
        if (ctx->pc != 0x2EA8CCu) { return; }
    }
    ctx->pc = 0x2EA8CCu;
label_2ea8cc:
    // 0x2ea8cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea8d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ea8d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea8d4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea8d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea8dc: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2ea8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2ea8e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea8e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea8e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea8e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea8e8: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA8E8u;
    SET_GPR_U32(ctx, 31, 0x2EA8F0u);
    ctx->pc = 0x2EA8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA8E8u;
            // 0x2ea8ec: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA8F0u; }
        if (ctx->pc != 0x2EA8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA8F0u; }
        if (ctx->pc != 0x2EA8F0u) { return; }
    }
    ctx->pc = 0x2EA8F0u;
label_2ea8f0:
    // 0x2ea8f0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2EA8F0u;
    {
        const bool branch_taken_0x2ea8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea8f0) {
            ctx->pc = 0x2EAA20u;
            goto label_2eaa20;
        }
    }
    ctx->pc = 0x2EA8F8u;
label_2ea8f8:
    // 0x2ea8f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ea8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea8fc: 0x50a30024  beql        $a1, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2EA8FCu;
    {
        const bool branch_taken_0x2ea8fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea8fc) {
            ctx->pc = 0x2EA900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA8FCu;
            // 0x2ea900: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA990u;
            goto label_2ea990;
        }
    }
    ctx->pc = 0x2EA904u;
    // 0x2ea904: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA904u;
    {
        const bool branch_taken_0x2ea904 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea904) {
            ctx->pc = 0x2EA908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA904u;
            // 0x2ea908: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA914u;
            goto label_2ea914;
        }
    }
    ctx->pc = 0x2EA90Cu;
    // 0x2ea90c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2EA90Cu;
    {
        const bool branch_taken_0x2ea90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea90c) {
            ctx->pc = 0x2EAA20u;
            goto label_2eaa20;
        }
    }
    ctx->pc = 0x2EA914u;
label_2ea914:
    // 0x2ea914: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea918: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2ea918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea91c: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x2ea91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2ea920: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2ea920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ea924: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ea924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea928: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2ea928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ea92c: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x2ea92cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2ea930: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x2EA930u;
    SET_GPR_U32(ctx, 31, 0x2EA938u);
    ctx->pc = 0x2EA934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA930u;
            // 0x2ea934: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA938u; }
        if (ctx->pc != 0x2EA938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA938u; }
        if (ctx->pc != 0x2EA938u) { return; }
    }
    ctx->pc = 0x2EA938u;
label_2ea938:
    // 0x2ea938: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2ea938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ea93c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea940: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2ea940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea944: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2ea944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2ea948: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2ea948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ea94c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ea94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea950: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2ea950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ea954: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x2ea954u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2ea958: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x2EA958u;
    SET_GPR_U32(ctx, 31, 0x2EA960u);
    ctx->pc = 0x2EA95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA958u;
            // 0x2ea95c: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA960u; }
        if (ctx->pc != 0x2EA960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA960u; }
        if (ctx->pc != 0x2EA960u) { return; }
    }
    ctx->pc = 0x2EA960u;
label_2ea960:
    // 0x2ea960: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2ea960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ea964: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea968: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2ea968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea96c: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2ea96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2ea970: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2ea970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ea974: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ea974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea978: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2ea978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ea97c: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x2ea97cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2ea980: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x2EA980u;
    SET_GPR_U32(ctx, 31, 0x2EA988u);
    ctx->pc = 0x2EA984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA980u;
            // 0x2ea984: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA988u; }
        if (ctx->pc != 0x2EA988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA988u; }
        if (ctx->pc != 0x2EA988u) { return; }
    }
    ctx->pc = 0x2EA988u;
label_2ea988:
    // 0x2ea988: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2EA988u;
    {
        const bool branch_taken_0x2ea988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea988) {
            ctx->pc = 0x2EAA20u;
            goto label_2eaa20;
        }
    }
    ctx->pc = 0x2EA990u;
label_2ea990:
    // 0x2ea990: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea994: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2ea994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea998: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x2ea998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2ea99c: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2ea99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ea9a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ea9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea9a4: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2ea9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ea9a8: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x2ea9a8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2ea9ac: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x2EA9ACu;
    SET_GPR_U32(ctx, 31, 0x2EA9B4u);
    ctx->pc = 0x2EA9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA9ACu;
            // 0x2ea9b0: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA9B4u; }
        if (ctx->pc != 0x2EA9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA9B4u; }
        if (ctx->pc != 0x2EA9B4u) { return; }
    }
    ctx->pc = 0x2EA9B4u;
label_2ea9b4:
    // 0x2ea9b4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2EA9B4u;
    {
        const bool branch_taken_0x2ea9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea9b4) {
            ctx->pc = 0x2EAA20u;
            goto label_2eaa20;
        }
    }
    ctx->pc = 0x2EA9BCu;
label_2ea9bc:
    // 0x2ea9bc: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x2ea9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2ea9c0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea9c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea9c8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ea9c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea9cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea9ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea9d0: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA9D0u;
    SET_GPR_U32(ctx, 31, 0x2EA9D8u);
    ctx->pc = 0x2EA9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA9D0u;
            // 0x2ea9d4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA9D8u; }
        if (ctx->pc != 0x2EA9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA9D8u; }
        if (ctx->pc != 0x2EA9D8u) { return; }
    }
    ctx->pc = 0x2EA9D8u;
label_2ea9d8:
    // 0x2ea9d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ea9dc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ea9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea9e0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ea9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ea9e4: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2ea9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2ea9e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea9ec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ea9ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea9f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea9f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea9f4: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EA9F4u;
    SET_GPR_U32(ctx, 31, 0x2EA9FCu);
    ctx->pc = 0x2EA9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA9F4u;
            // 0x2ea9f8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA9FCu; }
        if (ctx->pc != 0x2EA9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA9FCu; }
        if (ctx->pc != 0x2EA9FCu) { return; }
    }
    ctx->pc = 0x2EA9FCu;
label_2ea9fc:
    // 0x2ea9fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ea9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eaa00: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2eaa00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa04: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eaa04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eaa08: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eaa08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eaa0c: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2eaa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2eaa10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eaa10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eaa14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa18: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAA18u;
    SET_GPR_U32(ctx, 31, 0x2EAA20u);
    ctx->pc = 0x2EAA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAA18u;
            // 0x2eaa1c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA20u; }
        if (ctx->pc != 0x2EAA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA20u; }
        if (ctx->pc != 0x2EAA20u) { return; }
    }
    ctx->pc = 0x2EAA20u;
label_2eaa20:
    // 0x2eaa20: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2eaa20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2eaa24: 0x8c7014b0  lw          $s0, 0x14B0($v1)
    ctx->pc = 0x2eaa24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5296)));
    // 0x2eaa28: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EAA28u;
    {
        const bool branch_taken_0x2eaa28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaa28) {
            ctx->pc = 0x2EAA60u;
            goto label_2eaa60;
        }
    }
    ctx->pc = 0x2EAA30u;
    // 0x2eaa30: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eaa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eaa34: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x2eaa34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
    // 0x2eaa38: 0x8c521ce8  lw          $s2, 0x1CE8($v0)
    ctx->pc = 0x2eaa38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7400)));
    // 0x2eaa3c: 0x263114c0  addiu       $s1, $s1, 0x14C0
    ctx->pc = 0x2eaa3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5312));
label_2eaa40:
    // 0x2eaa40: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2eaa40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eaa44: 0xc15a838  jal         func_56A0E0
    ctx->pc = 0x2EAA44u;
    SET_GPR_U32(ctx, 31, 0x2EAA4Cu);
    ctx->pc = 0x2EAA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAA44u;
            // 0x2eaa48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x56A0E0u;
    if (runtime->hasFunction(0x56A0E0u)) {
        auto targetFn = runtime->lookupFunction(0x56A0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA4Cu; }
        if (ctx->pc != 0x2EAA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0056A0E0_0x56a0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA4Cu; }
        if (ctx->pc != 0x2EAA4Cu) { return; }
    }
    ctx->pc = 0x2EAA4Cu;
label_2eaa4c:
    // 0x2eaa4c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2eaa4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2eaa50: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2eaa50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2eaa54: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EAA54u;
    {
        const bool branch_taken_0x2eaa54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eaa54) {
            ctx->pc = 0x2EAA40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eaa40;
        }
    }
    ctx->pc = 0x2EAA5Cu;
    // 0x2eaa5c: 0x0  nop
    ctx->pc = 0x2eaa5cu;
    // NOP
label_2eaa60:
    // 0x2eaa60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2eaa60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eaa64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2eaa64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eaa68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2eaa68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eaa6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2eaa6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eaa70: 0x3e00008  jr          $ra
    ctx->pc = 0x2EAA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAA70u;
            // 0x2eaa74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EAA78u;
    // 0x2eaa78: 0x0  nop
    ctx->pc = 0x2eaa78u;
    // NOP
    // 0x2eaa7c: 0x0  nop
    ctx->pc = 0x2eaa7cu;
    // NOP
}
