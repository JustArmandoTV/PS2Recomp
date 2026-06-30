#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AB520
// Address: 0x2ab520 - 0x2ab680
void sub_002AB520_0x2ab520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB520_0x2ab520");
#endif

    switch (ctx->pc) {
        case 0x2ab55cu: goto label_2ab55c;
        case 0x2ab56cu: goto label_2ab56c;
        case 0x2ab574u: goto label_2ab574;
        case 0x2ab5b4u: goto label_2ab5b4;
        case 0x2ab5d0u: goto label_2ab5d0;
        case 0x2ab5e0u: goto label_2ab5e0;
        case 0x2ab5e8u: goto label_2ab5e8;
        case 0x2ab628u: goto label_2ab628;
        case 0x2ab638u: goto label_2ab638;
        case 0x2ab644u: goto label_2ab644;
        case 0x2ab65cu: goto label_2ab65c;
        default: break;
    }

    ctx->pc = 0x2ab520u;

    // 0x2ab520: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2ab520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2ab524: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ab524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ab528: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ab528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ab52c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ab52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ab530: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ab530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ab534: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ab534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ab538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ab53c: 0x12400047  beqz        $s2, . + 4 + (0x47 << 2)
    ctx->pc = 0x2AB53Cu;
    {
        const bool branch_taken_0x2ab53c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB53Cu;
            // 0x2ab540: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab53c) {
            ctx->pc = 0x2AB65Cu;
            goto label_2ab65c;
        }
    }
    ctx->pc = 0x2AB544u;
    // 0x2ab544: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2ab544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2ab548: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2ab548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ab54c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2ab54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2ab550: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ab550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab554: 0xc0aaddc  jal         func_2AB770
    ctx->pc = 0x2AB554u;
    SET_GPR_U32(ctx, 31, 0x2AB55Cu);
    ctx->pc = 0x2AB558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB554u;
            // 0x2ab558: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB770u;
    if (runtime->hasFunction(0x2AB770u)) {
        auto targetFn = runtime->lookupFunction(0x2AB770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB55Cu; }
        if (ctx->pc != 0x2AB55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB770_0x2ab770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB55Cu; }
        if (ctx->pc != 0x2AB55Cu) { return; }
    }
    ctx->pc = 0x2AB55Cu;
label_2ab55c:
    // 0x2ab55c: 0x1030c2  srl         $a2, $s0, 3
    ctx->pc = 0x2ab55cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
    // 0x2ab560: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ab560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ab564: 0xc0aada0  jal         func_2AB680
    ctx->pc = 0x2AB564u;
    SET_GPR_U32(ctx, 31, 0x2AB56Cu);
    ctx->pc = 0x2AB568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB564u;
            // 0x2ab568: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB680u;
    if (runtime->hasFunction(0x2AB680u)) {
        auto targetFn = runtime->lookupFunction(0x2AB680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB56Cu; }
        if (ctx->pc != 0x2AB56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB680_0x2ab680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB56Cu; }
        if (ctx->pc != 0x2AB56Cu) { return; }
    }
    ctx->pc = 0x2AB56Cu;
label_2ab56c:
    // 0x2ab56c: 0xc0aadcc  jal         func_2AB730
    ctx->pc = 0x2AB56Cu;
    SET_GPR_U32(ctx, 31, 0x2AB574u);
    ctx->pc = 0x2AB570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB56Cu;
            // 0x2ab570: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB730u;
    if (runtime->hasFunction(0x2AB730u)) {
        auto targetFn = runtime->lookupFunction(0x2AB730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB574u; }
        if (ctx->pc != 0x2AB574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB730_0x2ab730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB574u; }
        if (ctx->pc != 0x2AB574u) { return; }
    }
    ctx->pc = 0x2AB574u;
label_2ab574:
    // 0x2ab574: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB574u;
    {
        const bool branch_taken_0x2ab574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab574) {
            ctx->pc = 0x2AB578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB574u;
            // 0x2ab578: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB584u;
            goto label_2ab584;
        }
    }
    ctx->pc = 0x2AB57Cu;
    // 0x2ab57c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB57Cu;
    {
        const bool branch_taken_0x2ab57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB57Cu;
            // 0x2ab580: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab57c) {
            ctx->pc = 0x2AB588u;
            goto label_2ab588;
        }
    }
    ctx->pc = 0x2AB584u;
label_2ab584:
    // 0x2ab584: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2ab584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ab588:
    // 0x2ab588: 0x32030007  andi        $v1, $s0, 0x7
    ctx->pc = 0x2ab588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x2ab58c: 0x24c70320  addiu       $a3, $a2, 0x320
    ctx->pc = 0x2ab58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 800));
    // 0x2ab590: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ab590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ab594: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2ab594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ab598: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2ab598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ab59c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2ab59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ab5a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ab5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ab5a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ab5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ab5a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ab5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ab5ac: 0xc0aadd0  jal         func_2AB740
    ctx->pc = 0x2AB5ACu;
    SET_GPR_U32(ctx, 31, 0x2AB5B4u);
    ctx->pc = 0x2AB5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB5ACu;
            // 0x2ab5b0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB740u;
    if (runtime->hasFunction(0x2AB740u)) {
        auto targetFn = runtime->lookupFunction(0x2AB740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5B4u; }
        if (ctx->pc != 0x2AB5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB740_0x2ab740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5B4u; }
        if (ctx->pc != 0x2AB5B4u) { return; }
    }
    ctx->pc = 0x2AB5B4u;
label_2ab5b4:
    // 0x2ab5b4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2ab5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2ab5b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ab5b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab5bc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ab5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ab5c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ab5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab5c4: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x2ab5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ab5c8: 0xc0aaddc  jal         func_2AB770
    ctx->pc = 0x2AB5C8u;
    SET_GPR_U32(ctx, 31, 0x2AB5D0u);
    ctx->pc = 0x2AB5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB5C8u;
            // 0x2ab5cc: 0x629821  addu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB770u;
    if (runtime->hasFunction(0x2AB770u)) {
        auto targetFn = runtime->lookupFunction(0x2AB770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5D0u; }
        if (ctx->pc != 0x2AB5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB770_0x2ab770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5D0u; }
        if (ctx->pc != 0x2AB5D0u) { return; }
    }
    ctx->pc = 0x2AB5D0u;
label_2ab5d0:
    // 0x2ab5d0: 0x1330c2  srl         $a2, $s3, 3
    ctx->pc = 0x2ab5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
    // 0x2ab5d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2ab5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ab5d8: 0xc0aada0  jal         func_2AB680
    ctx->pc = 0x2AB5D8u;
    SET_GPR_U32(ctx, 31, 0x2AB5E0u);
    ctx->pc = 0x2AB5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB5D8u;
            // 0x2ab5dc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB680u;
    if (runtime->hasFunction(0x2AB680u)) {
        auto targetFn = runtime->lookupFunction(0x2AB680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5E0u; }
        if (ctx->pc != 0x2AB5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB680_0x2ab680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5E0u; }
        if (ctx->pc != 0x2AB5E0u) { return; }
    }
    ctx->pc = 0x2AB5E0u;
label_2ab5e0:
    // 0x2ab5e0: 0xc0aadcc  jal         func_2AB730
    ctx->pc = 0x2AB5E0u;
    SET_GPR_U32(ctx, 31, 0x2AB5E8u);
    ctx->pc = 0x2AB5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB5E0u;
            // 0x2ab5e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB730u;
    if (runtime->hasFunction(0x2AB730u)) {
        auto targetFn = runtime->lookupFunction(0x2AB730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5E8u; }
        if (ctx->pc != 0x2AB5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB730_0x2ab730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5E8u; }
        if (ctx->pc != 0x2AB5E8u) { return; }
    }
    ctx->pc = 0x2AB5E8u;
label_2ab5e8:
    // 0x2ab5e8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB5E8u;
    {
        const bool branch_taken_0x2ab5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab5e8) {
            ctx->pc = 0x2AB5ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB5E8u;
            // 0x2ab5ec: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB5F8u;
            goto label_2ab5f8;
        }
    }
    ctx->pc = 0x2AB5F0u;
    // 0x2ab5f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB5F0u;
    {
        const bool branch_taken_0x2ab5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB5F0u;
            // 0x2ab5f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab5f0) {
            ctx->pc = 0x2AB5FCu;
            goto label_2ab5fc;
        }
    }
    ctx->pc = 0x2AB5F8u;
label_2ab5f8:
    // 0x2ab5f8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2ab5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ab5fc:
    // 0x2ab5fc: 0x32630007  andi        $v1, $s3, 0x7
    ctx->pc = 0x2ab5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x2ab600: 0x24c70320  addiu       $a3, $a2, 0x320
    ctx->pc = 0x2ab600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 800));
    // 0x2ab604: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ab604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ab608: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ab608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ab60c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2ab60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ab610: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2ab610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ab614: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ab614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ab618: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ab618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ab61c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ab61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ab620: 0xc0aadd0  jal         func_2AB740
    ctx->pc = 0x2AB620u;
    SET_GPR_U32(ctx, 31, 0x2AB628u);
    ctx->pc = 0x2AB624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB620u;
            // 0x2ab624: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB740u;
    if (runtime->hasFunction(0x2AB740u)) {
        auto targetFn = runtime->lookupFunction(0x2AB740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB628u; }
        if (ctx->pc != 0x2AB628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB740_0x2ab740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB628u; }
        if (ctx->pc != 0x2AB628u) { return; }
    }
    ctx->pc = 0x2AB628u;
label_2ab628:
    // 0x2ab628: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ab628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab62c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab630: 0xc0ab1f0  jal         func_2AC7C0
    ctx->pc = 0x2AB630u;
    SET_GPR_U32(ctx, 31, 0x2AB638u);
    ctx->pc = 0x2AB634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB630u;
            // 0x2ab634: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC7C0u;
    if (runtime->hasFunction(0x2AC7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AC7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB638u; }
        if (ctx->pc != 0x2AB638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC7C0_0x2ac7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB638u; }
        if (ctx->pc != 0x2AB638u) { return; }
    }
    ctx->pc = 0x2AB638u;
label_2ab638:
    // 0x2ab638: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab63c: 0xc0ab2c8  jal         func_2ACB20
    ctx->pc = 0x2AB63Cu;
    SET_GPR_U32(ctx, 31, 0x2AB644u);
    ctx->pc = 0x2AB640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB63Cu;
            // 0x2ab640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACB20u;
    if (runtime->hasFunction(0x2ACB20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB644u; }
        if (ctx->pc != 0x2AB644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACB20_0x2acb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB644u; }
        if (ctx->pc != 0x2AB644u) { return; }
    }
    ctx->pc = 0x2AB644u;
label_2ab644:
    // 0x2ab644: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2ab644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2ab648: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ab648u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ab64c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB64Cu;
    {
        const bool branch_taken_0x2ab64c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ab64c) {
            ctx->pc = 0x2AB650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB64Cu;
            // 0x2ab650: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB660u;
            goto label_2ab660;
        }
    }
    ctx->pc = 0x2AB654u;
    // 0x2ab654: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2AB654u;
    SET_GPR_U32(ctx, 31, 0x2AB65Cu);
    ctx->pc = 0x2AB658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB654u;
            // 0x2ab658: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB65Cu; }
        if (ctx->pc != 0x2AB65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB65Cu; }
        if (ctx->pc != 0x2AB65Cu) { return; }
    }
    ctx->pc = 0x2AB65Cu;
label_2ab65c:
    // 0x2ab65c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ab65cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ab660:
    // 0x2ab660: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ab660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ab664: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ab664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ab668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab66c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ab66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ab670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab674: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB674u;
            // 0x2ab678: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB67Cu;
    // 0x2ab67c: 0x0  nop
    ctx->pc = 0x2ab67cu;
    // NOP
}
