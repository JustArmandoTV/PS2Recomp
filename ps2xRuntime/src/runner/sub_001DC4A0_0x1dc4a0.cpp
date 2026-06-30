#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC4A0
// Address: 0x1dc4a0 - 0x1dc750
void sub_001DC4A0_0x1dc4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC4A0_0x1dc4a0");
#endif

    switch (ctx->pc) {
        case 0x1dc4a0u: goto label_1dc4a0;
        case 0x1dc4a4u: goto label_1dc4a4;
        case 0x1dc4a8u: goto label_1dc4a8;
        case 0x1dc4acu: goto label_1dc4ac;
        case 0x1dc4b0u: goto label_1dc4b0;
        case 0x1dc4b4u: goto label_1dc4b4;
        case 0x1dc4b8u: goto label_1dc4b8;
        case 0x1dc4bcu: goto label_1dc4bc;
        case 0x1dc4c0u: goto label_1dc4c0;
        case 0x1dc4c4u: goto label_1dc4c4;
        case 0x1dc4c8u: goto label_1dc4c8;
        case 0x1dc4ccu: goto label_1dc4cc;
        case 0x1dc4d0u: goto label_1dc4d0;
        case 0x1dc4d4u: goto label_1dc4d4;
        case 0x1dc4d8u: goto label_1dc4d8;
        case 0x1dc4dcu: goto label_1dc4dc;
        case 0x1dc4e0u: goto label_1dc4e0;
        case 0x1dc4e4u: goto label_1dc4e4;
        case 0x1dc4e8u: goto label_1dc4e8;
        case 0x1dc4ecu: goto label_1dc4ec;
        case 0x1dc4f0u: goto label_1dc4f0;
        case 0x1dc4f4u: goto label_1dc4f4;
        case 0x1dc4f8u: goto label_1dc4f8;
        case 0x1dc4fcu: goto label_1dc4fc;
        case 0x1dc500u: goto label_1dc500;
        case 0x1dc504u: goto label_1dc504;
        case 0x1dc508u: goto label_1dc508;
        case 0x1dc50cu: goto label_1dc50c;
        case 0x1dc510u: goto label_1dc510;
        case 0x1dc514u: goto label_1dc514;
        case 0x1dc518u: goto label_1dc518;
        case 0x1dc51cu: goto label_1dc51c;
        case 0x1dc520u: goto label_1dc520;
        case 0x1dc524u: goto label_1dc524;
        case 0x1dc528u: goto label_1dc528;
        case 0x1dc52cu: goto label_1dc52c;
        case 0x1dc530u: goto label_1dc530;
        case 0x1dc534u: goto label_1dc534;
        case 0x1dc538u: goto label_1dc538;
        case 0x1dc53cu: goto label_1dc53c;
        case 0x1dc540u: goto label_1dc540;
        case 0x1dc544u: goto label_1dc544;
        case 0x1dc548u: goto label_1dc548;
        case 0x1dc54cu: goto label_1dc54c;
        case 0x1dc550u: goto label_1dc550;
        case 0x1dc554u: goto label_1dc554;
        case 0x1dc558u: goto label_1dc558;
        case 0x1dc55cu: goto label_1dc55c;
        case 0x1dc560u: goto label_1dc560;
        case 0x1dc564u: goto label_1dc564;
        case 0x1dc568u: goto label_1dc568;
        case 0x1dc56cu: goto label_1dc56c;
        case 0x1dc570u: goto label_1dc570;
        case 0x1dc574u: goto label_1dc574;
        case 0x1dc578u: goto label_1dc578;
        case 0x1dc57cu: goto label_1dc57c;
        case 0x1dc580u: goto label_1dc580;
        case 0x1dc584u: goto label_1dc584;
        case 0x1dc588u: goto label_1dc588;
        case 0x1dc58cu: goto label_1dc58c;
        case 0x1dc590u: goto label_1dc590;
        case 0x1dc594u: goto label_1dc594;
        case 0x1dc598u: goto label_1dc598;
        case 0x1dc59cu: goto label_1dc59c;
        case 0x1dc5a0u: goto label_1dc5a0;
        case 0x1dc5a4u: goto label_1dc5a4;
        case 0x1dc5a8u: goto label_1dc5a8;
        case 0x1dc5acu: goto label_1dc5ac;
        case 0x1dc5b0u: goto label_1dc5b0;
        case 0x1dc5b4u: goto label_1dc5b4;
        case 0x1dc5b8u: goto label_1dc5b8;
        case 0x1dc5bcu: goto label_1dc5bc;
        case 0x1dc5c0u: goto label_1dc5c0;
        case 0x1dc5c4u: goto label_1dc5c4;
        case 0x1dc5c8u: goto label_1dc5c8;
        case 0x1dc5ccu: goto label_1dc5cc;
        case 0x1dc5d0u: goto label_1dc5d0;
        case 0x1dc5d4u: goto label_1dc5d4;
        case 0x1dc5d8u: goto label_1dc5d8;
        case 0x1dc5dcu: goto label_1dc5dc;
        case 0x1dc5e0u: goto label_1dc5e0;
        case 0x1dc5e4u: goto label_1dc5e4;
        case 0x1dc5e8u: goto label_1dc5e8;
        case 0x1dc5ecu: goto label_1dc5ec;
        case 0x1dc5f0u: goto label_1dc5f0;
        case 0x1dc5f4u: goto label_1dc5f4;
        case 0x1dc5f8u: goto label_1dc5f8;
        case 0x1dc5fcu: goto label_1dc5fc;
        case 0x1dc600u: goto label_1dc600;
        case 0x1dc604u: goto label_1dc604;
        case 0x1dc608u: goto label_1dc608;
        case 0x1dc60cu: goto label_1dc60c;
        case 0x1dc610u: goto label_1dc610;
        case 0x1dc614u: goto label_1dc614;
        case 0x1dc618u: goto label_1dc618;
        case 0x1dc61cu: goto label_1dc61c;
        case 0x1dc620u: goto label_1dc620;
        case 0x1dc624u: goto label_1dc624;
        case 0x1dc628u: goto label_1dc628;
        case 0x1dc62cu: goto label_1dc62c;
        case 0x1dc630u: goto label_1dc630;
        case 0x1dc634u: goto label_1dc634;
        case 0x1dc638u: goto label_1dc638;
        case 0x1dc63cu: goto label_1dc63c;
        case 0x1dc640u: goto label_1dc640;
        case 0x1dc644u: goto label_1dc644;
        case 0x1dc648u: goto label_1dc648;
        case 0x1dc64cu: goto label_1dc64c;
        case 0x1dc650u: goto label_1dc650;
        case 0x1dc654u: goto label_1dc654;
        case 0x1dc658u: goto label_1dc658;
        case 0x1dc65cu: goto label_1dc65c;
        case 0x1dc660u: goto label_1dc660;
        case 0x1dc664u: goto label_1dc664;
        case 0x1dc668u: goto label_1dc668;
        case 0x1dc66cu: goto label_1dc66c;
        case 0x1dc670u: goto label_1dc670;
        case 0x1dc674u: goto label_1dc674;
        case 0x1dc678u: goto label_1dc678;
        case 0x1dc67cu: goto label_1dc67c;
        case 0x1dc680u: goto label_1dc680;
        case 0x1dc684u: goto label_1dc684;
        case 0x1dc688u: goto label_1dc688;
        case 0x1dc68cu: goto label_1dc68c;
        case 0x1dc690u: goto label_1dc690;
        case 0x1dc694u: goto label_1dc694;
        case 0x1dc698u: goto label_1dc698;
        case 0x1dc69cu: goto label_1dc69c;
        case 0x1dc6a0u: goto label_1dc6a0;
        case 0x1dc6a4u: goto label_1dc6a4;
        case 0x1dc6a8u: goto label_1dc6a8;
        case 0x1dc6acu: goto label_1dc6ac;
        case 0x1dc6b0u: goto label_1dc6b0;
        case 0x1dc6b4u: goto label_1dc6b4;
        case 0x1dc6b8u: goto label_1dc6b8;
        case 0x1dc6bcu: goto label_1dc6bc;
        case 0x1dc6c0u: goto label_1dc6c0;
        case 0x1dc6c4u: goto label_1dc6c4;
        case 0x1dc6c8u: goto label_1dc6c8;
        case 0x1dc6ccu: goto label_1dc6cc;
        case 0x1dc6d0u: goto label_1dc6d0;
        case 0x1dc6d4u: goto label_1dc6d4;
        case 0x1dc6d8u: goto label_1dc6d8;
        case 0x1dc6dcu: goto label_1dc6dc;
        case 0x1dc6e0u: goto label_1dc6e0;
        case 0x1dc6e4u: goto label_1dc6e4;
        case 0x1dc6e8u: goto label_1dc6e8;
        case 0x1dc6ecu: goto label_1dc6ec;
        case 0x1dc6f0u: goto label_1dc6f0;
        case 0x1dc6f4u: goto label_1dc6f4;
        case 0x1dc6f8u: goto label_1dc6f8;
        case 0x1dc6fcu: goto label_1dc6fc;
        case 0x1dc700u: goto label_1dc700;
        case 0x1dc704u: goto label_1dc704;
        case 0x1dc708u: goto label_1dc708;
        case 0x1dc70cu: goto label_1dc70c;
        case 0x1dc710u: goto label_1dc710;
        case 0x1dc714u: goto label_1dc714;
        case 0x1dc718u: goto label_1dc718;
        case 0x1dc71cu: goto label_1dc71c;
        case 0x1dc720u: goto label_1dc720;
        case 0x1dc724u: goto label_1dc724;
        case 0x1dc728u: goto label_1dc728;
        case 0x1dc72cu: goto label_1dc72c;
        case 0x1dc730u: goto label_1dc730;
        case 0x1dc734u: goto label_1dc734;
        case 0x1dc738u: goto label_1dc738;
        case 0x1dc73cu: goto label_1dc73c;
        case 0x1dc740u: goto label_1dc740;
        case 0x1dc744u: goto label_1dc744;
        case 0x1dc748u: goto label_1dc748;
        case 0x1dc74cu: goto label_1dc74c;
        default: break;
    }

    ctx->pc = 0x1dc4a0u;

label_1dc4a0:
    // 0x1dc4a0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1dc4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1dc4a4:
    // 0x1dc4a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dc4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1dc4a8:
    // 0x1dc4a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1dc4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1dc4ac:
    // 0x1dc4ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dc4acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dc4b0:
    // 0x1dc4b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1dc4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1dc4b4:
    // 0x1dc4b4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1dc4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1dc4b8:
    // 0x1dc4b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dc4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1dc4bc:
    // 0x1dc4bc: 0xc460c650  lwc1        $f0, -0x39B0($v1)
    ctx->pc = 0x1dc4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc4c0:
    // 0x1dc4c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dc4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1dc4c4:
    // 0x1dc4c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1dc4c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1dc4c8:
    // 0x1dc4c8: 0xc4820dec  lwc1        $f2, 0xDEC($a0)
    ctx->pc = 0x1dc4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dc4cc:
    // 0x1dc4cc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1dc4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1dc4d0:
    // 0x1dc4d0: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x1dc4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_1dc4d4:
    // 0x1dc4d4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1dc4d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1dc4d8:
    // 0x1dc4d8: 0x8c830df8  lw          $v1, 0xDF8($a0)
    ctx->pc = 0x1dc4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3576)));
label_1dc4dc:
    // 0x1dc4dc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1dc4dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1dc4e0:
    // 0x1dc4e0: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1dc4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc4e4:
    // 0x1dc4e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1dc4e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1dc4e8:
    // 0x1dc4e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dc4e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1dc4ec:
    // 0x1dc4ec: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1dc4ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1dc4f0:
    // 0x1dc4f0: 0x0  nop
    ctx->pc = 0x1dc4f0u;
    // NOP
label_1dc4f4:
    // 0x1dc4f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1dc4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1dc4f8:
    // 0x1dc4f8: 0xac830df8  sw          $v1, 0xDF8($a0)
    ctx->pc = 0x1dc4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3576), GPR_U32(ctx, 3));
label_1dc4fc:
    // 0x1dc4fc: 0x8c830d9c  lw          $v1, 0xD9C($a0)
    ctx->pc = 0x1dc4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3484)));
label_1dc500:
    // 0x1dc500: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1dc500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1dc504:
    // 0x1dc504: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
label_1dc508:
    if (ctx->pc == 0x1DC508u) {
        ctx->pc = 0x1DC508u;
            // 0x1dc508: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC50Cu;
        goto label_1dc50c;
    }
    ctx->pc = 0x1DC504u;
    {
        const bool branch_taken_0x1dc504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC504u;
            // 0x1dc508: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc504) {
            ctx->pc = 0x1DC734u;
            goto label_1dc734;
        }
    }
    ctx->pc = 0x1DC50Cu;
label_1dc50c:
    // 0x1dc50c: 0xc0772e8  jal         func_1DCBA0
label_1dc510:
    if (ctx->pc == 0x1DC510u) {
        ctx->pc = 0x1DC514u;
        goto label_1dc514;
    }
    ctx->pc = 0x1DC50Cu;
    SET_GPR_U32(ctx, 31, 0x1DC514u);
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC514u; }
        if (ctx->pc != 0x1DC514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC514u; }
        if (ctx->pc != 0x1DC514u) { return; }
    }
    ctx->pc = 0x1DC514u;
label_1dc514:
    // 0x1dc514: 0xc07711c  jal         func_1DC470
label_1dc518:
    if (ctx->pc == 0x1DC518u) {
        ctx->pc = 0x1DC518u;
            // 0x1dc518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC51Cu;
        goto label_1dc51c;
    }
    ctx->pc = 0x1DC514u;
    SET_GPR_U32(ctx, 31, 0x1DC51Cu);
    ctx->pc = 0x1DC518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC514u;
            // 0x1dc518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC470u;
    if (runtime->hasFunction(0x1DC470u)) {
        auto targetFn = runtime->lookupFunction(0x1DC470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC51Cu; }
        if (ctx->pc != 0x1DC51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC470_0x1dc470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC51Cu; }
        if (ctx->pc != 0x1DC51Cu) { return; }
    }
    ctx->pc = 0x1DC51Cu;
label_1dc51c:
    // 0x1dc51c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dc51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc520:
    // 0x1dc520: 0xc077290  jal         func_1DCA40
label_1dc524:
    if (ctx->pc == 0x1DC524u) {
        ctx->pc = 0x1DC524u;
            // 0x1dc524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC528u;
        goto label_1dc528;
    }
    ctx->pc = 0x1DC520u;
    SET_GPR_U32(ctx, 31, 0x1DC528u);
    ctx->pc = 0x1DC524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC520u;
            // 0x1dc524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC528u; }
        if (ctx->pc != 0x1DC528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC528u; }
        if (ctx->pc != 0x1DC528u) { return; }
    }
    ctx->pc = 0x1DC528u;
label_1dc528:
    // 0x1dc528: 0x8c590054  lw          $t9, 0x54($v0)
    ctx->pc = 0x1dc528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1dc52c:
    // 0x1dc52c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc530:
    // 0x1dc530: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1dc530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1dc534:
    // 0x1dc534: 0x320f809  jalr        $t9
label_1dc538:
    if (ctx->pc == 0x1DC538u) {
        ctx->pc = 0x1DC538u;
            // 0x1dc538: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1DC53Cu;
        goto label_1dc53c;
    }
    ctx->pc = 0x1DC534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DC53Cu);
        ctx->pc = 0x1DC538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC534u;
            // 0x1dc538: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DC53Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DC53Cu; }
            if (ctx->pc != 0x1DC53Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DC53Cu;
label_1dc53c:
    // 0x1dc53c: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x1dc53cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
label_1dc540:
    // 0x1dc540: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dc540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dc544:
    // 0x1dc544: 0xc07721c  jal         func_1DC870
label_1dc548:
    if (ctx->pc == 0x1DC548u) {
        ctx->pc = 0x1DC548u;
            // 0x1dc548: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->pc = 0x1DC54Cu;
        goto label_1dc54c;
    }
    ctx->pc = 0x1DC544u;
    SET_GPR_U32(ctx, 31, 0x1DC54Cu);
    ctx->pc = 0x1DC548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC544u;
            // 0x1dc548: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC870u;
    if (runtime->hasFunction(0x1DC870u)) {
        auto targetFn = runtime->lookupFunction(0x1DC870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC54Cu; }
        if (ctx->pc != 0x1DC54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC870_0x1dc870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC54Cu; }
        if (ctx->pc != 0x1DC54Cu) { return; }
    }
    ctx->pc = 0x1DC54Cu;
label_1dc54c:
    // 0x1dc54c: 0x8e440550  lw          $a0, 0x550($s2)
    ctx->pc = 0x1dc54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_1dc550:
    // 0x1dc550: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1dc550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc554:
    // 0x1dc554: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1dc554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1dc558:
    // 0x1dc558: 0xc077210  jal         func_1DC840
label_1dc55c:
    if (ctx->pc == 0x1DC55Cu) {
        ctx->pc = 0x1DC55Cu;
            // 0x1dc55c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC560u;
        goto label_1dc560;
    }
    ctx->pc = 0x1DC558u;
    SET_GPR_U32(ctx, 31, 0x1DC560u);
    ctx->pc = 0x1DC55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC558u;
            // 0x1dc55c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC840u;
    if (runtime->hasFunction(0x1DC840u)) {
        auto targetFn = runtime->lookupFunction(0x1DC840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC560u; }
        if (ctx->pc != 0x1DC560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC840_0x1dc840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC560u; }
        if (ctx->pc != 0x1DC560u) { return; }
    }
    ctx->pc = 0x1DC560u;
label_1dc560:
    // 0x1dc560: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1dc560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1dc564:
    // 0x1dc564: 0xc04ccf4  jal         func_1333D0
label_1dc568:
    if (ctx->pc == 0x1DC568u) {
        ctx->pc = 0x1DC568u;
            // 0x1dc568: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC56Cu;
        goto label_1dc56c;
    }
    ctx->pc = 0x1DC564u;
    SET_GPR_U32(ctx, 31, 0x1DC56Cu);
    ctx->pc = 0x1DC568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC564u;
            // 0x1dc568: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC56Cu; }
        if (ctx->pc != 0x1DC56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC56Cu; }
        if (ctx->pc != 0x1DC56Cu) { return; }
    }
    ctx->pc = 0x1DC56Cu;
label_1dc56c:
    // 0x1dc56c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1dc56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1dc570:
    // 0x1dc570: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1dc570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1dc574:
    // 0x1dc574: 0xc04cca0  jal         func_133280
label_1dc578:
    if (ctx->pc == 0x1DC578u) {
        ctx->pc = 0x1DC578u;
            // 0x1dc578: 0x26460380  addiu       $a2, $s2, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 896));
        ctx->pc = 0x1DC57Cu;
        goto label_1dc57c;
    }
    ctx->pc = 0x1DC574u;
    SET_GPR_U32(ctx, 31, 0x1DC57Cu);
    ctx->pc = 0x1DC578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC574u;
            // 0x1dc578: 0x26460380  addiu       $a2, $s2, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC57Cu; }
        if (ctx->pc != 0x1DC57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC57Cu; }
        if (ctx->pc != 0x1DC57Cu) { return; }
    }
    ctx->pc = 0x1DC57Cu;
label_1dc57c:
    // 0x1dc57c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1dc57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1dc580:
    // 0x1dc580: 0xc04cc04  jal         func_133010
label_1dc584:
    if (ctx->pc == 0x1DC584u) {
        ctx->pc = 0x1DC584u;
            // 0x1dc584: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1DC588u;
        goto label_1dc588;
    }
    ctx->pc = 0x1DC580u;
    SET_GPR_U32(ctx, 31, 0x1DC588u);
    ctx->pc = 0x1DC584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC580u;
            // 0x1dc584: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC588u; }
        if (ctx->pc != 0x1DC588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC588u; }
        if (ctx->pc != 0x1DC588u) { return; }
    }
    ctx->pc = 0x1DC588u;
label_1dc588:
    // 0x1dc588: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1dc588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1dc58c:
    // 0x1dc58c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1dc58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1dc590:
    // 0x1dc590: 0x2484c8d0  addiu       $a0, $a0, -0x3730
    ctx->pc = 0x1dc590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953168));
label_1dc594:
    // 0x1dc594: 0xc0771d4  jal         func_1DC750
label_1dc598:
    if (ctx->pc == 0x1DC598u) {
        ctx->pc = 0x1DC598u;
            // 0x1dc598: 0xafa000a0  sw          $zero, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x1DC59Cu;
        goto label_1dc59c;
    }
    ctx->pc = 0x1DC594u;
    SET_GPR_U32(ctx, 31, 0x1DC59Cu);
    ctx->pc = 0x1DC598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC594u;
            // 0x1dc598: 0xafa000a0  sw          $zero, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC750u;
    if (runtime->hasFunction(0x1DC750u)) {
        auto targetFn = runtime->lookupFunction(0x1DC750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC59Cu; }
        if (ctx->pc != 0x1DC59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC750_0x1dc750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC59Cu; }
        if (ctx->pc != 0x1DC59Cu) { return; }
    }
    ctx->pc = 0x1DC59Cu;
label_1dc59c:
    // 0x1dc59c: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x1dc59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dc5a0:
    // 0x1dc5a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dc5a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dc5a4:
    // 0x1dc5a4: 0x0  nop
    ctx->pc = 0x1dc5a4u;
    // NOP
label_1dc5a8:
    // 0x1dc5a8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1dc5a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dc5ac:
    // 0x1dc5ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dc5b0:
    if (ctx->pc == 0x1DC5B0u) {
        ctx->pc = 0x1DC5B0u;
            // 0x1dc5b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DC5B4u;
        goto label_1dc5b4;
    }
    ctx->pc = 0x1DC5ACu;
    {
        const bool branch_taken_0x1dc5ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC5ACu;
            // 0x1dc5b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5ac) {
            ctx->pc = 0x1DC5B8u;
            goto label_1dc5b8;
        }
    }
    ctx->pc = 0x1DC5B4u;
label_1dc5b4:
    // 0x1dc5b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dc5b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc5b8:
    // 0x1dc5b8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_1dc5bc:
    if (ctx->pc == 0x1DC5BCu) {
        ctx->pc = 0x1DC5BCu;
            // 0x1dc5bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1DC5C0u;
        goto label_1dc5c0;
    }
    ctx->pc = 0x1DC5B8u;
    {
        const bool branch_taken_0x1dc5b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1dc5b8) {
            ctx->pc = 0x1DC5BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC5B8u;
            // 0x1dc5bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DC5CCu;
            goto label_1dc5cc;
        }
    }
    ctx->pc = 0x1DC5C0u;
label_1dc5c0:
    // 0x1dc5c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dc5c4:
    // 0x1dc5c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1dc5c8:
    if (ctx->pc == 0x1DC5C8u) {
        ctx->pc = 0x1DC5C8u;
            // 0x1dc5c8: 0x46800920  cvt.s.w     $f4, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1DC5CCu;
        goto label_1dc5cc;
    }
    ctx->pc = 0x1DC5C4u;
    {
        const bool branch_taken_0x1dc5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC5C4u;
            // 0x1dc5c8: 0x46800920  cvt.s.w     $f4, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5c4) {
            ctx->pc = 0x1DC5E4u;
            goto label_1dc5e4;
        }
    }
    ctx->pc = 0x1DC5CCu;
label_1dc5cc:
    // 0x1dc5cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dc5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dc5d0:
    // 0x1dc5d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dc5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1dc5d4:
    // 0x1dc5d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dc5d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dc5d8:
    // 0x1dc5d8: 0x0  nop
    ctx->pc = 0x1dc5d8u;
    // NOP
label_1dc5dc:
    // 0x1dc5dc: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x1dc5dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_1dc5e0:
    // 0x1dc5e0: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1dc5e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1dc5e4:
    // 0x1dc5e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dc5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dc5e8:
    // 0x1dc5e8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1dc5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1dc5ec:
    // 0x1dc5ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1dc5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1dc5f0:
    // 0x1dc5f0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1dc5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1dc5f4:
    // 0x1dc5f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dc5f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dc5f8:
    // 0x1dc5f8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1dc5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1dc5fc:
    // 0x1dc5fc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1dc5fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1dc600:
    // 0x1dc600: 0x0  nop
    ctx->pc = 0x1dc600u;
    // NOP
label_1dc604:
    // 0x1dc604: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1dc604u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1dc608:
    // 0x1dc608: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x1dc608u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_1dc60c:
    // 0x1dc60c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1dc60cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1dc610:
    // 0x1dc610: 0xc6400dfc  lwc1        $f0, 0xDFC($s2)
    ctx->pc = 0x1dc610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc614:
    // 0x1dc614: 0xc04cc04  jal         func_133010
label_1dc618:
    if (ctx->pc == 0x1DC618u) {
        ctx->pc = 0x1DC618u;
            // 0x1dc618: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1DC61Cu;
        goto label_1dc61c;
    }
    ctx->pc = 0x1DC614u;
    SET_GPR_U32(ctx, 31, 0x1DC61Cu);
    ctx->pc = 0x1DC618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC614u;
            // 0x1dc618: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC61Cu; }
        if (ctx->pc != 0x1DC61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC61Cu; }
        if (ctx->pc != 0x1DC61Cu) { return; }
    }
    ctx->pc = 0x1DC61Cu;
label_1dc61c:
    // 0x1dc61c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1dc61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1dc620:
    // 0x1dc620: 0xc04cc04  jal         func_133010
label_1dc624:
    if (ctx->pc == 0x1DC624u) {
        ctx->pc = 0x1DC624u;
            // 0x1dc624: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1DC628u;
        goto label_1dc628;
    }
    ctx->pc = 0x1DC620u;
    SET_GPR_U32(ctx, 31, 0x1DC628u);
    ctx->pc = 0x1DC624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC620u;
            // 0x1dc624: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC628u; }
        if (ctx->pc != 0x1DC628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC628u; }
        if (ctx->pc != 0x1DC628u) { return; }
    }
    ctx->pc = 0x1DC628u;
label_1dc628:
    // 0x1dc628: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1dc628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1dc62c:
    // 0x1dc62c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1dc62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1dc630:
    // 0x1dc630: 0xc0771d4  jal         func_1DC750
label_1dc634:
    if (ctx->pc == 0x1DC634u) {
        ctx->pc = 0x1DC634u;
            // 0x1dc634: 0xafa00090  sw          $zero, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
        ctx->pc = 0x1DC638u;
        goto label_1dc638;
    }
    ctx->pc = 0x1DC630u;
    SET_GPR_U32(ctx, 31, 0x1DC638u);
    ctx->pc = 0x1DC634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC630u;
            // 0x1dc634: 0xafa00090  sw          $zero, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC750u;
    if (runtime->hasFunction(0x1DC750u)) {
        auto targetFn = runtime->lookupFunction(0x1DC750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC638u; }
        if (ctx->pc != 0x1DC638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC750_0x1dc750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC638u; }
        if (ctx->pc != 0x1DC638u) { return; }
    }
    ctx->pc = 0x1DC638u;
label_1dc638:
    // 0x1dc638: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x1dc638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dc63c:
    // 0x1dc63c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dc63cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dc640:
    // 0x1dc640: 0x0  nop
    ctx->pc = 0x1dc640u;
    // NOP
label_1dc644:
    // 0x1dc644: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1dc644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dc648:
    // 0x1dc648: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1dc64c:
    if (ctx->pc == 0x1DC64Cu) {
        ctx->pc = 0x1DC64Cu;
            // 0x1dc64c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DC650u;
        goto label_1dc650;
    }
    ctx->pc = 0x1DC648u;
    {
        const bool branch_taken_0x1dc648 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC648u;
            // 0x1dc64c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc648) {
            ctx->pc = 0x1DC654u;
            goto label_1dc654;
        }
    }
    ctx->pc = 0x1DC650u;
label_1dc650:
    // 0x1dc650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dc650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc654:
    // 0x1dc654: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_1dc658:
    if (ctx->pc == 0x1DC658u) {
        ctx->pc = 0x1DC658u;
            // 0x1dc658: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1DC65Cu;
        goto label_1dc65c;
    }
    ctx->pc = 0x1DC654u;
    {
        const bool branch_taken_0x1dc654 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1dc654) {
            ctx->pc = 0x1DC658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC654u;
            // 0x1dc658: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DC668u;
            goto label_1dc668;
        }
    }
    ctx->pc = 0x1DC65Cu;
label_1dc65c:
    // 0x1dc65c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dc660:
    // 0x1dc660: 0x10000007  b           . + 4 + (0x7 << 2)
label_1dc664:
    if (ctx->pc == 0x1DC664u) {
        ctx->pc = 0x1DC664u;
            // 0x1dc664: 0x46800920  cvt.s.w     $f4, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1DC668u;
        goto label_1dc668;
    }
    ctx->pc = 0x1DC660u;
    {
        const bool branch_taken_0x1dc660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC660u;
            // 0x1dc664: 0x46800920  cvt.s.w     $f4, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc660) {
            ctx->pc = 0x1DC680u;
            goto label_1dc680;
        }
    }
    ctx->pc = 0x1DC668u;
label_1dc668:
    // 0x1dc668: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dc668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dc66c:
    // 0x1dc66c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dc66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1dc670:
    // 0x1dc670: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dc670u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dc674:
    // 0x1dc674: 0x0  nop
    ctx->pc = 0x1dc674u;
    // NOP
label_1dc678:
    // 0x1dc678: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x1dc678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_1dc67c:
    // 0x1dc67c: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1dc67cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1dc680:
    // 0x1dc680: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1dc680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1dc684:
    // 0x1dc684: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1dc684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1dc688:
    // 0x1dc688: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1dc688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1dc68c:
    // 0x1dc68c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dc68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dc690:
    // 0x1dc690: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dc690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dc694:
    // 0x1dc694: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x1dc694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_1dc698:
    // 0x1dc698: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x1dc698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_1dc69c:
    // 0x1dc69c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dc6a0:
    // 0x1dc6a0: 0x0  nop
    ctx->pc = 0x1dc6a0u;
    // NOP
label_1dc6a4:
    // 0x1dc6a4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1dc6a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1dc6a8:
    // 0x1dc6a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dc6a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1dc6ac:
    // 0x1dc6ac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1dc6acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1dc6b0:
    // 0x1dc6b0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1dc6b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1dc6b4:
    // 0x1dc6b4: 0x460c6818  adda.s      $f13, $f12
    ctx->pc = 0x1dc6b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
label_1dc6b8:
    // 0x1dc6b8: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x1dc6b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_1dc6bc:
    // 0x1dc6bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1dc6bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1dc6c0:
    // 0x1dc6c0: 0xc6420dfc  lwc1        $f2, 0xDFC($s2)
    ctx->pc = 0x1dc6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dc6c4:
    // 0x1dc6c4: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1dc6c4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_1dc6c8:
    // 0x1dc6c8: 0xc04c970  jal         func_1325C0
label_1dc6cc:
    if (ctx->pc == 0x1DC6CCu) {
        ctx->pc = 0x1DC6CCu;
            // 0x1dc6cc: 0x46001502  mul.s       $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1DC6D0u;
        goto label_1dc6d0;
    }
    ctx->pc = 0x1DC6C8u;
    SET_GPR_U32(ctx, 31, 0x1DC6D0u);
    ctx->pc = 0x1DC6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC6C8u;
            // 0x1dc6cc: 0x46001502  mul.s       $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6D0u; }
        if (ctx->pc != 0x1DC6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6D0u; }
        if (ctx->pc != 0x1DC6D0u) { return; }
    }
    ctx->pc = 0x1DC6D0u;
label_1dc6d0:
    // 0x1dc6d0: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x1dc6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_1dc6d4:
    // 0x1dc6d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dc6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dc6d8:
    // 0x1dc6d8: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x1dc6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_1dc6dc:
    // 0x1dc6dc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1dc6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1dc6e0:
    // 0x1dc6e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dc6e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dc6e4:
    // 0x1dc6e4: 0x0  nop
    ctx->pc = 0x1dc6e4u;
    // NOP
label_1dc6e8:
    // 0x1dc6e8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1dc6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1dc6ec:
    // 0x1dc6ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dc6ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1dc6f0:
    // 0x1dc6f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dc6f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dc6f4:
    // 0x1dc6f4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1dc6f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1dc6f8:
    // 0x1dc6f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1dc6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1dc6fc:
    // 0x1dc6fc: 0xc04c970  jal         func_1325C0
label_1dc700:
    if (ctx->pc == 0x1DC700u) {
        ctx->pc = 0x1DC700u;
            // 0x1dc700: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1DC704u;
        goto label_1dc704;
    }
    ctx->pc = 0x1DC6FCu;
    SET_GPR_U32(ctx, 31, 0x1DC704u);
    ctx->pc = 0x1DC700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC6FCu;
            // 0x1dc700: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC704u; }
        if (ctx->pc != 0x1DC704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC704u; }
        if (ctx->pc != 0x1DC704u) { return; }
    }
    ctx->pc = 0x1DC704u;
label_1dc704:
    // 0x1dc704: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1dc704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1dc708:
    // 0x1dc708: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1dc708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1dc70c:
    // 0x1dc70c: 0xc04c72c  jal         func_131CB0
label_1dc710:
    if (ctx->pc == 0x1DC710u) {
        ctx->pc = 0x1DC710u;
            // 0x1dc710: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1DC714u;
        goto label_1dc714;
    }
    ctx->pc = 0x1DC70Cu;
    SET_GPR_U32(ctx, 31, 0x1DC714u);
    ctx->pc = 0x1DC710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC70Cu;
            // 0x1dc710: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC714u; }
        if (ctx->pc != 0x1DC714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC714u; }
        if (ctx->pc != 0x1DC714u) { return; }
    }
    ctx->pc = 0x1DC714u;
label_1dc714:
    // 0x1dc714: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1dc714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1dc718:
    // 0x1dc718: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1dc718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1dc71c:
    // 0x1dc71c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1dc71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1dc720:
    // 0x1dc720: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1dc720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1dc724:
    // 0x1dc724: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1dc724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1dc728:
    // 0x1dc728: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1dc728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1dc72c:
    // 0x1dc72c: 0xc04c72c  jal         func_131CB0
label_1dc730:
    if (ctx->pc == 0x1DC730u) {
        ctx->pc = 0x1DC730u;
            // 0x1dc730: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC734u;
        goto label_1dc734;
    }
    ctx->pc = 0x1DC72Cu;
    SET_GPR_U32(ctx, 31, 0x1DC734u);
    ctx->pc = 0x1DC730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC72Cu;
            // 0x1dc730: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC734u; }
        if (ctx->pc != 0x1DC734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC734u; }
        if (ctx->pc != 0x1DC734u) { return; }
    }
    ctx->pc = 0x1DC734u;
label_1dc734:
    // 0x1dc734: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1dc734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1dc738:
    // 0x1dc738: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1dc738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1dc73c:
    // 0x1dc73c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1dc73cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dc740:
    // 0x1dc740: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dc740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dc744:
    // 0x1dc744: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dc744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dc748:
    // 0x1dc748: 0x3e00008  jr          $ra
label_1dc74c:
    if (ctx->pc == 0x1DC74Cu) {
        ctx->pc = 0x1DC74Cu;
            // 0x1dc74c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1DC750u;
        goto label_fallthrough_0x1dc748;
    }
    ctx->pc = 0x1DC748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC748u;
            // 0x1dc74c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1dc748:
    ctx->pc = 0x1DC750u;
}
