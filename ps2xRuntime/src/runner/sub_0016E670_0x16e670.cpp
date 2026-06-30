#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016E670
// Address: 0x16e670 - 0x16e810
void sub_0016E670_0x16e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E670_0x16e670");
#endif

    switch (ctx->pc) {
        case 0x16e670u: goto label_16e670;
        case 0x16e674u: goto label_16e674;
        case 0x16e678u: goto label_16e678;
        case 0x16e67cu: goto label_16e67c;
        case 0x16e680u: goto label_16e680;
        case 0x16e684u: goto label_16e684;
        case 0x16e688u: goto label_16e688;
        case 0x16e68cu: goto label_16e68c;
        case 0x16e690u: goto label_16e690;
        case 0x16e694u: goto label_16e694;
        case 0x16e698u: goto label_16e698;
        case 0x16e69cu: goto label_16e69c;
        case 0x16e6a0u: goto label_16e6a0;
        case 0x16e6a4u: goto label_16e6a4;
        case 0x16e6a8u: goto label_16e6a8;
        case 0x16e6acu: goto label_16e6ac;
        case 0x16e6b0u: goto label_16e6b0;
        case 0x16e6b4u: goto label_16e6b4;
        case 0x16e6b8u: goto label_16e6b8;
        case 0x16e6bcu: goto label_16e6bc;
        case 0x16e6c0u: goto label_16e6c0;
        case 0x16e6c4u: goto label_16e6c4;
        case 0x16e6c8u: goto label_16e6c8;
        case 0x16e6ccu: goto label_16e6cc;
        case 0x16e6d0u: goto label_16e6d0;
        case 0x16e6d4u: goto label_16e6d4;
        case 0x16e6d8u: goto label_16e6d8;
        case 0x16e6dcu: goto label_16e6dc;
        case 0x16e6e0u: goto label_16e6e0;
        case 0x16e6e4u: goto label_16e6e4;
        case 0x16e6e8u: goto label_16e6e8;
        case 0x16e6ecu: goto label_16e6ec;
        case 0x16e6f0u: goto label_16e6f0;
        case 0x16e6f4u: goto label_16e6f4;
        case 0x16e6f8u: goto label_16e6f8;
        case 0x16e6fcu: goto label_16e6fc;
        case 0x16e700u: goto label_16e700;
        case 0x16e704u: goto label_16e704;
        case 0x16e708u: goto label_16e708;
        case 0x16e70cu: goto label_16e70c;
        case 0x16e710u: goto label_16e710;
        case 0x16e714u: goto label_16e714;
        case 0x16e718u: goto label_16e718;
        case 0x16e71cu: goto label_16e71c;
        case 0x16e720u: goto label_16e720;
        case 0x16e724u: goto label_16e724;
        case 0x16e728u: goto label_16e728;
        case 0x16e72cu: goto label_16e72c;
        case 0x16e730u: goto label_16e730;
        case 0x16e734u: goto label_16e734;
        case 0x16e738u: goto label_16e738;
        case 0x16e73cu: goto label_16e73c;
        case 0x16e740u: goto label_16e740;
        case 0x16e744u: goto label_16e744;
        case 0x16e748u: goto label_16e748;
        case 0x16e74cu: goto label_16e74c;
        case 0x16e750u: goto label_16e750;
        case 0x16e754u: goto label_16e754;
        case 0x16e758u: goto label_16e758;
        case 0x16e75cu: goto label_16e75c;
        case 0x16e760u: goto label_16e760;
        case 0x16e764u: goto label_16e764;
        case 0x16e768u: goto label_16e768;
        case 0x16e76cu: goto label_16e76c;
        case 0x16e770u: goto label_16e770;
        case 0x16e774u: goto label_16e774;
        case 0x16e778u: goto label_16e778;
        case 0x16e77cu: goto label_16e77c;
        case 0x16e780u: goto label_16e780;
        case 0x16e784u: goto label_16e784;
        case 0x16e788u: goto label_16e788;
        case 0x16e78cu: goto label_16e78c;
        case 0x16e790u: goto label_16e790;
        case 0x16e794u: goto label_16e794;
        case 0x16e798u: goto label_16e798;
        case 0x16e79cu: goto label_16e79c;
        case 0x16e7a0u: goto label_16e7a0;
        case 0x16e7a4u: goto label_16e7a4;
        case 0x16e7a8u: goto label_16e7a8;
        case 0x16e7acu: goto label_16e7ac;
        case 0x16e7b0u: goto label_16e7b0;
        case 0x16e7b4u: goto label_16e7b4;
        case 0x16e7b8u: goto label_16e7b8;
        case 0x16e7bcu: goto label_16e7bc;
        case 0x16e7c0u: goto label_16e7c0;
        case 0x16e7c4u: goto label_16e7c4;
        case 0x16e7c8u: goto label_16e7c8;
        case 0x16e7ccu: goto label_16e7cc;
        case 0x16e7d0u: goto label_16e7d0;
        case 0x16e7d4u: goto label_16e7d4;
        case 0x16e7d8u: goto label_16e7d8;
        case 0x16e7dcu: goto label_16e7dc;
        case 0x16e7e0u: goto label_16e7e0;
        case 0x16e7e4u: goto label_16e7e4;
        case 0x16e7e8u: goto label_16e7e8;
        case 0x16e7ecu: goto label_16e7ec;
        case 0x16e7f0u: goto label_16e7f0;
        case 0x16e7f4u: goto label_16e7f4;
        case 0x16e7f8u: goto label_16e7f8;
        case 0x16e7fcu: goto label_16e7fc;
        case 0x16e800u: goto label_16e800;
        case 0x16e804u: goto label_16e804;
        case 0x16e808u: goto label_16e808;
        case 0x16e80cu: goto label_16e80c;
        default: break;
    }

    ctx->pc = 0x16e670u;

label_16e670:
    // 0x16e670: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16e670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16e674:
    // 0x16e674: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x16e674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_16e678:
    // 0x16e678: 0x8c4c2370  lw          $t4, 0x2370($v0)
    ctx->pc = 0x16e678u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9072)));
label_16e67c:
    // 0x16e67c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x16e67cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e680:
    // 0x16e680: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x16e680u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16e684:
    // 0x16e684: 0xffa500b8  sd          $a1, 0xB8($sp)
    ctx->pc = 0x16e684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 5));
label_16e688:
    // 0x16e688: 0xffa600c0  sd          $a2, 0xC0($sp)
    ctx->pc = 0x16e688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 6));
label_16e68c:
    // 0x16e68c: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x16e68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_16e690:
    // 0x16e690: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x16e690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_16e694:
    // 0x16e694: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16e694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16e698:
    // 0x16e698: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16e698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16e69c:
    // 0x16e69c: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x16e69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
label_16e6a0:
    // 0x16e6a0: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x16e6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
label_16e6a4:
    // 0x16e6a4: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x16e6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
label_16e6a8:
    // 0x16e6a8: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x16e6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
label_16e6ac:
    // 0x16e6ac: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x16e6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
label_16e6b0:
    // 0x16e6b0: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x16e6b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_16e6b4:
    // 0x16e6b4: 0xe7ad009c  swc1        $f13, 0x9C($sp)
    ctx->pc = 0x16e6b4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_16e6b8:
    // 0x16e6b8: 0xe7ae00a0  swc1        $f14, 0xA0($sp)
    ctx->pc = 0x16e6b8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_16e6bc:
    // 0x16e6bc: 0xe7af00a4  swc1        $f15, 0xA4($sp)
    ctx->pc = 0x16e6bcu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_16e6c0:
    // 0x16e6c0: 0xe7b000a8  swc1        $f16, 0xA8($sp)
    ctx->pc = 0x16e6c0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_16e6c4:
    // 0x16e6c4: 0xe7b100ac  swc1        $f17, 0xAC($sp)
    ctx->pc = 0x16e6c4u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_16e6c8:
    // 0x16e6c8: 0xe7b200b0  swc1        $f18, 0xB0($sp)
    ctx->pc = 0x16e6c8u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_16e6cc:
    // 0x16e6cc: 0x118d0005  beq         $t4, $t5, . + 4 + (0x5 << 2)
label_16e6d0:
    if (ctx->pc == 0x16E6D0u) {
        ctx->pc = 0x16E6D0u;
            // 0x16e6d0: 0xe7b300b4  swc1        $f19, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x16E6D4u;
        goto label_16e6d4;
    }
    ctx->pc = 0x16E6CCu;
    {
        const bool branch_taken_0x16e6cc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 13));
        ctx->pc = 0x16E6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E6CCu;
            // 0x16e6d0: 0xe7b300b4  swc1        $f19, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e6cc) {
            ctx->pc = 0x16E6E4u;
            goto label_16e6e4;
        }
    }
    ctx->pc = 0x16E6D4u;
label_16e6d4:
    // 0x16e6d4: 0xc04c136  jal         func_1304D8
label_16e6d8:
    if (ctx->pc == 0x16E6D8u) {
        ctx->pc = 0x16E6DCu;
        goto label_16e6dc;
    }
    ctx->pc = 0x16E6D4u;
    SET_GPR_U32(ctx, 31, 0x16E6DCu);
    ctx->pc = 0x1304D8u;
    if (runtime->hasFunction(0x1304D8u)) {
        auto targetFn = runtime->lookupFunction(0x1304D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E6DCu; }
        if (ctx->pc != 0x16E6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001304D8_0x1304d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E6DCu; }
        if (ctx->pc != 0x16E6DCu) { return; }
    }
    ctx->pc = 0x16E6DCu;
label_16e6dc:
    // 0x16e6dc: 0xc043c12  jal         func_10F048
label_16e6e0:
    if (ctx->pc == 0x16E6E0u) {
        ctx->pc = 0x16E6E0u;
            // 0x16e6e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E6E4u;
        goto label_16e6e4;
    }
    ctx->pc = 0x16E6DCu;
    SET_GPR_U32(ctx, 31, 0x16E6E4u);
    ctx->pc = 0x16E6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E6DCu;
            // 0x16e6e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E6E4u; }
        if (ctx->pc != 0x16E6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E6E4u; }
        if (ctx->pc != 0x16E6E4u) { return; }
    }
    ctx->pc = 0x16E6E4u;
label_16e6e4:
    // 0x16e6e4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x16e6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_16e6e8:
    // 0x16e6e8: 0x3e00008  jr          $ra
label_16e6ec:
    if (ctx->pc == 0x16E6ECu) {
        ctx->pc = 0x16E6ECu;
            // 0x16e6ec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x16E6F0u;
        goto label_16e6f0;
    }
    ctx->pc = 0x16E6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E6E8u;
            // 0x16e6ec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E6F0u;
label_16e6f0:
    // 0x16e6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16e6f4:
    // 0x16e6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16e6f8:
    // 0x16e6f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e6fc:
    // 0x16e6fc: 0x8060a06  j           func_182818
label_16e700:
    if (ctx->pc == 0x16E700u) {
        ctx->pc = 0x16E700u;
            // 0x16e700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16E704u;
        goto label_16e704;
    }
    ctx->pc = 0x16E6FCu;
    ctx->pc = 0x16E700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E6FCu;
            // 0x16e700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182818u;
    {
        auto targetFn = runtime->lookupFunction(0x182818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E704u;
label_16e704:
    // 0x16e704: 0x0  nop
    ctx->pc = 0x16e704u;
    // NOP
label_16e708:
    // 0x16e708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16e70c:
    // 0x16e70c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16e710:
    // 0x16e710: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x16e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16e714:
    // 0x16e714: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x16e714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_16e718:
    // 0x16e718: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16e718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e71c:
    // 0x16e71c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_16e720:
    // 0x16e720: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x16e720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16e724:
    // 0x16e724: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x16e724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e728:
    // 0x16e728: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x16e728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_16e72c:
    // 0x16e72c: 0x40f809  jalr        $v0
label_16e730:
    if (ctx->pc == 0x16E730u) {
        ctx->pc = 0x16E730u;
            // 0x16e730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16E734u;
        goto label_16e734;
    }
    ctx->pc = 0x16E72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E734u);
        ctx->pc = 0x16E730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E72Cu;
            // 0x16e730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E734u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E734u; }
            if (ctx->pc != 0x16E734u) { return; }
        }
        }
    }
    ctx->pc = 0x16E734u;
label_16e734:
    // 0x16e734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e738:
    // 0x16e738: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x16e738u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_16e73c:
    // 0x16e73c: 0x3e00008  jr          $ra
label_16e740:
    if (ctx->pc == 0x16E740u) {
        ctx->pc = 0x16E740u;
            // 0x16e740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16E744u;
        goto label_16e744;
    }
    ctx->pc = 0x16E73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E73Cu;
            // 0x16e740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E744u;
label_16e744:
    // 0x16e744: 0x0  nop
    ctx->pc = 0x16e744u;
    // NOP
label_16e748:
    // 0x16e748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16e74c:
    // 0x16e74c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16e750:
    // 0x16e750: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x16e750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16e754:
    // 0x16e754: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x16e754u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_16e758:
    // 0x16e758: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16e758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e75c:
    // 0x16e75c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_16e760:
    // 0x16e760: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x16e760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16e764:
    // 0x16e764: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x16e764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e768:
    // 0x16e768: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x16e768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_16e76c:
    // 0x16e76c: 0x40f809  jalr        $v0
label_16e770:
    if (ctx->pc == 0x16E770u) {
        ctx->pc = 0x16E770u;
            // 0x16e770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E774u;
        goto label_16e774;
    }
    ctx->pc = 0x16E76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E774u);
        ctx->pc = 0x16E770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E76Cu;
            // 0x16e770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E774u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E774u; }
            if (ctx->pc != 0x16E774u) { return; }
        }
        }
    }
    ctx->pc = 0x16E774u;
label_16e774:
    // 0x16e774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e778:
    // 0x16e778: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x16e778u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_16e77c:
    // 0x16e77c: 0x3e00008  jr          $ra
label_16e780:
    if (ctx->pc == 0x16E780u) {
        ctx->pc = 0x16E780u;
            // 0x16e780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16E784u;
        goto label_16e784;
    }
    ctx->pc = 0x16E77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E77Cu;
            // 0x16e780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E784u;
label_16e784:
    // 0x16e784: 0x0  nop
    ctx->pc = 0x16e784u;
    // NOP
label_16e788:
    // 0x16e788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16e78c:
    // 0x16e78c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16e790:
    // 0x16e790: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x16e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16e794:
    // 0x16e794: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x16e794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_16e798:
    // 0x16e798: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16e798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e79c:
    // 0x16e79c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e7a0:
    // 0x16e7a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_16e7a4:
    // 0x16e7a4: 0xc061d9c  jal         func_187670
label_16e7a8:
    if (ctx->pc == 0x16E7A8u) {
        ctx->pc = 0x16E7A8u;
            // 0x16e7a8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x16E7ACu;
        goto label_16e7ac;
    }
    ctx->pc = 0x16E7A4u;
    SET_GPR_U32(ctx, 31, 0x16E7ACu);
    ctx->pc = 0x16E7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E7A4u;
            // 0x16e7a8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187670u;
    if (runtime->hasFunction(0x187670u)) {
        auto targetFn = runtime->lookupFunction(0x187670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E7ACu; }
        if (ctx->pc != 0x16E7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187670_0x187670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E7ACu; }
        if (ctx->pc != 0x16E7ACu) { return; }
    }
    ctx->pc = 0x16E7ACu;
label_16e7ac:
    // 0x16e7ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e7b0:
    // 0x16e7b0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x16e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_16e7b4:
    // 0x16e7b4: 0x3e00008  jr          $ra
label_16e7b8:
    if (ctx->pc == 0x16E7B8u) {
        ctx->pc = 0x16E7B8u;
            // 0x16e7b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16E7BCu;
        goto label_16e7bc;
    }
    ctx->pc = 0x16E7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E7B4u;
            // 0x16e7b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E7BCu;
label_16e7bc:
    // 0x16e7bc: 0x0  nop
    ctx->pc = 0x16e7bcu;
    // NOP
label_16e7c0:
    // 0x16e7c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16e7c4:
    // 0x16e7c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16e7c8:
    // 0x16e7c8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x16e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16e7cc:
    // 0x16e7cc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x16e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_16e7d0:
    // 0x16e7d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e7d4:
    // 0x16e7d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e7d8:
    // 0x16e7d8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_16e7dc:
    // 0x16e7dc: 0xc061d9c  jal         func_187670
label_16e7e0:
    if (ctx->pc == 0x16E7E0u) {
        ctx->pc = 0x16E7E0u;
            // 0x16e7e0: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x16E7E4u;
        goto label_16e7e4;
    }
    ctx->pc = 0x16E7DCu;
    SET_GPR_U32(ctx, 31, 0x16E7E4u);
    ctx->pc = 0x16E7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E7DCu;
            // 0x16e7e0: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187670u;
    if (runtime->hasFunction(0x187670u)) {
        auto targetFn = runtime->lookupFunction(0x187670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E7E4u; }
        if (ctx->pc != 0x16E7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187670_0x187670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E7E4u; }
        if (ctx->pc != 0x16E7E4u) { return; }
    }
    ctx->pc = 0x16E7E4u;
label_16e7e4:
    // 0x16e7e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e7e8:
    // 0x16e7e8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x16e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_16e7ec:
    // 0x16e7ec: 0x3e00008  jr          $ra
label_16e7f0:
    if (ctx->pc == 0x16E7F0u) {
        ctx->pc = 0x16E7F0u;
            // 0x16e7f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16E7F4u;
        goto label_16e7f4;
    }
    ctx->pc = 0x16E7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E7ECu;
            // 0x16e7f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E7F4u;
label_16e7f4:
    // 0x16e7f4: 0x0  nop
    ctx->pc = 0x16e7f4u;
    // NOP
label_16e7f8:
    // 0x16e7f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16e7fc:
    // 0x16e7fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16e800:
    // 0x16e800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e804:
    // 0x16e804: 0x8060ce2  j           func_183388
label_16e808:
    if (ctx->pc == 0x16E808u) {
        ctx->pc = 0x16E808u;
            // 0x16e808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16E80Cu;
        goto label_16e80c;
    }
    ctx->pc = 0x16E804u;
    ctx->pc = 0x16E808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E804u;
            // 0x16e808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183388u;
    {
        auto targetFn = runtime->lookupFunction(0x183388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E80Cu;
label_16e80c:
    // 0x16e80c: 0x0  nop
    ctx->pc = 0x16e80cu;
    // NOP
}
