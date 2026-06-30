#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E28B0
// Address: 0x1e28b0 - 0x1e2970
void sub_001E28B0_0x1e28b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E28B0_0x1e28b0");
#endif

    switch (ctx->pc) {
        case 0x1e28b0u: goto label_1e28b0;
        case 0x1e28b4u: goto label_1e28b4;
        case 0x1e28b8u: goto label_1e28b8;
        case 0x1e28bcu: goto label_1e28bc;
        case 0x1e28c0u: goto label_1e28c0;
        case 0x1e28c4u: goto label_1e28c4;
        case 0x1e28c8u: goto label_1e28c8;
        case 0x1e28ccu: goto label_1e28cc;
        case 0x1e28d0u: goto label_1e28d0;
        case 0x1e28d4u: goto label_1e28d4;
        case 0x1e28d8u: goto label_1e28d8;
        case 0x1e28dcu: goto label_1e28dc;
        case 0x1e28e0u: goto label_1e28e0;
        case 0x1e28e4u: goto label_1e28e4;
        case 0x1e28e8u: goto label_1e28e8;
        case 0x1e28ecu: goto label_1e28ec;
        case 0x1e28f0u: goto label_1e28f0;
        case 0x1e28f4u: goto label_1e28f4;
        case 0x1e28f8u: goto label_1e28f8;
        case 0x1e28fcu: goto label_1e28fc;
        case 0x1e2900u: goto label_1e2900;
        case 0x1e2904u: goto label_1e2904;
        case 0x1e2908u: goto label_1e2908;
        case 0x1e290cu: goto label_1e290c;
        case 0x1e2910u: goto label_1e2910;
        case 0x1e2914u: goto label_1e2914;
        case 0x1e2918u: goto label_1e2918;
        case 0x1e291cu: goto label_1e291c;
        case 0x1e2920u: goto label_1e2920;
        case 0x1e2924u: goto label_1e2924;
        case 0x1e2928u: goto label_1e2928;
        case 0x1e292cu: goto label_1e292c;
        case 0x1e2930u: goto label_1e2930;
        case 0x1e2934u: goto label_1e2934;
        case 0x1e2938u: goto label_1e2938;
        case 0x1e293cu: goto label_1e293c;
        case 0x1e2940u: goto label_1e2940;
        case 0x1e2944u: goto label_1e2944;
        case 0x1e2948u: goto label_1e2948;
        case 0x1e294cu: goto label_1e294c;
        case 0x1e2950u: goto label_1e2950;
        case 0x1e2954u: goto label_1e2954;
        case 0x1e2958u: goto label_1e2958;
        case 0x1e295cu: goto label_1e295c;
        case 0x1e2960u: goto label_1e2960;
        case 0x1e2964u: goto label_1e2964;
        case 0x1e2968u: goto label_1e2968;
        case 0x1e296cu: goto label_1e296c;
        default: break;
    }

    ctx->pc = 0x1e28b0u;

label_1e28b0:
    // 0x1e28b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e28b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e28b4:
    // 0x1e28b4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x1e28b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_1e28b8:
    // 0x1e28b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e28b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e28bc:
    // 0x1e28bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e28bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e28c0:
    // 0x1e28c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e28c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e28c4:
    // 0x1e28c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e28c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e28c8:
    // 0x1e28c8: 0x8c44b5a0  lw          $a0, -0x4A60($v0)
    ctx->pc = 0x1e28c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948256)));
label_1e28cc:
    // 0x1e28cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e28ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e28d0:
    // 0x1e28d0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e28d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e28d4:
    // 0x1e28d4: 0x320f809  jalr        $t9
label_1e28d8:
    if (ctx->pc == 0x1E28D8u) {
        ctx->pc = 0x1E28D8u;
            // 0x1e28d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E28DCu;
        goto label_1e28dc;
    }
    ctx->pc = 0x1E28D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E28DCu);
        ctx->pc = 0x1E28D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E28D4u;
            // 0x1e28d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E28DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E28DCu; }
            if (ctx->pc != 0x1E28DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1E28DCu;
label_1e28dc:
    // 0x1e28dc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e28dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e28e0:
    // 0x1e28e0: 0x8c42da00  lw          $v0, -0x2600($v0)
    ctx->pc = 0x1e28e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957568)));
label_1e28e4:
    // 0x1e28e4: 0x40f809  jalr        $v0
label_1e28e8:
    if (ctx->pc == 0x1E28E8u) {
        ctx->pc = 0x1E28E8u;
            // 0x1e28e8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1E28ECu;
        goto label_1e28ec;
    }
    ctx->pc = 0x1E28E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E28ECu);
        ctx->pc = 0x1E28E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E28E4u;
            // 0x1e28e8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E28ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E28ECu; }
            if (ctx->pc != 0x1E28ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1E28ECu;
label_1e28ec:
    // 0x1e28ec: 0xc149d78  jal         func_5275E0
label_1e28f0:
    if (ctx->pc == 0x1E28F0u) {
        ctx->pc = 0x1E28F4u;
        goto label_1e28f4;
    }
    ctx->pc = 0x1E28ECu;
    SET_GPR_U32(ctx, 31, 0x1E28F4u);
    ctx->pc = 0x5275E0u;
    if (runtime->hasFunction(0x5275E0u)) {
        auto targetFn = runtime->lookupFunction(0x5275E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E28F4u; }
        if (ctx->pc != 0x1E28F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005275E0_0x5275e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E28F4u; }
        if (ctx->pc != 0x1E28F4u) { return; }
    }
    ctx->pc = 0x1E28F4u;
label_1e28f4:
    // 0x1e28f4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1e28f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e28f8:
    // 0x1e28f8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1e28fc:
    if (ctx->pc == 0x1E28FCu) {
        ctx->pc = 0x1E28FCu;
            // 0x1e28fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1E2900u;
        goto label_1e2900;
    }
    ctx->pc = 0x1E28F8u;
    {
        const bool branch_taken_0x1e28f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e28f8) {
            ctx->pc = 0x1E28FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E28F8u;
            // 0x1e28fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2914u;
            goto label_1e2914;
        }
    }
    ctx->pc = 0x1E2900u;
label_1e2900:
    // 0x1e2900: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e2900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e2904:
    // 0x1e2904: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e2904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e2908:
    // 0x1e2908: 0x320f809  jalr        $t9
label_1e290c:
    if (ctx->pc == 0x1E290Cu) {
        ctx->pc = 0x1E290Cu;
            // 0x1e290c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E2910u;
        goto label_1e2910;
    }
    ctx->pc = 0x1E2908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2910u);
        ctx->pc = 0x1E290Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2908u;
            // 0x1e290c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E2910u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E2910u; }
            if (ctx->pc != 0x1E2910u) { return; }
        }
        }
    }
    ctx->pc = 0x1E2910u;
label_1e2910:
    // 0x1e2910: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2914:
    // 0x1e2914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2918:
    // 0x1e2918: 0x3e00008  jr          $ra
label_1e291c:
    if (ctx->pc == 0x1E291Cu) {
        ctx->pc = 0x1E291Cu;
            // 0x1e291c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E2920u;
        goto label_1e2920;
    }
    ctx->pc = 0x1E2918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E291Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2918u;
            // 0x1e291c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2920u;
label_1e2920:
    // 0x1e2920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e2924:
    // 0x1e2924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e2928:
    // 0x1e2928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e292c:
    // 0x1e292c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e292cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2930:
    // 0x1e2930: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_1e2934:
    if (ctx->pc == 0x1E2934u) {
        ctx->pc = 0x1E2934u;
            // 0x1e2934: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E2938u;
        goto label_1e2938;
    }
    ctx->pc = 0x1E2930u;
    {
        const bool branch_taken_0x1e2930 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2930) {
            ctx->pc = 0x1E2934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2930u;
            // 0x1e2934: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E295Cu;
            goto label_1e295c;
        }
    }
    ctx->pc = 0x1E2938u;
label_1e2938:
    // 0x1e2938: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e2938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e293c:
    // 0x1e293c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e293cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e2940:
    // 0x1e2940: 0x2463d480  addiu       $v1, $v1, -0x2B80
    ctx->pc = 0x1e2940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956160));
label_1e2944:
    // 0x1e2944: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e2944u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e2948:
    // 0x1e2948: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1e294c:
    if (ctx->pc == 0x1E294Cu) {
        ctx->pc = 0x1E294Cu;
            // 0x1e294c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1E2950u;
        goto label_1e2950;
    }
    ctx->pc = 0x1E2948u;
    {
        const bool branch_taken_0x1e2948 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E294Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2948u;
            // 0x1e294c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2948) {
            ctx->pc = 0x1E2958u;
            goto label_1e2958;
        }
    }
    ctx->pc = 0x1E2950u;
label_1e2950:
    // 0x1e2950: 0xc0400a8  jal         func_1002A0
label_1e2954:
    if (ctx->pc == 0x1E2954u) {
        ctx->pc = 0x1E2958u;
        goto label_1e2958;
    }
    ctx->pc = 0x1E2950u;
    SET_GPR_U32(ctx, 31, 0x1E2958u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2958u; }
        if (ctx->pc != 0x1E2958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2958u; }
        if (ctx->pc != 0x1E2958u) { return; }
    }
    ctx->pc = 0x1E2958u;
label_1e2958:
    // 0x1e2958: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e2958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e295c:
    // 0x1e295c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e295cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2960:
    // 0x1e2960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2964:
    // 0x1e2964: 0x3e00008  jr          $ra
label_1e2968:
    if (ctx->pc == 0x1E2968u) {
        ctx->pc = 0x1E2968u;
            // 0x1e2968: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E296Cu;
        goto label_1e296c;
    }
    ctx->pc = 0x1E2964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2964u;
            // 0x1e2968: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E296Cu;
label_1e296c:
    // 0x1e296c: 0x0  nop
    ctx->pc = 0x1e296cu;
    // NOP
}
