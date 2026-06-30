#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00486F40
// Address: 0x486f40 - 0x487140
void sub_00486F40_0x486f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486F40_0x486f40");
#endif

    switch (ctx->pc) {
        case 0x486f5cu: goto label_486f5c;
        case 0x486f7cu: goto label_486f7c;
        case 0x486fd4u: goto label_486fd4;
        case 0x486ff4u: goto label_486ff4;
        case 0x48702cu: goto label_48702c;
        case 0x48704cu: goto label_48704c;
        case 0x487070u: goto label_487070;
        case 0x4870d0u: goto label_4870d0;
        case 0x4870dcu: goto label_4870dc;
        case 0x4870e8u: goto label_4870e8;
        case 0x4870f4u: goto label_4870f4;
        case 0x487100u: goto label_487100;
        case 0x48710cu: goto label_48710c;
        case 0x487124u: goto label_487124;
        default: break;
    }

    ctx->pc = 0x486f40u;

    // 0x486f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x486f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x486f44: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x486f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x486f48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x486f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x486f4c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x486f4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x486f50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x486f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x486f54: 0xc121c88  jal         func_487220
    ctx->pc = 0x486F54u;
    SET_GPR_U32(ctx, 31, 0x486F5Cu);
    ctx->pc = 0x486F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486F54u;
            // 0x486f58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x487220u;
    if (runtime->hasFunction(0x487220u)) {
        auto targetFn = runtime->lookupFunction(0x487220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486F5Cu; }
        if (ctx->pc != 0x486F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00487220_0x487220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486F5Cu; }
        if (ctx->pc != 0x486F5Cu) { return; }
    }
    ctx->pc = 0x486F5Cu;
label_486f5c:
    // 0x486f5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x486f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x486f60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x486f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x486f64: 0x2463f680  addiu       $v1, $v1, -0x980
    ctx->pc = 0x486f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964864));
    // 0x486f68: 0x2442f6b8  addiu       $v0, $v0, -0x948
    ctx->pc = 0x486f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964920));
    // 0x486f6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x486f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x486f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x486f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486f74: 0xc121c84  jal         func_487210
    ctx->pc = 0x486F74u;
    SET_GPR_U32(ctx, 31, 0x486F7Cu);
    ctx->pc = 0x486F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486F74u;
            // 0x486f78: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x487210u;
    if (runtime->hasFunction(0x487210u)) {
        auto targetFn = runtime->lookupFunction(0x487210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486F7Cu; }
        if (ctx->pc != 0x486F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00487210_0x487210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486F7Cu; }
        if (ctx->pc != 0x486F7Cu) { return; }
    }
    ctx->pc = 0x486F7Cu;
label_486f7c:
    // 0x486f7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x486f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x486f80: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x486f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x486f84: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x486f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x486f88: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x486f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x486f8c: 0x2442f590  addiu       $v0, $v0, -0xA70
    ctx->pc = 0x486f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964624));
    // 0x486f90: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x486f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x486f94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x486f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x486f98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x486f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x486f9c: 0x2442f5c8  addiu       $v0, $v0, -0xA38
    ctx->pc = 0x486f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964680));
    // 0x486fa0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x486fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x486fa4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x486fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x486fa8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x486fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x486fac: 0xc440fd68  lwc1        $f0, -0x298($v0)
    ctx->pc = 0x486facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x486fb0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x486fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x486fb4: 0xc441fd6c  lwc1        $f1, -0x294($v0)
    ctx->pc = 0x486fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x486fb8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x486fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x486fbc: 0xc460fd70  lwc1        $f0, -0x290($v1)
    ctx->pc = 0x486fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x486fc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x486fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x486fc4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x486fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x486fc8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x486fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x486fcc: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x486FCCu;
    SET_GPR_U32(ctx, 31, 0x486FD4u);
    ctx->pc = 0x486FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486FCCu;
            // 0x486fd0: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486FD4u; }
        if (ctx->pc != 0x486FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486FD4u; }
        if (ctx->pc != 0x486FD4u) { return; }
    }
    ctx->pc = 0x486FD4u;
label_486fd4:
    // 0x486fd4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x486fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x486fd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x486fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486fdc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x486FDCu;
    {
        const bool branch_taken_0x486fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x486FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486FDCu;
            // 0x486fe0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486fdc) {
            ctx->pc = 0x486FF8u;
            goto label_486ff8;
        }
    }
    ctx->pc = 0x486FE4u;
    // 0x486fe4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x486fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x486fe8: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x486fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x486fec: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x486FECu;
    SET_GPR_U32(ctx, 31, 0x486FF4u);
    ctx->pc = 0x486FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486FECu;
            // 0x486ff0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486FF4u; }
        if (ctx->pc != 0x486FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486FF4u; }
        if (ctx->pc != 0x486FF4u) { return; }
    }
    ctx->pc = 0x486FF4u;
label_486ff4:
    // 0x486ff4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x486ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_486ff8:
    // 0x486ff8: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x486ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x486ffc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x486ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x487000: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x487000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x487004: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x487004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x487008: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x487008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x48700c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x48700cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x487010: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x487010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x487014: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x487014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x487018: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x487018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x48701c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x48701cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x487020: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x487020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x487024: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x487024u;
    SET_GPR_U32(ctx, 31, 0x48702Cu);
    ctx->pc = 0x487028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487024u;
            // 0x487028: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48702Cu; }
        if (ctx->pc != 0x48702Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48702Cu; }
        if (ctx->pc != 0x48702Cu) { return; }
    }
    ctx->pc = 0x48702Cu;
label_48702c:
    // 0x48702c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x48702cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x487030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x487030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487034: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x487034u;
    {
        const bool branch_taken_0x487034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x487038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487034u;
            // 0x487038: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487034) {
            ctx->pc = 0x487050u;
            goto label_487050;
        }
    }
    ctx->pc = 0x48703Cu;
    // 0x48703c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x48703cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x487040: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x487040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x487044: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x487044u;
    SET_GPR_U32(ctx, 31, 0x48704Cu);
    ctx->pc = 0x487048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487044u;
            // 0x487048: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48704Cu; }
        if (ctx->pc != 0x48704Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48704Cu; }
        if (ctx->pc != 0x48704Cu) { return; }
    }
    ctx->pc = 0x48704Cu;
label_48704c:
    // 0x48704c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48704cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_487050:
    // 0x487050: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x487050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x487054: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x487054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x487058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48705c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48705cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x487060: 0x3e00008  jr          $ra
    ctx->pc = 0x487060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487060u;
            // 0x487064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x487068u;
    // 0x487068: 0x0  nop
    ctx->pc = 0x487068u;
    // NOP
    // 0x48706c: 0x0  nop
    ctx->pc = 0x48706cu;
    // NOP
label_487070:
    // 0x487070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x487070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x487074: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x487074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x487078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x487078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48707c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48707cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x487080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x487080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487084: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x487084u;
    {
        const bool branch_taken_0x487084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x487088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487084u;
            // 0x487088: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487084) {
            ctx->pc = 0x487124u;
            goto label_487124;
        }
    }
    ctx->pc = 0x48708Cu;
    // 0x48708c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x48708cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x487090: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x487090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x487094: 0x2463f680  addiu       $v1, $v1, -0x980
    ctx->pc = 0x487094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964864));
    // 0x487098: 0x2442f6b8  addiu       $v0, $v0, -0x948
    ctx->pc = 0x487098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964920));
    // 0x48709c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x48709cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4870a0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4870A0u;
    {
        const bool branch_taken_0x4870a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4870A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4870A0u;
            // 0x4870a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4870a0) {
            ctx->pc = 0x48710Cu;
            goto label_48710c;
        }
    }
    ctx->pc = 0x4870A8u;
    // 0x4870a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4870a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4870ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4870acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4870b0: 0x2463f630  addiu       $v1, $v1, -0x9D0
    ctx->pc = 0x4870b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964784));
    // 0x4870b4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x4870b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x4870b8: 0x2442f668  addiu       $v0, $v0, -0x998
    ctx->pc = 0x4870b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964840));
    // 0x4870bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4870bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4870c0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4870c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4870c4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4870c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4870c8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4870C8u;
    SET_GPR_U32(ctx, 31, 0x4870D0u);
    ctx->pc = 0x4870CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4870C8u;
            // 0x4870cc: 0x24a56b90  addiu       $a1, $a1, 0x6B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4870D0u; }
        if (ctx->pc != 0x4870D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4870D0u; }
        if (ctx->pc != 0x4870D0u) { return; }
    }
    ctx->pc = 0x4870D0u;
label_4870d0:
    // 0x4870d0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4870d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4870d4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4870D4u;
    SET_GPR_U32(ctx, 31, 0x4870DCu);
    ctx->pc = 0x4870D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4870D4u;
            // 0x4870d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4870DCu; }
        if (ctx->pc != 0x4870DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4870DCu; }
        if (ctx->pc != 0x4870DCu) { return; }
    }
    ctx->pc = 0x4870DCu;
label_4870dc:
    // 0x4870dc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4870dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4870e0: 0xc121c68  jal         func_4871A0
    ctx->pc = 0x4870E0u;
    SET_GPR_U32(ctx, 31, 0x4870E8u);
    ctx->pc = 0x4870E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4870E0u;
            // 0x4870e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4871A0u;
    if (runtime->hasFunction(0x4871A0u)) {
        auto targetFn = runtime->lookupFunction(0x4871A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4870E8u; }
        if (ctx->pc != 0x4870E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004871A0_0x4871a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4870E8u; }
        if (ctx->pc != 0x4870E8u) { return; }
    }
    ctx->pc = 0x4870E8u;
label_4870e8:
    // 0x4870e8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4870e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4870ec: 0xc121c68  jal         func_4871A0
    ctx->pc = 0x4870ECu;
    SET_GPR_U32(ctx, 31, 0x4870F4u);
    ctx->pc = 0x4870F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4870ECu;
            // 0x4870f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4871A0u;
    if (runtime->hasFunction(0x4871A0u)) {
        auto targetFn = runtime->lookupFunction(0x4871A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4870F4u; }
        if (ctx->pc != 0x4870F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004871A0_0x4871a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4870F4u; }
        if (ctx->pc != 0x4870F4u) { return; }
    }
    ctx->pc = 0x4870F4u;
label_4870f4:
    // 0x4870f4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4870f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4870f8: 0xc121c50  jal         func_487140
    ctx->pc = 0x4870F8u;
    SET_GPR_U32(ctx, 31, 0x487100u);
    ctx->pc = 0x4870FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4870F8u;
            // 0x4870fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x487140u;
    if (runtime->hasFunction(0x487140u)) {
        auto targetFn = runtime->lookupFunction(0x487140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487100u; }
        if (ctx->pc != 0x487100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00487140_0x487140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487100u; }
        if (ctx->pc != 0x487100u) { return; }
    }
    ctx->pc = 0x487100u;
label_487100:
    // 0x487100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x487100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487104: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x487104u;
    SET_GPR_U32(ctx, 31, 0x48710Cu);
    ctx->pc = 0x487108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487104u;
            // 0x487108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48710Cu; }
        if (ctx->pc != 0x48710Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48710Cu; }
        if (ctx->pc != 0x48710Cu) { return; }
    }
    ctx->pc = 0x48710Cu;
label_48710c:
    // 0x48710c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x48710cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x487110: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x487110u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x487114: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x487114u;
    {
        const bool branch_taken_0x487114 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x487114) {
            ctx->pc = 0x487118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x487114u;
            // 0x487118: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x487128u;
            goto label_487128;
        }
    }
    ctx->pc = 0x48711Cu;
    // 0x48711c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x48711Cu;
    SET_GPR_U32(ctx, 31, 0x487124u);
    ctx->pc = 0x487120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48711Cu;
            // 0x487120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487124u; }
        if (ctx->pc != 0x487124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487124u; }
        if (ctx->pc != 0x487124u) { return; }
    }
    ctx->pc = 0x487124u;
label_487124:
    // 0x487124: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x487124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_487128:
    // 0x487128: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x487128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48712c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48712cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x487130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x487130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x487134: 0x3e00008  jr          $ra
    ctx->pc = 0x487134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487134u;
            // 0x487138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48713Cu;
    // 0x48713c: 0x0  nop
    ctx->pc = 0x48713cu;
    // NOP
}
