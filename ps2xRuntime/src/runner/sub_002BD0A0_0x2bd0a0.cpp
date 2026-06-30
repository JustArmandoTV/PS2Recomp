#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BD0A0
// Address: 0x2bd0a0 - 0x2bd2a0
void sub_002BD0A0_0x2bd0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD0A0_0x2bd0a0");
#endif

    switch (ctx->pc) {
        case 0x2bd0c8u: goto label_2bd0c8;
        case 0x2bd0e8u: goto label_2bd0e8;
        case 0x2bd130u: goto label_2bd130;
        case 0x2bd150u: goto label_2bd150;
        case 0x2bd188u: goto label_2bd188;
        case 0x2bd1a4u: goto label_2bd1a4;
        case 0x2bd1d0u: goto label_2bd1d0;
        case 0x2bd230u: goto label_2bd230;
        case 0x2bd23cu: goto label_2bd23c;
        case 0x2bd248u: goto label_2bd248;
        case 0x2bd254u: goto label_2bd254;
        case 0x2bd260u: goto label_2bd260;
        case 0x2bd26cu: goto label_2bd26c;
        case 0x2bd284u: goto label_2bd284;
        default: break;
    }

    ctx->pc = 0x2bd0a0u;

    // 0x2bd0a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bd0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bd0a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2bd0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2bd0a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bd0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bd0ac: 0x34468703  ori         $a2, $v0, 0x8703
    ctx->pc = 0x2bd0acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34563);
    // 0x2bd0b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bd0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bd0b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bd0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bd0b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bd0b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd0bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bd0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd0c0: 0xc0af588  jal         func_2BD620
    ctx->pc = 0x2BD0C0u;
    SET_GPR_U32(ctx, 31, 0x2BD0C8u);
    ctx->pc = 0x2BD0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD0C0u;
            // 0x2bd0c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BD620u;
    if (runtime->hasFunction(0x2BD620u)) {
        auto targetFn = runtime->lookupFunction(0x2BD620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD0C8u; }
        if (ctx->pc != 0x2BD0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BD620_0x2bd620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD0C8u; }
        if (ctx->pc != 0x2BD0C8u) { return; }
    }
    ctx->pc = 0x2BD0C8u;
label_2bd0c8:
    // 0x2bd0c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bd0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bd0cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bd0d0: 0x24631f40  addiu       $v1, $v1, 0x1F40
    ctx->pc = 0x2bd0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8000));
    // 0x2bd0d4: 0x24421f78  addiu       $v0, $v0, 0x1F78
    ctx->pc = 0x2bd0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8056));
    // 0x2bd0d8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2bd0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2bd0dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bd0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd0e0: 0xc0af584  jal         func_2BD610
    ctx->pc = 0x2BD0E0u;
    SET_GPR_U32(ctx, 31, 0x2BD0E8u);
    ctx->pc = 0x2BD0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD0E0u;
            // 0x2bd0e4: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BD610u;
    if (runtime->hasFunction(0x2BD610u)) {
        auto targetFn = runtime->lookupFunction(0x2BD610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD0E8u; }
        if (ctx->pc != 0x2BD0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BD610_0x2bd610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD0E8u; }
        if (ctx->pc != 0x2BD0E8u) { return; }
    }
    ctx->pc = 0x2BD0E8u;
label_2bd0e8:
    // 0x2bd0e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2bd0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2bd0ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2bd0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd0f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bd0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2bd0f4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2bd0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2bd0f8: 0x2442ec40  addiu       $v0, $v0, -0x13C0
    ctx->pc = 0x2bd0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962240));
    // 0x2bd0fc: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x2bd0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2bd100: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2bd100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2bd104: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bd104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2bd108: 0x2442ec78  addiu       $v0, $v0, -0x1388
    ctx->pc = 0x2bd108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962296));
    // 0x2bd10c: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x2bd10cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    // 0x2bd110: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2bd110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2bd114: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x2bd114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x2bd118: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2bd118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2bd11c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2bd11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2bd120: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2bd120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2bd124: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2bd124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2bd128: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x2BD128u;
    SET_GPR_U32(ctx, 31, 0x2BD130u);
    ctx->pc = 0x2BD12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD128u;
            // 0x2bd12c: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD130u; }
        if (ctx->pc != 0x2BD130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD130u; }
        if (ctx->pc != 0x2BD130u) { return; }
    }
    ctx->pc = 0x2BD130u;
label_2bd130:
    // 0x2bd130: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2bd130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2bd134: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bd134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd138: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD138u;
    {
        const bool branch_taken_0x2bd138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD138u;
            // 0x2bd13c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd138) {
            ctx->pc = 0x2BD154u;
            goto label_2bd154;
        }
    }
    ctx->pc = 0x2BD140u;
    // 0x2bd140: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2bd140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2bd144: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x2bd144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bd148: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x2BD148u;
    SET_GPR_U32(ctx, 31, 0x2BD150u);
    ctx->pc = 0x2BD14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD148u;
            // 0x2bd14c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD150u; }
        if (ctx->pc != 0x2BD150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD150u; }
        if (ctx->pc != 0x2BD150u) { return; }
    }
    ctx->pc = 0x2BD150u;
label_2bd150:
    // 0x2bd150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bd150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bd154:
    // 0x2bd154: 0xae44005c  sw          $a0, 0x5C($s2)
    ctx->pc = 0x2bd154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 4));
    // 0x2bd158: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bd158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bd15c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2bd15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2bd160: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x2bd160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2bd164: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2bd164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2bd168: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2bd168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bd16c: 0x26500084  addiu       $s0, $s2, 0x84
    ctx->pc = 0x2bd16cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
    // 0x2bd170: 0x8c42077c  lw          $v0, 0x77C($v0)
    ctx->pc = 0x2bd170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
    // 0x2bd174: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bd174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bd178: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x2bd178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2bd17c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2bd17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2bd180: 0xc040140  jal         func_100500
    ctx->pc = 0x2BD180u;
    SET_GPR_U32(ctx, 31, 0x2BD188u);
    ctx->pc = 0x2BD184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD180u;
            // 0x2bd184: 0x23980  sll         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD188u; }
        if (ctx->pc != 0x2BD188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD188u; }
        if (ctx->pc != 0x2BD188u) { return; }
    }
    ctx->pc = 0x2BD188u;
label_2bd188:
    // 0x2bd188: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD188u;
    {
        const bool branch_taken_0x2bd188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd188) {
            ctx->pc = 0x2BD18Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD188u;
            // 0x2bd18c: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BD1A8u;
            goto label_2bd1a8;
        }
    }
    ctx->pc = 0x2BD190u;
    // 0x2bd190: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x2bd190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2bd194: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bd194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bd198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd19c: 0xc0b4554  jal         func_2D1550
    ctx->pc = 0x2BD19Cu;
    SET_GPR_U32(ctx, 31, 0x2BD1A4u);
    ctx->pc = 0x2BD1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD19Cu;
            // 0x2bd1a0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD1A4u; }
        if (ctx->pc != 0x2BD1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD1A4u; }
        if (ctx->pc != 0x2BD1A4u) { return; }
    }
    ctx->pc = 0x2BD1A4u;
label_2bd1a4:
    // 0x2bd1a4: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x2bd1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_2bd1a8:
    // 0x2bd1a8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2bd1a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd1ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bd1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd1b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bd1b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd1b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bd1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd1b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd1b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD1BCu;
            // 0x2bd1c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BD1C4u;
    // 0x2bd1c4: 0x0  nop
    ctx->pc = 0x2bd1c4u;
    // NOP
    // 0x2bd1c8: 0x0  nop
    ctx->pc = 0x2bd1c8u;
    // NOP
    // 0x2bd1cc: 0x0  nop
    ctx->pc = 0x2bd1ccu;
    // NOP
label_2bd1d0:
    // 0x2bd1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bd1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bd1d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bd1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bd1d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bd1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bd1dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bd1e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bd1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd1e4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BD1E4u;
    {
        const bool branch_taken_0x2bd1e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD1E4u;
            // 0x2bd1e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd1e4) {
            ctx->pc = 0x2BD284u;
            goto label_2bd284;
        }
    }
    ctx->pc = 0x2BD1ECu;
    // 0x2bd1ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bd1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bd1f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bd1f4: 0x24631f40  addiu       $v1, $v1, 0x1F40
    ctx->pc = 0x2bd1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8000));
    // 0x2bd1f8: 0x24421f78  addiu       $v0, $v0, 0x1F78
    ctx->pc = 0x2bd1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8056));
    // 0x2bd1fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bd1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bd200: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BD200u;
    {
        const bool branch_taken_0x2bd200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD200u;
            // 0x2bd204: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd200) {
            ctx->pc = 0x2BD26Cu;
            goto label_2bd26c;
        }
    }
    ctx->pc = 0x2BD208u;
    // 0x2bd208: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bd208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bd20c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bd210: 0x24631ef0  addiu       $v1, $v1, 0x1EF0
    ctx->pc = 0x2bd210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7920));
    // 0x2bd214: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bd214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2bd218: 0x24421f28  addiu       $v0, $v0, 0x1F28
    ctx->pc = 0x2bd218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7976));
    // 0x2bd21c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bd21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bd220: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2bd220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2bd224: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2bd224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2bd228: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2BD228u;
    SET_GPR_U32(ctx, 31, 0x2BD230u);
    ctx->pc = 0x2BD22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD228u;
            // 0x2bd22c: 0x24a5d370  addiu       $a1, $a1, -0x2C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD230u; }
        if (ctx->pc != 0x2BD230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD230u; }
        if (ctx->pc != 0x2BD230u) { return; }
    }
    ctx->pc = 0x2BD230u;
label_2bd230:
    // 0x2bd230: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2bd230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2bd234: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x2BD234u;
    SET_GPR_U32(ctx, 31, 0x2BD23Cu);
    ctx->pc = 0x2BD238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD234u;
            // 0x2bd238: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD23Cu; }
        if (ctx->pc != 0x2BD23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD23Cu; }
        if (ctx->pc != 0x2BD23Cu) { return; }
    }
    ctx->pc = 0x2BD23Cu;
label_2bd23c:
    // 0x2bd23c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2bd23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2bd240: 0xc0af4c0  jal         func_2BD300
    ctx->pc = 0x2BD240u;
    SET_GPR_U32(ctx, 31, 0x2BD248u);
    ctx->pc = 0x2BD244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD240u;
            // 0x2bd244: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BD300u;
    if (runtime->hasFunction(0x2BD300u)) {
        auto targetFn = runtime->lookupFunction(0x2BD300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD248u; }
        if (ctx->pc != 0x2BD248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BD300_0x2bd300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD248u; }
        if (ctx->pc != 0x2BD248u) { return; }
    }
    ctx->pc = 0x2BD248u;
label_2bd248:
    // 0x2bd248: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2bd248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2bd24c: 0xc0af4c0  jal         func_2BD300
    ctx->pc = 0x2BD24Cu;
    SET_GPR_U32(ctx, 31, 0x2BD254u);
    ctx->pc = 0x2BD250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD24Cu;
            // 0x2bd250: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BD300u;
    if (runtime->hasFunction(0x2BD300u)) {
        auto targetFn = runtime->lookupFunction(0x2BD300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD254u; }
        if (ctx->pc != 0x2BD254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BD300_0x2bd300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD254u; }
        if (ctx->pc != 0x2BD254u) { return; }
    }
    ctx->pc = 0x2BD254u;
label_2bd254:
    // 0x2bd254: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2bd254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2bd258: 0xc0af4a8  jal         func_2BD2A0
    ctx->pc = 0x2BD258u;
    SET_GPR_U32(ctx, 31, 0x2BD260u);
    ctx->pc = 0x2BD25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD258u;
            // 0x2bd25c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BD2A0u;
    if (runtime->hasFunction(0x2BD2A0u)) {
        auto targetFn = runtime->lookupFunction(0x2BD2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD260u; }
        if (ctx->pc != 0x2BD260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BD2A0_0x2bd2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD260u; }
        if (ctx->pc != 0x2BD260u) { return; }
    }
    ctx->pc = 0x2BD260u;
label_2bd260:
    // 0x2bd260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd264: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2BD264u;
    SET_GPR_U32(ctx, 31, 0x2BD26Cu);
    ctx->pc = 0x2BD268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD264u;
            // 0x2bd268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD26Cu; }
        if (ctx->pc != 0x2BD26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD26Cu; }
        if (ctx->pc != 0x2BD26Cu) { return; }
    }
    ctx->pc = 0x2BD26Cu;
label_2bd26c:
    // 0x2bd26c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2bd26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2bd270: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bd270u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bd274: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD274u;
    {
        const bool branch_taken_0x2bd274 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bd274) {
            ctx->pc = 0x2BD278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD274u;
            // 0x2bd278: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BD288u;
            goto label_2bd288;
        }
    }
    ctx->pc = 0x2BD27Cu;
    // 0x2bd27c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BD27Cu;
    SET_GPR_U32(ctx, 31, 0x2BD284u);
    ctx->pc = 0x2BD280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD27Cu;
            // 0x2bd280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD284u; }
        if (ctx->pc != 0x2BD284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD284u; }
        if (ctx->pc != 0x2BD284u) { return; }
    }
    ctx->pc = 0x2BD284u;
label_2bd284:
    // 0x2bd284: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bd284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd288:
    // 0x2bd288: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bd288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd28c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bd28cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd290: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd294: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD294u;
            // 0x2bd298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BD29Cu;
    // 0x2bd29c: 0x0  nop
    ctx->pc = 0x2bd29cu;
    // NOP
}
