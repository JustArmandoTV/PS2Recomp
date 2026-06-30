#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00324900
// Address: 0x324900 - 0x324af0
void sub_00324900_0x324900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324900_0x324900");
#endif

    switch (ctx->pc) {
        case 0x324940u: goto label_324940;
        case 0x324954u: goto label_324954;
        case 0x32496cu: goto label_32496c;
        case 0x324984u: goto label_324984;
        case 0x324994u: goto label_324994;
        case 0x3249b0u: goto label_3249b0;
        case 0x3249c4u: goto label_3249c4;
        case 0x3249d8u: goto label_3249d8;
        case 0x3249ecu: goto label_3249ec;
        case 0x324a04u: goto label_324a04;
        case 0x324a1cu: goto label_324a1c;
        case 0x324a30u: goto label_324a30;
        case 0x324a44u: goto label_324a44;
        case 0x324a5cu: goto label_324a5c;
        case 0x324a74u: goto label_324a74;
        case 0x324a88u: goto label_324a88;
        case 0x324a9cu: goto label_324a9c;
        case 0x324ab4u: goto label_324ab4;
        case 0x324ac8u: goto label_324ac8;
        default: break;
    }

    ctx->pc = 0x324900u;

    // 0x324900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x324900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x324904: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x324908: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x324908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x32490c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32490cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x324910: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x324910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x324914: 0x24a5c9d0  addiu       $a1, $a1, -0x3630
    ctx->pc = 0x324914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953424));
    // 0x324918: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x324918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32491c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32491cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x324920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x324920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x324924: 0x24920234  addiu       $s2, $a0, 0x234
    ctx->pc = 0x324924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 564));
    // 0x324928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x324928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32492c: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x32492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x324930: 0x8c840238  lw          $a0, 0x238($a0)
    ctx->pc = 0x324930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 568)));
    // 0x324934: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x324934u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x324938: 0xc123944  jal         func_48E510
    ctx->pc = 0x324938u;
    SET_GPR_U32(ctx, 31, 0x324940u);
    ctx->pc = 0x32493Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324938u;
            // 0x32493c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324940u; }
        if (ctx->pc != 0x324940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324940u; }
        if (ctx->pc != 0x324940u) { return; }
    }
    ctx->pc = 0x324940u;
label_324940:
    // 0x324940: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x324940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x324944: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x324948: 0x24a5c9e0  addiu       $a1, $a1, -0x3620
    ctx->pc = 0x324948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953440));
    // 0x32494c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32494Cu;
    SET_GPR_U32(ctx, 31, 0x324954u);
    ctx->pc = 0x324950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32494Cu;
            // 0x324950: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324954u; }
        if (ctx->pc != 0x324954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324954u; }
        if (ctx->pc != 0x324954u) { return; }
    }
    ctx->pc = 0x324954u;
label_324954:
    // 0x324954: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x324954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x324958: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x32495c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32495cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324960: 0x24a5c4b8  addiu       $a1, $a1, -0x3B48
    ctx->pc = 0x324960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952120));
    // 0x324964: 0xc123944  jal         func_48E510
    ctx->pc = 0x324964u;
    SET_GPR_U32(ctx, 31, 0x32496Cu);
    ctx->pc = 0x324968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324964u;
            // 0x324968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32496Cu; }
        if (ctx->pc != 0x32496Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32496Cu; }
        if (ctx->pc != 0x32496Cu) { return; }
    }
    ctx->pc = 0x32496Cu;
label_32496c:
    // 0x32496c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x32496cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x324970: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x324974: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x324974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324978: 0x24a5c9f0  addiu       $a1, $a1, -0x3610
    ctx->pc = 0x324978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953456));
    // 0x32497c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32497Cu;
    SET_GPR_U32(ctx, 31, 0x324984u);
    ctx->pc = 0x324980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32497Cu;
            // 0x324980: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324984u; }
        if (ctx->pc != 0x324984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324984u; }
        if (ctx->pc != 0x324984u) { return; }
    }
    ctx->pc = 0x324984u;
label_324984:
    // 0x324984: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x324984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x324988: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x324988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32498c: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x32498Cu;
    SET_GPR_U32(ctx, 31, 0x324994u);
    ctx->pc = 0x324990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32498Cu;
            // 0x324990: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324994u; }
        if (ctx->pc != 0x324994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324994u; }
        if (ctx->pc != 0x324994u) { return; }
    }
    ctx->pc = 0x324994u;
label_324994:
    // 0x324994: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x324994u;
    {
        const bool branch_taken_0x324994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x324994) {
            ctx->pc = 0x324998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x324994u;
            // 0x324998: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3249F4u;
            goto label_3249f4;
        }
    }
    ctx->pc = 0x32499Cu;
    // 0x32499c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x32499cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3249a0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3249a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3249a4: 0x24a5ca00  addiu       $a1, $a1, -0x3600
    ctx->pc = 0x3249a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953472));
    // 0x3249a8: 0xc123944  jal         func_48E510
    ctx->pc = 0x3249A8u;
    SET_GPR_U32(ctx, 31, 0x3249B0u);
    ctx->pc = 0x3249ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3249A8u;
            // 0x3249ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3249B0u; }
        if (ctx->pc != 0x3249B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3249B0u; }
        if (ctx->pc != 0x3249B0u) { return; }
    }
    ctx->pc = 0x3249B0u;
label_3249b0:
    // 0x3249b0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3249b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3249b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3249b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3249b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3249b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3249bc: 0xc123654  jal         func_48D950
    ctx->pc = 0x3249BCu;
    SET_GPR_U32(ctx, 31, 0x3249C4u);
    ctx->pc = 0x3249C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3249BCu;
            // 0x3249c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3249C4u; }
        if (ctx->pc != 0x3249C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3249C4u; }
        if (ctx->pc != 0x3249C4u) { return; }
    }
    ctx->pc = 0x3249C4u;
label_3249c4:
    // 0x3249c4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3249c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3249c8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3249c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3249cc: 0x24a5ca18  addiu       $a1, $a1, -0x35E8
    ctx->pc = 0x3249ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953496));
    // 0x3249d0: 0xc123944  jal         func_48E510
    ctx->pc = 0x3249D0u;
    SET_GPR_U32(ctx, 31, 0x3249D8u);
    ctx->pc = 0x3249D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3249D0u;
            // 0x3249d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3249D8u; }
        if (ctx->pc != 0x3249D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3249D8u; }
        if (ctx->pc != 0x3249D8u) { return; }
    }
    ctx->pc = 0x3249D8u;
label_3249d8:
    // 0x3249d8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3249d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3249dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3249dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3249e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3249e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3249e4: 0xc123654  jal         func_48D950
    ctx->pc = 0x3249E4u;
    SET_GPR_U32(ctx, 31, 0x3249ECu);
    ctx->pc = 0x3249E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3249E4u;
            // 0x3249e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3249ECu; }
        if (ctx->pc != 0x3249ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3249ECu; }
        if (ctx->pc != 0x3249ECu) { return; }
    }
    ctx->pc = 0x3249ECu;
label_3249ec:
    // 0x3249ec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3249ECu;
    {
        const bool branch_taken_0x3249ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3249F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3249ECu;
            // 0x3249f0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3249ec) {
            ctx->pc = 0x324A34u;
            goto label_324a34;
        }
    }
    ctx->pc = 0x3249F4u;
label_3249f4:
    // 0x3249f4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3249f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3249f8: 0x24a5ca30  addiu       $a1, $a1, -0x35D0
    ctx->pc = 0x3249f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953520));
    // 0x3249fc: 0xc123944  jal         func_48E510
    ctx->pc = 0x3249FCu;
    SET_GPR_U32(ctx, 31, 0x324A04u);
    ctx->pc = 0x324A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3249FCu;
            // 0x324a00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324A04u; }
        if (ctx->pc != 0x324A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324A04u; }
        if (ctx->pc != 0x324A04u) { return; }
    }
    ctx->pc = 0x324A04u;
label_324a04:
    // 0x324a04: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x324a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x324a08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x324a08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324a0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x324a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324a10: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x324a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324a14: 0xc123654  jal         func_48D950
    ctx->pc = 0x324A14u;
    SET_GPR_U32(ctx, 31, 0x324A1Cu);
    ctx->pc = 0x324A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324A14u;
            // 0x324a18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324A1Cu; }
        if (ctx->pc != 0x324A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324A1Cu; }
        if (ctx->pc != 0x324A1Cu) { return; }
    }
    ctx->pc = 0x324A1Cu;
label_324a1c:
    // 0x324a1c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x324a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x324a20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x324a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324a24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x324a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324a28: 0xc123654  jal         func_48D950
    ctx->pc = 0x324A28u;
    SET_GPR_U32(ctx, 31, 0x324A30u);
    ctx->pc = 0x324A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324A28u;
            // 0x324a2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324A30u; }
        if (ctx->pc != 0x324A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324A30u; }
        if (ctx->pc != 0x324A30u) { return; }
    }
    ctx->pc = 0x324A30u;
label_324a30:
    // 0x324a30: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x324a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_324a34:
    // 0x324a34: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x324a38: 0x24a5c600  addiu       $a1, $a1, -0x3A00
    ctx->pc = 0x324a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952448));
    // 0x324a3c: 0xc123944  jal         func_48E510
    ctx->pc = 0x324A3Cu;
    SET_GPR_U32(ctx, 31, 0x324A44u);
    ctx->pc = 0x324A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324A3Cu;
            // 0x324a40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324A44u; }
        if (ctx->pc != 0x324A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324A44u; }
        if (ctx->pc != 0x324A44u) { return; }
    }
    ctx->pc = 0x324A44u;
label_324a44:
    // 0x324a44: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x324a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x324a48: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x324a4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x324a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324a50: 0x24a5ca48  addiu       $a1, $a1, -0x35B8
    ctx->pc = 0x324a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953544));
    // 0x324a54: 0xc123944  jal         func_48E510
    ctx->pc = 0x324A54u;
    SET_GPR_U32(ctx, 31, 0x324A5Cu);
    ctx->pc = 0x324A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324A54u;
            // 0x324a58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324A5Cu; }
        if (ctx->pc != 0x324A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324A5Cu; }
        if (ctx->pc != 0x324A5Cu) { return; }
    }
    ctx->pc = 0x324A5Cu;
label_324a5c:
    // 0x324a5c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x324a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x324a60: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x324a64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x324a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324a68: 0x24a5ca50  addiu       $a1, $a1, -0x35B0
    ctx->pc = 0x324a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953552));
    // 0x324a6c: 0xc123944  jal         func_48E510
    ctx->pc = 0x324A6Cu;
    SET_GPR_U32(ctx, 31, 0x324A74u);
    ctx->pc = 0x324A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324A6Cu;
            // 0x324a70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324A74u; }
        if (ctx->pc != 0x324A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324A74u; }
        if (ctx->pc != 0x324A74u) { return; }
    }
    ctx->pc = 0x324A74u;
label_324a74:
    // 0x324a74: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x324a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x324a78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x324a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324a7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324a80: 0xc123654  jal         func_48D950
    ctx->pc = 0x324A80u;
    SET_GPR_U32(ctx, 31, 0x324A88u);
    ctx->pc = 0x324A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324A80u;
            // 0x324a84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324A88u; }
        if (ctx->pc != 0x324A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324A88u; }
        if (ctx->pc != 0x324A88u) { return; }
    }
    ctx->pc = 0x324A88u;
label_324a88:
    // 0x324a88: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x324a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x324a8c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x324a90: 0x24a5c4b8  addiu       $a1, $a1, -0x3B48
    ctx->pc = 0x324a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952120));
    // 0x324a94: 0xc123944  jal         func_48E510
    ctx->pc = 0x324A94u;
    SET_GPR_U32(ctx, 31, 0x324A9Cu);
    ctx->pc = 0x324A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324A94u;
            // 0x324a98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324A9Cu; }
        if (ctx->pc != 0x324A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324A9Cu; }
        if (ctx->pc != 0x324A9Cu) { return; }
    }
    ctx->pc = 0x324A9Cu;
label_324a9c:
    // 0x324a9c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x324a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x324aa0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x324aa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x324aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324aa8: 0x24a5ca60  addiu       $a1, $a1, -0x35A0
    ctx->pc = 0x324aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953568));
    // 0x324aac: 0xc123944  jal         func_48E510
    ctx->pc = 0x324AACu;
    SET_GPR_U32(ctx, 31, 0x324AB4u);
    ctx->pc = 0x324AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324AACu;
            // 0x324ab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324AB4u; }
        if (ctx->pc != 0x324AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324AB4u; }
        if (ctx->pc != 0x324AB4u) { return; }
    }
    ctx->pc = 0x324AB4u;
label_324ab4:
    // 0x324ab4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x324ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x324ab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324abc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x324abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ac0: 0xc123654  jal         func_48D950
    ctx->pc = 0x324AC0u;
    SET_GPR_U32(ctx, 31, 0x324AC8u);
    ctx->pc = 0x324AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324AC0u;
            // 0x324ac4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324AC8u; }
        if (ctx->pc != 0x324AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324AC8u; }
        if (ctx->pc != 0x324AC8u) { return; }
    }
    ctx->pc = 0x324AC8u;
label_324ac8:
    // 0x324ac8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x324ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x324acc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x324accu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x324ad0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x324ad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324ad4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x324ad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324ad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x324ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324adc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x324adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x324AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324AE0u;
            // 0x324ae4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x324AE8u;
    // 0x324ae8: 0x0  nop
    ctx->pc = 0x324ae8u;
    // NOP
    // 0x324aec: 0x0  nop
    ctx->pc = 0x324aecu;
    // NOP
}
