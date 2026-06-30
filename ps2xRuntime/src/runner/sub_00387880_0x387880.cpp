#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00387880
// Address: 0x387880 - 0x387a40
void sub_00387880_0x387880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387880_0x387880");
#endif

    switch (ctx->pc) {
        case 0x387880u: goto label_387880;
        case 0x387884u: goto label_387884;
        case 0x387888u: goto label_387888;
        case 0x38788cu: goto label_38788c;
        case 0x387890u: goto label_387890;
        case 0x387894u: goto label_387894;
        case 0x387898u: goto label_387898;
        case 0x38789cu: goto label_38789c;
        case 0x3878a0u: goto label_3878a0;
        case 0x3878a4u: goto label_3878a4;
        case 0x3878a8u: goto label_3878a8;
        case 0x3878acu: goto label_3878ac;
        case 0x3878b0u: goto label_3878b0;
        case 0x3878b4u: goto label_3878b4;
        case 0x3878b8u: goto label_3878b8;
        case 0x3878bcu: goto label_3878bc;
        case 0x3878c0u: goto label_3878c0;
        case 0x3878c4u: goto label_3878c4;
        case 0x3878c8u: goto label_3878c8;
        case 0x3878ccu: goto label_3878cc;
        case 0x3878d0u: goto label_3878d0;
        case 0x3878d4u: goto label_3878d4;
        case 0x3878d8u: goto label_3878d8;
        case 0x3878dcu: goto label_3878dc;
        case 0x3878e0u: goto label_3878e0;
        case 0x3878e4u: goto label_3878e4;
        case 0x3878e8u: goto label_3878e8;
        case 0x3878ecu: goto label_3878ec;
        case 0x3878f0u: goto label_3878f0;
        case 0x3878f4u: goto label_3878f4;
        case 0x3878f8u: goto label_3878f8;
        case 0x3878fcu: goto label_3878fc;
        case 0x387900u: goto label_387900;
        case 0x387904u: goto label_387904;
        case 0x387908u: goto label_387908;
        case 0x38790cu: goto label_38790c;
        case 0x387910u: goto label_387910;
        case 0x387914u: goto label_387914;
        case 0x387918u: goto label_387918;
        case 0x38791cu: goto label_38791c;
        case 0x387920u: goto label_387920;
        case 0x387924u: goto label_387924;
        case 0x387928u: goto label_387928;
        case 0x38792cu: goto label_38792c;
        case 0x387930u: goto label_387930;
        case 0x387934u: goto label_387934;
        case 0x387938u: goto label_387938;
        case 0x38793cu: goto label_38793c;
        case 0x387940u: goto label_387940;
        case 0x387944u: goto label_387944;
        case 0x387948u: goto label_387948;
        case 0x38794cu: goto label_38794c;
        case 0x387950u: goto label_387950;
        case 0x387954u: goto label_387954;
        case 0x387958u: goto label_387958;
        case 0x38795cu: goto label_38795c;
        case 0x387960u: goto label_387960;
        case 0x387964u: goto label_387964;
        case 0x387968u: goto label_387968;
        case 0x38796cu: goto label_38796c;
        case 0x387970u: goto label_387970;
        case 0x387974u: goto label_387974;
        case 0x387978u: goto label_387978;
        case 0x38797cu: goto label_38797c;
        case 0x387980u: goto label_387980;
        case 0x387984u: goto label_387984;
        case 0x387988u: goto label_387988;
        case 0x38798cu: goto label_38798c;
        case 0x387990u: goto label_387990;
        case 0x387994u: goto label_387994;
        case 0x387998u: goto label_387998;
        case 0x38799cu: goto label_38799c;
        case 0x3879a0u: goto label_3879a0;
        case 0x3879a4u: goto label_3879a4;
        case 0x3879a8u: goto label_3879a8;
        case 0x3879acu: goto label_3879ac;
        case 0x3879b0u: goto label_3879b0;
        case 0x3879b4u: goto label_3879b4;
        case 0x3879b8u: goto label_3879b8;
        case 0x3879bcu: goto label_3879bc;
        case 0x3879c0u: goto label_3879c0;
        case 0x3879c4u: goto label_3879c4;
        case 0x3879c8u: goto label_3879c8;
        case 0x3879ccu: goto label_3879cc;
        case 0x3879d0u: goto label_3879d0;
        case 0x3879d4u: goto label_3879d4;
        case 0x3879d8u: goto label_3879d8;
        case 0x3879dcu: goto label_3879dc;
        case 0x3879e0u: goto label_3879e0;
        case 0x3879e4u: goto label_3879e4;
        case 0x3879e8u: goto label_3879e8;
        case 0x3879ecu: goto label_3879ec;
        case 0x3879f0u: goto label_3879f0;
        case 0x3879f4u: goto label_3879f4;
        case 0x3879f8u: goto label_3879f8;
        case 0x3879fcu: goto label_3879fc;
        case 0x387a00u: goto label_387a00;
        case 0x387a04u: goto label_387a04;
        case 0x387a08u: goto label_387a08;
        case 0x387a0cu: goto label_387a0c;
        case 0x387a10u: goto label_387a10;
        case 0x387a14u: goto label_387a14;
        case 0x387a18u: goto label_387a18;
        case 0x387a1cu: goto label_387a1c;
        case 0x387a20u: goto label_387a20;
        case 0x387a24u: goto label_387a24;
        case 0x387a28u: goto label_387a28;
        case 0x387a2cu: goto label_387a2c;
        case 0x387a30u: goto label_387a30;
        case 0x387a34u: goto label_387a34;
        case 0x387a38u: goto label_387a38;
        case 0x387a3cu: goto label_387a3c;
        default: break;
    }

    ctx->pc = 0x387880u;

label_387880:
    // 0x387880: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x387880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_387884:
    // 0x387884: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x387884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_387888:
    // 0x387888: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x387888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_38788c:
    // 0x38788c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x38788cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_387890:
    // 0x387890: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x387890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_387894:
    // 0x387894: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x387894u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_387898:
    // 0x387898: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x387898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_38789c:
    // 0x38789c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x38789cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3878a0:
    // 0x3878a0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3878a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3878a4:
    // 0x3878a4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3878a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3878a8:
    // 0x3878a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3878a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3878ac:
    // 0x3878ac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3878acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3878b0:
    // 0x3878b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3878b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3878b4:
    // 0x3878b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3878b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3878b8:
    // 0x3878b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3878b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3878bc:
    // 0x3878bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3878bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3878c0:
    // 0x3878c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3878c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3878c4:
    // 0x3878c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3878c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3878c8:
    // 0x3878c8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3878c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3878cc:
    // 0x3878cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3878ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3878d0:
    // 0x3878d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3878d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3878d4:
    // 0x3878d4: 0xc4545d70  lwc1        $f20, 0x5D70($v0)
    ctx->pc = 0x3878d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3878d8:
    // 0x3878d8: 0x26a400cc  addiu       $a0, $s5, 0xCC
    ctx->pc = 0x3878d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 204));
label_3878dc:
    // 0x3878dc: 0xafb600bc  sw          $s6, 0xBC($sp)
    ctx->pc = 0x3878dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 22));
label_3878e0:
    // 0x3878e0: 0xc0d639c  jal         func_358E70
label_3878e4:
    if (ctx->pc == 0x3878E4u) {
        ctx->pc = 0x3878E4u;
            // 0x3878e4: 0xafb200b0  sw          $s2, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 18));
        ctx->pc = 0x3878E8u;
        goto label_3878e8;
    }
    ctx->pc = 0x3878E0u;
    SET_GPR_U32(ctx, 31, 0x3878E8u);
    ctx->pc = 0x3878E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3878E0u;
            // 0x3878e4: 0xafb200b0  sw          $s2, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3878E8u; }
        if (ctx->pc != 0x3878E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3878E8u; }
        if (ctx->pc != 0x3878E8u) { return; }
    }
    ctx->pc = 0x3878E8u;
label_3878e8:
    // 0x3878e8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_3878ec:
    if (ctx->pc == 0x3878ECu) {
        ctx->pc = 0x3878F0u;
        goto label_3878f0;
    }
    ctx->pc = 0x3878E8u;
    {
        const bool branch_taken_0x3878e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3878e8) {
            ctx->pc = 0x3879D8u;
            goto label_3879d8;
        }
    }
    ctx->pc = 0x3878F0u;
label_3878f0:
    // 0x3878f0: 0xc0d1c14  jal         func_347050
label_3878f4:
    if (ctx->pc == 0x3878F4u) {
        ctx->pc = 0x3878F4u;
            // 0x3878f4: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->pc = 0x3878F8u;
        goto label_3878f8;
    }
    ctx->pc = 0x3878F0u;
    SET_GPR_U32(ctx, 31, 0x3878F8u);
    ctx->pc = 0x3878F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3878F0u;
            // 0x3878f4: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3878F8u; }
        if (ctx->pc != 0x3878F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3878F8u; }
        if (ctx->pc != 0x3878F8u) { return; }
    }
    ctx->pc = 0x3878F8u;
label_3878f8:
    // 0x3878f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3878f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3878fc:
    // 0x3878fc: 0xc04f278  jal         func_13C9E0
label_387900:
    if (ctx->pc == 0x387900u) {
        ctx->pc = 0x387900u;
            // 0x387900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x387904u;
        goto label_387904;
    }
    ctx->pc = 0x3878FCu;
    SET_GPR_U32(ctx, 31, 0x387904u);
    ctx->pc = 0x387900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3878FCu;
            // 0x387900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387904u; }
        if (ctx->pc != 0x387904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387904u; }
        if (ctx->pc != 0x387904u) { return; }
    }
    ctx->pc = 0x387904u;
label_387904:
    // 0x387904: 0xc0d1c10  jal         func_347040
label_387908:
    if (ctx->pc == 0x387908u) {
        ctx->pc = 0x387908u;
            // 0x387908: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->pc = 0x38790Cu;
        goto label_38790c;
    }
    ctx->pc = 0x387904u;
    SET_GPR_U32(ctx, 31, 0x38790Cu);
    ctx->pc = 0x387908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387904u;
            // 0x387908: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38790Cu; }
        if (ctx->pc != 0x38790Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38790Cu; }
        if (ctx->pc != 0x38790Cu) { return; }
    }
    ctx->pc = 0x38790Cu;
label_38790c:
    // 0x38790c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38790cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387910:
    // 0x387910: 0xc04ce80  jal         func_133A00
label_387914:
    if (ctx->pc == 0x387914u) {
        ctx->pc = 0x387914u;
            // 0x387914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x387918u;
        goto label_387918;
    }
    ctx->pc = 0x387910u;
    SET_GPR_U32(ctx, 31, 0x387918u);
    ctx->pc = 0x387914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387910u;
            // 0x387914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387918u; }
        if (ctx->pc != 0x387918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387918u; }
        if (ctx->pc != 0x387918u) { return; }
    }
    ctx->pc = 0x387918u;
label_387918:
    // 0x387918: 0xc0d4108  jal         func_350420
label_38791c:
    if (ctx->pc == 0x38791Cu) {
        ctx->pc = 0x387920u;
        goto label_387920;
    }
    ctx->pc = 0x387918u;
    SET_GPR_U32(ctx, 31, 0x387920u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387920u; }
        if (ctx->pc != 0x387920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387920u; }
        if (ctx->pc != 0x387920u) { return; }
    }
    ctx->pc = 0x387920u;
label_387920:
    // 0x387920: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x387920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387924:
    // 0x387924: 0xc0d4104  jal         func_350410
label_387928:
    if (ctx->pc == 0x387928u) {
        ctx->pc = 0x387928u;
            // 0x387928: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->pc = 0x38792Cu;
        goto label_38792c;
    }
    ctx->pc = 0x387924u;
    SET_GPR_U32(ctx, 31, 0x38792Cu);
    ctx->pc = 0x387928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387924u;
            // 0x387928: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38792Cu; }
        if (ctx->pc != 0x38792Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38792Cu; }
        if (ctx->pc != 0x38792Cu) { return; }
    }
    ctx->pc = 0x38792Cu;
label_38792c:
    // 0x38792c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x38792cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_387930:
    // 0x387930: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x387930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_387934:
    // 0x387934: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x387934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_387938:
    // 0x387938: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x387938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38793c:
    // 0x38793c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x38793cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387940:
    // 0x387940: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x387940u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387944:
    // 0x387944: 0xc0d40ac  jal         func_3502B0
label_387948:
    if (ctx->pc == 0x387948u) {
        ctx->pc = 0x387948u;
            // 0x387948: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x38794Cu;
        goto label_38794c;
    }
    ctx->pc = 0x387944u;
    SET_GPR_U32(ctx, 31, 0x38794Cu);
    ctx->pc = 0x387948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387944u;
            // 0x387948: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38794Cu; }
        if (ctx->pc != 0x38794Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38794Cu; }
        if (ctx->pc != 0x38794Cu) { return; }
    }
    ctx->pc = 0x38794Cu;
label_38794c:
    // 0x38794c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x38794cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_387950:
    // 0x387950: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_387954:
    if (ctx->pc == 0x387954u) {
        ctx->pc = 0x387954u;
            // 0x387954: 0xaea200a4  sw          $v0, 0xA4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 2));
        ctx->pc = 0x387958u;
        goto label_387958;
    }
    ctx->pc = 0x387950u;
    {
        const bool branch_taken_0x387950 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x387954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387950u;
            // 0x387954: 0xaea200a4  sw          $v0, 0xA4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387950) {
            ctx->pc = 0x3879F0u;
            goto label_3879f0;
        }
    }
    ctx->pc = 0x387958u;
label_387958:
    // 0x387958: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x387958u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_38795c:
    // 0x38795c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x38795cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_387960:
    // 0x387960: 0x27a600bc  addiu       $a2, $sp, 0xBC
    ctx->pc = 0x387960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_387964:
    // 0x387964: 0xc0e1e90  jal         func_387A40
label_387968:
    if (ctx->pc == 0x387968u) {
        ctx->pc = 0x387968u;
            // 0x387968: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38796Cu;
        goto label_38796c;
    }
    ctx->pc = 0x387964u;
    SET_GPR_U32(ctx, 31, 0x38796Cu);
    ctx->pc = 0x387968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387964u;
            // 0x387968: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x387A40u;
    if (runtime->hasFunction(0x387A40u)) {
        auto targetFn = runtime->lookupFunction(0x387A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38796Cu; }
        if (ctx->pc != 0x38796Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00387A40_0x387a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38796Cu; }
        if (ctx->pc != 0x38796Cu) { return; }
    }
    ctx->pc = 0x38796Cu;
label_38796c:
    // 0x38796c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38796cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_387970:
    // 0x387970: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x387970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_387974:
    // 0x387974: 0xc04cd60  jal         func_133580
label_387978:
    if (ctx->pc == 0x387978u) {
        ctx->pc = 0x387978u;
            // 0x387978: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38797Cu;
        goto label_38797c;
    }
    ctx->pc = 0x387974u;
    SET_GPR_U32(ctx, 31, 0x38797Cu);
    ctx->pc = 0x387978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387974u;
            // 0x387978: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38797Cu; }
        if (ctx->pc != 0x38797Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38797Cu; }
        if (ctx->pc != 0x38797Cu) { return; }
    }
    ctx->pc = 0x38797Cu;
label_38797c:
    // 0x38797c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x38797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_387980:
    // 0x387980: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x387980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_387984:
    // 0x387984: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x387984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_387988:
    // 0x387988: 0xc04e4a4  jal         func_139290
label_38798c:
    if (ctx->pc == 0x38798Cu) {
        ctx->pc = 0x38798Cu;
            // 0x38798c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x387990u;
        goto label_387990;
    }
    ctx->pc = 0x387988u;
    SET_GPR_U32(ctx, 31, 0x387990u);
    ctx->pc = 0x38798Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387988u;
            // 0x38798c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387990u; }
        if (ctx->pc != 0x387990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387990u; }
        if (ctx->pc != 0x387990u) { return; }
    }
    ctx->pc = 0x387990u;
label_387990:
    // 0x387990: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x387990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_387994:
    // 0x387994: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x387994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_387998:
    // 0x387998: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x387998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_38799c:
    // 0x38799c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x38799cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_3879a0:
    // 0x3879a0: 0x8eb90060  lw          $t9, 0x60($s5)
    ctx->pc = 0x3879a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_3879a4:
    // 0x3879a4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3879a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3879a8:
    // 0x3879a8: 0x320f809  jalr        $t9
label_3879ac:
    if (ctx->pc == 0x3879ACu) {
        ctx->pc = 0x3879ACu;
            // 0x3879ac: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->pc = 0x3879B0u;
        goto label_3879b0;
    }
    ctx->pc = 0x3879A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3879B0u);
        ctx->pc = 0x3879ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3879A8u;
            // 0x3879ac: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3879B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3879B0u; }
            if (ctx->pc != 0x3879B0u) { return; }
        }
        }
    }
    ctx->pc = 0x3879B0u;
label_3879b0:
    // 0x3879b0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x3879b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3879b4:
    // 0x3879b4: 0xc6ac0180  lwc1        $f12, 0x180($s5)
    ctx->pc = 0x3879b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3879b8:
    // 0x3879b8: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3879b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_3879bc:
    // 0x3879bc: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x3879bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_3879c0:
    // 0x3879c0: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x3879c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3879c4:
    // 0x3879c4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3879c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3879c8:
    // 0x3879c8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3879c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3879cc:
    // 0x3879cc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3879ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3879d0:
    // 0x3879d0: 0xc04cff4  jal         func_133FD0
label_3879d4:
    if (ctx->pc == 0x3879D4u) {
        ctx->pc = 0x3879D4u;
            // 0x3879d4: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x3879D8u;
        goto label_3879d8;
    }
    ctx->pc = 0x3879D0u;
    SET_GPR_U32(ctx, 31, 0x3879D8u);
    ctx->pc = 0x3879D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3879D0u;
            // 0x3879d4: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3879D8u; }
        if (ctx->pc != 0x3879D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3879D8u; }
        if (ctx->pc != 0x3879D8u) { return; }
    }
    ctx->pc = 0x3879D8u;
label_3879d8:
    // 0x3879d8: 0x8ea400fc  lw          $a0, 0xFC($s5)
    ctx->pc = 0x3879d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 252)));
label_3879dc:
    // 0x3879dc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3879dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3879e0:
    // 0x3879e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3879e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3879e4:
    // 0x3879e4: 0xc0e325c  jal         func_38C970
label_3879e8:
    if (ctx->pc == 0x3879E8u) {
        ctx->pc = 0x3879E8u;
            // 0x3879e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3879ECu;
        goto label_3879ec;
    }
    ctx->pc = 0x3879E4u;
    SET_GPR_U32(ctx, 31, 0x3879ECu);
    ctx->pc = 0x3879E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3879E4u;
            // 0x3879e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C970u;
    if (runtime->hasFunction(0x38C970u)) {
        auto targetFn = runtime->lookupFunction(0x38C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3879ECu; }
        if (ctx->pc != 0x3879ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C970_0x38c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3879ECu; }
        if (ctx->pc != 0x3879ECu) { return; }
    }
    ctx->pc = 0x3879ECu;
label_3879ec:
    // 0x3879ec: 0x0  nop
    ctx->pc = 0x3879ecu;
    // NOP
label_3879f0:
    // 0x3879f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3879f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3879f4:
    // 0x3879f4: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x3879f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3879f8:
    // 0x3879f8: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
label_3879fc:
    if (ctx->pc == 0x3879FCu) {
        ctx->pc = 0x3879FCu;
            // 0x3879fc: 0x26b50140  addiu       $s5, $s5, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
        ctx->pc = 0x387A00u;
        goto label_387a00;
    }
    ctx->pc = 0x3879F8u;
    {
        const bool branch_taken_0x3879f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3879FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3879F8u;
            // 0x3879fc: 0x26b50140  addiu       $s5, $s5, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3879f8) {
            ctx->pc = 0x3878D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3878d8;
        }
    }
    ctx->pc = 0x387A00u;
label_387a00:
    // 0x387a00: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x387a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_387a04:
    // 0x387a04: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x387a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_387a08:
    // 0x387a08: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x387a08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_387a0c:
    // 0x387a0c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x387a0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_387a10:
    // 0x387a10: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x387a10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_387a14:
    // 0x387a14: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x387a14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_387a18:
    // 0x387a18: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x387a18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_387a1c:
    // 0x387a1c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x387a1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_387a20:
    // 0x387a20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x387a20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_387a24:
    // 0x387a24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x387a24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_387a28:
    // 0x387a28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x387a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_387a2c:
    // 0x387a2c: 0x3e00008  jr          $ra
label_387a30:
    if (ctx->pc == 0x387A30u) {
        ctx->pc = 0x387A30u;
            // 0x387a30: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x387A34u;
        goto label_387a34;
    }
    ctx->pc = 0x387A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387A2Cu;
            // 0x387a30: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x387A34u;
label_387a34:
    // 0x387a34: 0x0  nop
    ctx->pc = 0x387a34u;
    // NOP
label_387a38:
    // 0x387a38: 0x0  nop
    ctx->pc = 0x387a38u;
    // NOP
label_387a3c:
    // 0x387a3c: 0x0  nop
    ctx->pc = 0x387a3cu;
    // NOP
}
