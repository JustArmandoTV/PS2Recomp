#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00556F60
// Address: 0x556f60 - 0x557100
void sub_00556F60_0x556f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00556F60_0x556f60");
#endif

    switch (ctx->pc) {
        case 0x556f7cu: goto label_556f7c;
        case 0x556f9cu: goto label_556f9c;
        case 0x556ff4u: goto label_556ff4;
        case 0x557010u: goto label_557010;
        case 0x557030u: goto label_557030;
        case 0x557090u: goto label_557090;
        case 0x55709cu: goto label_55709c;
        case 0x5570a8u: goto label_5570a8;
        case 0x5570b4u: goto label_5570b4;
        case 0x5570c0u: goto label_5570c0;
        case 0x5570ccu: goto label_5570cc;
        case 0x5570e4u: goto label_5570e4;
        default: break;
    }

    ctx->pc = 0x556f60u;

    // 0x556f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x556f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x556f64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x556f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x556f68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x556f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x556f6c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x556f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x556f70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x556f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x556f74: 0xc155c78  jal         func_5571E0
    ctx->pc = 0x556F74u;
    SET_GPR_U32(ctx, 31, 0x556F7Cu);
    ctx->pc = 0x556F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556F74u;
            // 0x556f78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5571E0u;
    if (runtime->hasFunction(0x5571E0u)) {
        auto targetFn = runtime->lookupFunction(0x5571E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556F7Cu; }
        if (ctx->pc != 0x556F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005571E0_0x5571e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556F7Cu; }
        if (ctx->pc != 0x556F7Cu) { return; }
    }
    ctx->pc = 0x556F7Cu;
label_556f7c:
    // 0x556f7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x556f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x556f80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x556f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x556f84: 0x24637b90  addiu       $v1, $v1, 0x7B90
    ctx->pc = 0x556f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31632));
    // 0x556f88: 0x24427bc8  addiu       $v0, $v0, 0x7BC8
    ctx->pc = 0x556f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31688));
    // 0x556f8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x556f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x556f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x556f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556f94: 0xc155c74  jal         func_5571D0
    ctx->pc = 0x556F94u;
    SET_GPR_U32(ctx, 31, 0x556F9Cu);
    ctx->pc = 0x556F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556F94u;
            // 0x556f98: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5571D0u;
    if (runtime->hasFunction(0x5571D0u)) {
        auto targetFn = runtime->lookupFunction(0x5571D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556F9Cu; }
        if (ctx->pc != 0x556F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005571D0_0x5571d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556F9Cu; }
        if (ctx->pc != 0x556F9Cu) { return; }
    }
    ctx->pc = 0x556F9Cu;
label_556f9c:
    // 0x556f9c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x556f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x556fa0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x556fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x556fa4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x556fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x556fa8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x556fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x556fac: 0x24427a30  addiu       $v0, $v0, 0x7A30
    ctx->pc = 0x556facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31280));
    // 0x556fb0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x556fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x556fb4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x556fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x556fb8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x556fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x556fbc: 0x24427a68  addiu       $v0, $v0, 0x7A68
    ctx->pc = 0x556fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31336));
    // 0x556fc0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x556fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x556fc4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x556fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x556fc8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x556fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x556fcc: 0xc440efb8  lwc1        $f0, -0x1048($v0)
    ctx->pc = 0x556fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x556fd0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x556fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x556fd4: 0xc441efbc  lwc1        $f1, -0x1044($v0)
    ctx->pc = 0x556fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x556fd8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x556fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x556fdc: 0xc460efc0  lwc1        $f0, -0x1040($v1)
    ctx->pc = 0x556fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x556fe0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x556fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x556fe4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x556fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x556fe8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x556fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x556fec: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x556FECu;
    SET_GPR_U32(ctx, 31, 0x556FF4u);
    ctx->pc = 0x556FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556FECu;
            // 0x556ff0: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556FF4u; }
        if (ctx->pc != 0x556FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556FF4u; }
        if (ctx->pc != 0x556FF4u) { return; }
    }
    ctx->pc = 0x556FF4u;
label_556ff4:
    // 0x556ff4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x556ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x556ff8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x556ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556ffc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x556FFCu;
    {
        const bool branch_taken_0x556ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x557000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556FFCu;
            // 0x557000: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556ffc) {
            ctx->pc = 0x557014u;
            goto label_557014;
        }
    }
    ctx->pc = 0x557004u;
    // 0x557004: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x557004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x557008: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x557008u;
    SET_GPR_U32(ctx, 31, 0x557010u);
    ctx->pc = 0x55700Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557008u;
            // 0x55700c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557010u; }
        if (ctx->pc != 0x557010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557010u; }
        if (ctx->pc != 0x557010u) { return; }
    }
    ctx->pc = 0x557010u;
label_557010:
    // 0x557010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x557010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_557014:
    // 0x557014: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x557014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x557018: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x557018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55701c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x55701cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x557020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x557020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x557024: 0x3e00008  jr          $ra
    ctx->pc = 0x557024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x557028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557024u;
            // 0x557028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55702Cu;
    // 0x55702c: 0x0  nop
    ctx->pc = 0x55702cu;
    // NOP
label_557030:
    // 0x557030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x557030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x557034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x557034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x557038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x557038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x55703c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55703cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x557040: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x557040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x557044: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x557044u;
    {
        const bool branch_taken_0x557044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x557048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557044u;
            // 0x557048: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x557044) {
            ctx->pc = 0x5570E4u;
            goto label_5570e4;
        }
    }
    ctx->pc = 0x55704Cu;
    // 0x55704c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x55704cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x557050: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x557050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x557054: 0x24637b90  addiu       $v1, $v1, 0x7B90
    ctx->pc = 0x557054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31632));
    // 0x557058: 0x24427bc8  addiu       $v0, $v0, 0x7BC8
    ctx->pc = 0x557058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31688));
    // 0x55705c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x55705cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x557060: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x557060u;
    {
        const bool branch_taken_0x557060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x557064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557060u;
            // 0x557064: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x557060) {
            ctx->pc = 0x5570CCu;
            goto label_5570cc;
        }
    }
    ctx->pc = 0x557068u;
    // 0x557068: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x557068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x55706c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x55706cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x557070: 0x24637b40  addiu       $v1, $v1, 0x7B40
    ctx->pc = 0x557070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31552));
    // 0x557074: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x557074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x557078: 0x24427b78  addiu       $v0, $v0, 0x7B78
    ctx->pc = 0x557078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31608));
    // 0x55707c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x55707cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x557080: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x557080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x557084: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x557084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x557088: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x557088u;
    SET_GPR_U32(ctx, 31, 0x557090u);
    ctx->pc = 0x55708Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557088u;
            // 0x55708c: 0x24a56be0  addiu       $a1, $a1, 0x6BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557090u; }
        if (ctx->pc != 0x557090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557090u; }
        if (ctx->pc != 0x557090u) { return; }
    }
    ctx->pc = 0x557090u;
label_557090:
    // 0x557090: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x557090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x557094: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x557094u;
    SET_GPR_U32(ctx, 31, 0x55709Cu);
    ctx->pc = 0x557098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557094u;
            // 0x557098: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55709Cu; }
        if (ctx->pc != 0x55709Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55709Cu; }
        if (ctx->pc != 0x55709Cu) { return; }
    }
    ctx->pc = 0x55709Cu;
label_55709c:
    // 0x55709c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x55709cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x5570a0: 0xc155c58  jal         func_557160
    ctx->pc = 0x5570A0u;
    SET_GPR_U32(ctx, 31, 0x5570A8u);
    ctx->pc = 0x5570A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5570A0u;
            // 0x5570a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x557160u;
    if (runtime->hasFunction(0x557160u)) {
        auto targetFn = runtime->lookupFunction(0x557160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5570A8u; }
        if (ctx->pc != 0x5570A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00557160_0x557160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5570A8u; }
        if (ctx->pc != 0x5570A8u) { return; }
    }
    ctx->pc = 0x5570A8u;
label_5570a8:
    // 0x5570a8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x5570a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x5570ac: 0xc155c58  jal         func_557160
    ctx->pc = 0x5570ACu;
    SET_GPR_U32(ctx, 31, 0x5570B4u);
    ctx->pc = 0x5570B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5570ACu;
            // 0x5570b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x557160u;
    if (runtime->hasFunction(0x557160u)) {
        auto targetFn = runtime->lookupFunction(0x557160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5570B4u; }
        if (ctx->pc != 0x5570B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00557160_0x557160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5570B4u; }
        if (ctx->pc != 0x5570B4u) { return; }
    }
    ctx->pc = 0x5570B4u;
label_5570b4:
    // 0x5570b4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x5570b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x5570b8: 0xc155c40  jal         func_557100
    ctx->pc = 0x5570B8u;
    SET_GPR_U32(ctx, 31, 0x5570C0u);
    ctx->pc = 0x5570BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5570B8u;
            // 0x5570bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x557100u;
    if (runtime->hasFunction(0x557100u)) {
        auto targetFn = runtime->lookupFunction(0x557100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5570C0u; }
        if (ctx->pc != 0x5570C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00557100_0x557100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5570C0u; }
        if (ctx->pc != 0x5570C0u) { return; }
    }
    ctx->pc = 0x5570C0u;
label_5570c0:
    // 0x5570c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5570c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5570c4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x5570C4u;
    SET_GPR_U32(ctx, 31, 0x5570CCu);
    ctx->pc = 0x5570C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5570C4u;
            // 0x5570c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5570CCu; }
        if (ctx->pc != 0x5570CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5570CCu; }
        if (ctx->pc != 0x5570CCu) { return; }
    }
    ctx->pc = 0x5570CCu;
label_5570cc:
    // 0x5570cc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x5570ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x5570d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5570d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x5570d4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5570D4u;
    {
        const bool branch_taken_0x5570d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5570d4) {
            ctx->pc = 0x5570D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5570D4u;
            // 0x5570d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5570E8u;
            goto label_5570e8;
        }
    }
    ctx->pc = 0x5570DCu;
    // 0x5570dc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x5570DCu;
    SET_GPR_U32(ctx, 31, 0x5570E4u);
    ctx->pc = 0x5570E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5570DCu;
            // 0x5570e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5570E4u; }
        if (ctx->pc != 0x5570E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5570E4u; }
        if (ctx->pc != 0x5570E4u) { return; }
    }
    ctx->pc = 0x5570E4u;
label_5570e4:
    // 0x5570e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5570e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5570e8:
    // 0x5570e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5570e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5570ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5570ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5570f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5570f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5570f4: 0x3e00008  jr          $ra
    ctx->pc = 0x5570F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5570F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5570F4u;
            // 0x5570f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5570FCu;
    // 0x5570fc: 0x0  nop
    ctx->pc = 0x5570fcu;
    // NOP
}
