#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00329840
// Address: 0x329840 - 0x329a00
void sub_00329840_0x329840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329840_0x329840");
#endif

    switch (ctx->pc) {
        case 0x329840u: goto label_329840;
        case 0x329844u: goto label_329844;
        case 0x329848u: goto label_329848;
        case 0x32984cu: goto label_32984c;
        case 0x329850u: goto label_329850;
        case 0x329854u: goto label_329854;
        case 0x329858u: goto label_329858;
        case 0x32985cu: goto label_32985c;
        case 0x329860u: goto label_329860;
        case 0x329864u: goto label_329864;
        case 0x329868u: goto label_329868;
        case 0x32986cu: goto label_32986c;
        case 0x329870u: goto label_329870;
        case 0x329874u: goto label_329874;
        case 0x329878u: goto label_329878;
        case 0x32987cu: goto label_32987c;
        case 0x329880u: goto label_329880;
        case 0x329884u: goto label_329884;
        case 0x329888u: goto label_329888;
        case 0x32988cu: goto label_32988c;
        case 0x329890u: goto label_329890;
        case 0x329894u: goto label_329894;
        case 0x329898u: goto label_329898;
        case 0x32989cu: goto label_32989c;
        case 0x3298a0u: goto label_3298a0;
        case 0x3298a4u: goto label_3298a4;
        case 0x3298a8u: goto label_3298a8;
        case 0x3298acu: goto label_3298ac;
        case 0x3298b0u: goto label_3298b0;
        case 0x3298b4u: goto label_3298b4;
        case 0x3298b8u: goto label_3298b8;
        case 0x3298bcu: goto label_3298bc;
        case 0x3298c0u: goto label_3298c0;
        case 0x3298c4u: goto label_3298c4;
        case 0x3298c8u: goto label_3298c8;
        case 0x3298ccu: goto label_3298cc;
        case 0x3298d0u: goto label_3298d0;
        case 0x3298d4u: goto label_3298d4;
        case 0x3298d8u: goto label_3298d8;
        case 0x3298dcu: goto label_3298dc;
        case 0x3298e0u: goto label_3298e0;
        case 0x3298e4u: goto label_3298e4;
        case 0x3298e8u: goto label_3298e8;
        case 0x3298ecu: goto label_3298ec;
        case 0x3298f0u: goto label_3298f0;
        case 0x3298f4u: goto label_3298f4;
        case 0x3298f8u: goto label_3298f8;
        case 0x3298fcu: goto label_3298fc;
        case 0x329900u: goto label_329900;
        case 0x329904u: goto label_329904;
        case 0x329908u: goto label_329908;
        case 0x32990cu: goto label_32990c;
        case 0x329910u: goto label_329910;
        case 0x329914u: goto label_329914;
        case 0x329918u: goto label_329918;
        case 0x32991cu: goto label_32991c;
        case 0x329920u: goto label_329920;
        case 0x329924u: goto label_329924;
        case 0x329928u: goto label_329928;
        case 0x32992cu: goto label_32992c;
        case 0x329930u: goto label_329930;
        case 0x329934u: goto label_329934;
        case 0x329938u: goto label_329938;
        case 0x32993cu: goto label_32993c;
        case 0x329940u: goto label_329940;
        case 0x329944u: goto label_329944;
        case 0x329948u: goto label_329948;
        case 0x32994cu: goto label_32994c;
        case 0x329950u: goto label_329950;
        case 0x329954u: goto label_329954;
        case 0x329958u: goto label_329958;
        case 0x32995cu: goto label_32995c;
        case 0x329960u: goto label_329960;
        case 0x329964u: goto label_329964;
        case 0x329968u: goto label_329968;
        case 0x32996cu: goto label_32996c;
        case 0x329970u: goto label_329970;
        case 0x329974u: goto label_329974;
        case 0x329978u: goto label_329978;
        case 0x32997cu: goto label_32997c;
        case 0x329980u: goto label_329980;
        case 0x329984u: goto label_329984;
        case 0x329988u: goto label_329988;
        case 0x32998cu: goto label_32998c;
        case 0x329990u: goto label_329990;
        case 0x329994u: goto label_329994;
        case 0x329998u: goto label_329998;
        case 0x32999cu: goto label_32999c;
        case 0x3299a0u: goto label_3299a0;
        case 0x3299a4u: goto label_3299a4;
        case 0x3299a8u: goto label_3299a8;
        case 0x3299acu: goto label_3299ac;
        case 0x3299b0u: goto label_3299b0;
        case 0x3299b4u: goto label_3299b4;
        case 0x3299b8u: goto label_3299b8;
        case 0x3299bcu: goto label_3299bc;
        case 0x3299c0u: goto label_3299c0;
        case 0x3299c4u: goto label_3299c4;
        case 0x3299c8u: goto label_3299c8;
        case 0x3299ccu: goto label_3299cc;
        case 0x3299d0u: goto label_3299d0;
        case 0x3299d4u: goto label_3299d4;
        case 0x3299d8u: goto label_3299d8;
        case 0x3299dcu: goto label_3299dc;
        case 0x3299e0u: goto label_3299e0;
        case 0x3299e4u: goto label_3299e4;
        case 0x3299e8u: goto label_3299e8;
        case 0x3299ecu: goto label_3299ec;
        case 0x3299f0u: goto label_3299f0;
        case 0x3299f4u: goto label_3299f4;
        case 0x3299f8u: goto label_3299f8;
        case 0x3299fcu: goto label_3299fc;
        default: break;
    }

    ctx->pc = 0x329840u;

label_329840:
    // 0x329840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x329840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_329844:
    // 0x329844: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x329844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_329848:
    // 0x329848: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x329848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_32984c:
    // 0x32984c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x32984cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_329850:
    // 0x329850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_329854:
    // 0x329854: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x329854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_329858:
    // 0x329858: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x329858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32985c:
    // 0x32985c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x32985cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_329860:
    // 0x329860: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_329864:
    if (ctx->pc == 0x329864u) {
        ctx->pc = 0x329864u;
            // 0x329864: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x329868u;
        goto label_329868;
    }
    ctx->pc = 0x329860u;
    {
        const bool branch_taken_0x329860 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x329864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329860u;
            // 0x329864: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329860) {
            ctx->pc = 0x329870u;
            goto label_329870;
        }
    }
    ctx->pc = 0x329868u;
label_329868:
    // 0x329868: 0x10000009  b           . + 4 + (0x9 << 2)
label_32986c:
    if (ctx->pc == 0x32986Cu) {
        ctx->pc = 0x32986Cu;
            // 0x32986c: 0x92290010  lbu         $t1, 0x10($s1) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x329870u;
        goto label_329870;
    }
    ctx->pc = 0x329868u;
    {
        const bool branch_taken_0x329868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32986Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329868u;
            // 0x32986c: 0x92290010  lbu         $t1, 0x10($s1) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329868) {
            ctx->pc = 0x329890u;
            goto label_329890;
        }
    }
    ctx->pc = 0x329870u;
label_329870:
    // 0x329870: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x329870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_329874:
    // 0x329874: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x329874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_329878:
    // 0x329878: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x329878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32987c:
    // 0x32987c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x32987cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_329880:
    // 0x329880: 0x320f809  jalr        $t9
label_329884:
    if (ctx->pc == 0x329884u) {
        ctx->pc = 0x329888u;
        goto label_329888;
    }
    ctx->pc = 0x329880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x329888u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x329888u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x329888u; }
            if (ctx->pc != 0x329888u) { return; }
        }
        }
    }
    ctx->pc = 0x329888u;
label_329888:
    // 0x329888: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x329888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32988c:
    // 0x32988c: 0x92290010  lbu         $t1, 0x10($s1)
    ctx->pc = 0x32988cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_329890:
    // 0x329890: 0x3408ea60  ori         $t0, $zero, 0xEA60
    ctx->pc = 0x329890u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_329894:
    // 0x329894: 0x922b0011  lbu         $t3, 0x11($s1)
    ctx->pc = 0x329894u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_329898:
    // 0x329898: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x329898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_32989c:
    // 0x32989c: 0x34654dd3  ori         $a1, $v1, 0x4DD3
    ctx->pc = 0x32989cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_3298a0:
    // 0x3298a0: 0x240703e8  addiu       $a3, $zero, 0x3E8
    ctx->pc = 0x3298a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_3298a4:
    // 0x3298a4: 0x1284818  mult        $t1, $t1, $t0
    ctx->pc = 0x3298a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3298a8:
    // 0x3298a8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x3298a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3298ac:
    // 0x3298ac: 0xb5140  sll         $t2, $t3, 5
    ctx->pc = 0x3298acu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
label_3298b0:
    // 0x3298b0: 0x962c0012  lhu         $t4, 0x12($s1)
    ctx->pc = 0x3298b0u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_3298b4:
    // 0x3298b4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x3298b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3298b8:
    // 0x3298b8: 0x14b4023  subu        $t0, $t2, $t3
    ctx->pc = 0x3298b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_3298bc:
    // 0x3298bc: 0xae26001c  sw          $a2, 0x1C($s1)
    ctx->pc = 0x3298bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 6));
label_3298c0:
    // 0x3298c0: 0x85080  sll         $t2, $t0, 2
    ctx->pc = 0x3298c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3298c4:
    // 0x3298c4: 0xc34023  subu        $t0, $a2, $v1
    ctx->pc = 0x3298c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3298c8:
    // 0x3298c8: 0x107001b  divu        $zero, $t0, $a3
    ctx->pc = 0x3298c8u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
label_3298cc:
    // 0x3298cc: 0x14b1821  addu        $v1, $t2, $t3
    ctx->pc = 0x3298ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_3298d0:
    // 0x3298d0: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x3298d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3298d4:
    // 0x3298d4: 0x1863021  addu        $a2, $t4, $a2
    ctx->pc = 0x3298d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
label_3298d8:
    // 0x3298d8: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x3298d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_3298dc:
    // 0x3298dc: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x3298dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_3298e0:
    // 0x3298e0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3298e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_3298e4:
    // 0x3298e4: 0x3010  mfhi        $a2
    ctx->pc = 0x3298e4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_3298e8:
    // 0x3298e8: 0xa80019  multu       $a1, $t0
    ctx->pc = 0x3298e8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3298ec:
    // 0x3298ec: 0xa6060002  sh          $a2, 0x2($s0)
    ctx->pc = 0x3298ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 6));
label_3298f0:
    // 0x3298f0: 0x0  nop
    ctx->pc = 0x3298f0u;
    // NOP
label_3298f4:
    // 0x3298f4: 0x2810  mfhi        $a1
    ctx->pc = 0x3298f4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3298f8:
    // 0x3298f8: 0x52982  srl         $a1, $a1, 6
    ctx->pc = 0x3298f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
label_3298fc:
    // 0x3298fc: 0x650019  multu       $v1, $a1
    ctx->pc = 0x3298fcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_329900:
    // 0x329900: 0x1810  mfhi        $v1
    ctx->pc = 0x329900u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_329904:
    // 0x329904: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x329904u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_329908:
    // 0x329908: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x329908u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_32990c:
    // 0x32990c: 0x0  nop
    ctx->pc = 0x32990cu;
    // NOP
label_329910:
    // 0x329910: 0x1810  mfhi        $v1
    ctx->pc = 0x329910u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_329914:
    // 0x329914: 0x28810100  slti        $at, $a0, 0x100
    ctx->pc = 0x329914u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
label_329918:
    // 0x329918: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_32991c:
    if (ctx->pc == 0x32991Cu) {
        ctx->pc = 0x32991Cu;
            // 0x32991c: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x329920u;
        goto label_329920;
    }
    ctx->pc = 0x329918u;
    {
        const bool branch_taken_0x329918 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x32991Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329918u;
            // 0x32991c: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329918) {
            ctx->pc = 0x329934u;
            goto label_329934;
        }
    }
    ctx->pc = 0x329920u;
label_329920:
    // 0x329920: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x329920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_329924:
    // 0x329924: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x329924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_329928:
    // 0x329928: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x329928u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_32992c:
    // 0x32992c: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x32992cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_329930:
    // 0x329930: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x329930u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_329934:
    // 0x329934: 0x109082b  sltu        $at, $t0, $t1
    ctx->pc = 0x329934u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_329938:
    // 0x329938: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_32993c:
    if (ctx->pc == 0x32993Cu) {
        ctx->pc = 0x32993Cu;
            // 0x32993c: 0xa2040000  sb          $a0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x329940u;
        goto label_329940;
    }
    ctx->pc = 0x329938u;
    {
        const bool branch_taken_0x329938 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x32993Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329938u;
            // 0x32993c: 0xa2040000  sb          $a0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329938) {
            ctx->pc = 0x329948u;
            goto label_329948;
        }
    }
    ctx->pc = 0x329940u;
label_329940:
    // 0x329940: 0x5520002a  bnel        $t1, $zero, . + 4 + (0x2A << 2)
label_329944:
    if (ctx->pc == 0x329944u) {
        ctx->pc = 0x329944u;
            // 0x329944: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x329948u;
        goto label_329948;
    }
    ctx->pc = 0x329940u;
    {
        const bool branch_taken_0x329940 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x329940) {
            ctx->pc = 0x329944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329940u;
            // 0x329944: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3299ECu;
            goto label_3299ec;
        }
    }
    ctx->pc = 0x329948u;
label_329948:
    // 0x329948: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x329948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32994c:
    // 0x32994c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x32994cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_329950:
    // 0x329950: 0xc04a508  jal         func_129420
label_329954:
    if (ctx->pc == 0x329954u) {
        ctx->pc = 0x329954u;
            // 0x329954: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x329958u;
        goto label_329958;
    }
    ctx->pc = 0x329950u;
    SET_GPR_U32(ctx, 31, 0x329958u);
    ctx->pc = 0x329954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329950u;
            // 0x329954: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329958u; }
        if (ctx->pc != 0x329958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329958u; }
        if (ctx->pc != 0x329958u) { return; }
    }
    ctx->pc = 0x329958u;
label_329958:
    // 0x329958: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x329958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_32995c:
    // 0x32995c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x32995cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_329960:
    // 0x329960: 0x8c630960  lw          $v1, 0x960($v1)
    ctx->pc = 0x329960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2400)));
label_329964:
    // 0x329964: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x329964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_329968:
    // 0x329968: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_32996c:
    if (ctx->pc == 0x32996Cu) {
        ctx->pc = 0x329970u;
        goto label_329970;
    }
    ctx->pc = 0x329968u;
    {
        const bool branch_taken_0x329968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x329968) {
            ctx->pc = 0x3299E8u;
            goto label_3299e8;
        }
    }
    ctx->pc = 0x329970u;
label_329970:
    // 0x329970: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x329970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_329974:
    // 0x329974: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x329974u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_329978:
    // 0x329978: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x329978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_32997c:
    // 0x32997c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_329980:
    if (ctx->pc == 0x329980u) {
        ctx->pc = 0x329980u;
            // 0x329980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x329984u;
        goto label_329984;
    }
    ctx->pc = 0x32997Cu;
    {
        const bool branch_taken_0x32997c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x329980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32997Cu;
            // 0x329980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32997c) {
            ctx->pc = 0x329994u;
            goto label_329994;
        }
    }
    ctx->pc = 0x329984u;
label_329984:
    // 0x329984: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x329984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_329988:
    // 0x329988: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_32998c:
    if (ctx->pc == 0x32998Cu) {
        ctx->pc = 0x329990u;
        goto label_329990;
    }
    ctx->pc = 0x329988u;
    {
        const bool branch_taken_0x329988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x329988) {
            ctx->pc = 0x329994u;
            goto label_329994;
        }
    }
    ctx->pc = 0x329990u;
label_329990:
    // 0x329990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x329990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329994:
    // 0x329994: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_329998:
    if (ctx->pc == 0x329998u) {
        ctx->pc = 0x32999Cu;
        goto label_32999c;
    }
    ctx->pc = 0x329994u;
    {
        const bool branch_taken_0x329994 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x329994) {
            ctx->pc = 0x3299B0u;
            goto label_3299b0;
        }
    }
    ctx->pc = 0x32999Cu;
label_32999c:
    // 0x32999c: 0xc075eb4  jal         func_1D7AD0
label_3299a0:
    if (ctx->pc == 0x3299A0u) {
        ctx->pc = 0x3299A4u;
        goto label_3299a4;
    }
    ctx->pc = 0x32999Cu;
    SET_GPR_U32(ctx, 31, 0x3299A4u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3299A4u; }
        if (ctx->pc != 0x3299A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3299A4u; }
        if (ctx->pc != 0x3299A4u) { return; }
    }
    ctx->pc = 0x3299A4u;
label_3299a4:
    // 0x3299a4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3299a8:
    if (ctx->pc == 0x3299A8u) {
        ctx->pc = 0x3299ACu;
        goto label_3299ac;
    }
    ctx->pc = 0x3299A4u;
    {
        const bool branch_taken_0x3299a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3299a4) {
            ctx->pc = 0x3299B0u;
            goto label_3299b0;
        }
    }
    ctx->pc = 0x3299ACu;
label_3299ac:
    // 0x3299ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3299acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3299b0:
    // 0x3299b0: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_3299b4:
    if (ctx->pc == 0x3299B4u) {
        ctx->pc = 0x3299B8u;
        goto label_3299b8;
    }
    ctx->pc = 0x3299B0u;
    {
        const bool branch_taken_0x3299b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3299b0) {
            ctx->pc = 0x3299CCu;
            goto label_3299cc;
        }
    }
    ctx->pc = 0x3299B8u;
label_3299b8:
    // 0x3299b8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3299b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3299bc:
    // 0x3299bc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3299bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3299c0:
    // 0x3299c0: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x3299c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_3299c4:
    // 0x3299c4: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_3299c8:
    if (ctx->pc == 0x3299C8u) {
        ctx->pc = 0x3299CCu;
        goto label_3299cc;
    }
    ctx->pc = 0x3299C4u;
    {
        const bool branch_taken_0x3299c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3299c4) {
            ctx->pc = 0x3299E8u;
            goto label_3299e8;
        }
    }
    ctx->pc = 0x3299CCu;
label_3299cc:
    // 0x3299cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3299ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3299d0:
    // 0x3299d0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3299d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3299d4:
    // 0x3299d4: 0x8c440eac  lw          $a0, 0xEAC($v0)
    ctx->pc = 0x3299d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_3299d8:
    // 0x3299d8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3299d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3299dc:
    // 0x3299dc: 0xc44c7660  lwc1        $f12, 0x7660($v0)
    ctx->pc = 0x3299dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 30304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3299e0:
    // 0x3299e0: 0xc0e938c  jal         func_3A4E30
label_3299e4:
    if (ctx->pc == 0x3299E4u) {
        ctx->pc = 0x3299E4u;
            // 0x3299e4: 0x8c650d98  lw          $a1, 0xD98($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3480)));
        ctx->pc = 0x3299E8u;
        goto label_3299e8;
    }
    ctx->pc = 0x3299E0u;
    SET_GPR_U32(ctx, 31, 0x3299E8u);
    ctx->pc = 0x3299E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3299E0u;
            // 0x3299e4: 0x8c650d98  lw          $a1, 0xD98($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3480)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E30u;
    if (runtime->hasFunction(0x3A4E30u)) {
        auto targetFn = runtime->lookupFunction(0x3A4E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3299E8u; }
        if (ctx->pc != 0x3299E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A4E30_0x3a4e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3299E8u; }
        if (ctx->pc != 0x3299E8u) { return; }
    }
    ctx->pc = 0x3299E8u;
label_3299e8:
    // 0x3299e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3299e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3299ec:
    // 0x3299ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3299ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3299f0:
    // 0x3299f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3299f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3299f4:
    // 0x3299f4: 0x3e00008  jr          $ra
label_3299f8:
    if (ctx->pc == 0x3299F8u) {
        ctx->pc = 0x3299F8u;
            // 0x3299f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3299FCu;
        goto label_3299fc;
    }
    ctx->pc = 0x3299F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3299F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3299F4u;
            // 0x3299f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3299FCu;
label_3299fc:
    // 0x3299fc: 0x0  nop
    ctx->pc = 0x3299fcu;
    // NOP
}
