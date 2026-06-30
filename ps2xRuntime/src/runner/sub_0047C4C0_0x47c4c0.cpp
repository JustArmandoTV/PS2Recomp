#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047C4C0
// Address: 0x47c4c0 - 0x47c6b0
void sub_0047C4C0_0x47c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C4C0_0x47c4c0");
#endif

    switch (ctx->pc) {
        case 0x47c4c0u: goto label_47c4c0;
        case 0x47c4c4u: goto label_47c4c4;
        case 0x47c4c8u: goto label_47c4c8;
        case 0x47c4ccu: goto label_47c4cc;
        case 0x47c4d0u: goto label_47c4d0;
        case 0x47c4d4u: goto label_47c4d4;
        case 0x47c4d8u: goto label_47c4d8;
        case 0x47c4dcu: goto label_47c4dc;
        case 0x47c4e0u: goto label_47c4e0;
        case 0x47c4e4u: goto label_47c4e4;
        case 0x47c4e8u: goto label_47c4e8;
        case 0x47c4ecu: goto label_47c4ec;
        case 0x47c4f0u: goto label_47c4f0;
        case 0x47c4f4u: goto label_47c4f4;
        case 0x47c4f8u: goto label_47c4f8;
        case 0x47c4fcu: goto label_47c4fc;
        case 0x47c500u: goto label_47c500;
        case 0x47c504u: goto label_47c504;
        case 0x47c508u: goto label_47c508;
        case 0x47c50cu: goto label_47c50c;
        case 0x47c510u: goto label_47c510;
        case 0x47c514u: goto label_47c514;
        case 0x47c518u: goto label_47c518;
        case 0x47c51cu: goto label_47c51c;
        case 0x47c520u: goto label_47c520;
        case 0x47c524u: goto label_47c524;
        case 0x47c528u: goto label_47c528;
        case 0x47c52cu: goto label_47c52c;
        case 0x47c530u: goto label_47c530;
        case 0x47c534u: goto label_47c534;
        case 0x47c538u: goto label_47c538;
        case 0x47c53cu: goto label_47c53c;
        case 0x47c540u: goto label_47c540;
        case 0x47c544u: goto label_47c544;
        case 0x47c548u: goto label_47c548;
        case 0x47c54cu: goto label_47c54c;
        case 0x47c550u: goto label_47c550;
        case 0x47c554u: goto label_47c554;
        case 0x47c558u: goto label_47c558;
        case 0x47c55cu: goto label_47c55c;
        case 0x47c560u: goto label_47c560;
        case 0x47c564u: goto label_47c564;
        case 0x47c568u: goto label_47c568;
        case 0x47c56cu: goto label_47c56c;
        case 0x47c570u: goto label_47c570;
        case 0x47c574u: goto label_47c574;
        case 0x47c578u: goto label_47c578;
        case 0x47c57cu: goto label_47c57c;
        case 0x47c580u: goto label_47c580;
        case 0x47c584u: goto label_47c584;
        case 0x47c588u: goto label_47c588;
        case 0x47c58cu: goto label_47c58c;
        case 0x47c590u: goto label_47c590;
        case 0x47c594u: goto label_47c594;
        case 0x47c598u: goto label_47c598;
        case 0x47c59cu: goto label_47c59c;
        case 0x47c5a0u: goto label_47c5a0;
        case 0x47c5a4u: goto label_47c5a4;
        case 0x47c5a8u: goto label_47c5a8;
        case 0x47c5acu: goto label_47c5ac;
        case 0x47c5b0u: goto label_47c5b0;
        case 0x47c5b4u: goto label_47c5b4;
        case 0x47c5b8u: goto label_47c5b8;
        case 0x47c5bcu: goto label_47c5bc;
        case 0x47c5c0u: goto label_47c5c0;
        case 0x47c5c4u: goto label_47c5c4;
        case 0x47c5c8u: goto label_47c5c8;
        case 0x47c5ccu: goto label_47c5cc;
        case 0x47c5d0u: goto label_47c5d0;
        case 0x47c5d4u: goto label_47c5d4;
        case 0x47c5d8u: goto label_47c5d8;
        case 0x47c5dcu: goto label_47c5dc;
        case 0x47c5e0u: goto label_47c5e0;
        case 0x47c5e4u: goto label_47c5e4;
        case 0x47c5e8u: goto label_47c5e8;
        case 0x47c5ecu: goto label_47c5ec;
        case 0x47c5f0u: goto label_47c5f0;
        case 0x47c5f4u: goto label_47c5f4;
        case 0x47c5f8u: goto label_47c5f8;
        case 0x47c5fcu: goto label_47c5fc;
        case 0x47c600u: goto label_47c600;
        case 0x47c604u: goto label_47c604;
        case 0x47c608u: goto label_47c608;
        case 0x47c60cu: goto label_47c60c;
        case 0x47c610u: goto label_47c610;
        case 0x47c614u: goto label_47c614;
        case 0x47c618u: goto label_47c618;
        case 0x47c61cu: goto label_47c61c;
        case 0x47c620u: goto label_47c620;
        case 0x47c624u: goto label_47c624;
        case 0x47c628u: goto label_47c628;
        case 0x47c62cu: goto label_47c62c;
        case 0x47c630u: goto label_47c630;
        case 0x47c634u: goto label_47c634;
        case 0x47c638u: goto label_47c638;
        case 0x47c63cu: goto label_47c63c;
        case 0x47c640u: goto label_47c640;
        case 0x47c644u: goto label_47c644;
        case 0x47c648u: goto label_47c648;
        case 0x47c64cu: goto label_47c64c;
        case 0x47c650u: goto label_47c650;
        case 0x47c654u: goto label_47c654;
        case 0x47c658u: goto label_47c658;
        case 0x47c65cu: goto label_47c65c;
        case 0x47c660u: goto label_47c660;
        case 0x47c664u: goto label_47c664;
        case 0x47c668u: goto label_47c668;
        case 0x47c66cu: goto label_47c66c;
        case 0x47c670u: goto label_47c670;
        case 0x47c674u: goto label_47c674;
        case 0x47c678u: goto label_47c678;
        case 0x47c67cu: goto label_47c67c;
        case 0x47c680u: goto label_47c680;
        case 0x47c684u: goto label_47c684;
        case 0x47c688u: goto label_47c688;
        case 0x47c68cu: goto label_47c68c;
        case 0x47c690u: goto label_47c690;
        case 0x47c694u: goto label_47c694;
        case 0x47c698u: goto label_47c698;
        case 0x47c69cu: goto label_47c69c;
        case 0x47c6a0u: goto label_47c6a0;
        case 0x47c6a4u: goto label_47c6a4;
        case 0x47c6a8u: goto label_47c6a8;
        case 0x47c6acu: goto label_47c6ac;
        default: break;
    }

    ctx->pc = 0x47c4c0u;

label_47c4c0:
    // 0x47c4c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x47c4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_47c4c4:
    // 0x47c4c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x47c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_47c4c8:
    // 0x47c4c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x47c4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_47c4cc:
    // 0x47c4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47c4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47c4d0:
    // 0x47c4d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47c4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47c4d4:
    // 0x47c4d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47c4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47c4d8:
    // 0x47c4d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47c4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47c4dc:
    // 0x47c4dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47c4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47c4e0:
    // 0x47c4e0: 0xac8601c8  sw          $a2, 0x1C8($a0)
    ctx->pc = 0x47c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 6));
label_47c4e4:
    // 0x47c4e4: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x47c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_47c4e8:
    // 0x47c4e8: 0xc4c10034  lwc1        $f1, 0x34($a2)
    ctx->pc = 0x47c4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47c4ec:
    // 0x47c4ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x47c4ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47c4f0:
    // 0x47c4f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_47c4f4:
    if (ctx->pc == 0x47C4F4u) {
        ctx->pc = 0x47C4F4u;
            // 0x47c4f4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C4F8u;
        goto label_47c4f8;
    }
    ctx->pc = 0x47C4F0u;
    {
        const bool branch_taken_0x47c4f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x47C4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C4F0u;
            // 0x47c4f4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c4f0) {
            ctx->pc = 0x47C508u;
            goto label_47c508;
        }
    }
    ctx->pc = 0x47C4F8u;
label_47c4f8:
    // 0x47c4f8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47c4f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47c4fc:
    // 0x47c4fc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x47c4fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_47c500:
    // 0x47c500: 0x10000008  b           . + 4 + (0x8 << 2)
label_47c504:
    if (ctx->pc == 0x47C504u) {
        ctx->pc = 0x47C504u;
            // 0x47c504: 0x3c033fb1  lui         $v1, 0x3FB1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16305 << 16));
        ctx->pc = 0x47C508u;
        goto label_47c508;
    }
    ctx->pc = 0x47C500u;
    {
        const bool branch_taken_0x47c500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47C504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C500u;
            // 0x47c504: 0x3c033fb1  lui         $v1, 0x3FB1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16305 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c500) {
            ctx->pc = 0x47C524u;
            goto label_47c524;
        }
    }
    ctx->pc = 0x47C508u;
label_47c508:
    // 0x47c508: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x47c508u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_47c50c:
    // 0x47c50c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x47c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_47c510:
    // 0x47c510: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47c510u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47c514:
    // 0x47c514: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x47c514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_47c518:
    // 0x47c518: 0x0  nop
    ctx->pc = 0x47c518u;
    // NOP
label_47c51c:
    // 0x47c51c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x47c51cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_47c520:
    // 0x47c520: 0x3c033fb1  lui         $v1, 0x3FB1
    ctx->pc = 0x47c520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16305 << 16));
label_47c524:
    // 0x47c524: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x47c524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_47c528:
    // 0x47c528: 0x3463c71c  ori         $v1, $v1, 0xC71C
    ctx->pc = 0x47c528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)50972);
label_47c52c:
    // 0x47c52c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x47c52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_47c530:
    // 0x47c530: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x47c530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47c534:
    // 0x47c534: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x47c534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_47c538:
    // 0x47c538: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x47c538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_47c53c:
    // 0x47c53c: 0xc122b58  jal         func_48AD60
label_47c540:
    if (ctx->pc == 0x47C540u) {
        ctx->pc = 0x47C540u;
            // 0x47c540: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C544u;
        goto label_47c544;
    }
    ctx->pc = 0x47C53Cu;
    SET_GPR_U32(ctx, 31, 0x47C544u);
    ctx->pc = 0x47C540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C53Cu;
            // 0x47c540: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C544u; }
        if (ctx->pc != 0x47C544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C544u; }
        if (ctx->pc != 0x47C544u) { return; }
    }
    ctx->pc = 0x47C544u;
label_47c544:
    // 0x47c544: 0xc040180  jal         func_100600
label_47c548:
    if (ctx->pc == 0x47C548u) {
        ctx->pc = 0x47C548u;
            // 0x47c548: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x47C54Cu;
        goto label_47c54c;
    }
    ctx->pc = 0x47C544u;
    SET_GPR_U32(ctx, 31, 0x47C54Cu);
    ctx->pc = 0x47C548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C544u;
            // 0x47c548: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C54Cu; }
        if (ctx->pc != 0x47C54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C54Cu; }
        if (ctx->pc != 0x47C54Cu) { return; }
    }
    ctx->pc = 0x47C54Cu;
label_47c54c:
    // 0x47c54c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47c54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c550:
    // 0x47c550: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
label_47c554:
    if (ctx->pc == 0x47C554u) {
        ctx->pc = 0x47C554u;
            // 0x47c554: 0xae7001d4  sw          $s0, 0x1D4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 468), GPR_U32(ctx, 16));
        ctx->pc = 0x47C558u;
        goto label_47c558;
    }
    ctx->pc = 0x47C550u;
    {
        const bool branch_taken_0x47c550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c550) {
            ctx->pc = 0x47C554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47C550u;
            // 0x47c554: 0xae7001d4  sw          $s0, 0x1D4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 468), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47C5B4u;
            goto label_47c5b4;
        }
    }
    ctx->pc = 0x47C558u;
label_47c558:
    // 0x47c558: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x47c558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_47c55c:
    // 0x47c55c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x47c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_47c560:
    // 0x47c560: 0x2442f510  addiu       $v0, $v0, -0xAF0
    ctx->pc = 0x47c560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964496));
label_47c564:
    // 0x47c564: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x47c564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_47c568:
    // 0x47c568: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x47c568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_47c56c:
    // 0x47c56c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x47c56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_47c570:
    // 0x47c570: 0xc04c968  jal         func_1325A0
label_47c574:
    if (ctx->pc == 0x47C574u) {
        ctx->pc = 0x47C574u;
            // 0x47c574: 0xa200001c  sb          $zero, 0x1C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x47C578u;
        goto label_47c578;
    }
    ctx->pc = 0x47C570u;
    SET_GPR_U32(ctx, 31, 0x47C578u);
    ctx->pc = 0x47C574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C570u;
            // 0x47c574: 0xa200001c  sb          $zero, 0x1C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C578u; }
        if (ctx->pc != 0x47C578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C578u; }
        if (ctx->pc != 0x47C578u) { return; }
    }
    ctx->pc = 0x47C578u;
label_47c578:
    // 0x47c578: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x47c578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_47c57c:
    // 0x47c57c: 0xc04c720  jal         func_131C80
label_47c580:
    if (ctx->pc == 0x47C580u) {
        ctx->pc = 0x47C580u;
            // 0x47c580: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x47C584u;
        goto label_47c584;
    }
    ctx->pc = 0x47C57Cu;
    SET_GPR_U32(ctx, 31, 0x47C584u);
    ctx->pc = 0x47C580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C57Cu;
            // 0x47c580: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C584u; }
        if (ctx->pc != 0x47C584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C584u; }
        if (ctx->pc != 0x47C584u) { return; }
    }
    ctx->pc = 0x47C584u;
label_47c584:
    // 0x47c584: 0xc040180  jal         func_100600
label_47c588:
    if (ctx->pc == 0x47C588u) {
        ctx->pc = 0x47C588u;
            // 0x47c588: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x47C58Cu;
        goto label_47c58c;
    }
    ctx->pc = 0x47C584u;
    SET_GPR_U32(ctx, 31, 0x47C58Cu);
    ctx->pc = 0x47C588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C584u;
            // 0x47c588: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C58Cu; }
        if (ctx->pc != 0x47C58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C58Cu; }
        if (ctx->pc != 0x47C58Cu) { return; }
    }
    ctx->pc = 0x47C58Cu;
label_47c58c:
    // 0x47c58c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_47c590:
    if (ctx->pc == 0x47C590u) {
        ctx->pc = 0x47C590u;
            // 0x47c590: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x47C594u;
        goto label_47c594;
    }
    ctx->pc = 0x47C58Cu;
    {
        const bool branch_taken_0x47c58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c58c) {
            ctx->pc = 0x47C590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47C58Cu;
            // 0x47c590: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47C5B0u;
            goto label_47c5b0;
        }
    }
    ctx->pc = 0x47C594u;
label_47c594:
    // 0x47c594: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x47c594u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_47c598:
    // 0x47c598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47c598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c59c:
    // 0x47c59c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x47c59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47c5a0:
    // 0x47c5a0: 0x24c6f620  addiu       $a2, $a2, -0x9E0
    ctx->pc = 0x47c5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964768));
label_47c5a4:
    // 0x47c5a4: 0xc11f1ac  jal         func_47C6B0
label_47c5a8:
    if (ctx->pc == 0x47C5A8u) {
        ctx->pc = 0x47C5A8u;
            // 0x47c5a8: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x47C5ACu;
        goto label_47c5ac;
    }
    ctx->pc = 0x47C5A4u;
    SET_GPR_U32(ctx, 31, 0x47C5ACu);
    ctx->pc = 0x47C5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C5A4u;
            // 0x47c5a8: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47C6B0u;
    if (runtime->hasFunction(0x47C6B0u)) {
        auto targetFn = runtime->lookupFunction(0x47C6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C5ACu; }
        if (ctx->pc != 0x47C5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047C6B0_0x47c6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C5ACu; }
        if (ctx->pc != 0x47C5ACu) { return; }
    }
    ctx->pc = 0x47C5ACu;
label_47c5ac:
    // 0x47c5ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x47c5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_47c5b0:
    // 0x47c5b0: 0xae7001d4  sw          $s0, 0x1D4($s3)
    ctx->pc = 0x47c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 468), GPR_U32(ctx, 16));
label_47c5b4:
    // 0x47c5b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47c5b8:
    // 0x47c5b8: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x47c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_47c5bc:
    // 0x47c5bc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x47c5bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47c5c0:
    // 0x47c5c0: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x47c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_47c5c4:
    // 0x47c5c4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x47c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_47c5c8:
    // 0x47c5c8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_47c5cc:
    if (ctx->pc == 0x47C5CCu) {
        ctx->pc = 0x47C5CCu;
            // 0x47c5cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C5D0u;
        goto label_47c5d0;
    }
    ctx->pc = 0x47C5C8u;
    {
        const bool branch_taken_0x47c5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x47C5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C5C8u;
            // 0x47c5cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c5c8) {
            ctx->pc = 0x47C600u;
            goto label_47c600;
        }
    }
    ctx->pc = 0x47C5D0u;
label_47c5d0:
    // 0x47c5d0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x47c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_47c5d4:
    // 0x47c5d4: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_47c5d8:
    if (ctx->pc == 0x47C5D8u) {
        ctx->pc = 0x47C5D8u;
            // 0x47c5d8: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->pc = 0x47C5DCu;
        goto label_47c5dc;
    }
    ctx->pc = 0x47C5D4u;
    {
        const bool branch_taken_0x47c5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x47c5d4) {
            ctx->pc = 0x47C5D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47C5D4u;
            // 0x47c5d8: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47C5E4u;
            goto label_47c5e4;
        }
    }
    ctx->pc = 0x47C5DCu;
label_47c5dc:
    // 0x47c5dc: 0x1000000f  b           . + 4 + (0xF << 2)
label_47c5e0:
    if (ctx->pc == 0x47C5E0u) {
        ctx->pc = 0x47C5E0u;
            // 0x47c5e0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x47C5E4u;
        goto label_47c5e4;
    }
    ctx->pc = 0x47C5DCu;
    {
        const bool branch_taken_0x47c5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47C5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C5DCu;
            // 0x47c5e0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c5dc) {
            ctx->pc = 0x47C61Cu;
            goto label_47c61c;
        }
    }
    ctx->pc = 0x47C5E4u;
label_47c5e4:
    // 0x47c5e4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x47c5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_47c5e8:
    // 0x47c5e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47c5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47c5ec:
    // 0x47c5ec: 0x345214a9  ori         $s2, $v0, 0x14A9
    ctx->pc = 0x47c5ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5289);
label_47c5f0:
    // 0x47c5f0: 0xc0f6518  jal         func_3D9460
label_47c5f4:
    if (ctx->pc == 0x47C5F4u) {
        ctx->pc = 0x47C5F4u;
            // 0x47c5f4: 0x24a5f4b0  addiu       $a1, $a1, -0xB50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964400));
        ctx->pc = 0x47C5F8u;
        goto label_47c5f8;
    }
    ctx->pc = 0x47C5F0u;
    SET_GPR_U32(ctx, 31, 0x47C5F8u);
    ctx->pc = 0x47C5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C5F0u;
            // 0x47c5f4: 0x24a5f4b0  addiu       $a1, $a1, -0xB50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D9460u;
    if (runtime->hasFunction(0x3D9460u)) {
        auto targetFn = runtime->lookupFunction(0x3D9460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C5F8u; }
        if (ctx->pc != 0x47C5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D9460_0x3d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C5F8u; }
        if (ctx->pc != 0x47C5F8u) { return; }
    }
    ctx->pc = 0x47C5F8u;
label_47c5f8:
    // 0x47c5f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_47c5fc:
    if (ctx->pc == 0x47C5FCu) {
        ctx->pc = 0x47C600u;
        goto label_47c600;
    }
    ctx->pc = 0x47C5F8u;
    {
        const bool branch_taken_0x47c5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c5f8) {
            ctx->pc = 0x47C618u;
            goto label_47c618;
        }
    }
    ctx->pc = 0x47C600u;
label_47c600:
    // 0x47c600: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x47c600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_47c604:
    // 0x47c604: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x47c604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_47c608:
    // 0x47c608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47c608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47c60c:
    // 0x47c60c: 0x345217a9  ori         $s2, $v0, 0x17A9
    ctx->pc = 0x47c60cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6057);
label_47c610:
    // 0x47c610: 0xc0f6518  jal         func_3D9460
label_47c614:
    if (ctx->pc == 0x47C614u) {
        ctx->pc = 0x47C614u;
            // 0x47c614: 0x24a5f4d0  addiu       $a1, $a1, -0xB30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964432));
        ctx->pc = 0x47C618u;
        goto label_47c618;
    }
    ctx->pc = 0x47C610u;
    SET_GPR_U32(ctx, 31, 0x47C618u);
    ctx->pc = 0x47C614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C610u;
            // 0x47c614: 0x24a5f4d0  addiu       $a1, $a1, -0xB30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D9460u;
    if (runtime->hasFunction(0x3D9460u)) {
        auto targetFn = runtime->lookupFunction(0x3D9460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C618u; }
        if (ctx->pc != 0x47C618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D9460_0x3d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C618u; }
        if (ctx->pc != 0x47C618u) { return; }
    }
    ctx->pc = 0x47C618u;
label_47c618:
    // 0x47c618: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x47c618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_47c61c:
    // 0x47c61c: 0xc040180  jal         func_100600
label_47c620:
    if (ctx->pc == 0x47C620u) {
        ctx->pc = 0x47C624u;
        goto label_47c624;
    }
    ctx->pc = 0x47C61Cu;
    SET_GPR_U32(ctx, 31, 0x47C624u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C624u; }
        if (ctx->pc != 0x47C624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C624u; }
        if (ctx->pc != 0x47C624u) { return; }
    }
    ctx->pc = 0x47C624u;
label_47c624:
    // 0x47c624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47c624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c628:
    // 0x47c628: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_47c62c:
    if (ctx->pc == 0x47C62Cu) {
        ctx->pc = 0x47C630u;
        goto label_47c630;
    }
    ctx->pc = 0x47C628u;
    {
        const bool branch_taken_0x47c628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c628) {
            ctx->pc = 0x47C664u;
            goto label_47c664;
        }
    }
    ctx->pc = 0x47C630u;
label_47c630:
    // 0x47c630: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47c630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_47c634:
    // 0x47c634: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x47c634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47c638:
    // 0x47c638: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x47c638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_47c63c:
    // 0x47c63c: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x47c63cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_47c640:
    // 0x47c640: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x47c640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_47c644:
    // 0x47c644: 0x320f809  jalr        $t9
label_47c648:
    if (ctx->pc == 0x47C648u) {
        ctx->pc = 0x47C648u;
            // 0x47c648: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x47C64Cu;
        goto label_47c64c;
    }
    ctx->pc = 0x47C644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47C64Cu);
        ctx->pc = 0x47C648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C644u;
            // 0x47c648: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47C64Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47C64Cu; }
            if (ctx->pc != 0x47C64Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47C64Cu;
label_47c64c:
    // 0x47c64c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_47c650:
    // 0x47c650: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x47c650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_47c654:
    // 0x47c654: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47c654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_47c658:
    // 0x47c658: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x47c658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_47c65c:
    // 0x47c65c: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x47c65cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_47c660:
    // 0x47c660: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x47c660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_47c664:
    // 0x47c664: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x47c664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_47c668:
    // 0x47c668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47c668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47c66c:
    // 0x47c66c: 0x24a5f4f0  addiu       $a1, $a1, -0xB10
    ctx->pc = 0x47c66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964464));
label_47c670:
    // 0x47c670: 0xc0f6518  jal         func_3D9460
label_47c674:
    if (ctx->pc == 0x47C674u) {
        ctx->pc = 0x47C674u;
            // 0x47c674: 0xae7001dc  sw          $s0, 0x1DC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 476), GPR_U32(ctx, 16));
        ctx->pc = 0x47C678u;
        goto label_47c678;
    }
    ctx->pc = 0x47C670u;
    SET_GPR_U32(ctx, 31, 0x47C678u);
    ctx->pc = 0x47C674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C670u;
            // 0x47c674: 0xae7001dc  sw          $s0, 0x1DC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 476), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D9460u;
    if (runtime->hasFunction(0x3D9460u)) {
        auto targetFn = runtime->lookupFunction(0x3D9460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C678u; }
        if (ctx->pc != 0x47C678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D9460_0x3d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C678u; }
        if (ctx->pc != 0x47C678u) { return; }
    }
    ctx->pc = 0x47C678u;
label_47c678:
    // 0x47c678: 0xc0f64e8  jal         func_3D93A0
label_47c67c:
    if (ctx->pc == 0x47C67Cu) {
        ctx->pc = 0x47C67Cu;
            // 0x47c67c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C680u;
        goto label_47c680;
    }
    ctx->pc = 0x47C678u;
    SET_GPR_U32(ctx, 31, 0x47C680u);
    ctx->pc = 0x47C67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C678u;
            // 0x47c67c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D93A0u;
    if (runtime->hasFunction(0x3D93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3D93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C680u; }
        if (ctx->pc != 0x47C680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D93A0_0x3d93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C680u; }
        if (ctx->pc != 0x47C680u) { return; }
    }
    ctx->pc = 0x47C680u;
label_47c680:
    // 0x47c680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47c680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47c684:
    // 0x47c684: 0xae6301c0  sw          $v1, 0x1C0($s3)
    ctx->pc = 0x47c684u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 448), GPR_U32(ctx, 3));
label_47c688:
    // 0x47c688: 0xae6001c4  sw          $zero, 0x1C4($s3)
    ctx->pc = 0x47c688u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 452), GPR_U32(ctx, 0));
label_47c68c:
    // 0x47c68c: 0xa26001d8  sb          $zero, 0x1D8($s3)
    ctx->pc = 0x47c68cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 472), (uint8_t)GPR_U32(ctx, 0));
label_47c690:
    // 0x47c690: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x47c690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_47c694:
    // 0x47c694: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47c694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47c698:
    // 0x47c698: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47c698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47c69c:
    // 0x47c69c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47c69cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47c6a0:
    // 0x47c6a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47c6a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47c6a4:
    // 0x47c6a4: 0x3e00008  jr          $ra
label_47c6a8:
    if (ctx->pc == 0x47C6A8u) {
        ctx->pc = 0x47C6A8u;
            // 0x47c6a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x47C6ACu;
        goto label_47c6ac;
    }
    ctx->pc = 0x47C6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47C6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C6A4u;
            // 0x47c6a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47C6ACu;
label_47c6ac:
    // 0x47c6ac: 0x0  nop
    ctx->pc = 0x47c6acu;
    // NOP
}
