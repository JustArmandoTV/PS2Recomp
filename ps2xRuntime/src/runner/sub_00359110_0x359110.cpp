#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00359110
// Address: 0x359110 - 0x3592b0
void sub_00359110_0x359110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359110_0x359110");
#endif

    switch (ctx->pc) {
        case 0x35912cu: goto label_35912c;
        case 0x359134u: goto label_359134;
        case 0x359194u: goto label_359194;
        case 0x3591b0u: goto label_3591b0;
        case 0x3591e0u: goto label_3591e0;
        case 0x359240u: goto label_359240;
        case 0x35924cu: goto label_35924c;
        case 0x359258u: goto label_359258;
        case 0x359264u: goto label_359264;
        case 0x359270u: goto label_359270;
        case 0x35927cu: goto label_35927c;
        case 0x359294u: goto label_359294;
        default: break;
    }

    ctx->pc = 0x359110u;

    // 0x359110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359114: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x359114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x359118: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35911c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x35911cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x359120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x359120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x359124: 0xc0d64e0  jal         func_359380
    ctx->pc = 0x359124u;
    SET_GPR_U32(ctx, 31, 0x35912Cu);
    ctx->pc = 0x359128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359124u;
            // 0x359128: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x359380u;
    if (runtime->hasFunction(0x359380u)) {
        auto targetFn = runtime->lookupFunction(0x359380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35912Cu; }
        if (ctx->pc != 0x35912Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00359380_0x359380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35912Cu; }
        if (ctx->pc != 0x35912Cu) { return; }
    }
    ctx->pc = 0x35912Cu;
label_35912c:
    // 0x35912c: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x35912Cu;
    SET_GPR_U32(ctx, 31, 0x359134u);
    ctx->pc = 0x359130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35912Cu;
            // 0x359130: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359134u; }
        if (ctx->pc != 0x359134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359134u; }
        if (ctx->pc != 0x359134u) { return; }
    }
    ctx->pc = 0x359134u;
label_359134:
    // 0x359134: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x359134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x359138: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x359138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x35913c: 0x24636210  addiu       $v1, $v1, 0x6210
    ctx->pc = 0x35913cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25104));
    // 0x359140: 0x24426248  addiu       $v0, $v0, 0x6248
    ctx->pc = 0x359140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25160));
    // 0x359144: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x359144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x359148: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x359148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x35914c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35914cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x359150: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x359150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x359154: 0x24636160  addiu       $v1, $v1, 0x6160
    ctx->pc = 0x359154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24928));
    // 0x359158: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x359158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x35915c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x35915cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x359160: 0x24426198  addiu       $v0, $v0, 0x6198
    ctx->pc = 0x359160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24984));
    // 0x359164: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x359164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x359168: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x359168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x35916c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35916cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x359170: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x359170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x359174: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x359174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x359178: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x359178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
    // 0x35917c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35917cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x359180: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x359180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x359184: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x359184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x359188: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x359188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x35918c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x35918Cu;
    SET_GPR_U32(ctx, 31, 0x359194u);
    ctx->pc = 0x359190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35918Cu;
            // 0x359190: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359194u; }
        if (ctx->pc != 0x359194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359194u; }
        if (ctx->pc != 0x359194u) { return; }
    }
    ctx->pc = 0x359194u;
label_359194:
    // 0x359194: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x359194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x359198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x359198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35919c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35919Cu;
    {
        const bool branch_taken_0x35919c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3591A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35919Cu;
            // 0x3591a0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35919c) {
            ctx->pc = 0x3591B4u;
            goto label_3591b4;
        }
    }
    ctx->pc = 0x3591A4u;
    // 0x3591a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3591a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3591a8: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x3591A8u;
    SET_GPR_U32(ctx, 31, 0x3591B0u);
    ctx->pc = 0x3591ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3591A8u;
            // 0x3591ac: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3591B0u; }
        if (ctx->pc != 0x3591B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3591B0u; }
        if (ctx->pc != 0x3591B0u) { return; }
    }
    ctx->pc = 0x3591B0u;
label_3591b0:
    // 0x3591b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3591b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3591b4:
    // 0x3591b4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x3591b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x3591b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3591b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3591bc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3591bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3591c0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x3591c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x3591c4: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x3591c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x3591c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3591c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3591cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3591ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3591d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3591D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3591D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3591D0u;
            // 0x3591d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3591D8u;
    // 0x3591d8: 0x0  nop
    ctx->pc = 0x3591d8u;
    // NOP
    // 0x3591dc: 0x0  nop
    ctx->pc = 0x3591dcu;
    // NOP
label_3591e0:
    // 0x3591e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3591e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3591e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3591e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3591e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3591e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3591ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3591ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3591f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3591f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3591f4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3591F4u;
    {
        const bool branch_taken_0x3591f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3591F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3591F4u;
            // 0x3591f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3591f4) {
            ctx->pc = 0x359294u;
            goto label_359294;
        }
    }
    ctx->pc = 0x3591FCu;
    // 0x3591fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3591fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x359200: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x359200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x359204: 0x24636210  addiu       $v1, $v1, 0x6210
    ctx->pc = 0x359204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25104));
    // 0x359208: 0x24426248  addiu       $v0, $v0, 0x6248
    ctx->pc = 0x359208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25160));
    // 0x35920c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x35920cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x359210: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x359210u;
    {
        const bool branch_taken_0x359210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x359214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359210u;
            // 0x359214: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359210) {
            ctx->pc = 0x35927Cu;
            goto label_35927c;
        }
    }
    ctx->pc = 0x359218u;
    // 0x359218: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x359218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x35921c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x35921cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x359220: 0x246361c0  addiu       $v1, $v1, 0x61C0
    ctx->pc = 0x359220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25024));
    // 0x359224: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x359224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x359228: 0x244261f8  addiu       $v0, $v0, 0x61F8
    ctx->pc = 0x359228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25080));
    // 0x35922c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x35922cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x359230: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x359230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x359234: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x359234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x359238: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x359238u;
    SET_GPR_U32(ctx, 31, 0x359240u);
    ctx->pc = 0x35923Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359238u;
            // 0x35923c: 0x24a587e0  addiu       $a1, $a1, -0x7820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359240u; }
        if (ctx->pc != 0x359240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359240u; }
        if (ctx->pc != 0x359240u) { return; }
    }
    ctx->pc = 0x359240u;
label_359240:
    // 0x359240: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x359240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x359244: 0xc0b1208  jal         func_2C4820
    ctx->pc = 0x359244u;
    SET_GPR_U32(ctx, 31, 0x35924Cu);
    ctx->pc = 0x359248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359244u;
            // 0x359248: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4820u;
    if (runtime->hasFunction(0x2C4820u)) {
        auto targetFn = runtime->lookupFunction(0x2C4820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35924Cu; }
        if (ctx->pc != 0x35924Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4820_0x2c4820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35924Cu; }
        if (ctx->pc != 0x35924Cu) { return; }
    }
    ctx->pc = 0x35924Cu;
label_35924c:
    // 0x35924c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x35924cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x359250: 0xc0d64c4  jal         func_359310
    ctx->pc = 0x359250u;
    SET_GPR_U32(ctx, 31, 0x359258u);
    ctx->pc = 0x359254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359250u;
            // 0x359254: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x359310u;
    if (runtime->hasFunction(0x359310u)) {
        auto targetFn = runtime->lookupFunction(0x359310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359258u; }
        if (ctx->pc != 0x359258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00359310_0x359310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359258u; }
        if (ctx->pc != 0x359258u) { return; }
    }
    ctx->pc = 0x359258u;
label_359258:
    // 0x359258: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x359258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x35925c: 0xc0d64c4  jal         func_359310
    ctx->pc = 0x35925Cu;
    SET_GPR_U32(ctx, 31, 0x359264u);
    ctx->pc = 0x359260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35925Cu;
            // 0x359260: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x359310u;
    if (runtime->hasFunction(0x359310u)) {
        auto targetFn = runtime->lookupFunction(0x359310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359264u; }
        if (ctx->pc != 0x359264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00359310_0x359310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359264u; }
        if (ctx->pc != 0x359264u) { return; }
    }
    ctx->pc = 0x359264u;
label_359264:
    // 0x359264: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x359264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x359268: 0xc0d64ac  jal         func_3592B0
    ctx->pc = 0x359268u;
    SET_GPR_U32(ctx, 31, 0x359270u);
    ctx->pc = 0x35926Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359268u;
            // 0x35926c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3592B0u;
    if (runtime->hasFunction(0x3592B0u)) {
        auto targetFn = runtime->lookupFunction(0x3592B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359270u; }
        if (ctx->pc != 0x359270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003592B0_0x3592b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359270u; }
        if (ctx->pc != 0x359270u) { return; }
    }
    ctx->pc = 0x359270u;
label_359270:
    // 0x359270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359274: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x359274u;
    SET_GPR_U32(ctx, 31, 0x35927Cu);
    ctx->pc = 0x359278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359274u;
            // 0x359278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35927Cu; }
        if (ctx->pc != 0x35927Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35927Cu; }
        if (ctx->pc != 0x35927Cu) { return; }
    }
    ctx->pc = 0x35927Cu;
label_35927c:
    // 0x35927c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x35927cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x359280: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x359280u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x359284: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x359284u;
    {
        const bool branch_taken_0x359284 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x359284) {
            ctx->pc = 0x359288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x359284u;
            // 0x359288: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x359298u;
            goto label_359298;
        }
    }
    ctx->pc = 0x35928Cu;
    // 0x35928c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x35928Cu;
    SET_GPR_U32(ctx, 31, 0x359294u);
    ctx->pc = 0x359290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35928Cu;
            // 0x359290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359294u; }
        if (ctx->pc != 0x359294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359294u; }
        if (ctx->pc != 0x359294u) { return; }
    }
    ctx->pc = 0x359294u;
label_359294:
    // 0x359294: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x359294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_359298:
    // 0x359298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x359298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35929c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35929cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3592a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3592a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3592a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3592A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3592A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3592A4u;
            // 0x3592a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3592ACu;
    // 0x3592ac: 0x0  nop
    ctx->pc = 0x3592acu;
    // NOP
}
