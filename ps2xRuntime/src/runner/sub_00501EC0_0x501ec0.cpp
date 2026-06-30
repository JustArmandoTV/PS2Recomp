#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00501EC0
// Address: 0x501ec0 - 0x502140
void sub_00501EC0_0x501ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00501EC0_0x501ec0");
#endif

    switch (ctx->pc) {
        case 0x501efcu: goto label_501efc;
        case 0x501f08u: goto label_501f08;
        case 0x501f10u: goto label_501f10;
        case 0x501f18u: goto label_501f18;
        case 0x501f24u: goto label_501f24;
        case 0x501f2cu: goto label_501f2c;
        case 0x501f4cu: goto label_501f4c;
        case 0x501f58u: goto label_501f58;
        case 0x501f84u: goto label_501f84;
        case 0x501f90u: goto label_501f90;
        case 0x501f98u: goto label_501f98;
        case 0x501fa0u: goto label_501fa0;
        case 0x501facu: goto label_501fac;
        case 0x501fb4u: goto label_501fb4;
        case 0x501fd4u: goto label_501fd4;
        case 0x501fe0u: goto label_501fe0;
        case 0x50204cu: goto label_50204c;
        case 0x502058u: goto label_502058;
        case 0x502060u: goto label_502060;
        case 0x502068u: goto label_502068;
        case 0x502074u: goto label_502074;
        case 0x50207cu: goto label_50207c;
        case 0x50209cu: goto label_50209c;
        case 0x5020a8u: goto label_5020a8;
        default: break;
    }

    ctx->pc = 0x501ec0u;

    // 0x501ec0: 0x27bdf620  addiu       $sp, $sp, -0x9E0
    ctx->pc = 0x501ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964768));
    // 0x501ec4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x501ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x501ec8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x501ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x501ecc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x501eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x501ed0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x501ed0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501ed4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x501ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x501ed8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x501ed8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501edc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x501edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x501ee0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x501ee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501ee4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x501ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x501ee8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x501ee8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x501eec: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x501eecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x501ef0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x501ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x501ef4: 0xc140150  jal         func_500540
    ctx->pc = 0x501EF4u;
    SET_GPR_U32(ctx, 31, 0x501EFCu);
    ctx->pc = 0x501EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501EF4u;
            // 0x501ef8: 0x27a40850  addiu       $a0, $sp, 0x850 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501EFCu; }
        if (ctx->pc != 0x501EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501EFCu; }
        if (ctx->pc != 0x501EFCu) { return; }
    }
    ctx->pc = 0x501EFCu;
label_501efc:
    // 0x501efc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x501efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501f00: 0xc140150  jal         func_500540
    ctx->pc = 0x501F00u;
    SET_GPR_U32(ctx, 31, 0x501F08u);
    ctx->pc = 0x501F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501F00u;
            // 0x501f04: 0x27a406c0  addiu       $a0, $sp, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F08u; }
        if (ctx->pc != 0x501F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F08u; }
        if (ctx->pc != 0x501F08u) { return; }
    }
    ctx->pc = 0x501F08u;
label_501f08:
    // 0x501f08: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x501F08u;
    SET_GPR_U32(ctx, 31, 0x501F10u);
    ctx->pc = 0x501F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501F08u;
            // 0x501f0c: 0x27a40850  addiu       $a0, $sp, 0x850 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F10u; }
        if (ctx->pc != 0x501F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F10u; }
        if (ctx->pc != 0x501F10u) { return; }
    }
    ctx->pc = 0x501F10u;
label_501f10:
    // 0x501f10: 0xc110e94  jal         func_443A50
    ctx->pc = 0x501F10u;
    SET_GPR_U32(ctx, 31, 0x501F18u);
    ctx->pc = 0x501F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501F10u;
            // 0x501f14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F18u; }
        if (ctx->pc != 0x501F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F18u; }
        if (ctx->pc != 0x501F18u) { return; }
    }
    ctx->pc = 0x501F18u;
label_501f18:
    // 0x501f18: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x501f18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x501f1c: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x501F1Cu;
    SET_GPR_U32(ctx, 31, 0x501F24u);
    ctx->pc = 0x501F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501F1Cu;
            // 0x501f20: 0x27a406c0  addiu       $a0, $sp, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F24u; }
        if (ctx->pc != 0x501F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F24u; }
        if (ctx->pc != 0x501F24u) { return; }
    }
    ctx->pc = 0x501F24u;
label_501f24:
    // 0x501f24: 0xc110e94  jal         func_443A50
    ctx->pc = 0x501F24u;
    SET_GPR_U32(ctx, 31, 0x501F2Cu);
    ctx->pc = 0x501F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501F24u;
            // 0x501f28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F2Cu; }
        if (ctx->pc != 0x501F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F2Cu; }
        if (ctx->pc != 0x501F2Cu) { return; }
    }
    ctx->pc = 0x501F2Cu;
label_501f2c:
    // 0x501f2c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x501f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x501f30: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x501F30u;
    {
        const bool branch_taken_0x501f30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x501F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501F30u;
            // 0x501f34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501f30) {
            ctx->pc = 0x501F3Cu;
            goto label_501f3c;
        }
    }
    ctx->pc = 0x501F38u;
    // 0x501f38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x501f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_501f3c:
    // 0x501f3c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x501f3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x501f40: 0x27a406c0  addiu       $a0, $sp, 0x6C0
    ctx->pc = 0x501f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
    // 0x501f44: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x501F44u;
    SET_GPR_U32(ctx, 31, 0x501F4Cu);
    ctx->pc = 0x501F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501F44u;
            // 0x501f48: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F4Cu; }
        if (ctx->pc != 0x501F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F4Cu; }
        if (ctx->pc != 0x501F4Cu) { return; }
    }
    ctx->pc = 0x501F4Cu;
label_501f4c:
    // 0x501f4c: 0x27a40850  addiu       $a0, $sp, 0x850
    ctx->pc = 0x501f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
    // 0x501f50: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x501F50u;
    SET_GPR_U32(ctx, 31, 0x501F58u);
    ctx->pc = 0x501F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501F50u;
            // 0x501f54: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F58u; }
        if (ctx->pc != 0x501F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F58u; }
        if (ctx->pc != 0x501F58u) { return; }
    }
    ctx->pc = 0x501F58u;
label_501f58:
    // 0x501f58: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x501f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x501f5c: 0x10182b  sltu        $v1, $zero, $s0
    ctx->pc = 0x501f5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x501f60: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x501f60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x501f64: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x501f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x501f68: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x501f68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x501f6c: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x501f6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x501f70: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x501f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501f74: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x501f74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x501f78: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x501f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x501f7c: 0xc140150  jal         func_500540
    ctx->pc = 0x501F7Cu;
    SET_GPR_U32(ctx, 31, 0x501F84u);
    ctx->pc = 0x501F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501F7Cu;
            // 0x501f80: 0x27a40530  addiu       $a0, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F84u; }
        if (ctx->pc != 0x501F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F84u; }
        if (ctx->pc != 0x501F84u) { return; }
    }
    ctx->pc = 0x501F84u;
label_501f84:
    // 0x501f84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x501f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501f88: 0xc140150  jal         func_500540
    ctx->pc = 0x501F88u;
    SET_GPR_U32(ctx, 31, 0x501F90u);
    ctx->pc = 0x501F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501F88u;
            // 0x501f8c: 0x27a403a0  addiu       $a0, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F90u; }
        if (ctx->pc != 0x501F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F90u; }
        if (ctx->pc != 0x501F90u) { return; }
    }
    ctx->pc = 0x501F90u;
label_501f90:
    // 0x501f90: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x501F90u;
    SET_GPR_U32(ctx, 31, 0x501F98u);
    ctx->pc = 0x501F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501F90u;
            // 0x501f94: 0x27a40530  addiu       $a0, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F98u; }
        if (ctx->pc != 0x501F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501F98u; }
        if (ctx->pc != 0x501F98u) { return; }
    }
    ctx->pc = 0x501F98u;
label_501f98:
    // 0x501f98: 0xc110e94  jal         func_443A50
    ctx->pc = 0x501F98u;
    SET_GPR_U32(ctx, 31, 0x501FA0u);
    ctx->pc = 0x501F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501F98u;
            // 0x501f9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501FA0u; }
        if (ctx->pc != 0x501FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501FA0u; }
        if (ctx->pc != 0x501FA0u) { return; }
    }
    ctx->pc = 0x501FA0u;
label_501fa0:
    // 0x501fa0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x501fa0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x501fa4: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x501FA4u;
    SET_GPR_U32(ctx, 31, 0x501FACu);
    ctx->pc = 0x501FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501FA4u;
            // 0x501fa8: 0x27a403a0  addiu       $a0, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501FACu; }
        if (ctx->pc != 0x501FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501FACu; }
        if (ctx->pc != 0x501FACu) { return; }
    }
    ctx->pc = 0x501FACu;
label_501fac:
    // 0x501fac: 0xc110e94  jal         func_443A50
    ctx->pc = 0x501FACu;
    SET_GPR_U32(ctx, 31, 0x501FB4u);
    ctx->pc = 0x501FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501FACu;
            // 0x501fb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501FB4u; }
        if (ctx->pc != 0x501FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501FB4u; }
        if (ctx->pc != 0x501FB4u) { return; }
    }
    ctx->pc = 0x501FB4u;
label_501fb4:
    // 0x501fb4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x501fb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x501fb8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x501FB8u;
    {
        const bool branch_taken_0x501fb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x501FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501FB8u;
            // 0x501fbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501fb8) {
            ctx->pc = 0x501FC4u;
            goto label_501fc4;
        }
    }
    ctx->pc = 0x501FC0u;
    // 0x501fc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x501fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_501fc4:
    // 0x501fc4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x501fc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x501fc8: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x501fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x501fcc: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x501FCCu;
    SET_GPR_U32(ctx, 31, 0x501FD4u);
    ctx->pc = 0x501FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501FCCu;
            // 0x501fd0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501FD4u; }
        if (ctx->pc != 0x501FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501FD4u; }
        if (ctx->pc != 0x501FD4u) { return; }
    }
    ctx->pc = 0x501FD4u;
label_501fd4:
    // 0x501fd4: 0x27a40530  addiu       $a0, $sp, 0x530
    ctx->pc = 0x501fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    // 0x501fd8: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x501FD8u;
    SET_GPR_U32(ctx, 31, 0x501FE0u);
    ctx->pc = 0x501FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501FD8u;
            // 0x501fdc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501FE0u; }
        if (ctx->pc != 0x501FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501FE0u; }
        if (ctx->pc != 0x501FE0u) { return; }
    }
    ctx->pc = 0x501FE0u;
label_501fe0:
    // 0x501fe0: 0x11182b  sltu        $v1, $zero, $s1
    ctx->pc = 0x501fe0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x501fe4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x501fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x501fe8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x501FE8u;
    {
        const bool branch_taken_0x501fe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x501FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501FE8u;
            // 0x501fec: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x501fe8) {
            ctx->pc = 0x501FF8u;
            goto label_501ff8;
        }
    }
    ctx->pc = 0x501FF0u;
    // 0x501ff0: 0x5460004a  bnel        $v1, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x501FF0u;
    {
        const bool branch_taken_0x501ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x501ff0) {
            ctx->pc = 0x501FF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x501FF0u;
            // 0x501ff4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50211Cu;
            goto label_50211c;
        }
    }
    ctx->pc = 0x501FF8u;
label_501ff8:
    // 0x501ff8: 0x5600000d  bnel        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x501FF8u;
    {
        const bool branch_taken_0x501ff8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x501ff8) {
            ctx->pc = 0x501FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x501FF8u;
            // 0x501ffc: 0x12183c  dsll32      $v1, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502030u;
            goto label_502030;
        }
    }
    ctx->pc = 0x502000u;
    // 0x502000: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x502000u;
    {
        const bool branch_taken_0x502000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x502000) {
            ctx->pc = 0x50202Cu;
            goto label_50202c;
        }
    }
    ctx->pc = 0x502008u;
    // 0x502008: 0x12303c  dsll32      $a2, $s2, 0
    ctx->pc = 0x502008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 0));
    // 0x50200c: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x50200cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x502010: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x502010u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x502014: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x502014u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x502018: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x502018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50201c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x50201cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x502020: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x502020u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x502024: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x502024u;
    {
        const bool branch_taken_0x502024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x502028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502024u;
            // 0x502028: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502024) {
            ctx->pc = 0x502118u;
            goto label_502118;
        }
    }
    ctx->pc = 0x50202Cu;
label_50202c:
    // 0x50202c: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x50202cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
label_502030:
    // 0x502030: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x502030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x502034: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x502034u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x502038: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x502038u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x50203c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x50203cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x502040: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x502040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x502044: 0xc140150  jal         func_500540
    ctx->pc = 0x502044u;
    SET_GPR_U32(ctx, 31, 0x50204Cu);
    ctx->pc = 0x502048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502044u;
            // 0x502048: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50204Cu; }
        if (ctx->pc != 0x50204Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50204Cu; }
        if (ctx->pc != 0x50204Cu) { return; }
    }
    ctx->pc = 0x50204Cu;
label_50204c:
    // 0x50204c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x50204cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x502050: 0xc140150  jal         func_500540
    ctx->pc = 0x502050u;
    SET_GPR_U32(ctx, 31, 0x502058u);
    ctx->pc = 0x502054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502050u;
            // 0x502054: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502058u; }
        if (ctx->pc != 0x502058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502058u; }
        if (ctx->pc != 0x502058u) { return; }
    }
    ctx->pc = 0x502058u;
label_502058:
    // 0x502058: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x502058u;
    SET_GPR_U32(ctx, 31, 0x502060u);
    ctx->pc = 0x50205Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502058u;
            // 0x50205c: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502060u; }
        if (ctx->pc != 0x502060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502060u; }
        if (ctx->pc != 0x502060u) { return; }
    }
    ctx->pc = 0x502060u;
label_502060:
    // 0x502060: 0xc110e94  jal         func_443A50
    ctx->pc = 0x502060u;
    SET_GPR_U32(ctx, 31, 0x502068u);
    ctx->pc = 0x502064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502060u;
            // 0x502064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502068u; }
        if (ctx->pc != 0x502068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502068u; }
        if (ctx->pc != 0x502068u) { return; }
    }
    ctx->pc = 0x502068u;
label_502068:
    // 0x502068: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x502068u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x50206c: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x50206Cu;
    SET_GPR_U32(ctx, 31, 0x502074u);
    ctx->pc = 0x502070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50206Cu;
            // 0x502070: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502074u; }
        if (ctx->pc != 0x502074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502074u; }
        if (ctx->pc != 0x502074u) { return; }
    }
    ctx->pc = 0x502074u;
label_502074:
    // 0x502074: 0xc110e94  jal         func_443A50
    ctx->pc = 0x502074u;
    SET_GPR_U32(ctx, 31, 0x50207Cu);
    ctx->pc = 0x502078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502074u;
            // 0x502078: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50207Cu; }
        if (ctx->pc != 0x50207Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50207Cu; }
        if (ctx->pc != 0x50207Cu) { return; }
    }
    ctx->pc = 0x50207Cu;
label_50207c:
    // 0x50207c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x50207cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x502080: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x502080u;
    {
        const bool branch_taken_0x502080 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x502084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502080u;
            // 0x502084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502080) {
            ctx->pc = 0x50208Cu;
            goto label_50208c;
        }
    }
    ctx->pc = 0x502088u;
    // 0x502088: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x502088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50208c:
    // 0x50208c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x50208cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x502090: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x502090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x502094: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x502094u;
    SET_GPR_U32(ctx, 31, 0x50209Cu);
    ctx->pc = 0x502098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502094u;
            // 0x502098: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50209Cu; }
        if (ctx->pc != 0x50209Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50209Cu; }
        if (ctx->pc != 0x50209Cu) { return; }
    }
    ctx->pc = 0x50209Cu;
label_50209c:
    // 0x50209c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x50209cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x5020a0: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x5020A0u;
    SET_GPR_U32(ctx, 31, 0x5020A8u);
    ctx->pc = 0x5020A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5020A0u;
            // 0x5020a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5020A8u; }
        if (ctx->pc != 0x5020A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5020A8u; }
        if (ctx->pc != 0x5020A8u) { return; }
    }
    ctx->pc = 0x5020A8u;
label_5020a8:
    // 0x5020a8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x5020A8u;
    {
        const bool branch_taken_0x5020a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5020a8) {
            ctx->pc = 0x5020D0u;
            goto label_5020d0;
        }
    }
    ctx->pc = 0x5020B0u;
    // 0x5020b0: 0x12303c  dsll32      $a2, $s2, 0
    ctx->pc = 0x5020b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 0));
    // 0x5020b4: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x5020b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x5020b8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x5020b8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x5020bc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x5020bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x5020c0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x5020c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x5020c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x5020c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5020c8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x5020c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x5020cc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x5020ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_5020d0:
    // 0x5020d0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x5020D0u;
    {
        const bool branch_taken_0x5020d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x5020d0) {
            ctx->pc = 0x5020D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5020D0u;
            // 0x5020d4: 0x12303c  dsll32      $a2, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5020FCu;
            goto label_5020fc;
        }
    }
    ctx->pc = 0x5020D8u;
    // 0x5020d8: 0x13303c  dsll32      $a2, $s3, 0
    ctx->pc = 0x5020d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 0));
    // 0x5020dc: 0x14203c  dsll32      $a0, $s4, 0
    ctx->pc = 0x5020dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
    // 0x5020e0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x5020e0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x5020e4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x5020e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x5020e8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x5020e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x5020ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x5020ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5020f0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x5020f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x5020f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x5020F4u;
    {
        const bool branch_taken_0x5020f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5020F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5020F4u;
            // 0x5020f8: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5020f4) {
            ctx->pc = 0x502118u;
            goto label_502118;
        }
    }
    ctx->pc = 0x5020FCu;
label_5020fc:
    // 0x5020fc: 0x14203c  dsll32      $a0, $s4, 0
    ctx->pc = 0x5020fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
    // 0x502100: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x502100u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x502104: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x502104u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x502108: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x502108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50210c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x50210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x502110: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x502110u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x502114: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x502114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_502118:
    // 0x502118: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x502118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_50211c:
    // 0x50211c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x50211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x502120: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x502120u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x502124: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x502124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x502128: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x502128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50212c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x50212cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x502130: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x502130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x502134: 0x3e00008  jr          $ra
    ctx->pc = 0x502134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x502138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502134u;
            // 0x502138: 0x27bd09e0  addiu       $sp, $sp, 0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50213Cu;
    // 0x50213c: 0x0  nop
    ctx->pc = 0x50213cu;
    // NOP
}
