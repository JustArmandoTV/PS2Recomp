#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00503110
// Address: 0x503110 - 0x503260
void sub_00503110_0x503110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503110_0x503110");
#endif

    switch (ctx->pc) {
        case 0x503184u: goto label_503184;
        case 0x50318cu: goto label_50318c;
        case 0x503194u: goto label_503194;
        case 0x5031acu: goto label_5031ac;
        case 0x5031b4u: goto label_5031b4;
        case 0x5031c4u: goto label_5031c4;
        case 0x5031f8u: goto label_5031f8;
        case 0x50320cu: goto label_50320c;
        case 0x503220u: goto label_503220;
        case 0x503234u: goto label_503234;
        default: break;
    }

    ctx->pc = 0x503110u;

    // 0x503110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x503110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x503114: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x503114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x503118: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x503118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x50311c: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x50311cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x503120: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x503120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x503124: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x503124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x503128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x503128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x50312c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x50312cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x503130: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x503130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503134: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x503134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x503138: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x503138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x50313c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x50313cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x503140: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x503140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x503144: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x503144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x503148: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x503148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
    // 0x50314c: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x50314cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x503150: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x503150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x503154: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x503154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x503158: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x503158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x50315c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x50315cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x503160: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x503160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x503164: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x503164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x503168: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x503168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x50316c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x50316cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x503170: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x503170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x503174: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x503174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x503178: 0xa08000d8  sb          $zero, 0xD8($a0)
    ctx->pc = 0x503178u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x50317c: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x50317Cu;
    SET_GPR_U32(ctx, 31, 0x503184u);
    ctx->pc = 0x503180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50317Cu;
            // 0x503180: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503184u; }
        if (ctx->pc != 0x503184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503184u; }
        if (ctx->pc != 0x503184u) { return; }
    }
    ctx->pc = 0x503184u;
label_503184:
    // 0x503184: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x503184u;
    SET_GPR_U32(ctx, 31, 0x50318Cu);
    ctx->pc = 0x503188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503184u;
            // 0x503188: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50318Cu; }
        if (ctx->pc != 0x50318Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50318Cu; }
        if (ctx->pc != 0x50318Cu) { return; }
    }
    ctx->pc = 0x50318Cu;
label_50318c:
    // 0x50318c: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x50318Cu;
    SET_GPR_U32(ctx, 31, 0x503194u);
    ctx->pc = 0x503190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50318Cu;
            // 0x503190: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503194u; }
        if (ctx->pc != 0x503194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503194u; }
        if (ctx->pc != 0x503194u) { return; }
    }
    ctx->pc = 0x503194u;
label_503194:
    // 0x503194: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x503194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x503198: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x503198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50319c: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x50319cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
    // 0x5031a0: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x5031a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x5031a4: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x5031A4u;
    SET_GPR_U32(ctx, 31, 0x5031ACu);
    ctx->pc = 0x5031A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5031A4u;
            // 0x5031a8: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5031ACu; }
        if (ctx->pc != 0x5031ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5031ACu; }
        if (ctx->pc != 0x5031ACu) { return; }
    }
    ctx->pc = 0x5031ACu;
label_5031ac:
    // 0x5031ac: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x5031ACu;
    SET_GPR_U32(ctx, 31, 0x5031B4u);
    ctx->pc = 0x5031B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5031ACu;
            // 0x5031b0: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5031B4u; }
        if (ctx->pc != 0x5031B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5031B4u; }
        if (ctx->pc != 0x5031B4u) { return; }
    }
    ctx->pc = 0x5031B4u;
label_5031b4:
    // 0x5031b4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5031b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x5031b8: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x5031b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x5031bc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x5031BCu;
    SET_GPR_U32(ctx, 31, 0x5031C4u);
    ctx->pc = 0x5031C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5031BCu;
            // 0x5031c0: 0x24a5b0d0  addiu       $a1, $a1, -0x4F30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5031C4u; }
        if (ctx->pc != 0x5031C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5031C4u; }
        if (ctx->pc != 0x5031C4u) { return; }
    }
    ctx->pc = 0x5031C4u;
label_5031c4:
    // 0x5031c4: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x5031c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x5031c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5031c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5031cc: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x5031ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    // 0x5031d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x5031d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x5031d4: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x5031d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x5031d8: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x5031d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x5031dc: 0xa6200110  sh          $zero, 0x110($s1)
    ctx->pc = 0x5031dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 272), (uint16_t)GPR_U32(ctx, 0));
    // 0x5031e0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x5031e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x5031e4: 0xa6200112  sh          $zero, 0x112($s1)
    ctx->pc = 0x5031e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 274), (uint16_t)GPR_U32(ctx, 0));
    // 0x5031e8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x5031e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x5031ec: 0xa6220114  sh          $v0, 0x114($s1)
    ctx->pc = 0x5031ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 276), (uint16_t)GPR_U32(ctx, 2));
    // 0x5031f0: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x5031F0u;
    SET_GPR_U32(ctx, 31, 0x5031F8u);
    ctx->pc = 0x5031F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5031F0u;
            // 0x5031f4: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5031F8u; }
        if (ctx->pc != 0x5031F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5031F8u; }
        if (ctx->pc != 0x5031F8u) { return; }
    }
    ctx->pc = 0x5031F8u;
label_5031f8:
    // 0x5031f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5031f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5031fc: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x5031fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x503200: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x503200u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x503204: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x503204u;
    SET_GPR_U32(ctx, 31, 0x50320Cu);
    ctx->pc = 0x503208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503204u;
            // 0x503208: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50320Cu; }
        if (ctx->pc != 0x50320Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50320Cu; }
        if (ctx->pc != 0x50320Cu) { return; }
    }
    ctx->pc = 0x50320Cu;
label_50320c:
    // 0x50320c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50320cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x503210: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x503210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x503214: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x503214u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x503218: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x503218u;
    SET_GPR_U32(ctx, 31, 0x503220u);
    ctx->pc = 0x50321Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503218u;
            // 0x50321c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503220u; }
        if (ctx->pc != 0x503220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503220u; }
        if (ctx->pc != 0x503220u) { return; }
    }
    ctx->pc = 0x503220u;
label_503220:
    // 0x503220: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x503220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x503224: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x503224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x503228: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x503228u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x50322c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x50322Cu;
    SET_GPR_U32(ctx, 31, 0x503234u);
    ctx->pc = 0x503230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50322Cu;
            // 0x503230: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503234u; }
        if (ctx->pc != 0x503234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503234u; }
        if (ctx->pc != 0x503234u) { return; }
    }
    ctx->pc = 0x503234u;
label_503234:
    // 0x503234: 0xa20001c0  sb          $zero, 0x1C0($s0)
    ctx->pc = 0x503234u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 448), (uint8_t)GPR_U32(ctx, 0));
    // 0x503238: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x503238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50323c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x50323cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x503240: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x503240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x503244: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x503244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x503248: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x503248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50324c: 0x3e00008  jr          $ra
    ctx->pc = 0x50324Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50324Cu;
            // 0x503250: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503254u;
    // 0x503254: 0x0  nop
    ctx->pc = 0x503254u;
    // NOP
    // 0x503258: 0x0  nop
    ctx->pc = 0x503258u;
    // NOP
    // 0x50325c: 0x0  nop
    ctx->pc = 0x50325cu;
    // NOP
}
