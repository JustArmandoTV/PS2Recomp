#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041E490
// Address: 0x41e490 - 0x41e6a0
void sub_0041E490_0x41e490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E490_0x41e490");
#endif

    switch (ctx->pc) {
        case 0x41e4acu: goto label_41e4ac;
        case 0x41e4ccu: goto label_41e4cc;
        case 0x41e588u: goto label_41e588;
        case 0x41e5a4u: goto label_41e5a4;
        case 0x41e5d0u: goto label_41e5d0;
        case 0x41e630u: goto label_41e630;
        case 0x41e63cu: goto label_41e63c;
        case 0x41e648u: goto label_41e648;
        case 0x41e654u: goto label_41e654;
        case 0x41e660u: goto label_41e660;
        case 0x41e66cu: goto label_41e66c;
        case 0x41e684u: goto label_41e684;
        default: break;
    }

    ctx->pc = 0x41e490u;

    // 0x41e490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41e490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41e494: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x41e494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x41e498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41e498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41e49c: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x41e49cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x41e4a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41e4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x41e4a4: 0xc1079e0  jal         func_41E780
    ctx->pc = 0x41E4A4u;
    SET_GPR_U32(ctx, 31, 0x41E4ACu);
    ctx->pc = 0x41E4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E4A4u;
            // 0x41e4a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41E780u;
    if (runtime->hasFunction(0x41E780u)) {
        auto targetFn = runtime->lookupFunction(0x41E780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E4ACu; }
        if (ctx->pc != 0x41E4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041E780_0x41e780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E4ACu; }
        if (ctx->pc != 0x41E4ACu) { return; }
    }
    ctx->pc = 0x41E4ACu;
label_41e4ac:
    // 0x41e4ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x41e4b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x41e4b4: 0x2463bae0  addiu       $v1, $v1, -0x4520
    ctx->pc = 0x41e4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949600));
    // 0x41e4b8: 0x2442bb18  addiu       $v0, $v0, -0x44E8
    ctx->pc = 0x41e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949656));
    // 0x41e4bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41e4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x41e4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41e4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e4c4: 0xc1079dc  jal         func_41E770
    ctx->pc = 0x41E4C4u;
    SET_GPR_U32(ctx, 31, 0x41E4CCu);
    ctx->pc = 0x41E4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E4C4u;
            // 0x41e4c8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41E770u;
    if (runtime->hasFunction(0x41E770u)) {
        auto targetFn = runtime->lookupFunction(0x41E770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E4CCu; }
        if (ctx->pc != 0x41E4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041E770_0x41e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E4CCu; }
        if (ctx->pc != 0x41E4CCu) { return; }
    }
    ctx->pc = 0x41E4CCu;
label_41e4cc:
    // 0x41e4cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x41e4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x41e4d0: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x41e4d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
    // 0x41e4d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x41e4d8: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x41e4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x41e4dc: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x41e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x41e4e0: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x41e4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x41e4e4: 0x3c044110  lui         $a0, 0x4110
    ctx->pc = 0x41e4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16656 << 16));
    // 0x41e4e8: 0x2508c4f0  addiu       $t0, $t0, -0x3B10
    ctx->pc = 0x41e4e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952176));
    // 0x41e4ec: 0x24e7b990  addiu       $a3, $a3, -0x4670
    ctx->pc = 0x41e4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949264));
    // 0x41e4f0: 0x24c6b9c8  addiu       $a2, $a2, -0x4638
    ctx->pc = 0x41e4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949320));
    // 0x41e4f4: 0x8c690968  lw          $t1, 0x968($v1)
    ctx->pc = 0x41e4f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x41e4f8: 0x3c024099  lui         $v0, 0x4099
    ctx->pc = 0x41e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16537 << 16));
    // 0x41e4fc: 0x3445999a  ori         $a1, $v0, 0x999A
    ctx->pc = 0x41e4fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x41e500: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x41e500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x41e504: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x41e504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x41e508: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x41e508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x41e50c: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x41e50cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x41e510: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x41e510u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x41e514: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x41e514u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x41e518: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x41e518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41e51c: 0xa20800a8  sb          $t0, 0xA8($s0)
    ctx->pc = 0x41e51cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 8));
    // 0x41e520: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x41e520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x41e524: 0xae060064  sw          $a2, 0x64($s0)
    ctx->pc = 0x41e524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
    // 0x41e528: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x41e528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x41e52c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x41e52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x41e530: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x41e530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x41e534: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x41e534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x41e538: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x41e538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x41e53c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x41e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x41e540: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x41E540u;
    {
        const bool branch_taken_0x41e540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x41e540) {
            ctx->pc = 0x41E574u;
            goto label_41e574;
        }
    }
    ctx->pc = 0x41E548u;
    // 0x41e548: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41e548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x41e54c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x41e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x41e550: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x41e550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x41e554: 0x8c420cc4  lw          $v0, 0xCC4($v0)
    ctx->pc = 0x41e554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3268)));
    // 0x41e558: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x41E558u;
    {
        const bool branch_taken_0x41e558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x41e558) {
            ctx->pc = 0x41E574u;
            goto label_41e574;
        }
    }
    ctx->pc = 0x41E560u;
    // 0x41e560: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x41e560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x41e564: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x41e564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x41e568: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x41e568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x41e56c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x41e56cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x41e570: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x41e570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_41e574:
    // 0x41e574: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41e574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x41e578: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x41e578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x41e57c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x41e580: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x41E580u;
    SET_GPR_U32(ctx, 31, 0x41E588u);
    ctx->pc = 0x41E584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E580u;
            // 0x41e584: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E588u; }
        if (ctx->pc != 0x41E588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E588u; }
        if (ctx->pc != 0x41E588u) { return; }
    }
    ctx->pc = 0x41E588u;
label_41e588:
    // 0x41e588: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x41e588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x41e58c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41e58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e590: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41E590u;
    {
        const bool branch_taken_0x41e590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E590u;
            // 0x41e594: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e590) {
            ctx->pc = 0x41E5A8u;
            goto label_41e5a8;
        }
    }
    ctx->pc = 0x41E598u;
    // 0x41e598: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x41e598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41e59c: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x41E59Cu;
    SET_GPR_U32(ctx, 31, 0x41E5A4u);
    ctx->pc = 0x41E5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E59Cu;
            // 0x41e5a0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E5A4u; }
        if (ctx->pc != 0x41E5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E5A4u; }
        if (ctx->pc != 0x41E5A4u) { return; }
    }
    ctx->pc = 0x41E5A4u;
label_41e5a4:
    // 0x41e5a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41e5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41e5a8:
    // 0x41e5a8: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x41e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x41e5ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41e5acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e5b0: 0xa20000a9  sb          $zero, 0xA9($s0)
    ctx->pc = 0x41e5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x41e5b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41e5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41e5b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41e5b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41e5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x41E5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E5BCu;
            // 0x41e5c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41E5C4u;
    // 0x41e5c4: 0x0  nop
    ctx->pc = 0x41e5c4u;
    // NOP
    // 0x41e5c8: 0x0  nop
    ctx->pc = 0x41e5c8u;
    // NOP
    // 0x41e5cc: 0x0  nop
    ctx->pc = 0x41e5ccu;
    // NOP
label_41e5d0:
    // 0x41e5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41e5d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41e5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x41e5d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41e5dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41e5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x41e5e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41e5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e5e4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x41E5E4u;
    {
        const bool branch_taken_0x41e5e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E5E4u;
            // 0x41e5e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e5e4) {
            ctx->pc = 0x41E684u;
            goto label_41e684;
        }
    }
    ctx->pc = 0x41E5ECu;
    // 0x41e5ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x41e5f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x41e5f4: 0x2463bae0  addiu       $v1, $v1, -0x4520
    ctx->pc = 0x41e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949600));
    // 0x41e5f8: 0x2442bb18  addiu       $v0, $v0, -0x44E8
    ctx->pc = 0x41e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949656));
    // 0x41e5fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41e5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x41e600: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x41E600u;
    {
        const bool branch_taken_0x41e600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E600u;
            // 0x41e604: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e600) {
            ctx->pc = 0x41E66Cu;
            goto label_41e66c;
        }
    }
    ctx->pc = 0x41E608u;
    // 0x41e608: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41e608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x41e60c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x41e610: 0x2463ba90  addiu       $v1, $v1, -0x4570
    ctx->pc = 0x41e610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949520));
    // 0x41e614: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x41e614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x41e618: 0x2442bac8  addiu       $v0, $v0, -0x4538
    ctx->pc = 0x41e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949576));
    // 0x41e61c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x41e620: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x41e620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x41e624: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x41e624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x41e628: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x41E628u;
    SET_GPR_U32(ctx, 31, 0x41E630u);
    ctx->pc = 0x41E62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E628u;
            // 0x41e62c: 0x24a5de00  addiu       $a1, $a1, -0x2200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E630u; }
        if (ctx->pc != 0x41E630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E630u; }
        if (ctx->pc != 0x41E630u) { return; }
    }
    ctx->pc = 0x41E630u;
label_41e630:
    // 0x41e630: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x41e630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x41e634: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x41E634u;
    SET_GPR_U32(ctx, 31, 0x41E63Cu);
    ctx->pc = 0x41E638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E634u;
            // 0x41e638: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E63Cu; }
        if (ctx->pc != 0x41E63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E63Cu; }
        if (ctx->pc != 0x41E63Cu) { return; }
    }
    ctx->pc = 0x41E63Cu;
label_41e63c:
    // 0x41e63c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x41e63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x41e640: 0xc1079c0  jal         func_41E700
    ctx->pc = 0x41E640u;
    SET_GPR_U32(ctx, 31, 0x41E648u);
    ctx->pc = 0x41E644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E640u;
            // 0x41e644: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41E700u;
    if (runtime->hasFunction(0x41E700u)) {
        auto targetFn = runtime->lookupFunction(0x41E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E648u; }
        if (ctx->pc != 0x41E648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041E700_0x41e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E648u; }
        if (ctx->pc != 0x41E648u) { return; }
    }
    ctx->pc = 0x41E648u;
label_41e648:
    // 0x41e648: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x41e648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x41e64c: 0xc1079c0  jal         func_41E700
    ctx->pc = 0x41E64Cu;
    SET_GPR_U32(ctx, 31, 0x41E654u);
    ctx->pc = 0x41E650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E64Cu;
            // 0x41e650: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41E700u;
    if (runtime->hasFunction(0x41E700u)) {
        auto targetFn = runtime->lookupFunction(0x41E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E654u; }
        if (ctx->pc != 0x41E654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041E700_0x41e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E654u; }
        if (ctx->pc != 0x41E654u) { return; }
    }
    ctx->pc = 0x41E654u;
label_41e654:
    // 0x41e654: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x41e654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x41e658: 0xc1079a8  jal         func_41E6A0
    ctx->pc = 0x41E658u;
    SET_GPR_U32(ctx, 31, 0x41E660u);
    ctx->pc = 0x41E65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E658u;
            // 0x41e65c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41E6A0u;
    if (runtime->hasFunction(0x41E6A0u)) {
        auto targetFn = runtime->lookupFunction(0x41E6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E660u; }
        if (ctx->pc != 0x41E660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041E6A0_0x41e6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E660u; }
        if (ctx->pc != 0x41E660u) { return; }
    }
    ctx->pc = 0x41E660u;
label_41e660:
    // 0x41e660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41e660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e664: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x41E664u;
    SET_GPR_U32(ctx, 31, 0x41E66Cu);
    ctx->pc = 0x41E668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E664u;
            // 0x41e668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E66Cu; }
        if (ctx->pc != 0x41E66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E66Cu; }
        if (ctx->pc != 0x41E66Cu) { return; }
    }
    ctx->pc = 0x41E66Cu;
label_41e66c:
    // 0x41e66c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x41e66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x41e670: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41e670u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x41e674: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x41E674u;
    {
        const bool branch_taken_0x41e674 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41e674) {
            ctx->pc = 0x41E678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41E674u;
            // 0x41e678: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41E688u;
            goto label_41e688;
        }
    }
    ctx->pc = 0x41E67Cu;
    // 0x41e67c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x41E67Cu;
    SET_GPR_U32(ctx, 31, 0x41E684u);
    ctx->pc = 0x41E680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E67Cu;
            // 0x41e680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E684u; }
        if (ctx->pc != 0x41E684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E684u; }
        if (ctx->pc != 0x41E684u) { return; }
    }
    ctx->pc = 0x41E684u;
label_41e684:
    // 0x41e684: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41e684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41e688:
    // 0x41e688: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41e688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41e68c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41e68cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41e690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41e690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41e694: 0x3e00008  jr          $ra
    ctx->pc = 0x41E694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E694u;
            // 0x41e698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41E69Cu;
    // 0x41e69c: 0x0  nop
    ctx->pc = 0x41e69cu;
    // NOP
}
