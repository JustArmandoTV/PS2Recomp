#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048A840
// Address: 0x48a840 - 0x48a9a0
void sub_0048A840_0x48a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048A840_0x48a840");
#endif

    switch (ctx->pc) {
        case 0x48a884u: goto label_48a884;
        case 0x48a8a8u: goto label_48a8a8;
        case 0x48a8c0u: goto label_48a8c0;
        case 0x48a8dcu: goto label_48a8dc;
        case 0x48a8f4u: goto label_48a8f4;
        case 0x48a90cu: goto label_48a90c;
        case 0x48a924u: goto label_48a924;
        case 0x48a93cu: goto label_48a93c;
        case 0x48a964u: goto label_48a964;
        case 0x48a988u: goto label_48a988;
        default: break;
    }

    ctx->pc = 0x48a840u;

    // 0x48a840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48a840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48a844: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x48a844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a848: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x48a84c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x48a84cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a850: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48a850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48a854: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x48a854u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48a858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48a858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48a85c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48a85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48a860: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48a860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a864: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x48a864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x48a868: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x48a868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a86c: 0x8c8900b8  lw          $t1, 0xB8($a0)
    ctx->pc = 0x48a86cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x48a870: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x48a870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a874: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x48a874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48a878: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x48a878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x48a87c: 0xc122984  jal         func_48A610
    ctx->pc = 0x48A87Cu;
    SET_GPR_U32(ctx, 31, 0x48A884u);
    ctx->pc = 0x48A880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A87Cu;
            // 0x48a880: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48A610u;
    if (runtime->hasFunction(0x48A610u)) {
        auto targetFn = runtime->lookupFunction(0x48A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A884u; }
        if (ctx->pc != 0x48A884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048A610_0x48a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A884u; }
        if (ctx->pc != 0x48A884u) { return; }
    }
    ctx->pc = 0x48A884u;
label_48a884:
    // 0x48a884: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x48a884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x48a888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48a888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48a88c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x48A88Cu;
    {
        const bool branch_taken_0x48a88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x48a88c) {
            ctx->pc = 0x48A8C8u;
            goto label_48a8c8;
        }
    }
    ctx->pc = 0x48A894u;
    // 0x48a894: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48a894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x48a898: 0x8e2500cc  lw          $a1, 0xCC($s1)
    ctx->pc = 0x48a898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x48a89c: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48a89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x48a8a0: 0xc0fe478  jal         func_3F91E0
    ctx->pc = 0x48A8A0u;
    SET_GPR_U32(ctx, 31, 0x48A8A8u);
    ctx->pc = 0x48A8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A8A0u;
            // 0x48a8a4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F91E0u;
    if (runtime->hasFunction(0x3F91E0u)) {
        auto targetFn = runtime->lookupFunction(0x3F91E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A8A8u; }
        if (ctx->pc != 0x48A8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F91E0_0x3f91e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A8A8u; }
        if (ctx->pc != 0x48A8A8u) { return; }
    }
    ctx->pc = 0x48A8A8u;
label_48a8a8:
    // 0x48a8a8: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x48a8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x48a8ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x48a8b0: 0x8e2500cc  lw          $a1, 0xCC($s1)
    ctx->pc = 0x48a8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x48a8b4: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x48a8b8: 0xc0fe478  jal         func_3F91E0
    ctx->pc = 0x48A8B8u;
    SET_GPR_U32(ctx, 31, 0x48A8C0u);
    ctx->pc = 0x48A8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A8B8u;
            // 0x48a8bc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F91E0u;
    if (runtime->hasFunction(0x3F91E0u)) {
        auto targetFn = runtime->lookupFunction(0x3F91E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A8C0u; }
        if (ctx->pc != 0x48A8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F91E0_0x3f91e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A8C0u; }
        if (ctx->pc != 0x48A8C0u) { return; }
    }
    ctx->pc = 0x48A8C0u;
label_48a8c0:
    // 0x48a8c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x48A8C0u;
    {
        const bool branch_taken_0x48a8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A8C0u;
            // 0x48a8c4: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a8c0) {
            ctx->pc = 0x48A8F8u;
            goto label_48a8f8;
        }
    }
    ctx->pc = 0x48A8C8u;
label_48a8c8:
    // 0x48a8c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x48a8cc: 0x8e2500cc  lw          $a1, 0xCC($s1)
    ctx->pc = 0x48a8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x48a8d0: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48a8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x48a8d4: 0xc0fe5a8  jal         func_3F96A0
    ctx->pc = 0x48A8D4u;
    SET_GPR_U32(ctx, 31, 0x48A8DCu);
    ctx->pc = 0x48A8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A8D4u;
            // 0x48a8d8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96A0u;
    if (runtime->hasFunction(0x3F96A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A8DCu; }
        if (ctx->pc != 0x48A8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96A0_0x3f96a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A8DCu; }
        if (ctx->pc != 0x48A8DCu) { return; }
    }
    ctx->pc = 0x48A8DCu;
label_48a8dc:
    // 0x48a8dc: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x48a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x48a8e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x48a8e4: 0x8e2500cc  lw          $a1, 0xCC($s1)
    ctx->pc = 0x48a8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x48a8e8: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x48a8ec: 0xc0fe5a8  jal         func_3F96A0
    ctx->pc = 0x48A8ECu;
    SET_GPR_U32(ctx, 31, 0x48A8F4u);
    ctx->pc = 0x48A8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A8ECu;
            // 0x48a8f0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96A0u;
    if (runtime->hasFunction(0x3F96A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A8F4u; }
        if (ctx->pc != 0x48A8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96A0_0x3f96a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A8F4u; }
        if (ctx->pc != 0x48A8F4u) { return; }
    }
    ctx->pc = 0x48A8F4u;
label_48a8f4:
    // 0x48a8f4: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x48a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_48a8f8:
    // 0x48a8f8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x48a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x48a8fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48a900: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x48a900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x48a904: 0xc074a00  jal         func_1D2800
    ctx->pc = 0x48A904u;
    SET_GPR_U32(ctx, 31, 0x48A90Cu);
    ctx->pc = 0x48A908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A904u;
            // 0x48a908: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2800u;
    if (runtime->hasFunction(0x1D2800u)) {
        auto targetFn = runtime->lookupFunction(0x1D2800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A90Cu; }
        if (ctx->pc != 0x48A90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2800_0x1d2800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A90Cu; }
        if (ctx->pc != 0x48A90Cu) { return; }
    }
    ctx->pc = 0x48A90Cu;
label_48a90c:
    // 0x48a90c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x48a90cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a910: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x48a910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x48a914: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48a914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x48a918: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48a918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x48a91c: 0xc0fe478  jal         func_3F91E0
    ctx->pc = 0x48A91Cu;
    SET_GPR_U32(ctx, 31, 0x48A924u);
    ctx->pc = 0x48A920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A91Cu;
            // 0x48a920: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F91E0u;
    if (runtime->hasFunction(0x3F91E0u)) {
        auto targetFn = runtime->lookupFunction(0x3F91E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A924u; }
        if (ctx->pc != 0x48A924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F91E0_0x3f91e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A924u; }
        if (ctx->pc != 0x48A924u) { return; }
    }
    ctx->pc = 0x48A924u;
label_48a924:
    // 0x48a924: 0xae2200f8  sw          $v0, 0xF8($s1)
    ctx->pc = 0x48a924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
    // 0x48a928: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x48a928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a92c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x48a930: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48a930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x48a934: 0xc0fe478  jal         func_3F91E0
    ctx->pc = 0x48A934u;
    SET_GPR_U32(ctx, 31, 0x48A93Cu);
    ctx->pc = 0x48A938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A934u;
            // 0x48a938: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F91E0u;
    if (runtime->hasFunction(0x3F91E0u)) {
        auto targetFn = runtime->lookupFunction(0x3F91E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A93Cu; }
        if (ctx->pc != 0x48A93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F91E0_0x3f91e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A93Cu; }
        if (ctx->pc != 0x48A93Cu) { return; }
    }
    ctx->pc = 0x48A93Cu;
label_48a93c:
    // 0x48a93c: 0xae2200fc  sw          $v0, 0xFC($s1)
    ctx->pc = 0x48a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 2));
    // 0x48a940: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x48a940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a944: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x48a944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x48a948: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x48a948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a94c: 0x8e2400f8  lw          $a0, 0xF8($s1)
    ctx->pc = 0x48a94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x48a950: 0x8e2900f0  lw          $t1, 0xF0($s1)
    ctx->pc = 0x48a950u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x48a954: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x48a954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48a958: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x48a958u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x48a95c: 0xc07496c  jal         func_1D25B0
    ctx->pc = 0x48A95Cu;
    SET_GPR_U32(ctx, 31, 0x48A964u);
    ctx->pc = 0x48A960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A95Cu;
            // 0x48a960: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D25B0u;
    if (runtime->hasFunction(0x1D25B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D25B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A964u; }
        if (ctx->pc != 0x48A964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D25B0_0x1d25b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A964u; }
        if (ctx->pc != 0x48A964u) { return; }
    }
    ctx->pc = 0x48A964u;
label_48a964:
    // 0x48a964: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x48a964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x48a968: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x48a968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a96c: 0x8e2400fc  lw          $a0, 0xFC($s1)
    ctx->pc = 0x48a96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x48a970: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x48a970u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a974: 0x8e2900f4  lw          $t1, 0xF4($s1)
    ctx->pc = 0x48a974u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x48a978: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x48a978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48a97c: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x48a97cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x48a980: 0xc07496c  jal         func_1D25B0
    ctx->pc = 0x48A980u;
    SET_GPR_U32(ctx, 31, 0x48A988u);
    ctx->pc = 0x48A984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A980u;
            // 0x48a984: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D25B0u;
    if (runtime->hasFunction(0x1D25B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D25B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A988u; }
        if (ctx->pc != 0x48A988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D25B0_0x1d25b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A988u; }
        if (ctx->pc != 0x48A988u) { return; }
    }
    ctx->pc = 0x48A988u;
label_48a988:
    // 0x48a988: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48a988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48a98c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48a98cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48a990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48a990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48a994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48a994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48a998: 0x3e00008  jr          $ra
    ctx->pc = 0x48A998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48A99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A998u;
            // 0x48a99c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48A9A0u;
}
