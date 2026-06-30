#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003678A0
// Address: 0x3678a0 - 0x367970
void sub_003678A0_0x3678a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003678A0_0x3678a0");
#endif

    switch (ctx->pc) {
        case 0x3678dcu: goto label_3678dc;
        case 0x36792cu: goto label_36792c;
        case 0x36793cu: goto label_36793c;
        case 0x367950u: goto label_367950;
        default: break;
    }

    ctx->pc = 0x3678a0u;

    // 0x3678a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3678a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3678a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3678a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3678a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3678a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3678ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3678acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3678b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3678b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3678b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3678b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3678b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3678b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3678bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3678bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3678c0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3678c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3678c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3678c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3678c8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3678c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3678cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3678ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3678d0: 0x24a54c10  addiu       $a1, $a1, 0x4C10
    ctx->pc = 0x3678d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19472));
    // 0x3678d4: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x3678D4u;
    SET_GPR_U32(ctx, 31, 0x3678DCu);
    ctx->pc = 0x3678D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3678D4u;
            // 0x3678d8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3678DCu; }
        if (ctx->pc != 0x3678DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3678DCu; }
        if (ctx->pc != 0x3678DCu) { return; }
    }
    ctx->pc = 0x3678DCu;
label_3678dc:
    // 0x3678dc: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x3678dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x3678e0: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x3678e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x3678e4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3678E4u;
    {
        const bool branch_taken_0x3678e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3678e4) {
            ctx->pc = 0x3678E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3678E4u;
            // 0x3678e8: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3678F4u;
            goto label_3678f4;
        }
    }
    ctx->pc = 0x3678ECu;
    // 0x3678ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3678ECu;
    {
        const bool branch_taken_0x3678ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3678F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3678ECu;
            // 0x3678f0: 0x8e900194  lw          $s0, 0x194($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3678ec) {
            ctx->pc = 0x367904u;
            goto label_367904;
        }
    }
    ctx->pc = 0x3678F4u;
label_3678f4:
    // 0x3678f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3678F4u;
    {
        const bool branch_taken_0x3678f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3678f4) {
            ctx->pc = 0x3678F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3678F4u;
            // 0x3678f8: 0x30624800  andi        $v0, $v1, 0x4800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)18432);
        ctx->in_delay_slot = false;
            ctx->pc = 0x367908u;
            goto label_367908;
        }
    }
    ctx->pc = 0x3678FCu;
    // 0x3678fc: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x3678fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x367900: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x367900u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_367904:
    // 0x367904: 0x30624800  andi        $v0, $v1, 0x4800
    ctx->pc = 0x367904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)18432);
label_367908:
    // 0x367908: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x367908u;
    {
        const bool branch_taken_0x367908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x367908) {
            ctx->pc = 0x36793Cu;
            goto label_36793c;
        }
    }
    ctx->pc = 0x367910u;
    // 0x367910: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x367910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x367914: 0xc68c01cc  lwc1        $f12, 0x1CC($s4)
    ctx->pc = 0x367914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x367918: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x367918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36791c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36791cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367920: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x367920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x367924: 0xc0528ec  jal         func_14A3B0
    ctx->pc = 0x367924u;
    SET_GPR_U32(ctx, 31, 0x36792Cu);
    ctx->pc = 0x367928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367924u;
            // 0x367928: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3B0u;
    if (runtime->hasFunction(0x14A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36792Cu; }
        if (ctx->pc != 0x36792Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A3B0_0x14a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36792Cu; }
        if (ctx->pc != 0x36792Cu) { return; }
    }
    ctx->pc = 0x36792Cu;
label_36792c:
    // 0x36792c: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x36792cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x367930: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x367930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x367934: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x367934u;
    SET_GPR_U32(ctx, 31, 0x36793Cu);
    ctx->pc = 0x367938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367934u;
            // 0x367938: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36793Cu; }
        if (ctx->pc != 0x36793Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36793Cu; }
        if (ctx->pc != 0x36793Cu) { return; }
    }
    ctx->pc = 0x36793Cu;
label_36793c:
    // 0x36793c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x36793cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x367940: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x367940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367944: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x367944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x367948: 0xc04cb9c  jal         func_132E70
    ctx->pc = 0x367948u;
    SET_GPR_U32(ctx, 31, 0x367950u);
    ctx->pc = 0x36794Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367948u;
            // 0x36794c: 0x24c64c50  addiu       $a2, $a2, 0x4C50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367950u; }
        if (ctx->pc != 0x367950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367950u; }
        if (ctx->pc != 0x367950u) { return; }
    }
    ctx->pc = 0x367950u;
label_367950:
    // 0x367950: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x367950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x367954: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x367954u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x367958: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x367958u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36795c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36795cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367960: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x367960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x367964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367968: 0x3e00008  jr          $ra
    ctx->pc = 0x367968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36796Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367968u;
            // 0x36796c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x367970u;
}
