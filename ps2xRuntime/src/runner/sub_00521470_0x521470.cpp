#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00521470
// Address: 0x521470 - 0x521600
void sub_00521470_0x521470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00521470_0x521470");
#endif

    switch (ctx->pc) {
        case 0x52148cu: goto label_52148c;
        case 0x5214acu: goto label_5214ac;
        case 0x5214f4u: goto label_5214f4;
        case 0x521510u: goto label_521510;
        case 0x521530u: goto label_521530;
        case 0x521590u: goto label_521590;
        case 0x52159cu: goto label_52159c;
        case 0x5215a8u: goto label_5215a8;
        case 0x5215b4u: goto label_5215b4;
        case 0x5215c0u: goto label_5215c0;
        case 0x5215ccu: goto label_5215cc;
        case 0x5215e4u: goto label_5215e4;
        default: break;
    }

    ctx->pc = 0x521470u;

    // 0x521470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x521470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x521474: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x521474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x521478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x521478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x52147c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x52147cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x521480: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x521480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x521484: 0xc1485b8  jal         func_5216E0
    ctx->pc = 0x521484u;
    SET_GPR_U32(ctx, 31, 0x52148Cu);
    ctx->pc = 0x521488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521484u;
            // 0x521488: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5216E0u;
    if (runtime->hasFunction(0x5216E0u)) {
        auto targetFn = runtime->lookupFunction(0x5216E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52148Cu; }
        if (ctx->pc != 0x52148Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005216E0_0x5216e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52148Cu; }
        if (ctx->pc != 0x52148Cu) { return; }
    }
    ctx->pc = 0x52148Cu;
label_52148c:
    // 0x52148c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52148cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x521490: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x521490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x521494: 0x24635f10  addiu       $v1, $v1, 0x5F10
    ctx->pc = 0x521494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24336));
    // 0x521498: 0x24425f48  addiu       $v0, $v0, 0x5F48
    ctx->pc = 0x521498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24392));
    // 0x52149c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52149cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5214a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5214a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5214a4: 0xc1485b4  jal         func_5216D0
    ctx->pc = 0x5214A4u;
    SET_GPR_U32(ctx, 31, 0x5214ACu);
    ctx->pc = 0x5214A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5214A4u;
            // 0x5214a8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5216D0u;
    if (runtime->hasFunction(0x5216D0u)) {
        auto targetFn = runtime->lookupFunction(0x5216D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5214ACu; }
        if (ctx->pc != 0x5214ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005216D0_0x5216d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5214ACu; }
        if (ctx->pc != 0x5214ACu) { return; }
    }
    ctx->pc = 0x5214ACu;
label_5214ac:
    // 0x5214ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x5214acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x5214b0: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x5214b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x5214b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5214b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5214b8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x5214b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x5214bc: 0x24425dc0  addiu       $v0, $v0, 0x5DC0
    ctx->pc = 0x5214bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24000));
    // 0x5214c0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x5214c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x5214c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5214c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x5214c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5214c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5214cc: 0x24425df8  addiu       $v0, $v0, 0x5DF8
    ctx->pc = 0x5214ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24056));
    // 0x5214d0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x5214d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x5214d4: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x5214d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x5214d8: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x5214d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x5214dc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x5214dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x5214e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5214e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x5214e4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x5214e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x5214e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x5214e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x5214ec: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x5214ECu;
    SET_GPR_U32(ctx, 31, 0x5214F4u);
    ctx->pc = 0x5214F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5214ECu;
            // 0x5214f0: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5214F4u; }
        if (ctx->pc != 0x5214F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5214F4u; }
        if (ctx->pc != 0x5214F4u) { return; }
    }
    ctx->pc = 0x5214F4u;
label_5214f4:
    // 0x5214f4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x5214f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x5214f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x5214f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5214fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x5214FCu;
    {
        const bool branch_taken_0x5214fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x521500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5214FCu;
            // 0x521500: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5214fc) {
            ctx->pc = 0x521514u;
            goto label_521514;
        }
    }
    ctx->pc = 0x521504u;
    // 0x521504: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x521504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x521508: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x521508u;
    SET_GPR_U32(ctx, 31, 0x521510u);
    ctx->pc = 0x52150Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521508u;
            // 0x52150c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521510u; }
        if (ctx->pc != 0x521510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521510u; }
        if (ctx->pc != 0x521510u) { return; }
    }
    ctx->pc = 0x521510u;
label_521510:
    // 0x521510: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x521510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_521514:
    // 0x521514: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x521514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x521518: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x521518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52151c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52151cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x521520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x521520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x521524: 0x3e00008  jr          $ra
    ctx->pc = 0x521524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x521528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521524u;
            // 0x521528: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52152Cu;
    // 0x52152c: 0x0  nop
    ctx->pc = 0x52152cu;
    // NOP
label_521530:
    // 0x521530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x521530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x521534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x521534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x521538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x521538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x52153c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52153cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x521540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x521540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x521544: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x521544u;
    {
        const bool branch_taken_0x521544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x521548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521544u;
            // 0x521548: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x521544) {
            ctx->pc = 0x5215E4u;
            goto label_5215e4;
        }
    }
    ctx->pc = 0x52154Cu;
    // 0x52154c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52154cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x521550: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x521550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x521554: 0x24635f10  addiu       $v1, $v1, 0x5F10
    ctx->pc = 0x521554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24336));
    // 0x521558: 0x24425f48  addiu       $v0, $v0, 0x5F48
    ctx->pc = 0x521558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24392));
    // 0x52155c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52155cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x521560: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x521560u;
    {
        const bool branch_taken_0x521560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x521564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521560u;
            // 0x521564: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x521560) {
            ctx->pc = 0x5215CCu;
            goto label_5215cc;
        }
    }
    ctx->pc = 0x521568u;
    // 0x521568: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x521568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x52156c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52156cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x521570: 0x24635ec0  addiu       $v1, $v1, 0x5EC0
    ctx->pc = 0x521570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24256));
    // 0x521574: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x521574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
    // 0x521578: 0x24425ef8  addiu       $v0, $v0, 0x5EF8
    ctx->pc = 0x521578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24312));
    // 0x52157c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52157cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x521580: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x521580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x521584: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x521584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x521588: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x521588u;
    SET_GPR_U32(ctx, 31, 0x521590u);
    ctx->pc = 0x52158Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521588u;
            // 0x52158c: 0x24a50e70  addiu       $a1, $a1, 0xE70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521590u; }
        if (ctx->pc != 0x521590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521590u; }
        if (ctx->pc != 0x521590u) { return; }
    }
    ctx->pc = 0x521590u;
label_521590:
    // 0x521590: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x521590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x521594: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x521594u;
    SET_GPR_U32(ctx, 31, 0x52159Cu);
    ctx->pc = 0x521598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521594u;
            // 0x521598: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52159Cu; }
        if (ctx->pc != 0x52159Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52159Cu; }
        if (ctx->pc != 0x52159Cu) { return; }
    }
    ctx->pc = 0x52159Cu;
label_52159c:
    // 0x52159c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x52159cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x5215a0: 0xc148598  jal         func_521660
    ctx->pc = 0x5215A0u;
    SET_GPR_U32(ctx, 31, 0x5215A8u);
    ctx->pc = 0x5215A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5215A0u;
            // 0x5215a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x521660u;
    if (runtime->hasFunction(0x521660u)) {
        auto targetFn = runtime->lookupFunction(0x521660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5215A8u; }
        if (ctx->pc != 0x5215A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00521660_0x521660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5215A8u; }
        if (ctx->pc != 0x5215A8u) { return; }
    }
    ctx->pc = 0x5215A8u;
label_5215a8:
    // 0x5215a8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x5215a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x5215ac: 0xc148598  jal         func_521660
    ctx->pc = 0x5215ACu;
    SET_GPR_U32(ctx, 31, 0x5215B4u);
    ctx->pc = 0x5215B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5215ACu;
            // 0x5215b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x521660u;
    if (runtime->hasFunction(0x521660u)) {
        auto targetFn = runtime->lookupFunction(0x521660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5215B4u; }
        if (ctx->pc != 0x5215B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00521660_0x521660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5215B4u; }
        if (ctx->pc != 0x5215B4u) { return; }
    }
    ctx->pc = 0x5215B4u;
label_5215b4:
    // 0x5215b4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x5215b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x5215b8: 0xc148580  jal         func_521600
    ctx->pc = 0x5215B8u;
    SET_GPR_U32(ctx, 31, 0x5215C0u);
    ctx->pc = 0x5215BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5215B8u;
            // 0x5215bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x521600u;
    if (runtime->hasFunction(0x521600u)) {
        auto targetFn = runtime->lookupFunction(0x521600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5215C0u; }
        if (ctx->pc != 0x5215C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00521600_0x521600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5215C0u; }
        if (ctx->pc != 0x5215C0u) { return; }
    }
    ctx->pc = 0x5215C0u;
label_5215c0:
    // 0x5215c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5215c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5215c4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x5215C4u;
    SET_GPR_U32(ctx, 31, 0x5215CCu);
    ctx->pc = 0x5215C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5215C4u;
            // 0x5215c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5215CCu; }
        if (ctx->pc != 0x5215CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5215CCu; }
        if (ctx->pc != 0x5215CCu) { return; }
    }
    ctx->pc = 0x5215CCu;
label_5215cc:
    // 0x5215cc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x5215ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x5215d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5215d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x5215d4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5215D4u;
    {
        const bool branch_taken_0x5215d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5215d4) {
            ctx->pc = 0x5215D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5215D4u;
            // 0x5215d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5215E8u;
            goto label_5215e8;
        }
    }
    ctx->pc = 0x5215DCu;
    // 0x5215dc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x5215DCu;
    SET_GPR_U32(ctx, 31, 0x5215E4u);
    ctx->pc = 0x5215E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5215DCu;
            // 0x5215e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5215E4u; }
        if (ctx->pc != 0x5215E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5215E4u; }
        if (ctx->pc != 0x5215E4u) { return; }
    }
    ctx->pc = 0x5215E4u;
label_5215e4:
    // 0x5215e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5215e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5215e8:
    // 0x5215e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5215e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5215ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5215ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5215f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5215f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5215f4: 0x3e00008  jr          $ra
    ctx->pc = 0x5215F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5215F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5215F4u;
            // 0x5215f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5215FCu;
    // 0x5215fc: 0x0  nop
    ctx->pc = 0x5215fcu;
    // NOP
}
