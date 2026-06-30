#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BF770
// Address: 0x4bf770 - 0x4bfa60
void sub_004BF770_0x4bf770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF770_0x4bf770");
#endif

    switch (ctx->pc) {
        case 0x4bf770u: goto label_4bf770;
        case 0x4bf774u: goto label_4bf774;
        case 0x4bf778u: goto label_4bf778;
        case 0x4bf77cu: goto label_4bf77c;
        case 0x4bf780u: goto label_4bf780;
        case 0x4bf784u: goto label_4bf784;
        case 0x4bf788u: goto label_4bf788;
        case 0x4bf78cu: goto label_4bf78c;
        case 0x4bf790u: goto label_4bf790;
        case 0x4bf794u: goto label_4bf794;
        case 0x4bf798u: goto label_4bf798;
        case 0x4bf79cu: goto label_4bf79c;
        case 0x4bf7a0u: goto label_4bf7a0;
        case 0x4bf7a4u: goto label_4bf7a4;
        case 0x4bf7a8u: goto label_4bf7a8;
        case 0x4bf7acu: goto label_4bf7ac;
        case 0x4bf7b0u: goto label_4bf7b0;
        case 0x4bf7b4u: goto label_4bf7b4;
        case 0x4bf7b8u: goto label_4bf7b8;
        case 0x4bf7bcu: goto label_4bf7bc;
        case 0x4bf7c0u: goto label_4bf7c0;
        case 0x4bf7c4u: goto label_4bf7c4;
        case 0x4bf7c8u: goto label_4bf7c8;
        case 0x4bf7ccu: goto label_4bf7cc;
        case 0x4bf7d0u: goto label_4bf7d0;
        case 0x4bf7d4u: goto label_4bf7d4;
        case 0x4bf7d8u: goto label_4bf7d8;
        case 0x4bf7dcu: goto label_4bf7dc;
        case 0x4bf7e0u: goto label_4bf7e0;
        case 0x4bf7e4u: goto label_4bf7e4;
        case 0x4bf7e8u: goto label_4bf7e8;
        case 0x4bf7ecu: goto label_4bf7ec;
        case 0x4bf7f0u: goto label_4bf7f0;
        case 0x4bf7f4u: goto label_4bf7f4;
        case 0x4bf7f8u: goto label_4bf7f8;
        case 0x4bf7fcu: goto label_4bf7fc;
        case 0x4bf800u: goto label_4bf800;
        case 0x4bf804u: goto label_4bf804;
        case 0x4bf808u: goto label_4bf808;
        case 0x4bf80cu: goto label_4bf80c;
        case 0x4bf810u: goto label_4bf810;
        case 0x4bf814u: goto label_4bf814;
        case 0x4bf818u: goto label_4bf818;
        case 0x4bf81cu: goto label_4bf81c;
        case 0x4bf820u: goto label_4bf820;
        case 0x4bf824u: goto label_4bf824;
        case 0x4bf828u: goto label_4bf828;
        case 0x4bf82cu: goto label_4bf82c;
        case 0x4bf830u: goto label_4bf830;
        case 0x4bf834u: goto label_4bf834;
        case 0x4bf838u: goto label_4bf838;
        case 0x4bf83cu: goto label_4bf83c;
        case 0x4bf840u: goto label_4bf840;
        case 0x4bf844u: goto label_4bf844;
        case 0x4bf848u: goto label_4bf848;
        case 0x4bf84cu: goto label_4bf84c;
        case 0x4bf850u: goto label_4bf850;
        case 0x4bf854u: goto label_4bf854;
        case 0x4bf858u: goto label_4bf858;
        case 0x4bf85cu: goto label_4bf85c;
        case 0x4bf860u: goto label_4bf860;
        case 0x4bf864u: goto label_4bf864;
        case 0x4bf868u: goto label_4bf868;
        case 0x4bf86cu: goto label_4bf86c;
        case 0x4bf870u: goto label_4bf870;
        case 0x4bf874u: goto label_4bf874;
        case 0x4bf878u: goto label_4bf878;
        case 0x4bf87cu: goto label_4bf87c;
        case 0x4bf880u: goto label_4bf880;
        case 0x4bf884u: goto label_4bf884;
        case 0x4bf888u: goto label_4bf888;
        case 0x4bf88cu: goto label_4bf88c;
        case 0x4bf890u: goto label_4bf890;
        case 0x4bf894u: goto label_4bf894;
        case 0x4bf898u: goto label_4bf898;
        case 0x4bf89cu: goto label_4bf89c;
        case 0x4bf8a0u: goto label_4bf8a0;
        case 0x4bf8a4u: goto label_4bf8a4;
        case 0x4bf8a8u: goto label_4bf8a8;
        case 0x4bf8acu: goto label_4bf8ac;
        case 0x4bf8b0u: goto label_4bf8b0;
        case 0x4bf8b4u: goto label_4bf8b4;
        case 0x4bf8b8u: goto label_4bf8b8;
        case 0x4bf8bcu: goto label_4bf8bc;
        case 0x4bf8c0u: goto label_4bf8c0;
        case 0x4bf8c4u: goto label_4bf8c4;
        case 0x4bf8c8u: goto label_4bf8c8;
        case 0x4bf8ccu: goto label_4bf8cc;
        case 0x4bf8d0u: goto label_4bf8d0;
        case 0x4bf8d4u: goto label_4bf8d4;
        case 0x4bf8d8u: goto label_4bf8d8;
        case 0x4bf8dcu: goto label_4bf8dc;
        case 0x4bf8e0u: goto label_4bf8e0;
        case 0x4bf8e4u: goto label_4bf8e4;
        case 0x4bf8e8u: goto label_4bf8e8;
        case 0x4bf8ecu: goto label_4bf8ec;
        case 0x4bf8f0u: goto label_4bf8f0;
        case 0x4bf8f4u: goto label_4bf8f4;
        case 0x4bf8f8u: goto label_4bf8f8;
        case 0x4bf8fcu: goto label_4bf8fc;
        case 0x4bf900u: goto label_4bf900;
        case 0x4bf904u: goto label_4bf904;
        case 0x4bf908u: goto label_4bf908;
        case 0x4bf90cu: goto label_4bf90c;
        case 0x4bf910u: goto label_4bf910;
        case 0x4bf914u: goto label_4bf914;
        case 0x4bf918u: goto label_4bf918;
        case 0x4bf91cu: goto label_4bf91c;
        case 0x4bf920u: goto label_4bf920;
        case 0x4bf924u: goto label_4bf924;
        case 0x4bf928u: goto label_4bf928;
        case 0x4bf92cu: goto label_4bf92c;
        case 0x4bf930u: goto label_4bf930;
        case 0x4bf934u: goto label_4bf934;
        case 0x4bf938u: goto label_4bf938;
        case 0x4bf93cu: goto label_4bf93c;
        case 0x4bf940u: goto label_4bf940;
        case 0x4bf944u: goto label_4bf944;
        case 0x4bf948u: goto label_4bf948;
        case 0x4bf94cu: goto label_4bf94c;
        case 0x4bf950u: goto label_4bf950;
        case 0x4bf954u: goto label_4bf954;
        case 0x4bf958u: goto label_4bf958;
        case 0x4bf95cu: goto label_4bf95c;
        case 0x4bf960u: goto label_4bf960;
        case 0x4bf964u: goto label_4bf964;
        case 0x4bf968u: goto label_4bf968;
        case 0x4bf96cu: goto label_4bf96c;
        case 0x4bf970u: goto label_4bf970;
        case 0x4bf974u: goto label_4bf974;
        case 0x4bf978u: goto label_4bf978;
        case 0x4bf97cu: goto label_4bf97c;
        case 0x4bf980u: goto label_4bf980;
        case 0x4bf984u: goto label_4bf984;
        case 0x4bf988u: goto label_4bf988;
        case 0x4bf98cu: goto label_4bf98c;
        case 0x4bf990u: goto label_4bf990;
        case 0x4bf994u: goto label_4bf994;
        case 0x4bf998u: goto label_4bf998;
        case 0x4bf99cu: goto label_4bf99c;
        case 0x4bf9a0u: goto label_4bf9a0;
        case 0x4bf9a4u: goto label_4bf9a4;
        case 0x4bf9a8u: goto label_4bf9a8;
        case 0x4bf9acu: goto label_4bf9ac;
        case 0x4bf9b0u: goto label_4bf9b0;
        case 0x4bf9b4u: goto label_4bf9b4;
        case 0x4bf9b8u: goto label_4bf9b8;
        case 0x4bf9bcu: goto label_4bf9bc;
        case 0x4bf9c0u: goto label_4bf9c0;
        case 0x4bf9c4u: goto label_4bf9c4;
        case 0x4bf9c8u: goto label_4bf9c8;
        case 0x4bf9ccu: goto label_4bf9cc;
        case 0x4bf9d0u: goto label_4bf9d0;
        case 0x4bf9d4u: goto label_4bf9d4;
        case 0x4bf9d8u: goto label_4bf9d8;
        case 0x4bf9dcu: goto label_4bf9dc;
        case 0x4bf9e0u: goto label_4bf9e0;
        case 0x4bf9e4u: goto label_4bf9e4;
        case 0x4bf9e8u: goto label_4bf9e8;
        case 0x4bf9ecu: goto label_4bf9ec;
        case 0x4bf9f0u: goto label_4bf9f0;
        case 0x4bf9f4u: goto label_4bf9f4;
        case 0x4bf9f8u: goto label_4bf9f8;
        case 0x4bf9fcu: goto label_4bf9fc;
        case 0x4bfa00u: goto label_4bfa00;
        case 0x4bfa04u: goto label_4bfa04;
        case 0x4bfa08u: goto label_4bfa08;
        case 0x4bfa0cu: goto label_4bfa0c;
        case 0x4bfa10u: goto label_4bfa10;
        case 0x4bfa14u: goto label_4bfa14;
        case 0x4bfa18u: goto label_4bfa18;
        case 0x4bfa1cu: goto label_4bfa1c;
        case 0x4bfa20u: goto label_4bfa20;
        case 0x4bfa24u: goto label_4bfa24;
        case 0x4bfa28u: goto label_4bfa28;
        case 0x4bfa2cu: goto label_4bfa2c;
        case 0x4bfa30u: goto label_4bfa30;
        case 0x4bfa34u: goto label_4bfa34;
        case 0x4bfa38u: goto label_4bfa38;
        case 0x4bfa3cu: goto label_4bfa3c;
        case 0x4bfa40u: goto label_4bfa40;
        case 0x4bfa44u: goto label_4bfa44;
        case 0x4bfa48u: goto label_4bfa48;
        case 0x4bfa4cu: goto label_4bfa4c;
        case 0x4bfa50u: goto label_4bfa50;
        case 0x4bfa54u: goto label_4bfa54;
        case 0x4bfa58u: goto label_4bfa58;
        case 0x4bfa5cu: goto label_4bfa5c;
        default: break;
    }

    ctx->pc = 0x4bf770u;

label_4bf770:
    // 0x4bf770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4bf770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bf774:
    // 0x4bf774: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4bf774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4bf778:
    // 0x4bf778: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4bf778u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4bf77c:
    // 0x4bf77c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4bf780:
    if (ctx->pc == 0x4BF780u) {
        ctx->pc = 0x4BF780u;
            // 0x4bf780: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF784u;
        goto label_4bf784;
    }
    ctx->pc = 0x4BF77Cu;
    {
        const bool branch_taken_0x4bf77c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4bf77c) {
            ctx->pc = 0x4BF780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF77Cu;
            // 0x4bf780: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF790u;
            goto label_4bf790;
        }
    }
    ctx->pc = 0x4BF784u;
label_4bf784:
    // 0x4bf784: 0xc0400a8  jal         func_1002A0
label_4bf788:
    if (ctx->pc == 0x4BF788u) {
        ctx->pc = 0x4BF788u;
            // 0x4bf788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF78Cu;
        goto label_4bf78c;
    }
    ctx->pc = 0x4BF784u;
    SET_GPR_U32(ctx, 31, 0x4BF78Cu);
    ctx->pc = 0x4BF788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF784u;
            // 0x4bf788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF78Cu; }
        if (ctx->pc != 0x4BF78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF78Cu; }
        if (ctx->pc != 0x4BF78Cu) { return; }
    }
    ctx->pc = 0x4BF78Cu;
label_4bf78c:
    // 0x4bf78c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4bf78cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bf790:
    // 0x4bf790: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bf790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4bf794:
    // 0x4bf794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bf794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bf798:
    // 0x4bf798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bf798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bf79c:
    // 0x4bf79c: 0x3e00008  jr          $ra
label_4bf7a0:
    if (ctx->pc == 0x4BF7A0u) {
        ctx->pc = 0x4BF7A0u;
            // 0x4bf7a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4BF7A4u;
        goto label_4bf7a4;
    }
    ctx->pc = 0x4BF79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF79Cu;
            // 0x4bf7a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BF7A4u;
label_4bf7a4:
    // 0x4bf7a4: 0x0  nop
    ctx->pc = 0x4bf7a4u;
    // NOP
label_4bf7a8:
    // 0x4bf7a8: 0x0  nop
    ctx->pc = 0x4bf7a8u;
    // NOP
label_4bf7ac:
    // 0x4bf7ac: 0x0  nop
    ctx->pc = 0x4bf7acu;
    // NOP
label_4bf7b0:
    // 0x4bf7b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4bf7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4bf7b4:
    // 0x4bf7b4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4bf7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4bf7b8:
    // 0x4bf7b8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4bf7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4bf7bc:
    // 0x4bf7bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4bf7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4bf7c0:
    // 0x4bf7c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4bf7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4bf7c4:
    // 0x4bf7c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4bf7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4bf7c8:
    // 0x4bf7c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4bf7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4bf7cc:
    // 0x4bf7cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bf7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bf7d0:
    // 0x4bf7d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bf7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bf7d4:
    // 0x4bf7d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bf7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bf7d8:
    // 0x4bf7d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bf7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bf7dc:
    // 0x4bf7dc: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x4bf7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4bf7e0:
    // 0x4bf7e0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4bf7e0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4bf7e4:
    // 0x4bf7e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4bf7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4bf7e8:
    // 0x4bf7e8: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_4bf7ec:
    if (ctx->pc == 0x4BF7ECu) {
        ctx->pc = 0x4BF7ECu;
            // 0x4bf7ec: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF7F0u;
        goto label_4bf7f0;
    }
    ctx->pc = 0x4BF7E8u;
    {
        const bool branch_taken_0x4bf7e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4BF7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF7E8u;
            // 0x4bf7ec: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf7e8) {
            ctx->pc = 0x4BF82Cu;
            goto label_4bf82c;
        }
    }
    ctx->pc = 0x4BF7F0u;
label_4bf7f0:
    // 0x4bf7f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4bf7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4bf7f4:
    // 0x4bf7f4: 0x50a30044  beql        $a1, $v1, . + 4 + (0x44 << 2)
label_4bf7f8:
    if (ctx->pc == 0x4BF7F8u) {
        ctx->pc = 0x4BF7F8u;
            // 0x4bf7f8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x4BF7FCu;
        goto label_4bf7fc;
    }
    ctx->pc = 0x4BF7F4u;
    {
        const bool branch_taken_0x4bf7f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4bf7f4) {
            ctx->pc = 0x4BF7F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF7F4u;
            // 0x4bf7f8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF908u;
            goto label_4bf908;
        }
    }
    ctx->pc = 0x4BF7FCu;
label_4bf7fc:
    // 0x4bf7fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4bf7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bf800:
    // 0x4bf800: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4bf804:
    if (ctx->pc == 0x4BF804u) {
        ctx->pc = 0x4BF804u;
            // 0x4bf804: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4BF808u;
        goto label_4bf808;
    }
    ctx->pc = 0x4BF800u;
    {
        const bool branch_taken_0x4bf800 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4bf800) {
            ctx->pc = 0x4BF804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF800u;
            // 0x4bf804: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF810u;
            goto label_4bf810;
        }
    }
    ctx->pc = 0x4BF808u;
label_4bf808:
    // 0x4bf808: 0x1000003e  b           . + 4 + (0x3E << 2)
label_4bf80c:
    if (ctx->pc == 0x4BF80Cu) {
        ctx->pc = 0x4BF810u;
        goto label_4bf810;
    }
    ctx->pc = 0x4BF808u;
    {
        const bool branch_taken_0x4bf808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf808) {
            ctx->pc = 0x4BF904u;
            goto label_4bf904;
        }
    }
    ctx->pc = 0x4BF810u;
label_4bf810:
    // 0x4bf810: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x4bf810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_4bf814:
    // 0x4bf814: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4bf814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4bf818:
    // 0x4bf818: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4bf818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4bf81c:
    // 0x4bf81c: 0x320f809  jalr        $t9
label_4bf820:
    if (ctx->pc == 0x4BF820u) {
        ctx->pc = 0x4BF820u;
            // 0x4bf820: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4BF824u;
        goto label_4bf824;
    }
    ctx->pc = 0x4BF81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BF824u);
        ctx->pc = 0x4BF820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF81Cu;
            // 0x4bf820: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BF824u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BF824u; }
            if (ctx->pc != 0x4BF824u) { return; }
        }
        }
    }
    ctx->pc = 0x4BF824u;
label_4bf824:
    // 0x4bf824: 0x10000037  b           . + 4 + (0x37 << 2)
label_4bf828:
    if (ctx->pc == 0x4BF828u) {
        ctx->pc = 0x4BF82Cu;
        goto label_4bf82c;
    }
    ctx->pc = 0x4BF824u;
    {
        const bool branch_taken_0x4bf824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf824) {
            ctx->pc = 0x4BF904u;
            goto label_4bf904;
        }
    }
    ctx->pc = 0x4BF82Cu;
label_4bf82c:
    // 0x4bf82c: 0x8eb10070  lw          $s1, 0x70($s5)
    ctx->pc = 0x4bf82cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_4bf830:
    // 0x4bf830: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
label_4bf834:
    if (ctx->pc == 0x4BF834u) {
        ctx->pc = 0x4BF838u;
        goto label_4bf838;
    }
    ctx->pc = 0x4BF830u;
    {
        const bool branch_taken_0x4bf830 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf830) {
            ctx->pc = 0x4BF904u;
            goto label_4bf904;
        }
    }
    ctx->pc = 0x4BF838u;
label_4bf838:
    // 0x4bf838: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4bf838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4bf83c:
    // 0x4bf83c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4bf83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4bf840:
    // 0x4bf840: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x4bf840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4bf844:
    // 0x4bf844: 0x26b00084  addiu       $s0, $s5, 0x84
    ctx->pc = 0x4bf844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_4bf848:
    // 0x4bf848: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x4bf848u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4bf84c:
    // 0x4bf84c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bf84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bf850:
    // 0x4bf850: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x4bf850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4bf854:
    // 0x4bf854: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4bf854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4bf858:
    // 0x4bf858: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x4bf858u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4bf85c:
    // 0x4bf85c: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x4bf85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4bf860:
    // 0x4bf860: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x4bf860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_4bf864:
    // 0x4bf864: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4bf864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4bf868:
    // 0x4bf868: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4bf868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4bf86c:
    // 0x4bf86c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bf86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bf870:
    // 0x4bf870: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4bf870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bf874:
    // 0x4bf874: 0xc04e738  jal         func_139CE0
label_4bf878:
    if (ctx->pc == 0x4BF878u) {
        ctx->pc = 0x4BF878u;
            // 0x4bf878: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4BF87Cu;
        goto label_4bf87c;
    }
    ctx->pc = 0x4BF874u;
    SET_GPR_U32(ctx, 31, 0x4BF87Cu);
    ctx->pc = 0x4BF878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF874u;
            // 0x4bf878: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF87Cu; }
        if (ctx->pc != 0x4BF87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF87Cu; }
        if (ctx->pc != 0x4BF87Cu) { return; }
    }
    ctx->pc = 0x4BF87Cu;
label_4bf87c:
    // 0x4bf87c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4bf87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4bf880:
    // 0x4bf880: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bf880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bf884:
    // 0x4bf884: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4bf884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4bf888:
    // 0x4bf888: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4bf888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bf88c:
    // 0x4bf88c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4bf88cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4bf890:
    // 0x4bf890: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4bf890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bf894:
    // 0x4bf894: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x4bf894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_4bf898:
    // 0x4bf898: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4bf898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4bf89c:
    // 0x4bf89c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4bf89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4bf8a0:
    // 0x4bf8a0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4bf8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4bf8a4:
    // 0x4bf8a4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4bf8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4bf8a8:
    // 0x4bf8a8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4bf8a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4bf8ac:
    // 0x4bf8ac: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4bf8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4bf8b0:
    // 0x4bf8b0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4bf8b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4bf8b4:
    // 0x4bf8b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4bf8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4bf8b8:
    // 0x4bf8b8: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x4bf8b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_4bf8bc:
    // 0x4bf8bc: 0xc12ffbc  jal         func_4BFEF0
label_4bf8c0:
    if (ctx->pc == 0x4BF8C0u) {
        ctx->pc = 0x4BF8C0u;
            // 0x4bf8c0: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4BF8C4u;
        goto label_4bf8c4;
    }
    ctx->pc = 0x4BF8BCu;
    SET_GPR_U32(ctx, 31, 0x4BF8C4u);
    ctx->pc = 0x4BF8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF8BCu;
            // 0x4bf8c0: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BFEF0u;
    if (runtime->hasFunction(0x4BFEF0u)) {
        auto targetFn = runtime->lookupFunction(0x4BFEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF8C4u; }
        if (ctx->pc != 0x4BF8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BFEF0_0x4bfef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF8C4u; }
        if (ctx->pc != 0x4BF8C4u) { return; }
    }
    ctx->pc = 0x4BF8C4u;
label_4bf8c4:
    // 0x4bf8c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4bf8c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4bf8c8:
    // 0x4bf8c8: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4bf8c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4bf8cc:
    // 0x4bf8cc: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_4bf8d0:
    if (ctx->pc == 0x4BF8D0u) {
        ctx->pc = 0x4BF8D0u;
            // 0x4bf8d0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4BF8D4u;
        goto label_4bf8d4;
    }
    ctx->pc = 0x4BF8CCu;
    {
        const bool branch_taken_0x4bf8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BF8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF8CCu;
            // 0x4bf8d0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf8cc) {
            ctx->pc = 0x4BF894u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bf894;
        }
    }
    ctx->pc = 0x4BF8D4u;
label_4bf8d4:
    // 0x4bf8d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4bf8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4bf8d8:
    // 0x4bf8d8: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4bf8d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4bf8dc:
    // 0x4bf8dc: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_4bf8e0:
    if (ctx->pc == 0x4BF8E0u) {
        ctx->pc = 0x4BF8E0u;
            // 0x4bf8e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4BF8E4u;
        goto label_4bf8e4;
    }
    ctx->pc = 0x4BF8DCu;
    {
        const bool branch_taken_0x4bf8dc = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4BF8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF8DCu;
            // 0x4bf8e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf8dc) {
            ctx->pc = 0x4BF904u;
            goto label_4bf904;
        }
    }
    ctx->pc = 0x4BF8E4u;
label_4bf8e4:
    // 0x4bf8e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4bf8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4bf8e8:
    // 0x4bf8e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bf8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bf8ec:
    // 0x4bf8ec: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4bf8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4bf8f0:
    // 0x4bf8f0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4bf8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4bf8f4:
    // 0x4bf8f4: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4bf8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4bf8f8:
    // 0x4bf8f8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x4bf8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4bf8fc:
    // 0x4bf8fc: 0xc055ea8  jal         func_157AA0
label_4bf900:
    if (ctx->pc == 0x4BF900u) {
        ctx->pc = 0x4BF900u;
            // 0x4bf900: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF904u;
        goto label_4bf904;
    }
    ctx->pc = 0x4BF8FCu;
    SET_GPR_U32(ctx, 31, 0x4BF904u);
    ctx->pc = 0x4BF900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF8FCu;
            // 0x4bf900: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF904u; }
        if (ctx->pc != 0x4BF904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF904u; }
        if (ctx->pc != 0x4BF904u) { return; }
    }
    ctx->pc = 0x4BF904u;
label_4bf904:
    // 0x4bf904: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4bf904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4bf908:
    // 0x4bf908: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4bf908u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4bf90c:
    // 0x4bf90c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4bf90cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4bf910:
    // 0x4bf910: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4bf910u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4bf914:
    // 0x4bf914: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4bf914u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4bf918:
    // 0x4bf918: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bf918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bf91c:
    // 0x4bf91c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bf91cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bf920:
    // 0x4bf920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bf920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bf924:
    // 0x4bf924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bf924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bf928:
    // 0x4bf928: 0x3e00008  jr          $ra
label_4bf92c:
    if (ctx->pc == 0x4BF92Cu) {
        ctx->pc = 0x4BF92Cu;
            // 0x4bf92c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4BF930u;
        goto label_4bf930;
    }
    ctx->pc = 0x4BF928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF928u;
            // 0x4bf92c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BF930u;
label_4bf930:
    // 0x4bf930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4bf930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4bf934:
    // 0x4bf934: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4bf934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4bf938:
    // 0x4bf938: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4bf938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4bf93c:
    // 0x4bf93c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bf93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bf940:
    // 0x4bf940: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bf940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bf944:
    // 0x4bf944: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bf944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bf948:
    // 0x4bf948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bf948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bf94c:
    // 0x4bf94c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4bf94cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4bf950:
    // 0x4bf950: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4bf954:
    if (ctx->pc == 0x4BF954u) {
        ctx->pc = 0x4BF954u;
            // 0x4bf954: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF958u;
        goto label_4bf958;
    }
    ctx->pc = 0x4BF950u;
    {
        const bool branch_taken_0x4bf950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4BF954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF950u;
            // 0x4bf954: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf950) {
            ctx->pc = 0x4BF984u;
            goto label_4bf984;
        }
    }
    ctx->pc = 0x4BF958u;
label_4bf958:
    // 0x4bf958: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4bf958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4bf95c:
    // 0x4bf95c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4bf960:
    if (ctx->pc == 0x4BF960u) {
        ctx->pc = 0x4BF960u;
            // 0x4bf960: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4BF964u;
        goto label_4bf964;
    }
    ctx->pc = 0x4BF95Cu;
    {
        const bool branch_taken_0x4bf95c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4bf95c) {
            ctx->pc = 0x4BF960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF95Cu;
            // 0x4bf960: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF978u;
            goto label_4bf978;
        }
    }
    ctx->pc = 0x4BF964u;
label_4bf964:
    // 0x4bf964: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4bf964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bf968:
    // 0x4bf968: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4bf96c:
    if (ctx->pc == 0x4BF96Cu) {
        ctx->pc = 0x4BF970u;
        goto label_4bf970;
    }
    ctx->pc = 0x4BF968u;
    {
        const bool branch_taken_0x4bf968 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4bf968) {
            ctx->pc = 0x4BF9B8u;
            goto label_4bf9b8;
        }
    }
    ctx->pc = 0x4BF970u;
label_4bf970:
    // 0x4bf970: 0x10000011  b           . + 4 + (0x11 << 2)
label_4bf974:
    if (ctx->pc == 0x4BF974u) {
        ctx->pc = 0x4BF978u;
        goto label_4bf978;
    }
    ctx->pc = 0x4BF970u;
    {
        const bool branch_taken_0x4bf970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf970) {
            ctx->pc = 0x4BF9B8u;
            goto label_4bf9b8;
        }
    }
    ctx->pc = 0x4BF978u;
label_4bf978:
    // 0x4bf978: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4bf978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4bf97c:
    // 0x4bf97c: 0x320f809  jalr        $t9
label_4bf980:
    if (ctx->pc == 0x4BF980u) {
        ctx->pc = 0x4BF984u;
        goto label_4bf984;
    }
    ctx->pc = 0x4BF97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BF984u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BF984u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BF984u; }
            if (ctx->pc != 0x4BF984u) { return; }
        }
        }
    }
    ctx->pc = 0x4BF984u;
label_4bf984:
    // 0x4bf984: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x4bf984u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4bf988:
    // 0x4bf988: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_4bf98c:
    if (ctx->pc == 0x4BF98Cu) {
        ctx->pc = 0x4BF990u;
        goto label_4bf990;
    }
    ctx->pc = 0x4BF988u;
    {
        const bool branch_taken_0x4bf988 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf988) {
            ctx->pc = 0x4BF9B8u;
            goto label_4bf9b8;
        }
    }
    ctx->pc = 0x4BF990u;
label_4bf990:
    // 0x4bf990: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4bf990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bf994:
    // 0x4bf994: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4bf994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bf998:
    // 0x4bf998: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4bf998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4bf99c:
    // 0x4bf99c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4bf99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4bf9a0:
    // 0x4bf9a0: 0xc0e3658  jal         func_38D960
label_4bf9a4:
    if (ctx->pc == 0x4BF9A4u) {
        ctx->pc = 0x4BF9A4u;
            // 0x4bf9a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4BF9A8u;
        goto label_4bf9a8;
    }
    ctx->pc = 0x4BF9A0u;
    SET_GPR_U32(ctx, 31, 0x4BF9A8u);
    ctx->pc = 0x4BF9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF9A0u;
            // 0x4bf9a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF9A8u; }
        if (ctx->pc != 0x4BF9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF9A8u; }
        if (ctx->pc != 0x4BF9A8u) { return; }
    }
    ctx->pc = 0x4BF9A8u;
label_4bf9a8:
    // 0x4bf9a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4bf9a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4bf9ac:
    // 0x4bf9ac: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4bf9acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4bf9b0:
    // 0x4bf9b0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4bf9b4:
    if (ctx->pc == 0x4BF9B4u) {
        ctx->pc = 0x4BF9B4u;
            // 0x4bf9b4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4BF9B8u;
        goto label_4bf9b8;
    }
    ctx->pc = 0x4BF9B0u;
    {
        const bool branch_taken_0x4bf9b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BF9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF9B0u;
            // 0x4bf9b4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf9b0) {
            ctx->pc = 0x4BF998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bf998;
        }
    }
    ctx->pc = 0x4BF9B8u;
label_4bf9b8:
    // 0x4bf9b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4bf9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4bf9bc:
    // 0x4bf9bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bf9bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bf9c0:
    // 0x4bf9c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bf9c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bf9c4:
    // 0x4bf9c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bf9c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bf9c8:
    // 0x4bf9c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bf9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bf9cc:
    // 0x4bf9cc: 0x3e00008  jr          $ra
label_4bf9d0:
    if (ctx->pc == 0x4BF9D0u) {
        ctx->pc = 0x4BF9D0u;
            // 0x4bf9d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4BF9D4u;
        goto label_4bf9d4;
    }
    ctx->pc = 0x4BF9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF9CCu;
            // 0x4bf9d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BF9D4u;
label_4bf9d4:
    // 0x4bf9d4: 0x0  nop
    ctx->pc = 0x4bf9d4u;
    // NOP
label_4bf9d8:
    // 0x4bf9d8: 0x0  nop
    ctx->pc = 0x4bf9d8u;
    // NOP
label_4bf9dc:
    // 0x4bf9dc: 0x0  nop
    ctx->pc = 0x4bf9dcu;
    // NOP
label_4bf9e0:
    // 0x4bf9e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4bf9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4bf9e4:
    // 0x4bf9e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4bf9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4bf9e8:
    // 0x4bf9e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bf9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bf9ec:
    // 0x4bf9ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bf9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bf9f0:
    // 0x4bf9f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bf9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bf9f4:
    // 0x4bf9f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bf9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bf9f8:
    // 0x4bf9f8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4bf9f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4bf9fc:
    // 0x4bf9fc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4bfa00:
    if (ctx->pc == 0x4BFA00u) {
        ctx->pc = 0x4BFA00u;
            // 0x4bfa00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BFA04u;
        goto label_4bfa04;
    }
    ctx->pc = 0x4BF9FCu;
    {
        const bool branch_taken_0x4bf9fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF9FCu;
            // 0x4bfa00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf9fc) {
            ctx->pc = 0x4BFA38u;
            goto label_4bfa38;
        }
    }
    ctx->pc = 0x4BFA04u;
label_4bfa04:
    // 0x4bfa04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4bfa04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bfa08:
    // 0x4bfa08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4bfa08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bfa0c:
    // 0x4bfa0c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4bfa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4bfa10:
    // 0x4bfa10: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4bfa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4bfa14:
    // 0x4bfa14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4bfa14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bfa18:
    // 0x4bfa18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bfa18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bfa1c:
    // 0x4bfa1c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4bfa1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4bfa20:
    // 0x4bfa20: 0x320f809  jalr        $t9
label_4bfa24:
    if (ctx->pc == 0x4BFA24u) {
        ctx->pc = 0x4BFA28u;
        goto label_4bfa28;
    }
    ctx->pc = 0x4BFA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BFA28u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BFA28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BFA28u; }
            if (ctx->pc != 0x4BFA28u) { return; }
        }
        }
    }
    ctx->pc = 0x4BFA28u;
label_4bfa28:
    // 0x4bfa28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4bfa28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4bfa2c:
    // 0x4bfa2c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4bfa2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4bfa30:
    // 0x4bfa30: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4bfa34:
    if (ctx->pc == 0x4BFA34u) {
        ctx->pc = 0x4BFA34u;
            // 0x4bfa34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4BFA38u;
        goto label_4bfa38;
    }
    ctx->pc = 0x4BFA30u;
    {
        const bool branch_taken_0x4bfa30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BFA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFA30u;
            // 0x4bfa34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfa30) {
            ctx->pc = 0x4BFA0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bfa0c;
        }
    }
    ctx->pc = 0x4BFA38u;
label_4bfa38:
    // 0x4bfa38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4bfa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4bfa3c:
    // 0x4bfa3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bfa3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bfa40:
    // 0x4bfa40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bfa40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bfa44:
    // 0x4bfa44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bfa44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bfa48:
    // 0x4bfa48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bfa48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bfa4c:
    // 0x4bfa4c: 0x3e00008  jr          $ra
label_4bfa50:
    if (ctx->pc == 0x4BFA50u) {
        ctx->pc = 0x4BFA50u;
            // 0x4bfa50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4BFA54u;
        goto label_4bfa54;
    }
    ctx->pc = 0x4BFA4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BFA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFA4Cu;
            // 0x4bfa50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BFA54u;
label_4bfa54:
    // 0x4bfa54: 0x0  nop
    ctx->pc = 0x4bfa54u;
    // NOP
label_4bfa58:
    // 0x4bfa58: 0x0  nop
    ctx->pc = 0x4bfa58u;
    // NOP
label_4bfa5c:
    // 0x4bfa5c: 0x0  nop
    ctx->pc = 0x4bfa5cu;
    // NOP
}
