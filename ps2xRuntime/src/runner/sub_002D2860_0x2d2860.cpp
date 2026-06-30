#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D2860
// Address: 0x2d2860 - 0x2d2a10
void sub_002D2860_0x2d2860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2860_0x2d2860");
#endif

    switch (ctx->pc) {
        case 0x2d28b0u: goto label_2d28b0;
        case 0x2d28b8u: goto label_2d28b8;
        case 0x2d28d0u: goto label_2d28d0;
        case 0x2d295cu: goto label_2d295c;
        case 0x2d29bcu: goto label_2d29bc;
        case 0x2d29ecu: goto label_2d29ec;
        default: break;
    }

    ctx->pc = 0x2d2860u;

    // 0x2d2860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d2864: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d2864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d2868: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d2868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d286c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d286cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2870: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2874: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d2874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2878: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d2878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d287c: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x2d287cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2d2880: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x2D2880u;
    {
        const bool branch_taken_0x2d2880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2880u;
            // 0x2d2884: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2880) {
            ctx->pc = 0x2D29F0u;
            goto label_2d29f0;
        }
    }
    ctx->pc = 0x2D2888u;
    // 0x2d2888: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2d2888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2d288c: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x2d288cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x2d2890: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2890u;
    {
        const bool branch_taken_0x2d2890 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2890) {
            ctx->pc = 0x2D28B8u;
            goto label_2d28b8;
        }
    }
    ctx->pc = 0x2D2898u;
    // 0x2d2898: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2d2898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2d289c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2d289cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2d28a0: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2d28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2d28a4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2d28a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d28a8: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2D28A8u;
    SET_GPR_U32(ctx, 31, 0x2D28B0u);
    ctx->pc = 0x2D28ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D28A8u;
            // 0x2d28ac: 0x24a517b0  addiu       $a1, $a1, 0x17B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D28B0u; }
        if (ctx->pc != 0x2D28B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D28B0u; }
        if (ctx->pc != 0x2D28B0u) { return; }
    }
    ctx->pc = 0x2D28B0u;
label_2d28b0:
    // 0x2d28b0: 0xc04981a  jal         func_126068
    ctx->pc = 0x2D28B0u;
    SET_GPR_U32(ctx, 31, 0x2D28B8u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D28B8u; }
        if (ctx->pc != 0x2D28B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D28B8u; }
        if (ctx->pc != 0x2D28B8u) { return; }
    }
    ctx->pc = 0x2D28B8u;
label_2d28b8:
    // 0x2d28b8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2d28b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2d28bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d28bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d28c0: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x2d28c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x2d28c4: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x2d28c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2d28c8: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x2D28C8u;
    SET_GPR_U32(ctx, 31, 0x2D28D0u);
    ctx->pc = 0x2D28CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D28C8u;
            // 0x2d28cc: 0x112880  sll         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D28D0u; }
        if (ctx->pc != 0x2D28D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D28D0u; }
        if (ctx->pc != 0x2D28D0u) { return; }
    }
    ctx->pc = 0x2D28D0u;
label_2d28d0:
    // 0x2d28d0: 0x12000046  beqz        $s0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2D28D0u;
    {
        const bool branch_taken_0x2d28d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D28D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D28D0u;
            // 0x2d28d4: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d28d0) {
            ctx->pc = 0x2D29ECu;
            goto label_2d29ec;
        }
    }
    ctx->pc = 0x2D28D8u;
    // 0x2d28d8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2d28d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d28dc: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x2d28dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2d28e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d28e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d28e4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2d28e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2d28e8: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x2d28e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d28ec: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D28ECu;
    {
        const bool branch_taken_0x2d28ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D28F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D28ECu;
            // 0x2d28f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d28ec) {
            ctx->pc = 0x2D29D8u;
            goto label_2d29d8;
        }
    }
    ctx->pc = 0x2D28F4u;
    // 0x2d28f4: 0x705023  subu        $t2, $v1, $s0
    ctx->pc = 0x2d28f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d28f8: 0x2468ffe0  addiu       $t0, $v1, -0x20
    ctx->pc = 0x2d28f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x2d28fc: 0x25490003  addiu       $t1, $t2, 0x3
    ctx->pc = 0x2d28fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x2d2900: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2900u;
    {
        const bool branch_taken_0x2d2900 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x2D2904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2900u;
            // 0x2d2904: 0x93083  sra         $a2, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2900) {
            ctx->pc = 0x2D2910u;
            goto label_2d2910;
        }
    }
    ctx->pc = 0x2D2908u;
    // 0x2d2908: 0x25260003  addiu       $a2, $t1, 0x3
    ctx->pc = 0x2d2908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x2d290c: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x2d290cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_2d2910:
    // 0x2d2910: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x2d2910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2d2914: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x2D2914u;
    {
        const bool branch_taken_0x2d2914 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2914) {
            ctx->pc = 0x2D29B0u;
            goto label_2d29b0;
        }
    }
    ctx->pc = 0x2D291Cu;
    // 0x2d291c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x2d291cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2d2920: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2D2920u;
    {
        const bool branch_taken_0x2d2920 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2920u;
            // 0x2d2924: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2920) {
            ctx->pc = 0x2D2954u;
            goto label_2d2954;
        }
    }
    ctx->pc = 0x2D2928u;
    // 0x2d2928: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2d2928u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2d292c: 0x1473024  and         $a2, $t2, $a3
    ctx->pc = 0x2d292cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x2d2930: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2930u;
    {
        const bool branch_taken_0x2d2930 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2930u;
            // 0x2d2934: 0x640b0001  daddiu      $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2930) {
            ctx->pc = 0x2D2948u;
            goto label_2d2948;
        }
    }
    ctx->pc = 0x2D2938u;
    // 0x2d2938: 0x1273024  and         $a2, $t1, $a3
    ctx->pc = 0x2d2938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x2d293c: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D293Cu;
    {
        const bool branch_taken_0x2d293c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d293c) {
            ctx->pc = 0x2D2948u;
            goto label_2d2948;
        }
    }
    ctx->pc = 0x2D2944u;
    // 0x2d2944: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2d2944u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2948:
    // 0x2d2948: 0x11600002  beqz        $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2948u;
    {
        const bool branch_taken_0x2d2948 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2948) {
            ctx->pc = 0x2D2954u;
            goto label_2d2954;
        }
    }
    ctx->pc = 0x2D2950u;
    // 0x2d2950: 0x640c0001  daddiu      $t4, $zero, 0x1
    ctx->pc = 0x2d2950u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2d2954:
    // 0x2d2954: 0x11800016  beqz        $t4, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D2954u;
    {
        const bool branch_taken_0x2d2954 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2954) {
            ctx->pc = 0x2D29B0u;
            goto label_2d29b0;
        }
    }
    ctx->pc = 0x2D295Cu;
label_2d295c:
    // 0x2d295c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d295cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d2960: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2d2960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2d2964: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2d2964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d2968: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2d2968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2d296c: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x2d296cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d2970: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2d2970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2d2974: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x2d2974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2d2978: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2d2978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2d297c: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x2d297cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d2980: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2d2980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2d2984: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x2d2984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2d2988: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x2d2988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x2d298c: 0x8ca60018  lw          $a2, 0x18($a1)
    ctx->pc = 0x2d298cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2d2990: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x2d2990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x2d2994: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x2d2994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2d2998: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x2d2998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x2d299c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2d299cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2d29a0: 0xa8302b  sltu        $a2, $a1, $t0
    ctx->pc = 0x2d29a0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2d29a4: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2D29A4u;
    {
        const bool branch_taken_0x2d29a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D29A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D29A4u;
            // 0x2d29a8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d29a4) {
            ctx->pc = 0x2D295Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d295c;
        }
    }
    ctx->pc = 0x2D29ACu;
    // 0x2d29ac: 0x0  nop
    ctx->pc = 0x2d29acu;
    // NOP
label_2d29b0:
    // 0x2d29b0: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x2d29b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d29b4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D29B4u;
    {
        const bool branch_taken_0x2d29b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d29b4) {
            ctx->pc = 0x2D29D8u;
            goto label_2d29d8;
        }
    }
    ctx->pc = 0x2D29BCu;
label_2d29bc:
    // 0x2d29bc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d29bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d29c0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2d29c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2d29c4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d29c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2d29c8: 0xa3302b  sltu        $a2, $a1, $v1
    ctx->pc = 0x2d29c8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d29cc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2d29ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2d29d0: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D29D0u;
    {
        const bool branch_taken_0x2d29d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d29d0) {
            ctx->pc = 0x2D29BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d29bc;
        }
    }
    ctx->pc = 0x2D29D8u;
label_2d29d8:
    // 0x2d29d8: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D29D8u;
    {
        const bool branch_taken_0x2d29d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d29d8) {
            ctx->pc = 0x2D29DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D29D8u;
            // 0x2d29dc: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D29F0u;
            goto label_2d29f0;
        }
    }
    ctx->pc = 0x2D29E0u;
    // 0x2d29e0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d29e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d29e4: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2D29E4u;
    SET_GPR_U32(ctx, 31, 0x2D29ECu);
    ctx->pc = 0x2D29E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D29E4u;
            // 0x2d29e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D29ECu; }
        if (ctx->pc != 0x2D29ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D29ECu; }
        if (ctx->pc != 0x2D29ECu) { return; }
    }
    ctx->pc = 0x2D29ECu;
label_2d29ec:
    // 0x2d29ec: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x2d29ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
label_2d29f0:
    // 0x2d29f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d29f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d29f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d29f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d29f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d29f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d29fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d29fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2a00: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A00u;
            // 0x2d2a04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2A08u;
    // 0x2d2a08: 0x0  nop
    ctx->pc = 0x2d2a08u;
    // NOP
    // 0x2d2a0c: 0x0  nop
    ctx->pc = 0x2d2a0cu;
    // NOP
}
