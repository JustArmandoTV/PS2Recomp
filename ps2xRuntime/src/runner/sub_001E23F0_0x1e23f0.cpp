#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E23F0
// Address: 0x1e23f0 - 0x1e25d0
void sub_001E23F0_0x1e23f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E23F0_0x1e23f0");
#endif

    switch (ctx->pc) {
        case 0x1e2448u: goto label_1e2448;
        case 0x1e2450u: goto label_1e2450;
        case 0x1e2460u: goto label_1e2460;
        case 0x1e2484u: goto label_1e2484;
        case 0x1e248cu: goto label_1e248c;
        case 0x1e251cu: goto label_1e251c;
        case 0x1e257cu: goto label_1e257c;
        case 0x1e25a0u: goto label_1e25a0;
        default: break;
    }

    ctx->pc = 0x1e23f0u;

    // 0x1e23f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e23f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e23f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e23f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e23f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e23f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e23fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e23fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e2400: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e2400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e2404: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e2408: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e240c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e240cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2410: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e2410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e2414: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x1e2414u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e2418: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x1E2418u;
    {
        const bool branch_taken_0x1e2418 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E241Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2418u;
            // 0x1e241c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2418) {
            ctx->pc = 0x1E25A4u;
            goto label_1e25a4;
        }
    }
    ctx->pc = 0x1E2420u;
    // 0x1e2420: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1e2420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1e2424: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x1e2424u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e2428: 0x5420000a  bnel        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E2428u;
    {
        const bool branch_taken_0x1e2428 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2428) {
            ctx->pc = 0x1E242Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2428u;
            // 0x1e242c: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2454u;
            goto label_1e2454;
        }
    }
    ctx->pc = 0x1E2430u;
    // 0x1e2430: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1e2430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1e2434: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1e2434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1e2438: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x1e2438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x1e243c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1e243cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e2440: 0xc049e92  jal         func_127A48
    ctx->pc = 0x1E2440u;
    SET_GPR_U32(ctx, 31, 0x1E2448u);
    ctx->pc = 0x1E2444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2440u;
            // 0x1e2444: 0x24a5c830  addiu       $a1, $a1, -0x37D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2448u; }
        if (ctx->pc != 0x1E2448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2448u; }
        if (ctx->pc != 0x1E2448u) { return; }
    }
    ctx->pc = 0x1E2448u;
label_1e2448:
    // 0x1e2448: 0xc04981a  jal         func_126068
    ctx->pc = 0x1E2448u;
    SET_GPR_U32(ctx, 31, 0x1E2450u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2450u; }
        if (ctx->pc != 0x1E2450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2450u; }
        if (ctx->pc != 0x1E2450u) { return; }
    }
    ctx->pc = 0x1E2450u;
label_1e2450:
    // 0x1e2450: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x1e2450u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e2454:
    // 0x1e2454: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1e2454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e2458: 0xc040180  jal         func_100600
    ctx->pc = 0x1E2458u;
    SET_GPR_U32(ctx, 31, 0x1E2460u);
    ctx->pc = 0x1E245Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2458u;
            // 0x1e245c: 0x26540008  addiu       $s4, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2460u; }
        if (ctx->pc != 0x1E2460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2460u; }
        if (ctx->pc != 0x1E2460u) { return; }
    }
    ctx->pc = 0x1E2460u;
label_1e2460:
    // 0x1e2460: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e2460u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2464: 0x5660000a  bnel        $s3, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E2464u;
    {
        const bool branch_taken_0x1e2464 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2464) {
            ctx->pc = 0x1E2468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2464u;
            // 0x1e2468: 0xae930000  sw          $s3, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2490u;
            goto label_1e2490;
        }
    }
    ctx->pc = 0x1E246Cu;
    // 0x1e246c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1e246cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1e2470: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1e2470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1e2474: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x1e2474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x1e2478: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1e2478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e247c: 0xc049e92  jal         func_127A48
    ctx->pc = 0x1E247Cu;
    SET_GPR_U32(ctx, 31, 0x1E2484u);
    ctx->pc = 0x1E2480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E247Cu;
            // 0x1e2480: 0x24a5c870  addiu       $a1, $a1, -0x3790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2484u; }
        if (ctx->pc != 0x1E2484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2484u; }
        if (ctx->pc != 0x1E2484u) { return; }
    }
    ctx->pc = 0x1E2484u;
label_1e2484:
    // 0x1e2484: 0xc04981a  jal         func_126068
    ctx->pc = 0x1E2484u;
    SET_GPR_U32(ctx, 31, 0x1E248Cu);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E248Cu; }
        if (ctx->pc != 0x1E248Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E248Cu; }
        if (ctx->pc != 0x1E248Cu) { return; }
    }
    ctx->pc = 0x1E248Cu;
label_1e248c:
    // 0x1e248c: 0xae930000  sw          $s3, 0x0($s4)
    ctx->pc = 0x1e248cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
label_1e2490:
    // 0x1e2490: 0x52000044  beql        $s0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x1E2490u;
    {
        const bool branch_taken_0x1e2490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2490) {
            ctx->pc = 0x1E2494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2490u;
            // 0x1e2494: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E25A4u;
            goto label_1e25a4;
        }
    }
    ctx->pc = 0x1E2498u;
    // 0x1e2498: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1e2498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e249c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1e249cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e24a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e24a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1e24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e24a8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1e24a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e24ac: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x1E24ACu;
    {
        const bool branch_taken_0x1e24ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E24B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24ACu;
            // 0x1e24b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24ac) {
            ctx->pc = 0x1E2598u;
            goto label_1e2598;
        }
    }
    ctx->pc = 0x1E24B4u;
    // 0x1e24b4: 0x504823  subu        $t1, $v0, $s0
    ctx->pc = 0x1e24b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e24b8: 0x2447ffe0  addiu       $a3, $v0, -0x20
    ctx->pc = 0x1e24b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1e24bc: 0x25280003  addiu       $t0, $t1, 0x3
    ctx->pc = 0x1e24bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x1e24c0: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E24C0u;
    {
        const bool branch_taken_0x1e24c0 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1E24C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24C0u;
            // 0x1e24c4: 0x82883  sra         $a1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24c0) {
            ctx->pc = 0x1E24D0u;
            goto label_1e24d0;
        }
    }
    ctx->pc = 0x1E24C8u;
    // 0x1e24c8: 0x25050003  addiu       $a1, $t0, 0x3
    ctx->pc = 0x1e24c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x1e24cc: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x1e24ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_1e24d0:
    // 0x1e24d0: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x1e24d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e24d4: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E24D4u;
    {
        const bool branch_taken_0x1e24d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e24d4) {
            ctx->pc = 0x1E2570u;
            goto label_1e2570;
        }
    }
    ctx->pc = 0x1E24DCu;
    // 0x1e24dc: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1e24dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1e24e0: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1E24E0u;
    {
        const bool branch_taken_0x1e24e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E24E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24E0u;
            // 0x1e24e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24e0) {
            ctx->pc = 0x1E2514u;
            goto label_1e2514;
        }
    }
    ctx->pc = 0x1E24E8u;
    // 0x1e24e8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1e24e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1e24ec: 0x1262824  and         $a1, $t1, $a2
    ctx->pc = 0x1e24ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x1e24f0: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E24F0u;
    {
        const bool branch_taken_0x1e24f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E24F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24F0u;
            // 0x1e24f4: 0x640a0001  daddiu      $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24f0) {
            ctx->pc = 0x1E2508u;
            goto label_1e2508;
        }
    }
    ctx->pc = 0x1E24F8u;
    // 0x1e24f8: 0x1062824  and         $a1, $t0, $a2
    ctx->pc = 0x1e24f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x1e24fc: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E24FCu;
    {
        const bool branch_taken_0x1e24fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e24fc) {
            ctx->pc = 0x1E2508u;
            goto label_1e2508;
        }
    }
    ctx->pc = 0x1E2504u;
    // 0x1e2504: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e2504u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2508:
    // 0x1e2508: 0x11400002  beqz        $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2508u;
    {
        const bool branch_taken_0x1e2508 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2508) {
            ctx->pc = 0x1E2514u;
            goto label_1e2514;
        }
    }
    ctx->pc = 0x1E2510u;
    // 0x1e2510: 0x640b0001  daddiu      $t3, $zero, 0x1
    ctx->pc = 0x1e2510u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e2514:
    // 0x1e2514: 0x11600016  beqz        $t3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E2514u;
    {
        const bool branch_taken_0x1e2514 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2514) {
            ctx->pc = 0x1E2570u;
            goto label_1e2570;
        }
    }
    ctx->pc = 0x1E251Cu;
label_1e251c:
    // 0x1e251c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1e251cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e2520: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1e2520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1e2524: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1e2524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e2528: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1e2528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x1e252c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1e252cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e2530: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1e2530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1e2534: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1e2534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e2538: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x1e2538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x1e253c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1e253cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e2540: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x1e2540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x1e2544: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1e2544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1e2548: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x1e2548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x1e254c: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x1e254cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1e2550: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x1e2550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
    // 0x1e2554: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x1e2554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1e2558: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x1e2558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
    // 0x1e255c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1e255cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1e2560: 0x87282b  sltu        $a1, $a0, $a3
    ctx->pc = 0x1e2560u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1e2564: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1E2564u;
    {
        const bool branch_taken_0x1e2564 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2564u;
            // 0x1e2568: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2564) {
            ctx->pc = 0x1E251Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e251c;
        }
    }
    ctx->pc = 0x1E256Cu;
    // 0x1e256c: 0x0  nop
    ctx->pc = 0x1e256cu;
    // NOP
label_1e2570:
    // 0x1e2570: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x1e2570u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e2574: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2574u;
    {
        const bool branch_taken_0x1e2574 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2574) {
            ctx->pc = 0x1E2598u;
            goto label_1e2598;
        }
    }
    ctx->pc = 0x1E257Cu;
label_1e257c:
    // 0x1e257c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1e257cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e2580: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1e2580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1e2584: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1e2584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1e2588: 0x82282b  sltu        $a1, $a0, $v0
    ctx->pc = 0x1e2588u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e258c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1e258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e2590: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E2590u;
    {
        const bool branch_taken_0x1e2590 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2590) {
            ctx->pc = 0x1E257Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e257c;
        }
    }
    ctx->pc = 0x1E2598u;
label_1e2598:
    // 0x1e2598: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1E2598u;
    SET_GPR_U32(ctx, 31, 0x1E25A0u);
    ctx->pc = 0x1E259Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2598u;
            // 0x1e259c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E25A0u; }
        if (ctx->pc != 0x1E25A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E25A0u; }
        if (ctx->pc != 0x1E25A0u) { return; }
    }
    ctx->pc = 0x1E25A0u;
label_1e25a0:
    // 0x1e25a0: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1e25a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_1e25a4:
    // 0x1e25a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e25a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e25a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e25a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e25ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e25acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e25b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e25b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e25b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e25b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e25b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e25b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e25bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E25BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E25C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E25BCu;
            // 0x1e25c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E25C4u;
    // 0x1e25c4: 0x0  nop
    ctx->pc = 0x1e25c4u;
    // NOP
    // 0x1e25c8: 0x0  nop
    ctx->pc = 0x1e25c8u;
    // NOP
    // 0x1e25cc: 0x0  nop
    ctx->pc = 0x1e25ccu;
    // NOP
}
