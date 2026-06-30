#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005237F0
// Address: 0x5237f0 - 0x5239e0
void sub_005237F0_0x5237f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005237F0_0x5237f0");
#endif

    switch (ctx->pc) {
        case 0x5237f0u: goto label_5237f0;
        case 0x5237f4u: goto label_5237f4;
        case 0x5237f8u: goto label_5237f8;
        case 0x5237fcu: goto label_5237fc;
        case 0x523800u: goto label_523800;
        case 0x523804u: goto label_523804;
        case 0x523808u: goto label_523808;
        case 0x52380cu: goto label_52380c;
        case 0x523810u: goto label_523810;
        case 0x523814u: goto label_523814;
        case 0x523818u: goto label_523818;
        case 0x52381cu: goto label_52381c;
        case 0x523820u: goto label_523820;
        case 0x523824u: goto label_523824;
        case 0x523828u: goto label_523828;
        case 0x52382cu: goto label_52382c;
        case 0x523830u: goto label_523830;
        case 0x523834u: goto label_523834;
        case 0x523838u: goto label_523838;
        case 0x52383cu: goto label_52383c;
        case 0x523840u: goto label_523840;
        case 0x523844u: goto label_523844;
        case 0x523848u: goto label_523848;
        case 0x52384cu: goto label_52384c;
        case 0x523850u: goto label_523850;
        case 0x523854u: goto label_523854;
        case 0x523858u: goto label_523858;
        case 0x52385cu: goto label_52385c;
        case 0x523860u: goto label_523860;
        case 0x523864u: goto label_523864;
        case 0x523868u: goto label_523868;
        case 0x52386cu: goto label_52386c;
        case 0x523870u: goto label_523870;
        case 0x523874u: goto label_523874;
        case 0x523878u: goto label_523878;
        case 0x52387cu: goto label_52387c;
        case 0x523880u: goto label_523880;
        case 0x523884u: goto label_523884;
        case 0x523888u: goto label_523888;
        case 0x52388cu: goto label_52388c;
        case 0x523890u: goto label_523890;
        case 0x523894u: goto label_523894;
        case 0x523898u: goto label_523898;
        case 0x52389cu: goto label_52389c;
        case 0x5238a0u: goto label_5238a0;
        case 0x5238a4u: goto label_5238a4;
        case 0x5238a8u: goto label_5238a8;
        case 0x5238acu: goto label_5238ac;
        case 0x5238b0u: goto label_5238b0;
        case 0x5238b4u: goto label_5238b4;
        case 0x5238b8u: goto label_5238b8;
        case 0x5238bcu: goto label_5238bc;
        case 0x5238c0u: goto label_5238c0;
        case 0x5238c4u: goto label_5238c4;
        case 0x5238c8u: goto label_5238c8;
        case 0x5238ccu: goto label_5238cc;
        case 0x5238d0u: goto label_5238d0;
        case 0x5238d4u: goto label_5238d4;
        case 0x5238d8u: goto label_5238d8;
        case 0x5238dcu: goto label_5238dc;
        case 0x5238e0u: goto label_5238e0;
        case 0x5238e4u: goto label_5238e4;
        case 0x5238e8u: goto label_5238e8;
        case 0x5238ecu: goto label_5238ec;
        case 0x5238f0u: goto label_5238f0;
        case 0x5238f4u: goto label_5238f4;
        case 0x5238f8u: goto label_5238f8;
        case 0x5238fcu: goto label_5238fc;
        case 0x523900u: goto label_523900;
        case 0x523904u: goto label_523904;
        case 0x523908u: goto label_523908;
        case 0x52390cu: goto label_52390c;
        case 0x523910u: goto label_523910;
        case 0x523914u: goto label_523914;
        case 0x523918u: goto label_523918;
        case 0x52391cu: goto label_52391c;
        case 0x523920u: goto label_523920;
        case 0x523924u: goto label_523924;
        case 0x523928u: goto label_523928;
        case 0x52392cu: goto label_52392c;
        case 0x523930u: goto label_523930;
        case 0x523934u: goto label_523934;
        case 0x523938u: goto label_523938;
        case 0x52393cu: goto label_52393c;
        case 0x523940u: goto label_523940;
        case 0x523944u: goto label_523944;
        case 0x523948u: goto label_523948;
        case 0x52394cu: goto label_52394c;
        case 0x523950u: goto label_523950;
        case 0x523954u: goto label_523954;
        case 0x523958u: goto label_523958;
        case 0x52395cu: goto label_52395c;
        case 0x523960u: goto label_523960;
        case 0x523964u: goto label_523964;
        case 0x523968u: goto label_523968;
        case 0x52396cu: goto label_52396c;
        case 0x523970u: goto label_523970;
        case 0x523974u: goto label_523974;
        case 0x523978u: goto label_523978;
        case 0x52397cu: goto label_52397c;
        case 0x523980u: goto label_523980;
        case 0x523984u: goto label_523984;
        case 0x523988u: goto label_523988;
        case 0x52398cu: goto label_52398c;
        case 0x523990u: goto label_523990;
        case 0x523994u: goto label_523994;
        case 0x523998u: goto label_523998;
        case 0x52399cu: goto label_52399c;
        case 0x5239a0u: goto label_5239a0;
        case 0x5239a4u: goto label_5239a4;
        case 0x5239a8u: goto label_5239a8;
        case 0x5239acu: goto label_5239ac;
        case 0x5239b0u: goto label_5239b0;
        case 0x5239b4u: goto label_5239b4;
        case 0x5239b8u: goto label_5239b8;
        case 0x5239bcu: goto label_5239bc;
        case 0x5239c0u: goto label_5239c0;
        case 0x5239c4u: goto label_5239c4;
        case 0x5239c8u: goto label_5239c8;
        case 0x5239ccu: goto label_5239cc;
        case 0x5239d0u: goto label_5239d0;
        case 0x5239d4u: goto label_5239d4;
        case 0x5239d8u: goto label_5239d8;
        case 0x5239dcu: goto label_5239dc;
        default: break;
    }

    ctx->pc = 0x5237f0u;

label_5237f0:
    // 0x5237f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5237f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_5237f4:
    // 0x5237f4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x5237f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_5237f8:
    // 0x5237f8: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x5237f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_5237fc:
    // 0x5237fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_523800:
    if (ctx->pc == 0x523800u) {
        ctx->pc = 0x523800u;
            // 0x523800: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x523804u;
        goto label_523804;
    }
    ctx->pc = 0x5237FCu;
    {
        const bool branch_taken_0x5237fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x523800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5237FCu;
            // 0x523800: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5237fc) {
            ctx->pc = 0x523814u;
            goto label_523814;
        }
    }
    ctx->pc = 0x523804u;
label_523804:
    // 0x523804: 0xc0538d8  jal         func_14E360
label_523808:
    if (ctx->pc == 0x523808u) {
        ctx->pc = 0x52380Cu;
        goto label_52380c;
    }
    ctx->pc = 0x523804u;
    SET_GPR_U32(ctx, 31, 0x52380Cu);
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52380Cu; }
        if (ctx->pc != 0x52380Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52380Cu; }
        if (ctx->pc != 0x52380Cu) { return; }
    }
    ctx->pc = 0x52380Cu;
label_52380c:
    // 0x52380c: 0x10000004  b           . + 4 + (0x4 << 2)
label_523810:
    if (ctx->pc == 0x523810u) {
        ctx->pc = 0x523810u;
            // 0x523810: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x523814u;
        goto label_523814;
    }
    ctx->pc = 0x52380Cu;
    {
        const bool branch_taken_0x52380c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x523810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52380Cu;
            // 0x523810: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52380c) {
            ctx->pc = 0x523820u;
            goto label_523820;
        }
    }
    ctx->pc = 0x523814u;
label_523814:
    // 0x523814: 0xc050044  jal         func_140110
label_523818:
    if (ctx->pc == 0x523818u) {
        ctx->pc = 0x52381Cu;
        goto label_52381c;
    }
    ctx->pc = 0x523814u;
    SET_GPR_U32(ctx, 31, 0x52381Cu);
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52381Cu; }
        if (ctx->pc != 0x52381Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52381Cu; }
        if (ctx->pc != 0x52381Cu) { return; }
    }
    ctx->pc = 0x52381Cu;
label_52381c:
    // 0x52381c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x52381cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_523820:
    // 0x523820: 0x3e00008  jr          $ra
label_523824:
    if (ctx->pc == 0x523824u) {
        ctx->pc = 0x523824u;
            // 0x523824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x523828u;
        goto label_523828;
    }
    ctx->pc = 0x523820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x523824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523820u;
            // 0x523824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523828u;
label_523828:
    // 0x523828: 0x0  nop
    ctx->pc = 0x523828u;
    // NOP
label_52382c:
    // 0x52382c: 0x0  nop
    ctx->pc = 0x52382cu;
    // NOP
label_523830:
    // 0x523830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x523830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_523834:
    // 0x523834: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x523834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_523838:
    // 0x523838: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x523838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_52383c:
    // 0x52383c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52383cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_523840:
    // 0x523840: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x523840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_523844:
    // 0x523844: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x523844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_523848:
    // 0x523848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x523848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52384c:
    // 0x52384c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x52384cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_523850:
    // 0x523850: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_523854:
    if (ctx->pc == 0x523854u) {
        ctx->pc = 0x523854u;
            // 0x523854: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523858u;
        goto label_523858;
    }
    ctx->pc = 0x523850u;
    {
        const bool branch_taken_0x523850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x523854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523850u;
            // 0x523854: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x523850) {
            ctx->pc = 0x523884u;
            goto label_523884;
        }
    }
    ctx->pc = 0x523858u;
label_523858:
    // 0x523858: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x523858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_52385c:
    // 0x52385c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_523860:
    if (ctx->pc == 0x523860u) {
        ctx->pc = 0x523860u;
            // 0x523860: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x523864u;
        goto label_523864;
    }
    ctx->pc = 0x52385Cu;
    {
        const bool branch_taken_0x52385c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52385c) {
            ctx->pc = 0x523860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52385Cu;
            // 0x523860: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x523878u;
            goto label_523878;
        }
    }
    ctx->pc = 0x523864u;
label_523864:
    // 0x523864: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x523864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_523868:
    // 0x523868: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
label_52386c:
    if (ctx->pc == 0x52386Cu) {
        ctx->pc = 0x523870u;
        goto label_523870;
    }
    ctx->pc = 0x523868u;
    {
        const bool branch_taken_0x523868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x523868) {
            ctx->pc = 0x523938u;
            goto label_523938;
        }
    }
    ctx->pc = 0x523870u;
label_523870:
    // 0x523870: 0x10000031  b           . + 4 + (0x31 << 2)
label_523874:
    if (ctx->pc == 0x523874u) {
        ctx->pc = 0x523878u;
        goto label_523878;
    }
    ctx->pc = 0x523870u;
    {
        const bool branch_taken_0x523870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x523870) {
            ctx->pc = 0x523938u;
            goto label_523938;
        }
    }
    ctx->pc = 0x523878u;
label_523878:
    // 0x523878: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x523878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_52387c:
    // 0x52387c: 0x320f809  jalr        $t9
label_523880:
    if (ctx->pc == 0x523880u) {
        ctx->pc = 0x523884u;
        goto label_523884;
    }
    ctx->pc = 0x52387Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x523884u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x523884u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x523884u; }
            if (ctx->pc != 0x523884u) { return; }
        }
        }
    }
    ctx->pc = 0x523884u;
label_523884:
    // 0x523884: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x523884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_523888:
    // 0x523888: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x523888u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_52388c:
    // 0x52388c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_523890:
    if (ctx->pc == 0x523890u) {
        ctx->pc = 0x523890u;
            // 0x523890: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x523894u;
        goto label_523894;
    }
    ctx->pc = 0x52388Cu;
    {
        const bool branch_taken_0x52388c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x523890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52388Cu;
            // 0x523890: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52388c) {
            ctx->pc = 0x523904u;
            goto label_523904;
        }
    }
    ctx->pc = 0x523894u;
label_523894:
    // 0x523894: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x523894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_523898:
    // 0x523898: 0x2486001c  addiu       $a2, $a0, 0x1C
    ctx->pc = 0x523898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_52389c:
    // 0x52389c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x52389cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_5238a0:
    // 0x5238a0: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x5238a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5238a4:
    // 0x5238a4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x5238a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5238a8:
    // 0x5238a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x5238a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_5238ac:
    // 0x5238ac: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x5238acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_5238b0:
    // 0x5238b0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x5238b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_5238b4:
    // 0x5238b4: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x5238b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5238b8:
    // 0x5238b8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x5238b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5238bc:
    // 0x5238bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x5238bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5238c0:
    // 0x5238c0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_5238c4:
    if (ctx->pc == 0x5238C4u) {
        ctx->pc = 0x5238C4u;
            // 0x5238c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5238C8u;
        goto label_5238c8;
    }
    ctx->pc = 0x5238C0u;
    {
        const bool branch_taken_0x5238c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x5238C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5238C0u;
            // 0x5238c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5238c0) {
            ctx->pc = 0x5238CCu;
            goto label_5238cc;
        }
    }
    ctx->pc = 0x5238C8u;
label_5238c8:
    // 0x5238c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5238c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5238cc:
    // 0x5238cc: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_5238d0:
    if (ctx->pc == 0x5238D0u) {
        ctx->pc = 0x5238D0u;
            // 0x5238d0: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x5238D4u;
        goto label_5238d4;
    }
    ctx->pc = 0x5238CCu;
    {
        const bool branch_taken_0x5238cc = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x5238cc) {
            ctx->pc = 0x5238D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5238CCu;
            // 0x5238d0: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5238E0u;
            goto label_5238e0;
        }
    }
    ctx->pc = 0x5238D4u;
label_5238d4:
    // 0x5238d4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x5238d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5238d8:
    // 0x5238d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_5238dc:
    if (ctx->pc == 0x5238DCu) {
        ctx->pc = 0x5238DCu;
            // 0x5238dc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5238E0u;
        goto label_5238e0;
    }
    ctx->pc = 0x5238D8u;
    {
        const bool branch_taken_0x5238d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5238DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5238D8u;
            // 0x5238dc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5238d8) {
            ctx->pc = 0x5238F8u;
            goto label_5238f8;
        }
    }
    ctx->pc = 0x5238E0u;
label_5238e0:
    // 0x5238e0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x5238e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_5238e4:
    // 0x5238e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x5238e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_5238e8:
    // 0x5238e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x5238e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5238ec:
    // 0x5238ec: 0x0  nop
    ctx->pc = 0x5238ecu;
    // NOP
label_5238f0:
    // 0x5238f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x5238f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_5238f4:
    // 0x5238f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x5238f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_5238f8:
    // 0x5238f8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x5238f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5238fc:
    // 0x5238fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x5238fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_523900:
    // 0x523900: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x523900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_523904:
    // 0x523904: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_523908:
    if (ctx->pc == 0x523908u) {
        ctx->pc = 0x52390Cu;
        goto label_52390c;
    }
    ctx->pc = 0x523904u;
    {
        const bool branch_taken_0x523904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x523904) {
            ctx->pc = 0x523938u;
            goto label_523938;
        }
    }
    ctx->pc = 0x52390Cu;
label_52390c:
    // 0x52390c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x52390cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_523910:
    // 0x523910: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x523910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_523914:
    // 0x523914: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x523914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_523918:
    // 0x523918: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x523918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_52391c:
    // 0x52391c: 0xc0e3658  jal         func_38D960
label_523920:
    if (ctx->pc == 0x523920u) {
        ctx->pc = 0x523920u;
            // 0x523920: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x523924u;
        goto label_523924;
    }
    ctx->pc = 0x52391Cu;
    SET_GPR_U32(ctx, 31, 0x523924u);
    ctx->pc = 0x523920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52391Cu;
            // 0x523920: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523924u; }
        if (ctx->pc != 0x523924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523924u; }
        if (ctx->pc != 0x523924u) { return; }
    }
    ctx->pc = 0x523924u;
label_523924:
    // 0x523924: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x523924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_523928:
    // 0x523928: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x523928u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_52392c:
    // 0x52392c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_523930:
    if (ctx->pc == 0x523930u) {
        ctx->pc = 0x523930u;
            // 0x523930: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x523934u;
        goto label_523934;
    }
    ctx->pc = 0x52392Cu;
    {
        const bool branch_taken_0x52392c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x523930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52392Cu;
            // 0x523930: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52392c) {
            ctx->pc = 0x523914u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_523914;
        }
    }
    ctx->pc = 0x523934u;
label_523934:
    // 0x523934: 0x0  nop
    ctx->pc = 0x523934u;
    // NOP
label_523938:
    // 0x523938: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x523938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_52393c:
    // 0x52393c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52393cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_523940:
    // 0x523940: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x523940u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_523944:
    // 0x523944: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x523944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_523948:
    // 0x523948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x523948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52394c:
    // 0x52394c: 0x3e00008  jr          $ra
label_523950:
    if (ctx->pc == 0x523950u) {
        ctx->pc = 0x523950u;
            // 0x523950: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x523954u;
        goto label_523954;
    }
    ctx->pc = 0x52394Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x523950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52394Cu;
            // 0x523950: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523954u;
label_523954:
    // 0x523954: 0x0  nop
    ctx->pc = 0x523954u;
    // NOP
label_523958:
    // 0x523958: 0x0  nop
    ctx->pc = 0x523958u;
    // NOP
label_52395c:
    // 0x52395c: 0x0  nop
    ctx->pc = 0x52395cu;
    // NOP
label_523960:
    // 0x523960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x523960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_523964:
    // 0x523964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x523964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_523968:
    // 0x523968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x523968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52396c:
    // 0x52396c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52396cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_523970:
    // 0x523970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x523970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_523974:
    // 0x523974: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x523974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_523978:
    // 0x523978: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x523978u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_52397c:
    // 0x52397c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_523980:
    if (ctx->pc == 0x523980u) {
        ctx->pc = 0x523980u;
            // 0x523980: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523984u;
        goto label_523984;
    }
    ctx->pc = 0x52397Cu;
    {
        const bool branch_taken_0x52397c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x523980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52397Cu;
            // 0x523980: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52397c) {
            ctx->pc = 0x5239B8u;
            goto label_5239b8;
        }
    }
    ctx->pc = 0x523984u;
label_523984:
    // 0x523984: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x523984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_523988:
    // 0x523988: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x523988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52398c:
    // 0x52398c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x52398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_523990:
    // 0x523990: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x523990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_523994:
    // 0x523994: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x523994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_523998:
    // 0x523998: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x523998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52399c:
    // 0x52399c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x52399cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_5239a0:
    // 0x5239a0: 0x320f809  jalr        $t9
label_5239a4:
    if (ctx->pc == 0x5239A4u) {
        ctx->pc = 0x5239A8u;
        goto label_5239a8;
    }
    ctx->pc = 0x5239A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5239A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5239A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5239A8u; }
            if (ctx->pc != 0x5239A8u) { return; }
        }
        }
    }
    ctx->pc = 0x5239A8u;
label_5239a8:
    // 0x5239a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x5239a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_5239ac:
    // 0x5239ac: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x5239acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_5239b0:
    // 0x5239b0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_5239b4:
    if (ctx->pc == 0x5239B4u) {
        ctx->pc = 0x5239B4u;
            // 0x5239b4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x5239B8u;
        goto label_5239b8;
    }
    ctx->pc = 0x5239B0u;
    {
        const bool branch_taken_0x5239b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5239B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5239B0u;
            // 0x5239b4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5239b0) {
            ctx->pc = 0x52398Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52398c;
        }
    }
    ctx->pc = 0x5239B8u;
label_5239b8:
    // 0x5239b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x5239b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_5239bc:
    // 0x5239bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5239bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5239c0:
    // 0x5239c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5239c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5239c4:
    // 0x5239c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5239c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5239c8:
    // 0x5239c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5239c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5239cc:
    // 0x5239cc: 0x3e00008  jr          $ra
label_5239d0:
    if (ctx->pc == 0x5239D0u) {
        ctx->pc = 0x5239D0u;
            // 0x5239d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x5239D4u;
        goto label_5239d4;
    }
    ctx->pc = 0x5239CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5239D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5239CCu;
            // 0x5239d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5239D4u;
label_5239d4:
    // 0x5239d4: 0x0  nop
    ctx->pc = 0x5239d4u;
    // NOP
label_5239d8:
    // 0x5239d8: 0x0  nop
    ctx->pc = 0x5239d8u;
    // NOP
label_5239dc:
    // 0x5239dc: 0x0  nop
    ctx->pc = 0x5239dcu;
    // NOP
}
