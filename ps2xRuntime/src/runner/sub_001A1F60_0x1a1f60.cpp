#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1F60
// Address: 0x1a1f60 - 0x1a2020
void sub_001A1F60_0x1a1f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1F60_0x1a1f60");
#endif

    switch (ctx->pc) {
        case 0x1a1f60u: goto label_1a1f60;
        case 0x1a1f64u: goto label_1a1f64;
        case 0x1a1f68u: goto label_1a1f68;
        case 0x1a1f6cu: goto label_1a1f6c;
        case 0x1a1f70u: goto label_1a1f70;
        case 0x1a1f74u: goto label_1a1f74;
        case 0x1a1f78u: goto label_1a1f78;
        case 0x1a1f7cu: goto label_1a1f7c;
        case 0x1a1f80u: goto label_1a1f80;
        case 0x1a1f84u: goto label_1a1f84;
        case 0x1a1f88u: goto label_1a1f88;
        case 0x1a1f8cu: goto label_1a1f8c;
        case 0x1a1f90u: goto label_1a1f90;
        case 0x1a1f94u: goto label_1a1f94;
        case 0x1a1f98u: goto label_1a1f98;
        case 0x1a1f9cu: goto label_1a1f9c;
        case 0x1a1fa0u: goto label_1a1fa0;
        case 0x1a1fa4u: goto label_1a1fa4;
        case 0x1a1fa8u: goto label_1a1fa8;
        case 0x1a1facu: goto label_1a1fac;
        case 0x1a1fb0u: goto label_1a1fb0;
        case 0x1a1fb4u: goto label_1a1fb4;
        case 0x1a1fb8u: goto label_1a1fb8;
        case 0x1a1fbcu: goto label_1a1fbc;
        case 0x1a1fc0u: goto label_1a1fc0;
        case 0x1a1fc4u: goto label_1a1fc4;
        case 0x1a1fc8u: goto label_1a1fc8;
        case 0x1a1fccu: goto label_1a1fcc;
        case 0x1a1fd0u: goto label_1a1fd0;
        case 0x1a1fd4u: goto label_1a1fd4;
        case 0x1a1fd8u: goto label_1a1fd8;
        case 0x1a1fdcu: goto label_1a1fdc;
        case 0x1a1fe0u: goto label_1a1fe0;
        case 0x1a1fe4u: goto label_1a1fe4;
        case 0x1a1fe8u: goto label_1a1fe8;
        case 0x1a1fecu: goto label_1a1fec;
        case 0x1a1ff0u: goto label_1a1ff0;
        case 0x1a1ff4u: goto label_1a1ff4;
        case 0x1a1ff8u: goto label_1a1ff8;
        case 0x1a1ffcu: goto label_1a1ffc;
        case 0x1a2000u: goto label_1a2000;
        case 0x1a2004u: goto label_1a2004;
        case 0x1a2008u: goto label_1a2008;
        case 0x1a200cu: goto label_1a200c;
        case 0x1a2010u: goto label_1a2010;
        case 0x1a2014u: goto label_1a2014;
        case 0x1a2018u: goto label_1a2018;
        case 0x1a201cu: goto label_1a201c;
        default: break;
    }

    ctx->pc = 0x1a1f60u;

label_1a1f60:
    // 0x1a1f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a1f64:
    // 0x1a1f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1f68:
    // 0x1a1f68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a1f6c:
    // 0x1a1f6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a1f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a1f70:
    // 0x1a1f70: 0xc068b98  jal         func_1A2E60
label_1a1f74:
    if (ctx->pc == 0x1A1F74u) {
        ctx->pc = 0x1A1F74u;
            // 0x1a1f74: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->pc = 0x1A1F78u;
        goto label_1a1f78;
    }
    ctx->pc = 0x1A1F70u;
    SET_GPR_U32(ctx, 31, 0x1A1F78u);
    ctx->pc = 0x1A1F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F70u;
            // 0x1a1f74: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2E60u;
    if (runtime->hasFunction(0x1A2E60u)) {
        auto targetFn = runtime->lookupFunction(0x1A2E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F78u; }
        if (ctx->pc != 0x1A1F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2E60_0x1a2e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F78u; }
        if (ctx->pc != 0x1A1F78u) { return; }
    }
    ctx->pc = 0x1A1F78u;
label_1a1f78:
    // 0x1a1f78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a1f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a1f7c:
    // 0x1a1f7c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_1a1f80:
    if (ctx->pc == 0x1A1F80u) {
        ctx->pc = 0x1A1F80u;
            // 0x1a1f80: 0x8e040430  lw          $a0, 0x430($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
        ctx->pc = 0x1A1F84u;
        goto label_1a1f84;
    }
    ctx->pc = 0x1A1F7Cu;
    {
        const bool branch_taken_0x1a1f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1f7c) {
            ctx->pc = 0x1A1F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F7Cu;
            // 0x1a1f80: 0x8e040430  lw          $a0, 0x430($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1F90u;
            goto label_1a1f90;
        }
    }
    ctx->pc = 0x1A1F84u;
label_1a1f84:
    // 0x1a1f84: 0x10000021  b           . + 4 + (0x21 << 2)
label_1a1f88:
    if (ctx->pc == 0x1A1F88u) {
        ctx->pc = 0x1A1F88u;
            // 0x1a1f88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1A1F8Cu;
        goto label_1a1f8c;
    }
    ctx->pc = 0x1A1F84u;
    {
        const bool branch_taken_0x1a1f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F84u;
            // 0x1a1f88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f84) {
            ctx->pc = 0x1A200Cu;
            goto label_1a200c;
        }
    }
    ctx->pc = 0x1A1F8Cu;
label_1a1f8c:
    // 0x1a1f8c: 0x0  nop
    ctx->pc = 0x1a1f8cu;
    // NOP
label_1a1f90:
    // 0x1a1f90: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1a1f94:
    if (ctx->pc == 0x1A1F94u) {
        ctx->pc = 0x1A1F94u;
            // 0x1a1f94: 0x8e050418  lw          $a1, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->pc = 0x1A1F98u;
        goto label_1a1f98;
    }
    ctx->pc = 0x1A1F90u;
    {
        const bool branch_taken_0x1a1f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1f90) {
            ctx->pc = 0x1A1F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F90u;
            // 0x1a1f94: 0x8e050418  lw          $a1, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1FACu;
            goto label_1a1fac;
        }
    }
    ctx->pc = 0x1A1F98u;
label_1a1f98:
    // 0x1a1f98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a1f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1f9c:
    // 0x1a1f9c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a1fa0:
    // 0x1a1fa0: 0x40f809  jalr        $v0
label_1a1fa4:
    if (ctx->pc == 0x1A1FA4u) {
        ctx->pc = 0x1A1FA8u;
        goto label_1a1fa8;
    }
    ctx->pc = 0x1A1FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1FA8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1FA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FA8u; }
            if (ctx->pc != 0x1A1FA8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1FA8u;
label_1a1fa8:
    // 0x1a1fa8: 0x8e050418  lw          $a1, 0x418($s0)
    ctx->pc = 0x1a1fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_1a1fac:
    // 0x1a1fac: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x1a1facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1a1fb0:
    // 0x1a1fb0: 0x8e060424  lw          $a2, 0x424($s0)
    ctx->pc = 0x1a1fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1060)));
label_1a1fb4:
    // 0x1a1fb4: 0x8e070428  lw          $a3, 0x428($s0)
    ctx->pc = 0x1a1fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1064)));
label_1a1fb8:
    // 0x1a1fb8: 0xc068b60  jal         func_1A2D80
label_1a1fbc:
    if (ctx->pc == 0x1A1FBCu) {
        ctx->pc = 0x1A1FBCu;
            // 0x1a1fbc: 0x8e08042c  lw          $t0, 0x42C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
        ctx->pc = 0x1A1FC0u;
        goto label_1a1fc0;
    }
    ctx->pc = 0x1A1FB8u;
    SET_GPR_U32(ctx, 31, 0x1A1FC0u);
    ctx->pc = 0x1A1FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1FB8u;
            // 0x1a1fbc: 0x8e08042c  lw          $t0, 0x42C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D80u;
    if (runtime->hasFunction(0x1A2D80u)) {
        auto targetFn = runtime->lookupFunction(0x1A2D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FC0u; }
        if (ctx->pc != 0x1A1FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2D80_0x1a2d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FC0u; }
        if (ctx->pc != 0x1A1FC0u) { return; }
    }
    ctx->pc = 0x1A1FC0u;
label_1a1fc0:
    // 0x1a1fc0: 0xc068b7e  jal         func_1A2DF8
label_1a1fc4:
    if (ctx->pc == 0x1A1FC4u) {
        ctx->pc = 0x1A1FC4u;
            // 0x1a1fc4: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->pc = 0x1A1FC8u;
        goto label_1a1fc8;
    }
    ctx->pc = 0x1A1FC0u;
    SET_GPR_U32(ctx, 31, 0x1A1FC8u);
    ctx->pc = 0x1A1FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1FC0u;
            // 0x1a1fc4: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2DF8u;
    if (runtime->hasFunction(0x1A2DF8u)) {
        auto targetFn = runtime->lookupFunction(0x1A2DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FC8u; }
        if (ctx->pc != 0x1A1FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2DF8_0x1a2df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FC8u; }
        if (ctx->pc != 0x1A1FC8u) { return; }
    }
    ctx->pc = 0x1A1FC8u;
label_1a1fc8:
    // 0x1a1fc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a1fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a1fcc:
    // 0x1a1fcc: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_1a1fd0:
    if (ctx->pc == 0x1A1FD0u) {
        ctx->pc = 0x1A1FD0u;
            // 0x1a1fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1FD4u;
        goto label_1a1fd4;
    }
    ctx->pc = 0x1A1FCCu;
    {
        const bool branch_taken_0x1a1fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1FCCu;
            // 0x1a1fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1fcc) {
            ctx->pc = 0x1A2000u;
            goto label_1a2000;
        }
    }
    ctx->pc = 0x1A1FD4u;
label_1a1fd4:
    // 0x1a1fd4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a1fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1fd8:
    // 0x1a1fd8: 0x2404ff9a  addiu       $a0, $zero, -0x66
    ctx->pc = 0x1a1fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967194));
label_1a1fdc:
    // 0x1a1fdc: 0xc066dae  jal         func_19B6B8
label_1a1fe0:
    if (ctx->pc == 0x1A1FE0u) {
        ctx->pc = 0x1A1FE0u;
            // 0x1a1fe0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1A1FE4u;
        goto label_1a1fe4;
    }
    ctx->pc = 0x1A1FDCu;
    SET_GPR_U32(ctx, 31, 0x1A1FE4u);
    ctx->pc = 0x1A1FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1FDCu;
            // 0x1a1fe0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B6B8u;
    if (runtime->hasFunction(0x19B6B8u)) {
        auto targetFn = runtime->lookupFunction(0x19B6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FE4u; }
        if (ctx->pc != 0x1A1FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B6B8_0x19b6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FE4u; }
        if (ctx->pc != 0x1A1FE4u) { return; }
    }
    ctx->pc = 0x1A1FE4u;
label_1a1fe4:
    // 0x1a1fe4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a1fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1a1fe8:
    // 0x1a1fe8: 0x8e050418  lw          $a1, 0x418($s0)
    ctx->pc = 0x1a1fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_1a1fec:
    // 0x1a1fec: 0xc0686c6  jal         func_1A1B18
label_1a1ff0:
    if (ctx->pc == 0x1A1FF0u) {
        ctx->pc = 0x1A1FF0u;
            // 0x1a1ff0: 0x2484a850  addiu       $a0, $a0, -0x57B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944848));
        ctx->pc = 0x1A1FF4u;
        goto label_1a1ff4;
    }
    ctx->pc = 0x1A1FECu;
    SET_GPR_U32(ctx, 31, 0x1A1FF4u);
    ctx->pc = 0x1A1FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1FECu;
            // 0x1a1ff0: 0x2484a850  addiu       $a0, $a0, -0x57B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FF4u; }
        if (ctx->pc != 0x1A1FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FF4u; }
        if (ctx->pc != 0x1A1FF4u) { return; }
    }
    ctx->pc = 0x1A1FF4u;
label_1a1ff4:
    // 0x1a1ff4: 0xae000420  sw          $zero, 0x420($s0)
    ctx->pc = 0x1a1ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 0));
label_1a1ff8:
    // 0x1a1ff8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a1ffc:
    if (ctx->pc == 0x1A1FFCu) {
        ctx->pc = 0x1A1FFCu;
            // 0x1a1ffc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1A2000u;
        goto label_1a2000;
    }
    ctx->pc = 0x1A1FF8u;
    {
        const bool branch_taken_0x1a1ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1FF8u;
            // 0x1a1ffc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ff8) {
            ctx->pc = 0x1A200Cu;
            goto label_1a200c;
        }
    }
    ctx->pc = 0x1A2000u;
label_1a2000:
    // 0x1a2000: 0xc065e92  jal         func_197A48
label_1a2004:
    if (ctx->pc == 0x1A2004u) {
        ctx->pc = 0x1A2008u;
        goto label_1a2008;
    }
    ctx->pc = 0x1A2000u;
    SET_GPR_U32(ctx, 31, 0x1A2008u);
    ctx->pc = 0x197A48u;
    if (runtime->hasFunction(0x197A48u)) {
        auto targetFn = runtime->lookupFunction(0x197A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2008u; }
        if (ctx->pc != 0x1A2008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197A48_0x197a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2008u; }
        if (ctx->pc != 0x1A2008u) { return; }
    }
    ctx->pc = 0x1A2008u;
label_1a2008:
    // 0x1a2008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a200c:
    // 0x1a200c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a200cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2010:
    // 0x1a2010: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a2010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a2014:
    // 0x1a2014: 0x3e00008  jr          $ra
label_1a2018:
    if (ctx->pc == 0x1A2018u) {
        ctx->pc = 0x1A2018u;
            // 0x1a2018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A201Cu;
        goto label_1a201c;
    }
    ctx->pc = 0x1A2014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2014u;
            // 0x1a2018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A201Cu;
label_1a201c:
    // 0x1a201c: 0x0  nop
    ctx->pc = 0x1a201cu;
    // NOP
}
