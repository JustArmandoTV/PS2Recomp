#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00381720
// Address: 0x381720 - 0x3818c0
void sub_00381720_0x381720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381720_0x381720");
#endif

    switch (ctx->pc) {
        case 0x38173cu: goto label_38173c;
        case 0x38175cu: goto label_38175c;
        case 0x3817a0u: goto label_3817a0;
        case 0x3817c0u: goto label_3817c0;
        case 0x3817f0u: goto label_3817f0;
        case 0x381850u: goto label_381850;
        case 0x38185cu: goto label_38185c;
        case 0x381868u: goto label_381868;
        case 0x381874u: goto label_381874;
        case 0x381880u: goto label_381880;
        case 0x38188cu: goto label_38188c;
        case 0x3818a4u: goto label_3818a4;
        default: break;
    }

    ctx->pc = 0x381720u;

    // 0x381720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x381720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x381724: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x381724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x381728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x381728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38172c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x38172cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x381730: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x381730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x381734: 0xc0e0668  jal         func_3819A0
    ctx->pc = 0x381734u;
    SET_GPR_U32(ctx, 31, 0x38173Cu);
    ctx->pc = 0x381738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381734u;
            // 0x381738: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3819A0u;
    if (runtime->hasFunction(0x3819A0u)) {
        auto targetFn = runtime->lookupFunction(0x3819A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38173Cu; }
        if (ctx->pc != 0x38173Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003819A0_0x3819a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38173Cu; }
        if (ctx->pc != 0x38173Cu) { return; }
    }
    ctx->pc = 0x38173Cu;
label_38173c:
    // 0x38173c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38173cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x381740: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x381740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x381744: 0x24637730  addiu       $v1, $v1, 0x7730
    ctx->pc = 0x381744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30512));
    // 0x381748: 0x24427768  addiu       $v0, $v0, 0x7768
    ctx->pc = 0x381748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30568));
    // 0x38174c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38174cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x381750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x381750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381754: 0xc0e0664  jal         func_381990
    ctx->pc = 0x381754u;
    SET_GPR_U32(ctx, 31, 0x38175Cu);
    ctx->pc = 0x381758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381754u;
            // 0x381758: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381990u;
    if (runtime->hasFunction(0x381990u)) {
        auto targetFn = runtime->lookupFunction(0x381990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38175Cu; }
        if (ctx->pc != 0x38175Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381990_0x381990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38175Cu; }
        if (ctx->pc != 0x38175Cu) { return; }
    }
    ctx->pc = 0x38175Cu;
label_38175c:
    // 0x38175c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x38175cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x381760: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x381760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x381764: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x381764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x381768: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x381768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x38176c: 0x24427650  addiu       $v0, $v0, 0x7650
    ctx->pc = 0x38176cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30288));
    // 0x381770: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x381770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x381774: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x381774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x381778: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x381778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x38177c: 0x24427688  addiu       $v0, $v0, 0x7688
    ctx->pc = 0x38177cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30344));
    // 0x381780: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x381780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x381784: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x381784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x381788: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x381788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x38178c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x38178cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x381790: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x381790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x381794: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x381794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x381798: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x381798u;
    SET_GPR_U32(ctx, 31, 0x3817A0u);
    ctx->pc = 0x38179Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381798u;
            // 0x38179c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3817A0u; }
        if (ctx->pc != 0x3817A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3817A0u; }
        if (ctx->pc != 0x3817A0u) { return; }
    }
    ctx->pc = 0x3817A0u;
label_3817a0:
    // 0x3817a0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3817a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3817a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3817a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3817a8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3817A8u;
    {
        const bool branch_taken_0x3817a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3817ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3817A8u;
            // 0x3817ac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3817a8) {
            ctx->pc = 0x3817C4u;
            goto label_3817c4;
        }
    }
    ctx->pc = 0x3817B0u;
    // 0x3817b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3817b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3817b4: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3817b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3817b8: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x3817B8u;
    SET_GPR_U32(ctx, 31, 0x3817C0u);
    ctx->pc = 0x3817BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3817B8u;
            // 0x3817bc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3817C0u; }
        if (ctx->pc != 0x3817C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3817C0u; }
        if (ctx->pc != 0x3817C0u) { return; }
    }
    ctx->pc = 0x3817C0u;
label_3817c0:
    // 0x3817c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3817c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3817c4:
    // 0x3817c4: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x3817c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x3817c8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3817c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3817cc: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x3817ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x3817d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3817d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3817d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3817d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3817d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3817d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3817dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3817DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3817E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3817DCu;
            // 0x3817e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3817E4u;
    // 0x3817e4: 0x0  nop
    ctx->pc = 0x3817e4u;
    // NOP
    // 0x3817e8: 0x0  nop
    ctx->pc = 0x3817e8u;
    // NOP
    // 0x3817ec: 0x0  nop
    ctx->pc = 0x3817ecu;
    // NOP
label_3817f0:
    // 0x3817f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3817f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3817f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3817f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3817f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3817f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3817fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3817fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x381800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x381800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381804: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x381804u;
    {
        const bool branch_taken_0x381804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x381808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381804u;
            // 0x381808: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381804) {
            ctx->pc = 0x3818A4u;
            goto label_3818a4;
        }
    }
    ctx->pc = 0x38180Cu;
    // 0x38180c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38180cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x381810: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x381810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x381814: 0x24637730  addiu       $v1, $v1, 0x7730
    ctx->pc = 0x381814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30512));
    // 0x381818: 0x24427768  addiu       $v0, $v0, 0x7768
    ctx->pc = 0x381818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30568));
    // 0x38181c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38181cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x381820: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x381820u;
    {
        const bool branch_taken_0x381820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x381824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381820u;
            // 0x381824: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381820) {
            ctx->pc = 0x38188Cu;
            goto label_38188c;
        }
    }
    ctx->pc = 0x381828u;
    // 0x381828: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x381828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x38182c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38182cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x381830: 0x246376e0  addiu       $v1, $v1, 0x76E0
    ctx->pc = 0x381830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30432));
    // 0x381834: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x381834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x381838: 0x24427718  addiu       $v0, $v0, 0x7718
    ctx->pc = 0x381838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30488));
    // 0x38183c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38183cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x381840: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x381840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x381844: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x381844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x381848: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x381848u;
    SET_GPR_U32(ctx, 31, 0x381850u);
    ctx->pc = 0x38184Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381848u;
            // 0x38184c: 0x24a510a0  addiu       $a1, $a1, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381850u; }
        if (ctx->pc != 0x381850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381850u; }
        if (ctx->pc != 0x381850u) { return; }
    }
    ctx->pc = 0x381850u;
label_381850:
    // 0x381850: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x381850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x381854: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x381854u;
    SET_GPR_U32(ctx, 31, 0x38185Cu);
    ctx->pc = 0x381858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381854u;
            // 0x381858: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38185Cu; }
        if (ctx->pc != 0x38185Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38185Cu; }
        if (ctx->pc != 0x38185Cu) { return; }
    }
    ctx->pc = 0x38185Cu;
label_38185c:
    // 0x38185c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x38185cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x381860: 0xc0e0648  jal         func_381920
    ctx->pc = 0x381860u;
    SET_GPR_U32(ctx, 31, 0x381868u);
    ctx->pc = 0x381864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381860u;
            // 0x381864: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381920u;
    if (runtime->hasFunction(0x381920u)) {
        auto targetFn = runtime->lookupFunction(0x381920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381868u; }
        if (ctx->pc != 0x381868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381920_0x381920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381868u; }
        if (ctx->pc != 0x381868u) { return; }
    }
    ctx->pc = 0x381868u;
label_381868:
    // 0x381868: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x381868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x38186c: 0xc0e0648  jal         func_381920
    ctx->pc = 0x38186Cu;
    SET_GPR_U32(ctx, 31, 0x381874u);
    ctx->pc = 0x381870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38186Cu;
            // 0x381870: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381920u;
    if (runtime->hasFunction(0x381920u)) {
        auto targetFn = runtime->lookupFunction(0x381920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381874u; }
        if (ctx->pc != 0x381874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381920_0x381920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381874u; }
        if (ctx->pc != 0x381874u) { return; }
    }
    ctx->pc = 0x381874u;
label_381874:
    // 0x381874: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x381874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x381878: 0xc0e0630  jal         func_3818C0
    ctx->pc = 0x381878u;
    SET_GPR_U32(ctx, 31, 0x381880u);
    ctx->pc = 0x38187Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381878u;
            // 0x38187c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3818C0u;
    if (runtime->hasFunction(0x3818C0u)) {
        auto targetFn = runtime->lookupFunction(0x3818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381880u; }
        if (ctx->pc != 0x381880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003818C0_0x3818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381880u; }
        if (ctx->pc != 0x381880u) { return; }
    }
    ctx->pc = 0x381880u;
label_381880:
    // 0x381880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x381880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381884: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x381884u;
    SET_GPR_U32(ctx, 31, 0x38188Cu);
    ctx->pc = 0x381888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381884u;
            // 0x381888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38188Cu; }
        if (ctx->pc != 0x38188Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38188Cu; }
        if (ctx->pc != 0x38188Cu) { return; }
    }
    ctx->pc = 0x38188Cu;
label_38188c:
    // 0x38188c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x38188cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x381890: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x381890u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x381894: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x381894u;
    {
        const bool branch_taken_0x381894 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x381894) {
            ctx->pc = 0x381898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x381894u;
            // 0x381898: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3818A8u;
            goto label_3818a8;
        }
    }
    ctx->pc = 0x38189Cu;
    // 0x38189c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x38189Cu;
    SET_GPR_U32(ctx, 31, 0x3818A4u);
    ctx->pc = 0x3818A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38189Cu;
            // 0x3818a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3818A4u; }
        if (ctx->pc != 0x3818A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3818A4u; }
        if (ctx->pc != 0x3818A4u) { return; }
    }
    ctx->pc = 0x3818A4u;
label_3818a4:
    // 0x3818a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3818a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3818a8:
    // 0x3818a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3818a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3818ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3818acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3818b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3818b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3818b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3818B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3818B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3818B4u;
            // 0x3818b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3818BCu;
    // 0x3818bc: 0x0  nop
    ctx->pc = 0x3818bcu;
    // NOP
}
