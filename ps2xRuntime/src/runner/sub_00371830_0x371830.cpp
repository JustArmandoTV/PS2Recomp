#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00371830
// Address: 0x371830 - 0x371a60
void sub_00371830_0x371830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371830_0x371830");
#endif

    switch (ctx->pc) {
        case 0x371830u: goto label_371830;
        case 0x371834u: goto label_371834;
        case 0x371838u: goto label_371838;
        case 0x37183cu: goto label_37183c;
        case 0x371840u: goto label_371840;
        case 0x371844u: goto label_371844;
        case 0x371848u: goto label_371848;
        case 0x37184cu: goto label_37184c;
        case 0x371850u: goto label_371850;
        case 0x371854u: goto label_371854;
        case 0x371858u: goto label_371858;
        case 0x37185cu: goto label_37185c;
        case 0x371860u: goto label_371860;
        case 0x371864u: goto label_371864;
        case 0x371868u: goto label_371868;
        case 0x37186cu: goto label_37186c;
        case 0x371870u: goto label_371870;
        case 0x371874u: goto label_371874;
        case 0x371878u: goto label_371878;
        case 0x37187cu: goto label_37187c;
        case 0x371880u: goto label_371880;
        case 0x371884u: goto label_371884;
        case 0x371888u: goto label_371888;
        case 0x37188cu: goto label_37188c;
        case 0x371890u: goto label_371890;
        case 0x371894u: goto label_371894;
        case 0x371898u: goto label_371898;
        case 0x37189cu: goto label_37189c;
        case 0x3718a0u: goto label_3718a0;
        case 0x3718a4u: goto label_3718a4;
        case 0x3718a8u: goto label_3718a8;
        case 0x3718acu: goto label_3718ac;
        case 0x3718b0u: goto label_3718b0;
        case 0x3718b4u: goto label_3718b4;
        case 0x3718b8u: goto label_3718b8;
        case 0x3718bcu: goto label_3718bc;
        case 0x3718c0u: goto label_3718c0;
        case 0x3718c4u: goto label_3718c4;
        case 0x3718c8u: goto label_3718c8;
        case 0x3718ccu: goto label_3718cc;
        case 0x3718d0u: goto label_3718d0;
        case 0x3718d4u: goto label_3718d4;
        case 0x3718d8u: goto label_3718d8;
        case 0x3718dcu: goto label_3718dc;
        case 0x3718e0u: goto label_3718e0;
        case 0x3718e4u: goto label_3718e4;
        case 0x3718e8u: goto label_3718e8;
        case 0x3718ecu: goto label_3718ec;
        case 0x3718f0u: goto label_3718f0;
        case 0x3718f4u: goto label_3718f4;
        case 0x3718f8u: goto label_3718f8;
        case 0x3718fcu: goto label_3718fc;
        case 0x371900u: goto label_371900;
        case 0x371904u: goto label_371904;
        case 0x371908u: goto label_371908;
        case 0x37190cu: goto label_37190c;
        case 0x371910u: goto label_371910;
        case 0x371914u: goto label_371914;
        case 0x371918u: goto label_371918;
        case 0x37191cu: goto label_37191c;
        case 0x371920u: goto label_371920;
        case 0x371924u: goto label_371924;
        case 0x371928u: goto label_371928;
        case 0x37192cu: goto label_37192c;
        case 0x371930u: goto label_371930;
        case 0x371934u: goto label_371934;
        case 0x371938u: goto label_371938;
        case 0x37193cu: goto label_37193c;
        case 0x371940u: goto label_371940;
        case 0x371944u: goto label_371944;
        case 0x371948u: goto label_371948;
        case 0x37194cu: goto label_37194c;
        case 0x371950u: goto label_371950;
        case 0x371954u: goto label_371954;
        case 0x371958u: goto label_371958;
        case 0x37195cu: goto label_37195c;
        case 0x371960u: goto label_371960;
        case 0x371964u: goto label_371964;
        case 0x371968u: goto label_371968;
        case 0x37196cu: goto label_37196c;
        case 0x371970u: goto label_371970;
        case 0x371974u: goto label_371974;
        case 0x371978u: goto label_371978;
        case 0x37197cu: goto label_37197c;
        case 0x371980u: goto label_371980;
        case 0x371984u: goto label_371984;
        case 0x371988u: goto label_371988;
        case 0x37198cu: goto label_37198c;
        case 0x371990u: goto label_371990;
        case 0x371994u: goto label_371994;
        case 0x371998u: goto label_371998;
        case 0x37199cu: goto label_37199c;
        case 0x3719a0u: goto label_3719a0;
        case 0x3719a4u: goto label_3719a4;
        case 0x3719a8u: goto label_3719a8;
        case 0x3719acu: goto label_3719ac;
        case 0x3719b0u: goto label_3719b0;
        case 0x3719b4u: goto label_3719b4;
        case 0x3719b8u: goto label_3719b8;
        case 0x3719bcu: goto label_3719bc;
        case 0x3719c0u: goto label_3719c0;
        case 0x3719c4u: goto label_3719c4;
        case 0x3719c8u: goto label_3719c8;
        case 0x3719ccu: goto label_3719cc;
        case 0x3719d0u: goto label_3719d0;
        case 0x3719d4u: goto label_3719d4;
        case 0x3719d8u: goto label_3719d8;
        case 0x3719dcu: goto label_3719dc;
        case 0x3719e0u: goto label_3719e0;
        case 0x3719e4u: goto label_3719e4;
        case 0x3719e8u: goto label_3719e8;
        case 0x3719ecu: goto label_3719ec;
        case 0x3719f0u: goto label_3719f0;
        case 0x3719f4u: goto label_3719f4;
        case 0x3719f8u: goto label_3719f8;
        case 0x3719fcu: goto label_3719fc;
        case 0x371a00u: goto label_371a00;
        case 0x371a04u: goto label_371a04;
        case 0x371a08u: goto label_371a08;
        case 0x371a0cu: goto label_371a0c;
        case 0x371a10u: goto label_371a10;
        case 0x371a14u: goto label_371a14;
        case 0x371a18u: goto label_371a18;
        case 0x371a1cu: goto label_371a1c;
        case 0x371a20u: goto label_371a20;
        case 0x371a24u: goto label_371a24;
        case 0x371a28u: goto label_371a28;
        case 0x371a2cu: goto label_371a2c;
        case 0x371a30u: goto label_371a30;
        case 0x371a34u: goto label_371a34;
        case 0x371a38u: goto label_371a38;
        case 0x371a3cu: goto label_371a3c;
        case 0x371a40u: goto label_371a40;
        case 0x371a44u: goto label_371a44;
        case 0x371a48u: goto label_371a48;
        case 0x371a4cu: goto label_371a4c;
        case 0x371a50u: goto label_371a50;
        case 0x371a54u: goto label_371a54;
        case 0x371a58u: goto label_371a58;
        case 0x371a5cu: goto label_371a5c;
        default: break;
    }

    ctx->pc = 0x371830u;

label_371830:
    // 0x371830: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x371830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_371834:
    // 0x371834: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x371834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_371838:
    // 0x371838: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x371838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37183c:
    // 0x37183c: 0x24424f90  addiu       $v0, $v0, 0x4F90
    ctx->pc = 0x37183cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20368));
label_371840:
    // 0x371840: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x371840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_371844:
    // 0x371844: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x371844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_371848:
    // 0x371848: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x371848u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37184c:
    // 0x37184c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x37184cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_371850:
    // 0x371850: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x371850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_371854:
    // 0x371854: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x371854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_371858:
    // 0x371858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37185c:
    // 0x37185c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x37185cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_371860:
    // 0x371860: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x371860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_371864:
    // 0x371864: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x371864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_371868:
    // 0x371868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x371868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37186c:
    // 0x37186c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x37186cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_371870:
    // 0x371870: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x371870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_371874:
    // 0x371874: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x371874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_371878:
    // 0x371878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x371878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37187c:
    // 0x37187c: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x37187cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_371880:
    // 0x371880: 0x249000a4  addiu       $s0, $a0, 0xA4
    ctx->pc = 0x371880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
label_371884:
    // 0x371884: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x371884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_371888:
    // 0x371888: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x371888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_37188c:
    // 0x37188c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x37188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_371890:
    // 0x371890: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x371890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_371894:
    // 0x371894: 0x0  nop
    ctx->pc = 0x371894u;
    // NOP
label_371898:
    // 0x371898: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x371898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_37189c:
    // 0x37189c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37189cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3718a0:
    // 0x3718a0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3718a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3718a4:
    // 0x3718a4: 0xc04ca18  jal         func_132860
label_3718a8:
    if (ctx->pc == 0x3718A8u) {
        ctx->pc = 0x3718A8u;
            // 0x3718a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3718ACu;
        goto label_3718ac;
    }
    ctx->pc = 0x3718A4u;
    SET_GPR_U32(ctx, 31, 0x3718ACu);
    ctx->pc = 0x3718A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3718A4u;
            // 0x3718a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3718ACu; }
        if (ctx->pc != 0x3718ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3718ACu; }
        if (ctx->pc != 0x3718ACu) { return; }
    }
    ctx->pc = 0x3718ACu;
label_3718ac:
    // 0x3718ac: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3718acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3718b0:
    // 0x3718b0: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x3718b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_3718b4:
    // 0x3718b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3718b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3718b8:
    // 0x3718b8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3718b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3718bc:
    // 0x3718bc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3718bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_3718c0:
    // 0x3718c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3718c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3718c4:
    // 0x3718c4: 0x8c47009c  lw          $a3, 0x9C($v0)
    ctx->pc = 0x3718c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_3718c8:
    // 0x3718c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3718c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3718cc:
    // 0x3718cc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3718ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3718d0:
    // 0x3718d0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3718d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3718d4:
    // 0x3718d4: 0x24424f50  addiu       $v0, $v0, 0x4F50
    ctx->pc = 0x3718d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20304));
label_3718d8:
    // 0x3718d8: 0xc0d37ec  jal         func_34DFB0
label_3718dc:
    if (ctx->pc == 0x3718DCu) {
        ctx->pc = 0x3718DCu;
            // 0x3718dc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3718E0u;
        goto label_3718e0;
    }
    ctx->pc = 0x3718D8u;
    SET_GPR_U32(ctx, 31, 0x3718E0u);
    ctx->pc = 0x3718DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3718D8u;
            // 0x3718dc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3718E0u; }
        if (ctx->pc != 0x3718E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3718E0u; }
        if (ctx->pc != 0x3718E0u) { return; }
    }
    ctx->pc = 0x3718E0u;
label_3718e0:
    // 0x3718e0: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x3718e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_3718e4:
    // 0x3718e4: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x3718e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
label_3718e8:
    // 0x3718e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3718e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3718ec:
    // 0x3718ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3718ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3718f0:
    // 0x3718f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3718f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3718f4:
    // 0x3718f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3718f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3718f8:
    // 0x3718f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3718f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3718fc:
    // 0x3718fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3718fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_371900:
    // 0x371900: 0x3e00008  jr          $ra
label_371904:
    if (ctx->pc == 0x371904u) {
        ctx->pc = 0x371904u;
            // 0x371904: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x371908u;
        goto label_371908;
    }
    ctx->pc = 0x371900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371900u;
            // 0x371904: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x371908u;
label_371908:
    // 0x371908: 0x0  nop
    ctx->pc = 0x371908u;
    // NOP
label_37190c:
    // 0x37190c: 0x0  nop
    ctx->pc = 0x37190cu;
    // NOP
label_371910:
    // 0x371910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x371910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_371914:
    // 0x371914: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x371914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_371918:
    // 0x371918: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x371918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37191c:
    // 0x37191c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37191cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_371920:
    // 0x371920: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x371920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_371924:
    // 0x371924: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x371924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_371928:
    // 0x371928: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x371928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_37192c:
    // 0x37192c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x37192cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_371930:
    // 0x371930: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x371930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_371934:
    // 0x371934: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x371934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_371938:
    // 0x371938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37193c:
    // 0x37193c: 0x24a54e90  addiu       $a1, $a1, 0x4E90
    ctx->pc = 0x37193cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20112));
label_371940:
    // 0x371940: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x371940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_371944:
    // 0x371944: 0xac80010c  sw          $zero, 0x10C($a0)
    ctx->pc = 0x371944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 0));
label_371948:
    // 0x371948: 0xac830108  sw          $v1, 0x108($a0)
    ctx->pc = 0x371948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 3));
label_37194c:
    // 0x37194c: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x37194cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_371950:
    // 0x371950: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x371950u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_371954:
    // 0x371954: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x371954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_371958:
    // 0x371958: 0x24670240  addiu       $a3, $v1, 0x240
    ctx->pc = 0x371958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
label_37195c:
    // 0x37195c: 0xac870118  sw          $a3, 0x118($a0)
    ctx->pc = 0x37195cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 7));
label_371960:
    // 0x371960: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x371960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_371964:
    // 0x371964: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x371964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_371968:
    // 0x371968: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x371968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37196c:
    // 0x37196c: 0x2cc3000c  sltiu       $v1, $a2, 0xC
    ctx->pc = 0x37196cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_371970:
    // 0x371970: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x371970u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_371974:
    // 0x371974: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x371974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_371978:
    // 0x371978: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x371978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_37197c:
    // 0x37197c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_371980:
    if (ctx->pc == 0x371980u) {
        ctx->pc = 0x371980u;
            // 0x371980: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->pc = 0x371984u;
        goto label_371984;
    }
    ctx->pc = 0x37197Cu;
    {
        const bool branch_taken_0x37197c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37197Cu;
            // 0x371980: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37197c) {
            ctx->pc = 0x371960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_371960;
        }
    }
    ctx->pc = 0x371984u;
label_371984:
    // 0x371984: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_371988:
    if (ctx->pc == 0x371988u) {
        ctx->pc = 0x37198Cu;
        goto label_37198c;
    }
    ctx->pc = 0x371984u;
    {
        const bool branch_taken_0x371984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x371984) {
            ctx->pc = 0x371A38u;
            goto label_371a38;
        }
    }
    ctx->pc = 0x37198Cu;
label_37198c:
    // 0x37198c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37198cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_371990:
    // 0x371990: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x371990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_371994:
    // 0x371994: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x371994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_371998:
    // 0x371998: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x371998u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37199c:
    // 0x37199c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x37199cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3719a0:
    // 0x3719a0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3719a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3719a4:
    // 0x3719a4: 0x320f809  jalr        $t9
label_3719a8:
    if (ctx->pc == 0x3719A8u) {
        ctx->pc = 0x3719A8u;
            // 0x3719a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3719ACu;
        goto label_3719ac;
    }
    ctx->pc = 0x3719A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3719ACu);
        ctx->pc = 0x3719A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3719A4u;
            // 0x3719a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3719ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3719ACu; }
            if (ctx->pc != 0x3719ACu) { return; }
        }
        }
    }
    ctx->pc = 0x3719ACu;
label_3719ac:
    // 0x3719ac: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x3719acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_3719b0:
    // 0x3719b0: 0xc0775b0  jal         func_1DD6C0
label_3719b4:
    if (ctx->pc == 0x3719B4u) {
        ctx->pc = 0x3719B4u;
            // 0x3719b4: 0xae400064  sw          $zero, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x3719B8u;
        goto label_3719b8;
    }
    ctx->pc = 0x3719B0u;
    SET_GPR_U32(ctx, 31, 0x3719B8u);
    ctx->pc = 0x3719B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3719B0u;
            // 0x3719b4: 0xae400064  sw          $zero, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3719B8u; }
        if (ctx->pc != 0x3719B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3719B8u; }
        if (ctx->pc != 0x3719B8u) { return; }
    }
    ctx->pc = 0x3719B8u;
label_3719b8:
    // 0x3719b8: 0xc0775ac  jal         func_1DD6B0
label_3719bc:
    if (ctx->pc == 0x3719BCu) {
        ctx->pc = 0x3719BCu;
            // 0x3719bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3719C0u;
        goto label_3719c0;
    }
    ctx->pc = 0x3719B8u;
    SET_GPR_U32(ctx, 31, 0x3719C0u);
    ctx->pc = 0x3719BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3719B8u;
            // 0x3719bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3719C0u; }
        if (ctx->pc != 0x3719C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3719C0u; }
        if (ctx->pc != 0x3719C0u) { return; }
    }
    ctx->pc = 0x3719C0u;
label_3719c0:
    // 0x3719c0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3719c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3719c4:
    // 0x3719c4: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
label_3719c8:
    if (ctx->pc == 0x3719C8u) {
        ctx->pc = 0x3719CCu;
        goto label_3719cc;
    }
    ctx->pc = 0x3719C4u;
    {
        const bool branch_taken_0x3719c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3719c4) {
            ctx->pc = 0x371A18u;
            goto label_371a18;
        }
    }
    ctx->pc = 0x3719CCu;
label_3719cc:
    // 0x3719cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3719ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3719d0:
    // 0x3719d0: 0xc0dc47c  jal         func_3711F0
label_3719d4:
    if (ctx->pc == 0x3719D4u) {
        ctx->pc = 0x3719D4u;
            // 0x3719d4: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x3719D8u;
        goto label_3719d8;
    }
    ctx->pc = 0x3719D0u;
    SET_GPR_U32(ctx, 31, 0x3719D8u);
    ctx->pc = 0x3719D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3719D0u;
            // 0x3719d4: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3711F0u;
    if (runtime->hasFunction(0x3711F0u)) {
        auto targetFn = runtime->lookupFunction(0x3711F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3719D8u; }
        if (ctx->pc != 0x3719D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003711F0_0x3711f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3719D8u; }
        if (ctx->pc != 0x3719D8u) { return; }
    }
    ctx->pc = 0x3719D8u;
label_3719d8:
    // 0x3719d8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3719d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3719dc:
    // 0x3719dc: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_3719e0:
    if (ctx->pc == 0x3719E0u) {
        ctx->pc = 0x3719E4u;
        goto label_3719e4;
    }
    ctx->pc = 0x3719DCu;
    {
        const bool branch_taken_0x3719dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3719dc) {
            ctx->pc = 0x371A18u;
            goto label_371a18;
        }
    }
    ctx->pc = 0x3719E4u;
label_3719e4:
    // 0x3719e4: 0xc0dc6bc  jal         func_371AF0
label_3719e8:
    if (ctx->pc == 0x3719E8u) {
        ctx->pc = 0x3719ECu;
        goto label_3719ec;
    }
    ctx->pc = 0x3719E4u;
    SET_GPR_U32(ctx, 31, 0x3719ECu);
    ctx->pc = 0x371AF0u;
    if (runtime->hasFunction(0x371AF0u)) {
        auto targetFn = runtime->lookupFunction(0x371AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3719ECu; }
        if (ctx->pc != 0x3719ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371AF0_0x371af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3719ECu; }
        if (ctx->pc != 0x3719ECu) { return; }
    }
    ctx->pc = 0x3719ECu;
label_3719ec:
    // 0x3719ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3719ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3719f0:
    // 0x3719f0: 0xc0dc484  jal         func_371210
label_3719f4:
    if (ctx->pc == 0x3719F4u) {
        ctx->pc = 0x3719F4u;
            // 0x3719f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3719F8u;
        goto label_3719f8;
    }
    ctx->pc = 0x3719F0u;
    SET_GPR_U32(ctx, 31, 0x3719F8u);
    ctx->pc = 0x3719F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3719F0u;
            // 0x3719f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371210u;
    if (runtime->hasFunction(0x371210u)) {
        auto targetFn = runtime->lookupFunction(0x371210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3719F8u; }
        if (ctx->pc != 0x3719F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371210_0x371210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3719F8u; }
        if (ctx->pc != 0x3719F8u) { return; }
    }
    ctx->pc = 0x3719F8u;
label_3719f8:
    // 0x3719f8: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x3719f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
label_3719fc:
    // 0x3719fc: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x3719fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_371a00:
    // 0x371a00: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x371a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
label_371a04:
    // 0x371a04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x371a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_371a08:
    // 0x371a08: 0x0  nop
    ctx->pc = 0x371a08u;
    // NOP
label_371a0c:
    // 0x371a0c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x371a0cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_371a10:
    // 0x371a10: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x371a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
label_371a14:
    // 0x371a14: 0x0  nop
    ctx->pc = 0x371a14u;
    // NOP
label_371a18:
    // 0x371a18: 0xc0dc698  jal         func_371A60
label_371a1c:
    if (ctx->pc == 0x371A1Cu) {
        ctx->pc = 0x371A1Cu;
            // 0x371a1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371A20u;
        goto label_371a20;
    }
    ctx->pc = 0x371A18u;
    SET_GPR_U32(ctx, 31, 0x371A20u);
    ctx->pc = 0x371A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371A18u;
            // 0x371a1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371A60u;
    if (runtime->hasFunction(0x371A60u)) {
        auto targetFn = runtime->lookupFunction(0x371A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371A20u; }
        if (ctx->pc != 0x371A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371A60_0x371a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371A20u; }
        if (ctx->pc != 0x371A20u) { return; }
    }
    ctx->pc = 0x371A20u;
label_371a20:
    // 0x371a20: 0xc0dc3b0  jal         func_370EC0
label_371a24:
    if (ctx->pc == 0x371A24u) {
        ctx->pc = 0x371A24u;
            // 0x371a24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371A28u;
        goto label_371a28;
    }
    ctx->pc = 0x371A20u;
    SET_GPR_U32(ctx, 31, 0x371A28u);
    ctx->pc = 0x371A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371A20u;
            // 0x371a24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370EC0u;
    if (runtime->hasFunction(0x370EC0u)) {
        auto targetFn = runtime->lookupFunction(0x370EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371A28u; }
        if (ctx->pc != 0x371A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370EC0_0x370ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371A28u; }
        if (ctx->pc != 0x371A28u) { return; }
    }
    ctx->pc = 0x371A28u;
label_371a28:
    // 0x371a28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x371a28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_371a2c:
    // 0x371a2c: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x371a2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_371a30:
    // 0x371a30: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_371a34:
    if (ctx->pc == 0x371A34u) {
        ctx->pc = 0x371A34u;
            // 0x371a34: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x371A38u;
        goto label_371a38;
    }
    ctx->pc = 0x371A30u;
    {
        const bool branch_taken_0x371a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371A30u;
            // 0x371a34: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371a30) {
            ctx->pc = 0x371990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_371990;
        }
    }
    ctx->pc = 0x371A38u;
label_371a38:
    // 0x371a38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x371a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_371a3c:
    // 0x371a3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x371a3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_371a40:
    // 0x371a40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x371a40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_371a44:
    // 0x371a44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x371a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_371a48:
    // 0x371a48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_371a4c:
    // 0x371a4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_371a50:
    // 0x371a50: 0x3e00008  jr          $ra
label_371a54:
    if (ctx->pc == 0x371A54u) {
        ctx->pc = 0x371A54u;
            // 0x371a54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x371A58u;
        goto label_371a58;
    }
    ctx->pc = 0x371A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371A50u;
            // 0x371a54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x371A58u;
label_371a58:
    // 0x371a58: 0x0  nop
    ctx->pc = 0x371a58u;
    // NOP
label_371a5c:
    // 0x371a5c: 0x0  nop
    ctx->pc = 0x371a5cu;
    // NOP
}
