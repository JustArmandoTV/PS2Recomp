#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00455580
// Address: 0x455580 - 0x455770
void sub_00455580_0x455580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00455580_0x455580");
#endif

    switch (ctx->pc) {
        case 0x4555a8u: goto label_4555a8;
        case 0x4555c8u: goto label_4555c8;
        case 0x455620u: goto label_455620;
        case 0x45563cu: goto label_45563c;
        case 0x455660u: goto label_455660;
        case 0x45567cu: goto label_45567c;
        case 0x4556a0u: goto label_4556a0;
        case 0x455700u: goto label_455700;
        case 0x45570cu: goto label_45570c;
        case 0x455718u: goto label_455718;
        case 0x455724u: goto label_455724;
        case 0x455730u: goto label_455730;
        case 0x45573cu: goto label_45573c;
        case 0x455754u: goto label_455754;
        default: break;
    }

    ctx->pc = 0x455580u;

    // 0x455580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x455580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x455584: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x455584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x455588: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x455588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x45558c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x45558cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x455590: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x455590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x455594: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x455594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x455598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x455598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45559c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x45559cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4555a0: 0xc115614  jal         func_455850
    ctx->pc = 0x4555A0u;
    SET_GPR_U32(ctx, 31, 0x4555A8u);
    ctx->pc = 0x4555A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4555A0u;
            // 0x4555a4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x455850u;
    if (runtime->hasFunction(0x455850u)) {
        auto targetFn = runtime->lookupFunction(0x455850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4555A8u; }
        if (ctx->pc != 0x4555A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00455850_0x455850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4555A8u; }
        if (ctx->pc != 0x4555A8u) { return; }
    }
    ctx->pc = 0x4555A8u;
label_4555a8:
    // 0x4555a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4555a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4555ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4555acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4555b0: 0x2463e1c0  addiu       $v1, $v1, -0x1E40
    ctx->pc = 0x4555b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959552));
    // 0x4555b4: 0x2442e1f8  addiu       $v0, $v0, -0x1E08
    ctx->pc = 0x4555b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959608));
    // 0x4555b8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4555b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4555bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4555bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4555c0: 0xc115610  jal         func_455840
    ctx->pc = 0x4555C0u;
    SET_GPR_U32(ctx, 31, 0x4555C8u);
    ctx->pc = 0x4555C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4555C0u;
            // 0x4555c4: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x455840u;
    if (runtime->hasFunction(0x455840u)) {
        auto targetFn = runtime->lookupFunction(0x455840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4555C8u; }
        if (ctx->pc != 0x4555C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00455840_0x455840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4555C8u; }
        if (ctx->pc != 0x4555C8u) { return; }
    }
    ctx->pc = 0x4555C8u;
label_4555c8:
    // 0x4555c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4555c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4555cc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4555ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4555d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4555d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4555d4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4555d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4555d8: 0x2442e060  addiu       $v0, $v0, -0x1FA0
    ctx->pc = 0x4555d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959200));
    // 0x4555dc: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4555dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4555e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4555e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4555e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4555e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4555e8: 0x2442e098  addiu       $v0, $v0, -0x1F68
    ctx->pc = 0x4555e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959256));
    // 0x4555ec: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4555ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x4555f0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4555f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4555f4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4555f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x4555f8: 0xc440de90  lwc1        $f0, -0x2170($v0)
    ctx->pc = 0x4555f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4555fc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4555fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x455600: 0xc441de94  lwc1        $f1, -0x216C($v0)
    ctx->pc = 0x455600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x455604: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x455604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x455608: 0xc460de98  lwc1        $f0, -0x2168($v1)
    ctx->pc = 0x455608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45560c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45560cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x455610: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x455610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x455614: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x455614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x455618: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x455618u;
    SET_GPR_U32(ctx, 31, 0x455620u);
    ctx->pc = 0x45561Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455618u;
            // 0x45561c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455620u; }
        if (ctx->pc != 0x455620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455620u; }
        if (ctx->pc != 0x455620u) { return; }
    }
    ctx->pc = 0x455620u;
label_455620:
    // 0x455620: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x455620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x455624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x455628: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x455628u;
    {
        const bool branch_taken_0x455628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x45562Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455628u;
            // 0x45562c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455628) {
            ctx->pc = 0x455640u;
            goto label_455640;
        }
    }
    ctx->pc = 0x455630u;
    // 0x455630: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x455630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x455634: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x455634u;
    SET_GPR_U32(ctx, 31, 0x45563Cu);
    ctx->pc = 0x455638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455634u;
            // 0x455638: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45563Cu; }
        if (ctx->pc != 0x45563Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45563Cu; }
        if (ctx->pc != 0x45563Cu) { return; }
    }
    ctx->pc = 0x45563Cu;
label_45563c:
    // 0x45563c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45563cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455640:
    // 0x455640: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x455640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
    // 0x455644: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x455644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x455648: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x455648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x45564c: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x45564cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x455650: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x455650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x455654: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x455654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x455658: 0xc040140  jal         func_100500
    ctx->pc = 0x455658u;
    SET_GPR_U32(ctx, 31, 0x455660u);
    ctx->pc = 0x45565Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455658u;
            // 0x45565c: 0x26320084  addiu       $s2, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455660u; }
        if (ctx->pc != 0x455660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455660u; }
        if (ctx->pc != 0x455660u) { return; }
    }
    ctx->pc = 0x455660u;
label_455660:
    // 0x455660: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x455660u;
    {
        const bool branch_taken_0x455660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x455660) {
            ctx->pc = 0x455664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x455660u;
            // 0x455664: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x455680u;
            goto label_455680;
        }
    }
    ctx->pc = 0x455668u;
    // 0x455668: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x455668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x45566c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x45566cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x455670: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x455674: 0xc0b4554  jal         func_2D1550
    ctx->pc = 0x455674u;
    SET_GPR_U32(ctx, 31, 0x45567Cu);
    ctx->pc = 0x455678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455674u;
            // 0x455678: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45567Cu; }
        if (ctx->pc != 0x45567Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45567Cu; }
        if (ctx->pc != 0x45567Cu) { return; }
    }
    ctx->pc = 0x45567Cu;
label_45567c:
    // 0x45567c: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x45567cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_455680:
    // 0x455680: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x455680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x455684: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x455684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x455688: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x455688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45568c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45568cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x455690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x455690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x455694: 0x3e00008  jr          $ra
    ctx->pc = 0x455694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x455698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455694u;
            // 0x455698: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45569Cu;
    // 0x45569c: 0x0  nop
    ctx->pc = 0x45569cu;
    // NOP
label_4556a0:
    // 0x4556a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4556a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4556a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4556a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4556a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4556a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4556ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4556acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4556b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4556b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4556b4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4556B4u;
    {
        const bool branch_taken_0x4556b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4556B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4556B4u;
            // 0x4556b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4556b4) {
            ctx->pc = 0x455754u;
            goto label_455754;
        }
    }
    ctx->pc = 0x4556BCu;
    // 0x4556bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4556bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4556c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4556c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4556c4: 0x2463e1c0  addiu       $v1, $v1, -0x1E40
    ctx->pc = 0x4556c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959552));
    // 0x4556c8: 0x2442e1f8  addiu       $v0, $v0, -0x1E08
    ctx->pc = 0x4556c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959608));
    // 0x4556cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4556ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4556d0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4556D0u;
    {
        const bool branch_taken_0x4556d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4556D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4556D0u;
            // 0x4556d4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4556d0) {
            ctx->pc = 0x45573Cu;
            goto label_45573c;
        }
    }
    ctx->pc = 0x4556D8u;
    // 0x4556d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4556d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4556dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4556dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4556e0: 0x2463e170  addiu       $v1, $v1, -0x1E90
    ctx->pc = 0x4556e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959472));
    // 0x4556e4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x4556e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x4556e8: 0x2442e1a8  addiu       $v0, $v0, -0x1E58
    ctx->pc = 0x4556e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959528));
    // 0x4556ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4556ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4556f0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4556f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4556f4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4556f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4556f8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4556F8u;
    SET_GPR_U32(ctx, 31, 0x455700u);
    ctx->pc = 0x4556FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4556F8u;
            // 0x4556fc: 0x24a54d10  addiu       $a1, $a1, 0x4D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455700u; }
        if (ctx->pc != 0x455700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455700u; }
        if (ctx->pc != 0x455700u) { return; }
    }
    ctx->pc = 0x455700u;
label_455700:
    // 0x455700: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x455700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x455704: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x455704u;
    SET_GPR_U32(ctx, 31, 0x45570Cu);
    ctx->pc = 0x455708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455704u;
            // 0x455708: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45570Cu; }
        if (ctx->pc != 0x45570Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45570Cu; }
        if (ctx->pc != 0x45570Cu) { return; }
    }
    ctx->pc = 0x45570Cu;
label_45570c:
    // 0x45570c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x45570cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x455710: 0xc1155f4  jal         func_4557D0
    ctx->pc = 0x455710u;
    SET_GPR_U32(ctx, 31, 0x455718u);
    ctx->pc = 0x455714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455710u;
            // 0x455714: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4557D0u;
    if (runtime->hasFunction(0x4557D0u)) {
        auto targetFn = runtime->lookupFunction(0x4557D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455718u; }
        if (ctx->pc != 0x455718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004557D0_0x4557d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455718u; }
        if (ctx->pc != 0x455718u) { return; }
    }
    ctx->pc = 0x455718u;
label_455718:
    // 0x455718: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x455718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x45571c: 0xc1155f4  jal         func_4557D0
    ctx->pc = 0x45571Cu;
    SET_GPR_U32(ctx, 31, 0x455724u);
    ctx->pc = 0x455720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45571Cu;
            // 0x455720: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4557D0u;
    if (runtime->hasFunction(0x4557D0u)) {
        auto targetFn = runtime->lookupFunction(0x4557D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455724u; }
        if (ctx->pc != 0x455724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004557D0_0x4557d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455724u; }
        if (ctx->pc != 0x455724u) { return; }
    }
    ctx->pc = 0x455724u;
label_455724:
    // 0x455724: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x455724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x455728: 0xc1155dc  jal         func_455770
    ctx->pc = 0x455728u;
    SET_GPR_U32(ctx, 31, 0x455730u);
    ctx->pc = 0x45572Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455728u;
            // 0x45572c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x455770u;
    if (runtime->hasFunction(0x455770u)) {
        auto targetFn = runtime->lookupFunction(0x455770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455730u; }
        if (ctx->pc != 0x455730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00455770_0x455770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455730u; }
        if (ctx->pc != 0x455730u) { return; }
    }
    ctx->pc = 0x455730u;
label_455730:
    // 0x455730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x455730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x455734: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x455734u;
    SET_GPR_U32(ctx, 31, 0x45573Cu);
    ctx->pc = 0x455738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455734u;
            // 0x455738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45573Cu; }
        if (ctx->pc != 0x45573Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45573Cu; }
        if (ctx->pc != 0x45573Cu) { return; }
    }
    ctx->pc = 0x45573Cu;
label_45573c:
    // 0x45573c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x45573cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x455740: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x455740u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x455744: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x455744u;
    {
        const bool branch_taken_0x455744 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x455744) {
            ctx->pc = 0x455748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x455744u;
            // 0x455748: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x455758u;
            goto label_455758;
        }
    }
    ctx->pc = 0x45574Cu;
    // 0x45574c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x45574Cu;
    SET_GPR_U32(ctx, 31, 0x455754u);
    ctx->pc = 0x455750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45574Cu;
            // 0x455750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455754u; }
        if (ctx->pc != 0x455754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455754u; }
        if (ctx->pc != 0x455754u) { return; }
    }
    ctx->pc = 0x455754u;
label_455754:
    // 0x455754: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x455754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_455758:
    // 0x455758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x455758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45575c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45575cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x455760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x455760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x455764: 0x3e00008  jr          $ra
    ctx->pc = 0x455764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x455768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455764u;
            // 0x455768: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45576Cu;
    // 0x45576c: 0x0  nop
    ctx->pc = 0x45576cu;
    // NOP
}
