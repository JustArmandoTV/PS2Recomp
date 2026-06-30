#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC840
// Address: 0x2fc840 - 0x2fca70
void sub_002FC840_0x2fc840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC840_0x2fc840");
#endif

    switch (ctx->pc) {
        case 0x2fc840u: goto label_2fc840;
        case 0x2fc844u: goto label_2fc844;
        case 0x2fc848u: goto label_2fc848;
        case 0x2fc84cu: goto label_2fc84c;
        case 0x2fc850u: goto label_2fc850;
        case 0x2fc854u: goto label_2fc854;
        case 0x2fc858u: goto label_2fc858;
        case 0x2fc85cu: goto label_2fc85c;
        case 0x2fc860u: goto label_2fc860;
        case 0x2fc864u: goto label_2fc864;
        case 0x2fc868u: goto label_2fc868;
        case 0x2fc86cu: goto label_2fc86c;
        case 0x2fc870u: goto label_2fc870;
        case 0x2fc874u: goto label_2fc874;
        case 0x2fc878u: goto label_2fc878;
        case 0x2fc87cu: goto label_2fc87c;
        case 0x2fc880u: goto label_2fc880;
        case 0x2fc884u: goto label_2fc884;
        case 0x2fc888u: goto label_2fc888;
        case 0x2fc88cu: goto label_2fc88c;
        case 0x2fc890u: goto label_2fc890;
        case 0x2fc894u: goto label_2fc894;
        case 0x2fc898u: goto label_2fc898;
        case 0x2fc89cu: goto label_2fc89c;
        case 0x2fc8a0u: goto label_2fc8a0;
        case 0x2fc8a4u: goto label_2fc8a4;
        case 0x2fc8a8u: goto label_2fc8a8;
        case 0x2fc8acu: goto label_2fc8ac;
        case 0x2fc8b0u: goto label_2fc8b0;
        case 0x2fc8b4u: goto label_2fc8b4;
        case 0x2fc8b8u: goto label_2fc8b8;
        case 0x2fc8bcu: goto label_2fc8bc;
        case 0x2fc8c0u: goto label_2fc8c0;
        case 0x2fc8c4u: goto label_2fc8c4;
        case 0x2fc8c8u: goto label_2fc8c8;
        case 0x2fc8ccu: goto label_2fc8cc;
        case 0x2fc8d0u: goto label_2fc8d0;
        case 0x2fc8d4u: goto label_2fc8d4;
        case 0x2fc8d8u: goto label_2fc8d8;
        case 0x2fc8dcu: goto label_2fc8dc;
        case 0x2fc8e0u: goto label_2fc8e0;
        case 0x2fc8e4u: goto label_2fc8e4;
        case 0x2fc8e8u: goto label_2fc8e8;
        case 0x2fc8ecu: goto label_2fc8ec;
        case 0x2fc8f0u: goto label_2fc8f0;
        case 0x2fc8f4u: goto label_2fc8f4;
        case 0x2fc8f8u: goto label_2fc8f8;
        case 0x2fc8fcu: goto label_2fc8fc;
        case 0x2fc900u: goto label_2fc900;
        case 0x2fc904u: goto label_2fc904;
        case 0x2fc908u: goto label_2fc908;
        case 0x2fc90cu: goto label_2fc90c;
        case 0x2fc910u: goto label_2fc910;
        case 0x2fc914u: goto label_2fc914;
        case 0x2fc918u: goto label_2fc918;
        case 0x2fc91cu: goto label_2fc91c;
        case 0x2fc920u: goto label_2fc920;
        case 0x2fc924u: goto label_2fc924;
        case 0x2fc928u: goto label_2fc928;
        case 0x2fc92cu: goto label_2fc92c;
        case 0x2fc930u: goto label_2fc930;
        case 0x2fc934u: goto label_2fc934;
        case 0x2fc938u: goto label_2fc938;
        case 0x2fc93cu: goto label_2fc93c;
        case 0x2fc940u: goto label_2fc940;
        case 0x2fc944u: goto label_2fc944;
        case 0x2fc948u: goto label_2fc948;
        case 0x2fc94cu: goto label_2fc94c;
        case 0x2fc950u: goto label_2fc950;
        case 0x2fc954u: goto label_2fc954;
        case 0x2fc958u: goto label_2fc958;
        case 0x2fc95cu: goto label_2fc95c;
        case 0x2fc960u: goto label_2fc960;
        case 0x2fc964u: goto label_2fc964;
        case 0x2fc968u: goto label_2fc968;
        case 0x2fc96cu: goto label_2fc96c;
        case 0x2fc970u: goto label_2fc970;
        case 0x2fc974u: goto label_2fc974;
        case 0x2fc978u: goto label_2fc978;
        case 0x2fc97cu: goto label_2fc97c;
        case 0x2fc980u: goto label_2fc980;
        case 0x2fc984u: goto label_2fc984;
        case 0x2fc988u: goto label_2fc988;
        case 0x2fc98cu: goto label_2fc98c;
        case 0x2fc990u: goto label_2fc990;
        case 0x2fc994u: goto label_2fc994;
        case 0x2fc998u: goto label_2fc998;
        case 0x2fc99cu: goto label_2fc99c;
        case 0x2fc9a0u: goto label_2fc9a0;
        case 0x2fc9a4u: goto label_2fc9a4;
        case 0x2fc9a8u: goto label_2fc9a8;
        case 0x2fc9acu: goto label_2fc9ac;
        case 0x2fc9b0u: goto label_2fc9b0;
        case 0x2fc9b4u: goto label_2fc9b4;
        case 0x2fc9b8u: goto label_2fc9b8;
        case 0x2fc9bcu: goto label_2fc9bc;
        case 0x2fc9c0u: goto label_2fc9c0;
        case 0x2fc9c4u: goto label_2fc9c4;
        case 0x2fc9c8u: goto label_2fc9c8;
        case 0x2fc9ccu: goto label_2fc9cc;
        case 0x2fc9d0u: goto label_2fc9d0;
        case 0x2fc9d4u: goto label_2fc9d4;
        case 0x2fc9d8u: goto label_2fc9d8;
        case 0x2fc9dcu: goto label_2fc9dc;
        case 0x2fc9e0u: goto label_2fc9e0;
        case 0x2fc9e4u: goto label_2fc9e4;
        case 0x2fc9e8u: goto label_2fc9e8;
        case 0x2fc9ecu: goto label_2fc9ec;
        case 0x2fc9f0u: goto label_2fc9f0;
        case 0x2fc9f4u: goto label_2fc9f4;
        case 0x2fc9f8u: goto label_2fc9f8;
        case 0x2fc9fcu: goto label_2fc9fc;
        case 0x2fca00u: goto label_2fca00;
        case 0x2fca04u: goto label_2fca04;
        case 0x2fca08u: goto label_2fca08;
        case 0x2fca0cu: goto label_2fca0c;
        case 0x2fca10u: goto label_2fca10;
        case 0x2fca14u: goto label_2fca14;
        case 0x2fca18u: goto label_2fca18;
        case 0x2fca1cu: goto label_2fca1c;
        case 0x2fca20u: goto label_2fca20;
        case 0x2fca24u: goto label_2fca24;
        case 0x2fca28u: goto label_2fca28;
        case 0x2fca2cu: goto label_2fca2c;
        case 0x2fca30u: goto label_2fca30;
        case 0x2fca34u: goto label_2fca34;
        case 0x2fca38u: goto label_2fca38;
        case 0x2fca3cu: goto label_2fca3c;
        case 0x2fca40u: goto label_2fca40;
        case 0x2fca44u: goto label_2fca44;
        case 0x2fca48u: goto label_2fca48;
        case 0x2fca4cu: goto label_2fca4c;
        case 0x2fca50u: goto label_2fca50;
        case 0x2fca54u: goto label_2fca54;
        case 0x2fca58u: goto label_2fca58;
        case 0x2fca5cu: goto label_2fca5c;
        case 0x2fca60u: goto label_2fca60;
        case 0x2fca64u: goto label_2fca64;
        case 0x2fca68u: goto label_2fca68;
        case 0x2fca6cu: goto label_2fca6c;
        default: break;
    }

    ctx->pc = 0x2fc840u;

label_2fc840:
    // 0x2fc840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fc844:
    // 0x2fc844: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fc844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fc848:
    // 0x2fc848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2fc84c:
    // 0x2fc84c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fc84cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fc850:
    // 0x2fc850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fc854:
    // 0x2fc854: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fc854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2fc858:
    // 0x2fc858: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2fc858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2fc85c:
    // 0x2fc85c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fc860:
    // 0x2fc860: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2fc860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_2fc864:
    // 0x2fc864: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fc864u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fc868:
    // 0x2fc868: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2fc868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_2fc86c:
    // 0x2fc86c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fc86cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fc870:
    // 0x2fc870: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2fc870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_2fc874:
    // 0x2fc874: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2fc874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_2fc878:
    // 0x2fc878: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2fc878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_2fc87c:
    // 0x2fc87c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2fc87cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_2fc880:
    // 0x2fc880: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2fc880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
label_2fc884:
    // 0x2fc884: 0xc04cbd8  jal         func_132F60
label_2fc888:
    if (ctx->pc == 0x2FC888u) {
        ctx->pc = 0x2FC888u;
            // 0x2fc888: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2FC88Cu;
        goto label_2fc88c;
    }
    ctx->pc = 0x2FC884u;
    SET_GPR_U32(ctx, 31, 0x2FC88Cu);
    ctx->pc = 0x2FC888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC884u;
            // 0x2fc888: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC88Cu; }
        if (ctx->pc != 0x2FC88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC88Cu; }
        if (ctx->pc != 0x2FC88Cu) { return; }
    }
    ctx->pc = 0x2FC88Cu;
label_2fc88c:
    // 0x2fc88c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2fc88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_2fc890:
    // 0x2fc890: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2fc890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_2fc894:
    // 0x2fc894: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2fc894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_2fc898:
    // 0x2fc898: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fc898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fc89c:
    // 0x2fc89c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fc89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2fc8a0:
    // 0x2fc8a0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2fc8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_2fc8a4:
    // 0x2fc8a4: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2fc8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_2fc8a8:
    // 0x2fc8a8: 0x3c06437f  lui         $a2, 0x437F
    ctx->pc = 0x2fc8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17279 << 16));
label_2fc8ac:
    // 0x2fc8ac: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2fc8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_2fc8b0:
    // 0x2fc8b0: 0x24a5aae0  addiu       $a1, $a1, -0x5520
    ctx->pc = 0x2fc8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945504));
label_2fc8b4:
    // 0x2fc8b4: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x2fc8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_2fc8b8:
    // 0x2fc8b8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2fc8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fc8bc:
    // 0x2fc8bc: 0xae060048  sw          $a2, 0x48($s0)
    ctx->pc = 0x2fc8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 6));
label_2fc8c0:
    // 0x2fc8c0: 0x24633df0  addiu       $v1, $v1, 0x3DF0
    ctx->pc = 0x2fc8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15856));
label_2fc8c4:
    // 0x2fc8c4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2fc8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_2fc8c8:
    // 0x2fc8c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fc8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fc8cc:
    // 0x2fc8cc: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2fc8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2fc8d0:
    // 0x2fc8d0: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x2fc8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
label_2fc8d4:
    // 0x2fc8d4: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2fc8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_2fc8d8:
    // 0x2fc8d8: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2fc8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_2fc8dc:
    // 0x2fc8dc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2fc8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_2fc8e0:
    // 0x2fc8e0: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x2fc8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
label_2fc8e4:
    // 0x2fc8e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2fc8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2fc8e8:
    // 0x2fc8e8: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2fc8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_2fc8ec:
    // 0x2fc8ec: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2fc8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_2fc8f0:
    // 0x2fc8f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fc8f4:
    // 0x2fc8f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc8f8:
    // 0x2fc8f8: 0x3e00008  jr          $ra
label_2fc8fc:
    if (ctx->pc == 0x2FC8FCu) {
        ctx->pc = 0x2FC8FCu;
            // 0x2fc8fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FC900u;
        goto label_2fc900;
    }
    ctx->pc = 0x2FC8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC8F8u;
            // 0x2fc8fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC900u;
label_2fc900:
    // 0x2fc900: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fc900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2fc904:
    // 0x2fc904: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2fc904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2fc908:
    // 0x2fc908: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fc908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2fc90c:
    // 0x2fc90c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fc90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2fc910:
    // 0x2fc910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fc910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fc914:
    // 0x2fc914: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fc918:
    // 0x2fc918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fc91c:
    // 0x2fc91c: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_2fc920:
    if (ctx->pc == 0x2FC920u) {
        ctx->pc = 0x2FC920u;
            // 0x2fc920: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC924u;
        goto label_2fc924;
    }
    ctx->pc = 0x2FC91Cu;
    {
        const bool branch_taken_0x2fc91c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC91Cu;
            // 0x2fc920: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc91c) {
            ctx->pc = 0x2FC9A8u;
            goto label_2fc9a8;
        }
    }
    ctx->pc = 0x2FC924u;
label_2fc924:
    // 0x2fc924: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fc924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fc928:
    // 0x2fc928: 0x244232d8  addiu       $v0, $v0, 0x32D8
    ctx->pc = 0x2fc928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13016));
label_2fc92c:
    // 0x2fc92c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2fc92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2fc930:
    // 0x2fc930: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2fc930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2fc934:
    // 0x2fc934: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2fc938:
    if (ctx->pc == 0x2FC938u) {
        ctx->pc = 0x2FC938u;
            // 0x2fc938: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC93Cu;
        goto label_2fc93c;
    }
    ctx->pc = 0x2FC934u;
    {
        const bool branch_taken_0x2fc934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc934) {
            ctx->pc = 0x2FC938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC934u;
            // 0x2fc938: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FC950u;
            goto label_2fc950;
        }
    }
    ctx->pc = 0x2FC93Cu;
label_2fc93c:
    // 0x2fc93c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fc93cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fc940:
    // 0x2fc940: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2fc940u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2fc944:
    // 0x2fc944: 0x320f809  jalr        $t9
label_2fc948:
    if (ctx->pc == 0x2FC948u) {
        ctx->pc = 0x2FC948u;
            // 0x2fc948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FC94Cu;
        goto label_2fc94c;
    }
    ctx->pc = 0x2FC944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FC94Cu);
        ctx->pc = 0x2FC948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC944u;
            // 0x2fc948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FC94Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FC94Cu; }
            if (ctx->pc != 0x2FC94Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FC94Cu;
label_2fc94c:
    // 0x2fc94c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2fc94cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fc950:
    // 0x2fc950: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2fc950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fc954:
    // 0x2fc954: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2fc954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2fc958:
    // 0x2fc958: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_2fc95c:
    if (ctx->pc == 0x2FC95Cu) {
        ctx->pc = 0x2FC960u;
        goto label_2fc960;
    }
    ctx->pc = 0x2FC958u;
    {
        const bool branch_taken_0x2fc958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc958) {
            ctx->pc = 0x2FC980u;
            goto label_2fc980;
        }
    }
    ctx->pc = 0x2FC960u;
label_2fc960:
    // 0x2fc960: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2fc964:
    if (ctx->pc == 0x2FC964u) {
        ctx->pc = 0x2FC968u;
        goto label_2fc968;
    }
    ctx->pc = 0x2FC960u;
    {
        const bool branch_taken_0x2fc960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc960) {
            ctx->pc = 0x2FC978u;
            goto label_2fc978;
        }
    }
    ctx->pc = 0x2FC968u;
label_2fc968:
    // 0x2fc968: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fc968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fc96c:
    // 0x2fc96c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2fc96cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2fc970:
    // 0x2fc970: 0x320f809  jalr        $t9
label_2fc974:
    if (ctx->pc == 0x2FC974u) {
        ctx->pc = 0x2FC974u;
            // 0x2fc974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FC978u;
        goto label_2fc978;
    }
    ctx->pc = 0x2FC970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FC978u);
        ctx->pc = 0x2FC974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC970u;
            // 0x2fc974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FC978u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FC978u; }
            if (ctx->pc != 0x2FC978u) { return; }
        }
        }
    }
    ctx->pc = 0x2FC978u;
label_2fc978:
    // 0x2fc978: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2fc978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2fc97c:
    // 0x2fc97c: 0x0  nop
    ctx->pc = 0x2fc97cu;
    // NOP
label_2fc980:
    // 0x2fc980: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fc980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2fc984:
    // 0x2fc984: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2fc984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_2fc988:
    // 0x2fc988: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_2fc98c:
    if (ctx->pc == 0x2FC98Cu) {
        ctx->pc = 0x2FC98Cu;
            // 0x2fc98c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2FC990u;
        goto label_2fc990;
    }
    ctx->pc = 0x2FC988u;
    {
        const bool branch_taken_0x2fc988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC988u;
            // 0x2fc98c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc988) {
            ctx->pc = 0x2FC954u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fc954;
        }
    }
    ctx->pc = 0x2FC990u;
label_2fc990:
    // 0x2fc990: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x2fc990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
label_2fc994:
    // 0x2fc994: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fc994u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fc998:
    // 0x2fc998: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fc99c:
    if (ctx->pc == 0x2FC99Cu) {
        ctx->pc = 0x2FC99Cu;
            // 0x2fc99c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC9A0u;
        goto label_2fc9a0;
    }
    ctx->pc = 0x2FC998u;
    {
        const bool branch_taken_0x2fc998 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fc998) {
            ctx->pc = 0x2FC99Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC998u;
            // 0x2fc99c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FC9ACu;
            goto label_2fc9ac;
        }
    }
    ctx->pc = 0x2FC9A0u;
label_2fc9a0:
    // 0x2fc9a0: 0xc0400a8  jal         func_1002A0
label_2fc9a4:
    if (ctx->pc == 0x2FC9A4u) {
        ctx->pc = 0x2FC9A4u;
            // 0x2fc9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC9A8u;
        goto label_2fc9a8;
    }
    ctx->pc = 0x2FC9A0u;
    SET_GPR_U32(ctx, 31, 0x2FC9A8u);
    ctx->pc = 0x2FC9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC9A0u;
            // 0x2fc9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC9A8u; }
        if (ctx->pc != 0x2FC9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC9A8u; }
        if (ctx->pc != 0x2FC9A8u) { return; }
    }
    ctx->pc = 0x2FC9A8u;
label_2fc9a8:
    // 0x2fc9a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fc9a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fc9ac:
    // 0x2fc9ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2fc9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2fc9b0:
    // 0x2fc9b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fc9b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fc9b4:
    // 0x2fc9b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fc9b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fc9b8:
    // 0x2fc9b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fc9b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fc9bc:
    // 0x2fc9bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc9c0:
    // 0x2fc9c0: 0x3e00008  jr          $ra
label_2fc9c4:
    if (ctx->pc == 0x2FC9C4u) {
        ctx->pc = 0x2FC9C4u;
            // 0x2fc9c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2FC9C8u;
        goto label_2fc9c8;
    }
    ctx->pc = 0x2FC9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC9C0u;
            // 0x2fc9c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC9C8u;
label_2fc9c8:
    // 0x2fc9c8: 0x0  nop
    ctx->pc = 0x2fc9c8u;
    // NOP
label_2fc9cc:
    // 0x2fc9cc: 0x0  nop
    ctx->pc = 0x2fc9ccu;
    // NOP
label_2fc9d0:
    // 0x2fc9d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fc9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fc9d4:
    // 0x2fc9d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fc9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fc9d8:
    // 0x2fc9d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fc9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fc9dc:
    // 0x2fc9dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fc9e0:
    // 0x2fc9e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fc9e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fc9e4:
    // 0x2fc9e4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fc9e8:
    if (ctx->pc == 0x2FC9E8u) {
        ctx->pc = 0x2FC9E8u;
            // 0x2fc9e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC9ECu;
        goto label_2fc9ec;
    }
    ctx->pc = 0x2FC9E4u;
    {
        const bool branch_taken_0x2fc9e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC9E4u;
            // 0x2fc9e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc9e4) {
            ctx->pc = 0x2FCA50u;
            goto label_2fca50;
        }
    }
    ctx->pc = 0x2FC9ECu;
label_2fc9ec:
    // 0x2fc9ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fc9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fc9f0:
    // 0x2fc9f0: 0x244232f0  addiu       $v0, $v0, 0x32F0
    ctx->pc = 0x2fc9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13040));
label_2fc9f4:
    // 0x2fc9f4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fc9f8:
    if (ctx->pc == 0x2FC9F8u) {
        ctx->pc = 0x2FC9F8u;
            // 0x2fc9f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FC9FCu;
        goto label_2fc9fc;
    }
    ctx->pc = 0x2FC9F4u;
    {
        const bool branch_taken_0x2fc9f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC9F4u;
            // 0x2fc9f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc9f4) {
            ctx->pc = 0x2FCA38u;
            goto label_2fca38;
        }
    }
    ctx->pc = 0x2FC9FCu;
label_2fc9fc:
    // 0x2fc9fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fc9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fca00:
    // 0x2fca00: 0x24423df0  addiu       $v0, $v0, 0x3DF0
    ctx->pc = 0x2fca00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15856));
label_2fca04:
    // 0x2fca04: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fca08:
    if (ctx->pc == 0x2FCA08u) {
        ctx->pc = 0x2FCA08u;
            // 0x2fca08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FCA0Cu;
        goto label_2fca0c;
    }
    ctx->pc = 0x2FCA04u;
    {
        const bool branch_taken_0x2fca04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA04u;
            // 0x2fca08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca04) {
            ctx->pc = 0x2FCA38u;
            goto label_2fca38;
        }
    }
    ctx->pc = 0x2FCA0Cu;
label_2fca0c:
    // 0x2fca0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fca10:
    // 0x2fca10: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fca10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fca14:
    // 0x2fca14: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fca18:
    if (ctx->pc == 0x2FCA18u) {
        ctx->pc = 0x2FCA18u;
            // 0x2fca18: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FCA1Cu;
        goto label_2fca1c;
    }
    ctx->pc = 0x2FCA14u;
    {
        const bool branch_taken_0x2fca14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA14u;
            // 0x2fca18: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca14) {
            ctx->pc = 0x2FCA38u;
            goto label_2fca38;
        }
    }
    ctx->pc = 0x2FCA1Cu;
label_2fca1c:
    // 0x2fca1c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fca20:
    // 0x2fca20: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fca24:
    // 0x2fca24: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fca24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fca28:
    // 0x2fca28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fca2c:
    if (ctx->pc == 0x2FCA2Cu) {
        ctx->pc = 0x2FCA2Cu;
            // 0x2fca2c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FCA30u;
        goto label_2fca30;
    }
    ctx->pc = 0x2FCA28u;
    {
        const bool branch_taken_0x2fca28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA28u;
            // 0x2fca2c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca28) {
            ctx->pc = 0x2FCA38u;
            goto label_2fca38;
        }
    }
    ctx->pc = 0x2FCA30u;
label_2fca30:
    // 0x2fca30: 0xc07507c  jal         func_1D41F0
label_2fca34:
    if (ctx->pc == 0x2FCA34u) {
        ctx->pc = 0x2FCA34u;
            // 0x2fca34: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FCA38u;
        goto label_2fca38;
    }
    ctx->pc = 0x2FCA30u;
    SET_GPR_U32(ctx, 31, 0x2FCA38u);
    ctx->pc = 0x2FCA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA30u;
            // 0x2fca34: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCA38u; }
        if (ctx->pc != 0x2FCA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCA38u; }
        if (ctx->pc != 0x2FCA38u) { return; }
    }
    ctx->pc = 0x2FCA38u;
label_2fca38:
    // 0x2fca38: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fca38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fca3c:
    // 0x2fca3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fca3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fca40:
    // 0x2fca40: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fca44:
    if (ctx->pc == 0x2FCA44u) {
        ctx->pc = 0x2FCA44u;
            // 0x2fca44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA48u;
        goto label_2fca48;
    }
    ctx->pc = 0x2FCA40u;
    {
        const bool branch_taken_0x2fca40 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fca40) {
            ctx->pc = 0x2FCA44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA40u;
            // 0x2fca44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FCA54u;
            goto label_2fca54;
        }
    }
    ctx->pc = 0x2FCA48u;
label_2fca48:
    // 0x2fca48: 0xc0400a8  jal         func_1002A0
label_2fca4c:
    if (ctx->pc == 0x2FCA4Cu) {
        ctx->pc = 0x2FCA4Cu;
            // 0x2fca4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA50u;
        goto label_2fca50;
    }
    ctx->pc = 0x2FCA48u;
    SET_GPR_U32(ctx, 31, 0x2FCA50u);
    ctx->pc = 0x2FCA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA48u;
            // 0x2fca4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCA50u; }
        if (ctx->pc != 0x2FCA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCA50u; }
        if (ctx->pc != 0x2FCA50u) { return; }
    }
    ctx->pc = 0x2FCA50u;
label_2fca50:
    // 0x2fca50: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fca50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fca54:
    // 0x2fca54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fca54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fca58:
    // 0x2fca58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fca58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fca5c:
    // 0x2fca5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fca5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fca60:
    // 0x2fca60: 0x3e00008  jr          $ra
label_2fca64:
    if (ctx->pc == 0x2FCA64u) {
        ctx->pc = 0x2FCA64u;
            // 0x2fca64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FCA68u;
        goto label_2fca68;
    }
    ctx->pc = 0x2FCA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA60u;
            // 0x2fca64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCA68u;
label_2fca68:
    // 0x2fca68: 0x0  nop
    ctx->pc = 0x2fca68u;
    // NOP
label_2fca6c:
    // 0x2fca6c: 0x0  nop
    ctx->pc = 0x2fca6cu;
    // NOP
}
