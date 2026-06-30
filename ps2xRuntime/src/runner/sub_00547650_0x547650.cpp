#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00547650
// Address: 0x547650 - 0x5477b0
void sub_00547650_0x547650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00547650_0x547650");
#endif

    switch (ctx->pc) {
        case 0x5476dcu: goto label_5476dc;
        case 0x5476fcu: goto label_5476fc;
        case 0x547720u: goto label_547720;
        case 0x547744u: goto label_547744;
        case 0x54777cu: goto label_54777c;
        default: break;
    }

    ctx->pc = 0x547650u;

    // 0x547650: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x547650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x547654: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x547654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x547658: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x547658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x54765c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x54765cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x547660: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x547660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x547664: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x547664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x547668: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x547668u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x54766c: 0x8443e462  lh          $v1, -0x1B9E($v0)
    ctx->pc = 0x54766cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960226)));
    // 0x547670: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x547670u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x547674: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x547674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x547678: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x547678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x54767c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x54767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x547680: 0x3c024646  lui         $v0, 0x4646
    ctx->pc = 0x547680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17990 << 16));
    // 0x547684: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x547684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x547688: 0x345146ff  ori         $s1, $v0, 0x46FF
    ctx->pc = 0x547688u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18175);
    // 0x54768c: 0x741818  mult        $v1, $v1, $s4
    ctx->pc = 0x54768cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x547690: 0x84850060  lh          $a1, 0x60($a0)
    ctx->pc = 0x547690u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x547694: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x547694u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
    // 0x547698: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x547698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x54769c: 0x84920062  lh          $s2, 0x62($a0)
    ctx->pc = 0x54769cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 98)));
    // 0x5476a0: 0x2610e460  addiu       $s0, $s0, -0x1BA0
    ctx->pc = 0x5476a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960224));
    // 0x5476a4: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x5476a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5476a8: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5476A8u;
    {
        const bool branch_taken_0x5476a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x5476ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5476A8u;
            // 0x5476ac: 0xa39821  addu        $s3, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5476a8) {
            ctx->pc = 0x5476BCu;
            goto label_5476bc;
        }
    }
    ctx->pc = 0x5476B0u;
    // 0x5476b0: 0x3c020096  lui         $v0, 0x96
    ctx->pc = 0x5476b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)150 << 16));
    // 0x5476b4: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x5476b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x5476b8: 0x3456ffff  ori         $s6, $v0, 0xFFFF
    ctx->pc = 0x5476b8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_5476bc:
    // 0x5476bc: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x5476bcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5476c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x5476c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5476c4: 0x86080004  lh          $t0, 0x4($s0)
    ctx->pc = 0x5476c4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x5476c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x5476c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5476cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5476ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5476d0: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x5476d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5476d4: 0xc15292c  jal         func_54A4B0
    ctx->pc = 0x5476D4u;
    SET_GPR_U32(ctx, 31, 0x5476DCu);
    ctx->pc = 0x5476D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5476D4u;
            // 0x5476d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x54A4B0u;
    if (runtime->hasFunction(0x54A4B0u)) {
        auto targetFn = runtime->lookupFunction(0x54A4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5476DCu; }
        if (ctx->pc != 0x5476DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0054A4B0_0x54a4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5476DCu; }
        if (ctx->pc != 0x5476DCu) { return; }
    }
    ctx->pc = 0x5476DCu;
label_5476dc:
    // 0x5476dc: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x5476dcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5476e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x5476e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5476e4: 0x86090004  lh          $t1, 0x4($s0)
    ctx->pc = 0x5476e4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x5476e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x5476e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5476ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x5476ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5476f0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x5476f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5476f4: 0xc1525b8  jal         func_5496E0
    ctx->pc = 0x5476F4u;
    SET_GPR_U32(ctx, 31, 0x5476FCu);
    ctx->pc = 0x5476F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5476F4u;
            // 0x5476f8: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5496E0u;
    if (runtime->hasFunction(0x5496E0u)) {
        auto targetFn = runtime->lookupFunction(0x5496E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5476FCu; }
        if (ctx->pc != 0x5476FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005496E0_0x5496e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5476FCu; }
        if (ctx->pc != 0x5476FCu) { return; }
    }
    ctx->pc = 0x5476FCu;
label_5476fc:
    // 0x5476fc: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x5476fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x547700: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x547700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x547704: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x547704u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x547708: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x547708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x54770c: 0x86080006  lh          $t0, 0x6($s0)
    ctx->pc = 0x54770cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x547710: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x547710u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x547714: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x547714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x547718: 0xc15292c  jal         func_54A4B0
    ctx->pc = 0x547718u;
    SET_GPR_U32(ctx, 31, 0x547720u);
    ctx->pc = 0x54771Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547718u;
            // 0x54771c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x54A4B0u;
    if (runtime->hasFunction(0x54A4B0u)) {
        auto targetFn = runtime->lookupFunction(0x54A4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547720u; }
        if (ctx->pc != 0x547720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0054A4B0_0x54a4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547720u; }
        if (ctx->pc != 0x547720u) { return; }
    }
    ctx->pc = 0x547720u;
label_547720:
    // 0x547720: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x547720u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x547724: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x547724u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x547728: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x547728u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x54772c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x54772cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x547730: 0x86090006  lh          $t1, 0x6($s0)
    ctx->pc = 0x547730u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x547734: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x547734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x547738: 0x2423821  addu        $a3, $s2, $v0
    ctx->pc = 0x547738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x54773c: 0xc151dec  jal         func_5477B0
    ctx->pc = 0x54773Cu;
    SET_GPR_U32(ctx, 31, 0x547744u);
    ctx->pc = 0x547740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54773Cu;
            // 0x547740: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5477B0u;
    if (runtime->hasFunction(0x5477B0u)) {
        auto targetFn = runtime->lookupFunction(0x5477B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547744u; }
        if (ctx->pc != 0x547744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005477B0_0x5477b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547744u; }
        if (ctx->pc != 0x547744u) { return; }
    }
    ctx->pc = 0x547744u;
label_547744:
    // 0x547744: 0x8ea3005c  lw          $v1, 0x5C($s5)
    ctx->pc = 0x547744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x547748: 0x5683000d  bnel        $s4, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x547748u;
    {
        const bool branch_taken_0x547748 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x547748) {
            ctx->pc = 0x54774Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x547748u;
            // 0x54774c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x547780u;
            goto label_547780;
        }
    }
    ctx->pc = 0x547750u;
    // 0x547750: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x547750u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x547754: 0x2665fff8  addiu       $a1, $s3, -0x8
    ctx->pc = 0x547754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
    // 0x547758: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x547758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x54775c: 0x2646fff8  addiu       $a2, $s2, -0x8
    ctx->pc = 0x54775cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x547760: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x547760u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x547764: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x547764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x547768: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x547768u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x54776c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x54776cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x547770: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x547770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x547774: 0xc1527c8  jal         func_549F20
    ctx->pc = 0x547774u;
    SET_GPR_U32(ctx, 31, 0x54777Cu);
    ctx->pc = 0x547778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547774u;
            // 0x547778: 0x24480010  addiu       $t0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x549F20u;
    if (runtime->hasFunction(0x549F20u)) {
        auto targetFn = runtime->lookupFunction(0x549F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54777Cu; }
        if (ctx->pc != 0x54777Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00549F20_0x549f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54777Cu; }
        if (ctx->pc != 0x54777Cu) { return; }
    }
    ctx->pc = 0x54777Cu;
label_54777c:
    // 0x54777c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x54777cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_547780:
    // 0x547780: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x547780u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x547784: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x547784u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x547788: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x547788u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x54778c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x54778cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x547790: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x547790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x547794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x547794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x547798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x547798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x54779c: 0x3e00008  jr          $ra
    ctx->pc = 0x54779Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5477A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54779Cu;
            // 0x5477a0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5477A4u;
    // 0x5477a4: 0x0  nop
    ctx->pc = 0x5477a4u;
    // NOP
    // 0x5477a8: 0x0  nop
    ctx->pc = 0x5477a8u;
    // NOP
    // 0x5477ac: 0x0  nop
    ctx->pc = 0x5477acu;
    // NOP
}
