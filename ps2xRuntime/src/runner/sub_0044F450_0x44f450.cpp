#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044F450
// Address: 0x44f450 - 0x44f5e0
void sub_0044F450_0x44f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F450_0x44f450");
#endif

    switch (ctx->pc) {
        case 0x44f46cu: goto label_44f46c;
        case 0x44f48cu: goto label_44f48c;
        case 0x44f4d0u: goto label_44f4d0;
        case 0x44f4ecu: goto label_44f4ec;
        case 0x44f510u: goto label_44f510;
        case 0x44f570u: goto label_44f570;
        case 0x44f57cu: goto label_44f57c;
        case 0x44f588u: goto label_44f588;
        case 0x44f594u: goto label_44f594;
        case 0x44f5a0u: goto label_44f5a0;
        case 0x44f5acu: goto label_44f5ac;
        case 0x44f5c4u: goto label_44f5c4;
        default: break;
    }

    ctx->pc = 0x44f450u;

    // 0x44f450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44f450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44f454: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x44f454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x44f458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44f458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44f45c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x44f45cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x44f460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44f460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44f464: 0xc113db0  jal         func_44F6C0
    ctx->pc = 0x44F464u;
    SET_GPR_U32(ctx, 31, 0x44F46Cu);
    ctx->pc = 0x44F468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F464u;
            // 0x44f468: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44F6C0u;
    if (runtime->hasFunction(0x44F6C0u)) {
        auto targetFn = runtime->lookupFunction(0x44F6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F46Cu; }
        if (ctx->pc != 0x44F46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044F6C0_0x44f6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F46Cu; }
        if (ctx->pc != 0x44F46Cu) { return; }
    }
    ctx->pc = 0x44F46Cu;
label_44f46c:
    // 0x44f46c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x44f470: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44f470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44f474: 0x2463dcb0  addiu       $v1, $v1, -0x2350
    ctx->pc = 0x44f474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958256));
    // 0x44f478: 0x2442dce8  addiu       $v0, $v0, -0x2318
    ctx->pc = 0x44f478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958312));
    // 0x44f47c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x44f480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44f480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f484: 0xc113dac  jal         func_44F6B0
    ctx->pc = 0x44F484u;
    SET_GPR_U32(ctx, 31, 0x44F48Cu);
    ctx->pc = 0x44F488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F484u;
            // 0x44f488: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44F6B0u;
    if (runtime->hasFunction(0x44F6B0u)) {
        auto targetFn = runtime->lookupFunction(0x44F6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F48Cu; }
        if (ctx->pc != 0x44F48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044F6B0_0x44f6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F48Cu; }
        if (ctx->pc != 0x44F48Cu) { return; }
    }
    ctx->pc = 0x44F48Cu;
label_44f48c:
    // 0x44f48c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x44f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x44f490: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x44f490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x44f494: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44f494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44f498: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x44f498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x44f49c: 0x2442dc00  addiu       $v0, $v0, -0x2400
    ctx->pc = 0x44f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958080));
    // 0x44f4a0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x44f4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x44f4a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x44f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x44f4a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44f4ac: 0x2442dc38  addiu       $v0, $v0, -0x23C8
    ctx->pc = 0x44f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958136));
    // 0x44f4b0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x44f4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x44f4b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x44f4b8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x44f4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x44f4bc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x44f4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x44f4c0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x44f4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x44f4c4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x44f4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x44f4c8: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x44F4C8u;
    SET_GPR_U32(ctx, 31, 0x44F4D0u);
    ctx->pc = 0x44F4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F4C8u;
            // 0x44f4cc: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F4D0u; }
        if (ctx->pc != 0x44F4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F4D0u; }
        if (ctx->pc != 0x44F4D0u) { return; }
    }
    ctx->pc = 0x44F4D0u;
label_44f4d0:
    // 0x44f4d0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x44f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x44f4d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44f4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f4d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44F4D8u;
    {
        const bool branch_taken_0x44f4d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F4D8u;
            // 0x44f4dc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f4d8) {
            ctx->pc = 0x44F4F0u;
            goto label_44f4f0;
        }
    }
    ctx->pc = 0x44F4E0u;
    // 0x44f4e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x44f4e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x44f4e4: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x44F4E4u;
    SET_GPR_U32(ctx, 31, 0x44F4ECu);
    ctx->pc = 0x44F4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F4E4u;
            // 0x44f4e8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F4ECu; }
        if (ctx->pc != 0x44F4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F4ECu; }
        if (ctx->pc != 0x44F4ECu) { return; }
    }
    ctx->pc = 0x44F4ECu;
label_44f4ec:
    // 0x44f4ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44f4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44f4f0:
    // 0x44f4f0: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x44f4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x44f4f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44f4f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f4f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44f4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f4fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44f4fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f500: 0x3e00008  jr          $ra
    ctx->pc = 0x44F500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44F504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F500u;
            // 0x44f504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44F508u;
    // 0x44f508: 0x0  nop
    ctx->pc = 0x44f508u;
    // NOP
    // 0x44f50c: 0x0  nop
    ctx->pc = 0x44f50cu;
    // NOP
label_44f510:
    // 0x44f510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44f510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44f514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44f514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44f518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44f518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x44f51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44f51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44f520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44f520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f524: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x44F524u;
    {
        const bool branch_taken_0x44f524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F524u;
            // 0x44f528: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f524) {
            ctx->pc = 0x44F5C4u;
            goto label_44f5c4;
        }
    }
    ctx->pc = 0x44F52Cu;
    // 0x44f52c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x44f530: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44f530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44f534: 0x2463dcb0  addiu       $v1, $v1, -0x2350
    ctx->pc = 0x44f534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958256));
    // 0x44f538: 0x2442dce8  addiu       $v0, $v0, -0x2318
    ctx->pc = 0x44f538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958312));
    // 0x44f53c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x44f540: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x44F540u;
    {
        const bool branch_taken_0x44f540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F540u;
            // 0x44f544: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f540) {
            ctx->pc = 0x44F5ACu;
            goto label_44f5ac;
        }
    }
    ctx->pc = 0x44F548u;
    // 0x44f548: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44f548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x44f54c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44f550: 0x2463dc60  addiu       $v1, $v1, -0x23A0
    ctx->pc = 0x44f550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958176));
    // 0x44f554: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x44f554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x44f558: 0x2442dc98  addiu       $v0, $v0, -0x2368
    ctx->pc = 0x44f558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958232));
    // 0x44f55c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x44f560: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x44f560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x44f564: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x44f564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x44f568: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x44F568u;
    SET_GPR_U32(ctx, 31, 0x44F570u);
    ctx->pc = 0x44F56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F568u;
            // 0x44f56c: 0x24a5ee50  addiu       $a1, $a1, -0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F570u; }
        if (ctx->pc != 0x44F570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F570u; }
        if (ctx->pc != 0x44F570u) { return; }
    }
    ctx->pc = 0x44F570u;
label_44f570:
    // 0x44f570: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x44f570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x44f574: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x44F574u;
    SET_GPR_U32(ctx, 31, 0x44F57Cu);
    ctx->pc = 0x44F578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F574u;
            // 0x44f578: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F57Cu; }
        if (ctx->pc != 0x44F57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F57Cu; }
        if (ctx->pc != 0x44F57Cu) { return; }
    }
    ctx->pc = 0x44F57Cu;
label_44f57c:
    // 0x44f57c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x44f57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x44f580: 0xc113d90  jal         func_44F640
    ctx->pc = 0x44F580u;
    SET_GPR_U32(ctx, 31, 0x44F588u);
    ctx->pc = 0x44F584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F580u;
            // 0x44f584: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44F640u;
    if (runtime->hasFunction(0x44F640u)) {
        auto targetFn = runtime->lookupFunction(0x44F640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F588u; }
        if (ctx->pc != 0x44F588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044F640_0x44f640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F588u; }
        if (ctx->pc != 0x44F588u) { return; }
    }
    ctx->pc = 0x44F588u;
label_44f588:
    // 0x44f588: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x44f588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x44f58c: 0xc113d90  jal         func_44F640
    ctx->pc = 0x44F58Cu;
    SET_GPR_U32(ctx, 31, 0x44F594u);
    ctx->pc = 0x44F590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F58Cu;
            // 0x44f590: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44F640u;
    if (runtime->hasFunction(0x44F640u)) {
        auto targetFn = runtime->lookupFunction(0x44F640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F594u; }
        if (ctx->pc != 0x44F594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044F640_0x44f640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F594u; }
        if (ctx->pc != 0x44F594u) { return; }
    }
    ctx->pc = 0x44F594u;
label_44f594:
    // 0x44f594: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x44f594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x44f598: 0xc113d78  jal         func_44F5E0
    ctx->pc = 0x44F598u;
    SET_GPR_U32(ctx, 31, 0x44F5A0u);
    ctx->pc = 0x44F59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F598u;
            // 0x44f59c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44F5E0u;
    if (runtime->hasFunction(0x44F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x44F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F5A0u; }
        if (ctx->pc != 0x44F5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044F5E0_0x44f5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F5A0u; }
        if (ctx->pc != 0x44F5A0u) { return; }
    }
    ctx->pc = 0x44F5A0u;
label_44f5a0:
    // 0x44f5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44f5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f5a4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x44F5A4u;
    SET_GPR_U32(ctx, 31, 0x44F5ACu);
    ctx->pc = 0x44F5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F5A4u;
            // 0x44f5a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F5ACu; }
        if (ctx->pc != 0x44F5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F5ACu; }
        if (ctx->pc != 0x44F5ACu) { return; }
    }
    ctx->pc = 0x44F5ACu;
label_44f5ac:
    // 0x44f5ac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x44f5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x44f5b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44f5b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x44f5b4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44F5B4u;
    {
        const bool branch_taken_0x44f5b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44f5b4) {
            ctx->pc = 0x44F5B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44F5B4u;
            // 0x44f5b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44F5C8u;
            goto label_44f5c8;
        }
    }
    ctx->pc = 0x44F5BCu;
    // 0x44f5bc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x44F5BCu;
    SET_GPR_U32(ctx, 31, 0x44F5C4u);
    ctx->pc = 0x44F5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F5BCu;
            // 0x44f5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F5C4u; }
        if (ctx->pc != 0x44F5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F5C4u; }
        if (ctx->pc != 0x44F5C4u) { return; }
    }
    ctx->pc = 0x44F5C4u;
label_44f5c4:
    // 0x44f5c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44f5c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44f5c8:
    // 0x44f5c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44f5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44f5cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44f5ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f5d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44f5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x44F5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44F5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F5D4u;
            // 0x44f5d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44F5DCu;
    // 0x44f5dc: 0x0  nop
    ctx->pc = 0x44f5dcu;
    // NOP
}
