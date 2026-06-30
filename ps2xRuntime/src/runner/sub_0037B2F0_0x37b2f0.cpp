#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037B2F0
// Address: 0x37b2f0 - 0x37b560
void sub_0037B2F0_0x37b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B2F0_0x37b2f0");
#endif

    switch (ctx->pc) {
        case 0x37b30cu: goto label_37b30c;
        case 0x37b32cu: goto label_37b32c;
        case 0x37b368u: goto label_37b368;
        case 0x37b3a0u: goto label_37b3a0;
        case 0x37b3c0u: goto label_37b3c0;
        case 0x37b3f8u: goto label_37b3f8;
        case 0x37b418u: goto label_37b418;
        case 0x37b450u: goto label_37b450;
        case 0x37b470u: goto label_37b470;
        case 0x37b490u: goto label_37b490;
        case 0x37b4f0u: goto label_37b4f0;
        case 0x37b4fcu: goto label_37b4fc;
        case 0x37b508u: goto label_37b508;
        case 0x37b514u: goto label_37b514;
        case 0x37b520u: goto label_37b520;
        case 0x37b52cu: goto label_37b52c;
        case 0x37b544u: goto label_37b544;
        default: break;
    }

    ctx->pc = 0x37b2f0u;

    // 0x37b2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b2f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x37b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x37b2f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37b2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37b2fc: 0x3446869f  ori         $a2, $v0, 0x869F
    ctx->pc = 0x37b2fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x37b300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37b300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37b304: 0xc0deda4  jal         func_37B690
    ctx->pc = 0x37B304u;
    SET_GPR_U32(ctx, 31, 0x37B30Cu);
    ctx->pc = 0x37B308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B304u;
            // 0x37b308: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B690u;
    if (runtime->hasFunction(0x37B690u)) {
        auto targetFn = runtime->lookupFunction(0x37B690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B30Cu; }
        if (ctx->pc != 0x37B30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B690_0x37b690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B30Cu; }
        if (ctx->pc != 0x37B30Cu) { return; }
    }
    ctx->pc = 0x37B30Cu;
label_37b30c:
    // 0x37b30c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x37b310: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37b310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37b314: 0x24637480  addiu       $v1, $v1, 0x7480
    ctx->pc = 0x37b314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29824));
    // 0x37b318: 0x244274b8  addiu       $v0, $v0, 0x74B8
    ctx->pc = 0x37b318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29880));
    // 0x37b31c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37b31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x37b320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b324: 0xc0deda0  jal         func_37B680
    ctx->pc = 0x37B324u;
    SET_GPR_U32(ctx, 31, 0x37B32Cu);
    ctx->pc = 0x37B328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B324u;
            // 0x37b328: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B680u;
    if (runtime->hasFunction(0x37B680u)) {
        auto targetFn = runtime->lookupFunction(0x37B680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B32Cu; }
        if (ctx->pc != 0x37B32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B680_0x37b680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B32Cu; }
        if (ctx->pc != 0x37B32Cu) { return; }
    }
    ctx->pc = 0x37B32Cu;
label_37b32c:
    // 0x37b32c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x37b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x37b330: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x37b330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x37b334: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37b334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37b338: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x37b338u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x37b33c: 0x24427330  addiu       $v0, $v0, 0x7330
    ctx->pc = 0x37b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x37b340: 0x26040094  addiu       $a0, $s0, 0x94
    ctx->pc = 0x37b340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x37b344: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37b344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37b348: 0x24a5b630  addiu       $a1, $a1, -0x49D0
    ctx->pc = 0x37b348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948400));
    // 0x37b34c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37b350: 0x24c6aa30  addiu       $a2, $a2, -0x55D0
    ctx->pc = 0x37b350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945328));
    // 0x37b354: 0x24427368  addiu       $v0, $v0, 0x7368
    ctx->pc = 0x37b354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29544));
    // 0x37b358: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x37b358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x37b35c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x37b35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x37b360: 0xc040804  jal         func_102010
    ctx->pc = 0x37B360u;
    SET_GPR_U32(ctx, 31, 0x37B368u);
    ctx->pc = 0x37B364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B360u;
            // 0x37b364: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B368u; }
        if (ctx->pc != 0x37B368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B368u; }
        if (ctx->pc != 0x37B368u) { return; }
    }
    ctx->pc = 0x37B368u;
label_37b368:
    // 0x37b368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b36c: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x37b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x37b370: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x37b370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x37b374: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x37b374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x37b378: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x37b378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x37b37c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x37b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x37b380: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x37b380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x37b384: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x37b384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
    // 0x37b388: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37b388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x37b38c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x37b38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x37b390: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x37b390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x37b394: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x37b394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x37b398: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x37B398u;
    SET_GPR_U32(ctx, 31, 0x37B3A0u);
    ctx->pc = 0x37B39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B398u;
            // 0x37b39c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B3A0u; }
        if (ctx->pc != 0x37B3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B3A0u; }
        if (ctx->pc != 0x37B3A0u) { return; }
    }
    ctx->pc = 0x37B3A0u;
label_37b3a0:
    // 0x37b3a0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x37b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x37b3a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37b3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b3a8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B3A8u;
    {
        const bool branch_taken_0x37b3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B3A8u;
            // 0x37b3ac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b3a8) {
            ctx->pc = 0x37B3C4u;
            goto label_37b3c4;
        }
    }
    ctx->pc = 0x37B3B0u;
    // 0x37b3b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x37b3b4: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x37b3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37b3b8: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x37B3B8u;
    SET_GPR_U32(ctx, 31, 0x37B3C0u);
    ctx->pc = 0x37B3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B3B8u;
            // 0x37b3bc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B3C0u; }
        if (ctx->pc != 0x37B3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B3C0u; }
        if (ctx->pc != 0x37B3C0u) { return; }
    }
    ctx->pc = 0x37B3C0u;
label_37b3c0:
    // 0x37b3c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37b3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37b3c4:
    // 0x37b3c4: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x37b3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x37b3c8: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x37b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
    // 0x37b3cc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x37b3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x37b3d0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x37b3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x37b3d4: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x37b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x37b3d8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x37b3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x37b3dc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x37b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x37b3e0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x37b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x37b3e4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x37b3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x37b3e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x37b3ec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x37b3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x37b3f0: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x37B3F0u;
    SET_GPR_U32(ctx, 31, 0x37B3F8u);
    ctx->pc = 0x37B3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B3F0u;
            // 0x37b3f4: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B3F8u; }
        if (ctx->pc != 0x37B3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B3F8u; }
        if (ctx->pc != 0x37B3F8u) { return; }
    }
    ctx->pc = 0x37B3F8u;
label_37b3f8:
    // 0x37b3f8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x37b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x37b3fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37b3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b400: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B400u;
    {
        const bool branch_taken_0x37b400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B400u;
            // 0x37b404: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b400) {
            ctx->pc = 0x37B41Cu;
            goto label_37b41c;
        }
    }
    ctx->pc = 0x37B408u;
    // 0x37b408: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37b408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x37b40c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x37b40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37b410: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x37B410u;
    SET_GPR_U32(ctx, 31, 0x37B418u);
    ctx->pc = 0x37B414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B410u;
            // 0x37b414: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B418u; }
        if (ctx->pc != 0x37B418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B418u; }
        if (ctx->pc != 0x37B418u) { return; }
    }
    ctx->pc = 0x37B418u;
label_37b418:
    // 0x37b418: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37b418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37b41c:
    // 0x37b41c: 0xae040090  sw          $a0, 0x90($s0)
    ctx->pc = 0x37b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 4));
    // 0x37b420: 0x3c0241d4  lui         $v0, 0x41D4
    ctx->pc = 0x37b420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16852 << 16));
    // 0x37b424: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x37b424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x37b428: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x37b428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x37b42c: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x37b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x37b430: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x37b430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x37b434: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x37b434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x37b438: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x37b438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x37b43c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x37b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x37b440: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37b440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x37b444: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x37b444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x37b448: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x37B448u;
    SET_GPR_U32(ctx, 31, 0x37B450u);
    ctx->pc = 0x37B44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B448u;
            // 0x37b44c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B450u; }
        if (ctx->pc != 0x37B450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B450u; }
        if (ctx->pc != 0x37B450u) { return; }
    }
    ctx->pc = 0x37B450u;
label_37b450:
    // 0x37b450: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x37b450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x37b454: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37b454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b458: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B458u;
    {
        const bool branch_taken_0x37b458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B458u;
            // 0x37b45c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b458) {
            ctx->pc = 0x37B474u;
            goto label_37b474;
        }
    }
    ctx->pc = 0x37B460u;
    // 0x37b460: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37b460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x37b464: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x37b464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37b468: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x37B468u;
    SET_GPR_U32(ctx, 31, 0x37B470u);
    ctx->pc = 0x37B46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B468u;
            // 0x37b46c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B470u; }
        if (ctx->pc != 0x37B470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B470u; }
        if (ctx->pc != 0x37B470u) { return; }
    }
    ctx->pc = 0x37B470u;
label_37b470:
    // 0x37b470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37b470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37b474:
    // 0x37b474: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x37b474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x37b478: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37b478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b47c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37b47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37b480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b484: 0x3e00008  jr          $ra
    ctx->pc = 0x37B484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B484u;
            // 0x37b488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37B48Cu;
    // 0x37b48c: 0x0  nop
    ctx->pc = 0x37b48cu;
    // NOP
label_37b490:
    // 0x37b490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37b498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b49c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37b49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37b4a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37b4a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b4a4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x37B4A4u;
    {
        const bool branch_taken_0x37b4a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B4A4u;
            // 0x37b4a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b4a4) {
            ctx->pc = 0x37B544u;
            goto label_37b544;
        }
    }
    ctx->pc = 0x37B4ACu;
    // 0x37b4ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x37b4b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37b4b4: 0x24637480  addiu       $v1, $v1, 0x7480
    ctx->pc = 0x37b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29824));
    // 0x37b4b8: 0x244274b8  addiu       $v0, $v0, 0x74B8
    ctx->pc = 0x37b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29880));
    // 0x37b4bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37b4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x37b4c0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x37B4C0u;
    {
        const bool branch_taken_0x37b4c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B4C0u;
            // 0x37b4c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b4c0) {
            ctx->pc = 0x37B52Cu;
            goto label_37b52c;
        }
    }
    ctx->pc = 0x37B4C8u;
    // 0x37b4c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x37b4cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37b4d0: 0x24637430  addiu       $v1, $v1, 0x7430
    ctx->pc = 0x37b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29744));
    // 0x37b4d4: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x37b4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x37b4d8: 0x24427468  addiu       $v0, $v0, 0x7468
    ctx->pc = 0x37b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29800));
    // 0x37b4dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x37b4e0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x37b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x37b4e4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x37b4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x37b4e8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x37B4E8u;
    SET_GPR_U32(ctx, 31, 0x37B4F0u);
    ctx->pc = 0x37B4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B4E8u;
            // 0x37b4ec: 0x24a5a8d0  addiu       $a1, $a1, -0x5730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B4F0u; }
        if (ctx->pc != 0x37B4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B4F0u; }
        if (ctx->pc != 0x37B4F0u) { return; }
    }
    ctx->pc = 0x37B4F0u;
label_37b4f0:
    // 0x37b4f0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x37b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x37b4f4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x37B4F4u;
    SET_GPR_U32(ctx, 31, 0x37B4FCu);
    ctx->pc = 0x37B4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B4F4u;
            // 0x37b4f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B4FCu; }
        if (ctx->pc != 0x37B4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B4FCu; }
        if (ctx->pc != 0x37B4FCu) { return; }
    }
    ctx->pc = 0x37B4FCu;
label_37b4fc:
    // 0x37b4fc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x37b4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x37b500: 0xc0ded70  jal         func_37B5C0
    ctx->pc = 0x37B500u;
    SET_GPR_U32(ctx, 31, 0x37B508u);
    ctx->pc = 0x37B504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B500u;
            // 0x37b504: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B5C0u;
    if (runtime->hasFunction(0x37B5C0u)) {
        auto targetFn = runtime->lookupFunction(0x37B5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B508u; }
        if (ctx->pc != 0x37B508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B5C0_0x37b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B508u; }
        if (ctx->pc != 0x37B508u) { return; }
    }
    ctx->pc = 0x37B508u;
label_37b508:
    // 0x37b508: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x37b508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x37b50c: 0xc0ded70  jal         func_37B5C0
    ctx->pc = 0x37B50Cu;
    SET_GPR_U32(ctx, 31, 0x37B514u);
    ctx->pc = 0x37B510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B50Cu;
            // 0x37b510: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B5C0u;
    if (runtime->hasFunction(0x37B5C0u)) {
        auto targetFn = runtime->lookupFunction(0x37B5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B514u; }
        if (ctx->pc != 0x37B514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B5C0_0x37b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B514u; }
        if (ctx->pc != 0x37B514u) { return; }
    }
    ctx->pc = 0x37B514u;
label_37b514:
    // 0x37b514: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x37b514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x37b518: 0xc0ded58  jal         func_37B560
    ctx->pc = 0x37B518u;
    SET_GPR_U32(ctx, 31, 0x37B520u);
    ctx->pc = 0x37B51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B518u;
            // 0x37b51c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B560u;
    if (runtime->hasFunction(0x37B560u)) {
        auto targetFn = runtime->lookupFunction(0x37B560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B520u; }
        if (ctx->pc != 0x37B520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B560_0x37b560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B520u; }
        if (ctx->pc != 0x37B520u) { return; }
    }
    ctx->pc = 0x37B520u;
label_37b520:
    // 0x37b520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b524: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x37B524u;
    SET_GPR_U32(ctx, 31, 0x37B52Cu);
    ctx->pc = 0x37B528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B524u;
            // 0x37b528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B52Cu; }
        if (ctx->pc != 0x37B52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B52Cu; }
        if (ctx->pc != 0x37B52Cu) { return; }
    }
    ctx->pc = 0x37B52Cu;
label_37b52c:
    // 0x37b52c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x37b52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x37b530: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37b530u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x37b534: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37B534u;
    {
        const bool branch_taken_0x37b534 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x37b534) {
            ctx->pc = 0x37B538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37B534u;
            // 0x37b538: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37B548u;
            goto label_37b548;
        }
    }
    ctx->pc = 0x37B53Cu;
    // 0x37b53c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x37B53Cu;
    SET_GPR_U32(ctx, 31, 0x37B544u);
    ctx->pc = 0x37B540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B53Cu;
            // 0x37b540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B544u; }
        if (ctx->pc != 0x37B544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B544u; }
        if (ctx->pc != 0x37B544u) { return; }
    }
    ctx->pc = 0x37B544u;
label_37b544:
    // 0x37b544: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37b544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37b548:
    // 0x37b548: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37b548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b54c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b54cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37b550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b554: 0x3e00008  jr          $ra
    ctx->pc = 0x37B554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B554u;
            // 0x37b558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37B55Cu;
    // 0x37b55c: 0x0  nop
    ctx->pc = 0x37b55cu;
    // NOP
}
