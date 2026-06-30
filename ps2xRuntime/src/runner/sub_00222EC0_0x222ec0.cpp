#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00222EC0
// Address: 0x222ec0 - 0x223780
void sub_00222EC0_0x222ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222EC0_0x222ec0");
#endif

    switch (ctx->pc) {
        case 0x222f78u: goto label_222f78;
        case 0x222f9cu: goto label_222f9c;
        case 0x222fd0u: goto label_222fd0;
        case 0x223048u: goto label_223048;
        case 0x2230acu: goto label_2230ac;
        case 0x223108u: goto label_223108;
        case 0x223168u: goto label_223168;
        case 0x22319cu: goto label_22319c;
        case 0x223200u: goto label_223200;
        case 0x22322cu: goto label_22322c;
        case 0x223290u: goto label_223290;
        case 0x2232bcu: goto label_2232bc;
        case 0x223320u: goto label_223320;
        case 0x22337cu: goto label_22337c;
        case 0x22344cu: goto label_22344c;
        case 0x2234ecu: goto label_2234ec;
        case 0x22358cu: goto label_22358c;
        case 0x22365cu: goto label_22365c;
        case 0x2236dcu: goto label_2236dc;
        case 0x22376cu: goto label_22376c;
        default: break;
    }

    ctx->pc = 0x222ec0u;

    // 0x222ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x222ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x222ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x222ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x222ec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x222ecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x222eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x222ed0: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x222ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x222ed4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x222ED4u;
    {
        const bool branch_taken_0x222ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x222ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222ED4u;
            // 0x222ed8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ed4) {
            ctx->pc = 0x222EE4u;
            goto label_222ee4;
        }
    }
    ctx->pc = 0x222EDCu;
    // 0x222edc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x222EDCu;
    {
        const bool branch_taken_0x222edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222EDCu;
            // 0x222ee0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222edc) {
            ctx->pc = 0x222EF0u;
            goto label_222ef0;
        }
    }
    ctx->pc = 0x222EE4u;
label_222ee4:
    // 0x222ee4: 0x90630028  lbu         $v1, 0x28($v1)
    ctx->pc = 0x222ee4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x222ee8: 0x31f3c  dsll32      $v1, $v1, 28
    ctx->pc = 0x222ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 28));
    // 0x222eec: 0x31fbe  dsrl32      $v1, $v1, 30
    ctx->pc = 0x222eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 30));
label_222ef0:
    // 0x222ef0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x222ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x222ef4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x222ef4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x222ef8: 0x50600036  beql        $v1, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x222EF8u;
    {
        const bool branch_taken_0x222ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222ef8) {
            ctx->pc = 0x222EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222EF8u;
            // 0x222efc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222FD4u;
            goto label_222fd4;
        }
    }
    ctx->pc = 0x222F00u;
    // 0x222f00: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x222f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x222f04: 0x90430027  lbu         $v1, 0x27($v0)
    ctx->pc = 0x222f04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 39)));
    // 0x222f08: 0x3173c  dsll32      $v0, $v1, 28
    ctx->pc = 0x222f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 28));
    // 0x222f0c: 0x217be  dsrl32      $v0, $v0, 30
    ctx->pc = 0x222f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 30));
    // 0x222f10: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x222F10u;
    {
        const bool branch_taken_0x222f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222f10) {
            ctx->pc = 0x222F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222F10u;
            // 0x222f14: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222F28u;
            goto label_222f28;
        }
    }
    ctx->pc = 0x222F18u;
    // 0x222f18: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x222f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x222f1c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x222F1Cu;
    {
        const bool branch_taken_0x222f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222f1c) {
            ctx->pc = 0x222F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222F1Cu;
            // 0x222f20: 0x8e250094  lw          $a1, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222F84u;
            goto label_222f84;
        }
    }
    ctx->pc = 0x222F24u;
    // 0x222f24: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x222f24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_222f28:
    // 0x222f28: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x222f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x222f2c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x222f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x222f30: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x222f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x222f34: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x222f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x222f38: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x222f38u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x222f3c: 0x8cd000a4  lw          $s0, 0xA4($a2)
    ctx->pc = 0x222f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
    // 0x222f40: 0xacc000a4  sw          $zero, 0xA4($a2)
    ctx->pc = 0x222f40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 164), GPR_U32(ctx, 0));
    // 0x222f44: 0x8e270094  lw          $a3, 0x94($s1)
    ctx->pc = 0x222f44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x222f48: 0x90e60027  lbu         $a2, 0x27($a3)
    ctx->pc = 0x222f48u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 39)));
    // 0x222f4c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x222f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x222f50: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x222f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x222f54: 0xa0e40027  sb          $a0, 0x27($a3)
    ctx->pc = 0x222f54u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 39), (uint8_t)GPR_U32(ctx, 4));
    // 0x222f58: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x222f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x222f5c: 0x90a40027  lbu         $a0, 0x27($a1)
    ctx->pc = 0x222f5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 39)));
    // 0x222f60: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x222f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x222f64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x222f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x222f68: 0xa0a20027  sb          $v0, 0x27($a1)
    ctx->pc = 0x222f68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 39), (uint8_t)GPR_U32(ctx, 2));
    // 0x222f6c: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x222f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x222f70: 0xc0900ec  jal         func_2403B0
    ctx->pc = 0x222F70u;
    SET_GPR_U32(ctx, 31, 0x222F78u);
    ctx->pc = 0x222F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222F70u;
            // 0x222f74: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2403B0u;
    if (runtime->hasFunction(0x2403B0u)) {
        auto targetFn = runtime->lookupFunction(0x2403B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F78u; }
        if (ctx->pc != 0x222F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002403B0_0x2403b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F78u; }
        if (ctx->pc != 0x222F78u) { return; }
    }
    ctx->pc = 0x222F78u;
label_222f78:
    // 0x222f78: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x222f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x222f7c: 0xac5000a4  sw          $s0, 0xA4($v0)
    ctx->pc = 0x222f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 16));
    // 0x222f80: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x222f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_222f84:
    // 0x222f84: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x222f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x222f88: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x222F88u;
    {
        const bool branch_taken_0x222f88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x222F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222F88u;
            // 0x222f8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f88) {
            ctx->pc = 0x222FC8u;
            goto label_222fc8;
        }
    }
    ctx->pc = 0x222F90u;
    // 0x222f90: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x222f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x222f94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x222f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f98: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x222f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_222f9c:
    // 0x222f9c: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x222f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x222fa0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x222fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x222fa4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x222fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x222fa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x222fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222fac: 0xac4301ac  sw          $v1, 0x1AC($v0)
    ctx->pc = 0x222facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 428), GPR_U32(ctx, 3));
    // 0x222fb0: 0xac4301bc  sw          $v1, 0x1BC($v0)
    ctx->pc = 0x222fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 444), GPR_U32(ctx, 3));
    // 0x222fb4: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x222fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x222fb8: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x222fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x222fbc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x222fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x222fc0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x222FC0u;
    {
        const bool branch_taken_0x222fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222FC0u;
            // 0x222fc4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222fc0) {
            ctx->pc = 0x222F9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222f9c;
        }
    }
    ctx->pc = 0x222FC8u;
label_222fc8:
    // 0x222fc8: 0xc0906d8  jal         func_241B60
    ctx->pc = 0x222FC8u;
    SET_GPR_U32(ctx, 31, 0x222FD0u);
    ctx->pc = 0x222FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222FC8u;
            // 0x222fcc: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241B60u;
    if (runtime->hasFunction(0x241B60u)) {
        auto targetFn = runtime->lookupFunction(0x241B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FD0u; }
        if (ctx->pc != 0x222FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241B60_0x241b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FD0u; }
        if (ctx->pc != 0x222FD0u) { return; }
    }
    ctx->pc = 0x222FD0u;
label_222fd0:
    // 0x222fd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x222fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_222fd4:
    // 0x222fd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222fd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x222FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222FDCu;
            // 0x222fe0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222FE4u;
    // 0x222fe4: 0x0  nop
    ctx->pc = 0x222fe4u;
    // NOP
    // 0x222fe8: 0x0  nop
    ctx->pc = 0x222fe8u;
    // NOP
    // 0x222fec: 0x0  nop
    ctx->pc = 0x222fecu;
    // NOP
    // 0x222ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x222ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x222ff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x222ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x222ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x222ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x222ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x223000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x223000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223004: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x223004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x223008: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x223008u;
    {
        const bool branch_taken_0x223008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22300Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223008u;
            // 0x22300c: 0x26300034  addiu       $s0, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223008) {
            ctx->pc = 0x223068u;
            goto label_223068;
        }
    }
    ctx->pc = 0x223010u;
    // 0x223010: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x223010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x223014: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x223014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x223018: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x223018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22301c: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x22301Cu;
    {
        const bool branch_taken_0x22301c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22301c) {
            ctx->pc = 0x223020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22301Cu;
            // 0x223020: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22304Cu;
            goto label_22304c;
        }
    }
    ctx->pc = 0x223024u;
    // 0x223024: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x223024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x223028: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x223028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22302c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22302cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x223030: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x223030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x223034: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x223034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x223038: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x223038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x22303c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22303cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x223040: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x223040u;
    SET_GPR_U32(ctx, 31, 0x223048u);
    ctx->pc = 0x223044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223040u;
            // 0x223044: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223048u; }
        if (ctx->pc != 0x223048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223048u; }
        if (ctx->pc != 0x223048u) { return; }
    }
    ctx->pc = 0x223048u;
label_223048:
    // 0x223048: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x223048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_22304c:
    // 0x22304c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x22304cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x223050: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x223050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x223054: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x223054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x223058: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x223058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22305c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x22305cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x223060: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x223060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x223064: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x223064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_223068:
    // 0x223068: 0x96230074  lhu         $v1, 0x74($s1)
    ctx->pc = 0x223068u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x22306c: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x22306Cu;
    {
        const bool branch_taken_0x22306c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22306c) {
            ctx->pc = 0x223070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22306Cu;
            // 0x223070: 0x8e23007c  lw          $v1, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2230C8u;
            goto label_2230c8;
        }
    }
    ctx->pc = 0x223074u;
    // 0x223074: 0x96230076  lhu         $v1, 0x76($s1)
    ctx->pc = 0x223074u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 118)));
    // 0x223078: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x223078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x22307c: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x22307Cu;
    {
        const bool branch_taken_0x22307c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22307c) {
            ctx->pc = 0x223080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22307Cu;
            // 0x223080: 0xae200070  sw          $zero, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2230B0u;
            goto label_2230b0;
        }
    }
    ctx->pc = 0x223084u;
    // 0x223084: 0x96230076  lhu         $v1, 0x76($s1)
    ctx->pc = 0x223084u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 118)));
    // 0x223088: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x223088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x22308c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22308cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x223090: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x223090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x223094: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x223094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x223098: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x223098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x22309c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x22309cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2230a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2230a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2230a4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2230A4u;
    SET_GPR_U32(ctx, 31, 0x2230ACu);
    ctx->pc = 0x2230A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2230A4u;
            // 0x2230a8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2230ACu; }
        if (ctx->pc != 0x2230ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2230ACu; }
        if (ctx->pc != 0x2230ACu) { return; }
    }
    ctx->pc = 0x2230ACu;
label_2230ac:
    // 0x2230ac: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x2230acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_2230b0:
    // 0x2230b0: 0xa6200074  sh          $zero, 0x74($s1)
    ctx->pc = 0x2230b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 116), (uint16_t)GPR_U32(ctx, 0));
    // 0x2230b4: 0x96230076  lhu         $v1, 0x76($s1)
    ctx->pc = 0x2230b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 118)));
    // 0x2230b8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x2230b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2230bc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2230bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2230c0: 0xa6230076  sh          $v1, 0x76($s1)
    ctx->pc = 0x2230c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 118), (uint16_t)GPR_U32(ctx, 3));
    // 0x2230c4: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x2230c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_2230c8:
    // 0x2230c8: 0x54600018  bnel        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2230C8u;
    {
        const bool branch_taken_0x2230c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2230c8) {
            ctx->pc = 0x2230CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2230C8u;
            // 0x2230cc: 0x8e230088  lw          $v1, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22312Cu;
            goto label_22312c;
        }
    }
    ctx->pc = 0x2230D0u;
    // 0x2230d0: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2230d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2230d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2230d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2230d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2230d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2230dc: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2230DCu;
    {
        const bool branch_taken_0x2230dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2230dc) {
            ctx->pc = 0x2230E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2230DCu;
            // 0x2230e0: 0xae200078  sw          $zero, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22310Cu;
            goto label_22310c;
        }
    }
    ctx->pc = 0x2230E4u;
    // 0x2230e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2230e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2230e8: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2230e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2230ec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2230ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2230f0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2230f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2230f4: 0x8e250078  lw          $a1, 0x78($s1)
    ctx->pc = 0x2230f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2230f8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2230f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x2230fc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2230fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x223100: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x223100u;
    SET_GPR_U32(ctx, 31, 0x223108u);
    ctx->pc = 0x223104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223100u;
            // 0x223104: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223108u; }
        if (ctx->pc != 0x223108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223108u; }
        if (ctx->pc != 0x223108u) { return; }
    }
    ctx->pc = 0x223108u;
label_223108:
    // 0x223108: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x223108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
label_22310c:
    // 0x22310c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x22310cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x223110: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x223110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x223114: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x223114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x223118: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x223118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x22311c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x22311cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x223120: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x223120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x223124: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x223124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x223128: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x223128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_22312c:
    // 0x22312c: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x22312Cu;
    {
        const bool branch_taken_0x22312c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22312c) {
            ctx->pc = 0x223130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22312Cu;
            // 0x223130: 0x962401d4  lhu         $a0, 0x1D4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22318Cu;
            goto label_22318c;
        }
    }
    ctx->pc = 0x223134u;
    // 0x223134: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x223134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x223138: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x223138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x22313c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22313cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x223140: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x223140u;
    {
        const bool branch_taken_0x223140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223140) {
            ctx->pc = 0x223144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223140u;
            // 0x223144: 0xae200084  sw          $zero, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22316Cu;
            goto label_22316c;
        }
    }
    ctx->pc = 0x223148u;
    // 0x223148: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x223148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x22314c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22314cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x223150: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x223150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x223154: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x223154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x223158: 0x8e250084  lw          $a1, 0x84($s1)
    ctx->pc = 0x223158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x22315c: 0x330bc  dsll32      $a2, $v1, 2
    ctx->pc = 0x22315cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 2));
    // 0x223160: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x223160u;
    SET_GPR_U32(ctx, 31, 0x223168u);
    ctx->pc = 0x223164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223160u;
            // 0x223164: 0x630be  dsrl32      $a2, $a2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223168u; }
        if (ctx->pc != 0x223168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223168u; }
        if (ctx->pc != 0x223168u) { return; }
    }
    ctx->pc = 0x223168u;
label_223168:
    // 0x223168: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x223168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
label_22316c:
    // 0x22316c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x22316cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x223170: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x223170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x223174: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x223174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x223178: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x223178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x22317c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x22317cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x223180: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x223180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x223184: 0xae23008c  sw          $v1, 0x8C($s1)
    ctx->pc = 0x223184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
    // 0x223188: 0x962401d4  lhu         $a0, 0x1D4($s1)
    ctx->pc = 0x223188u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
label_22318c:
    // 0x22318c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22318cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223190: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x223190u;
    {
        const bool branch_taken_0x223190 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x223194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223190u;
            // 0x223194: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223190) {
            ctx->pc = 0x2231C0u;
            goto label_2231c0;
        }
    }
    ctx->pc = 0x223198u;
    // 0x223198: 0x8e2501d0  lw          $a1, 0x1D0($s1)
    ctx->pc = 0x223198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 464)));
label_22319c:
    // 0x22319c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x22319cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2231a0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2231A0u;
    {
        const bool branch_taken_0x2231a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2231a0) {
            ctx->pc = 0x2231A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2231A0u;
            // 0x2231a4: 0x962401d4  lhu         $a0, 0x1D4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2231B0u;
            goto label_2231b0;
        }
    }
    ctx->pc = 0x2231A8u;
    // 0x2231a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2231A8u;
    {
        const bool branch_taken_0x2231a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2231ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2231A8u;
            // 0x2231ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231a8) {
            ctx->pc = 0x2231C0u;
            goto label_2231c0;
        }
    }
    ctx->pc = 0x2231B0u;
label_2231b0:
    // 0x2231b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2231b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2231b4: 0xc4202a  slt         $a0, $a2, $a0
    ctx->pc = 0x2231b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2231b8: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2231B8u;
    {
        const bool branch_taken_0x2231b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2231BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2231B8u;
            // 0x2231bc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231b8) {
            ctx->pc = 0x22319Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22319c;
        }
    }
    ctx->pc = 0x2231C0u;
label_2231c0:
    // 0x2231c0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2231c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2231c4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2231c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2231c8: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2231C8u;
    {
        const bool branch_taken_0x2231c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2231c8) {
            ctx->pc = 0x2231CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2231C8u;
            // 0x2231cc: 0x962401dc  lhu         $a0, 0x1DC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 476)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22321Cu;
            goto label_22321c;
        }
    }
    ctx->pc = 0x2231D0u;
    // 0x2231d0: 0x962301d6  lhu         $v1, 0x1D6($s1)
    ctx->pc = 0x2231d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 470)));
    // 0x2231d4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2231d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2231d8: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2231D8u;
    {
        const bool branch_taken_0x2231d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2231d8) {
            ctx->pc = 0x2231DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2231D8u;
            // 0x2231dc: 0xae2001d0  sw          $zero, 0x1D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223204u;
            goto label_223204;
        }
    }
    ctx->pc = 0x2231E0u;
    // 0x2231e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2231e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2231e4: 0x962301d6  lhu         $v1, 0x1D6($s1)
    ctx->pc = 0x2231e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 470)));
    // 0x2231e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2231e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2231ec: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2231ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2231f0: 0x8e2501d0  lw          $a1, 0x1D0($s1)
    ctx->pc = 0x2231f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x2231f4: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x2231f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x2231f8: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2231F8u;
    SET_GPR_U32(ctx, 31, 0x223200u);
    ctx->pc = 0x2231FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2231F8u;
            // 0x2231fc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223200u; }
        if (ctx->pc != 0x223200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223200u; }
        if (ctx->pc != 0x223200u) { return; }
    }
    ctx->pc = 0x223200u;
label_223200:
    // 0x223200: 0xae2001d0  sw          $zero, 0x1D0($s1)
    ctx->pc = 0x223200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 464), GPR_U32(ctx, 0));
label_223204:
    // 0x223204: 0xa62001d4  sh          $zero, 0x1D4($s1)
    ctx->pc = 0x223204u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 468), (uint16_t)GPR_U32(ctx, 0));
    // 0x223208: 0x962301d6  lhu         $v1, 0x1D6($s1)
    ctx->pc = 0x223208u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 470)));
    // 0x22320c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x22320cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x223210: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x223210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x223214: 0xa62301d6  sh          $v1, 0x1D6($s1)
    ctx->pc = 0x223214u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 470), (uint16_t)GPR_U32(ctx, 3));
    // 0x223218: 0x962401dc  lhu         $a0, 0x1DC($s1)
    ctx->pc = 0x223218u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 476)));
label_22321c:
    // 0x22321c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22321cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223220: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x223220u;
    {
        const bool branch_taken_0x223220 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x223224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223220u;
            // 0x223224: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223220) {
            ctx->pc = 0x223250u;
            goto label_223250;
        }
    }
    ctx->pc = 0x223228u;
    // 0x223228: 0x8e2501d8  lw          $a1, 0x1D8($s1)
    ctx->pc = 0x223228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
label_22322c:
    // 0x22322c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x22322cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x223230: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x223230u;
    {
        const bool branch_taken_0x223230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x223230) {
            ctx->pc = 0x223234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223230u;
            // 0x223234: 0x962401dc  lhu         $a0, 0x1DC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 476)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223240u;
            goto label_223240;
        }
    }
    ctx->pc = 0x223238u;
    // 0x223238: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x223238u;
    {
        const bool branch_taken_0x223238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22323Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223238u;
            // 0x22323c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223238) {
            ctx->pc = 0x223250u;
            goto label_223250;
        }
    }
    ctx->pc = 0x223240u;
label_223240:
    // 0x223240: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x223240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x223244: 0xc4202a  slt         $a0, $a2, $a0
    ctx->pc = 0x223244u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x223248: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x223248u;
    {
        const bool branch_taken_0x223248 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22324Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223248u;
            // 0x22324c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223248) {
            ctx->pc = 0x22322Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22322c;
        }
    }
    ctx->pc = 0x223250u;
label_223250:
    // 0x223250: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x223250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x223254: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x223254u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x223258: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x223258u;
    {
        const bool branch_taken_0x223258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223258) {
            ctx->pc = 0x22325Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223258u;
            // 0x22325c: 0x962401e4  lhu         $a0, 0x1E4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2232ACu;
            goto label_2232ac;
        }
    }
    ctx->pc = 0x223260u;
    // 0x223260: 0x962301de  lhu         $v1, 0x1DE($s1)
    ctx->pc = 0x223260u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 478)));
    // 0x223264: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x223264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x223268: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x223268u;
    {
        const bool branch_taken_0x223268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223268) {
            ctx->pc = 0x22326Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223268u;
            // 0x22326c: 0xae2001d8  sw          $zero, 0x1D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223294u;
            goto label_223294;
        }
    }
    ctx->pc = 0x223270u;
    // 0x223270: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x223270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x223274: 0x962301de  lhu         $v1, 0x1DE($s1)
    ctx->pc = 0x223274u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 478)));
    // 0x223278: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x223278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x22327c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22327cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x223280: 0x8e2501d8  lw          $a1, 0x1D8($s1)
    ctx->pc = 0x223280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x223284: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x223284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x223288: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x223288u;
    SET_GPR_U32(ctx, 31, 0x223290u);
    ctx->pc = 0x22328Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223288u;
            // 0x22328c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223290u; }
        if (ctx->pc != 0x223290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223290u; }
        if (ctx->pc != 0x223290u) { return; }
    }
    ctx->pc = 0x223290u;
label_223290:
    // 0x223290: 0xae2001d8  sw          $zero, 0x1D8($s1)
    ctx->pc = 0x223290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 472), GPR_U32(ctx, 0));
label_223294:
    // 0x223294: 0xa62001dc  sh          $zero, 0x1DC($s1)
    ctx->pc = 0x223294u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 476), (uint16_t)GPR_U32(ctx, 0));
    // 0x223298: 0x962301de  lhu         $v1, 0x1DE($s1)
    ctx->pc = 0x223298u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 478)));
    // 0x22329c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x22329cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2232a0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2232a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2232a4: 0xa62301de  sh          $v1, 0x1DE($s1)
    ctx->pc = 0x2232a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 478), (uint16_t)GPR_U32(ctx, 3));
    // 0x2232a8: 0x962401e4  lhu         $a0, 0x1E4($s1)
    ctx->pc = 0x2232a8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 484)));
label_2232ac:
    // 0x2232ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2232acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232b0: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2232B0u;
    {
        const bool branch_taken_0x2232b0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2232B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2232B0u;
            // 0x2232b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2232b0) {
            ctx->pc = 0x2232E0u;
            goto label_2232e0;
        }
    }
    ctx->pc = 0x2232B8u;
    // 0x2232b8: 0x8e2501e0  lw          $a1, 0x1E0($s1)
    ctx->pc = 0x2232b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
label_2232bc:
    // 0x2232bc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2232bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2232c0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2232C0u;
    {
        const bool branch_taken_0x2232c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2232c0) {
            ctx->pc = 0x2232C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2232C0u;
            // 0x2232c4: 0x962401e4  lhu         $a0, 0x1E4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2232D0u;
            goto label_2232d0;
        }
    }
    ctx->pc = 0x2232C8u;
    // 0x2232c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2232C8u;
    {
        const bool branch_taken_0x2232c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2232CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2232C8u;
            // 0x2232cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2232c8) {
            ctx->pc = 0x2232E0u;
            goto label_2232e0;
        }
    }
    ctx->pc = 0x2232D0u;
label_2232d0:
    // 0x2232d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2232d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2232d4: 0xc4202a  slt         $a0, $a2, $a0
    ctx->pc = 0x2232d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2232d8: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2232D8u;
    {
        const bool branch_taken_0x2232d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2232DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2232D8u;
            // 0x2232dc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2232d8) {
            ctx->pc = 0x2232BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2232bc;
        }
    }
    ctx->pc = 0x2232E0u;
label_2232e0:
    // 0x2232e0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2232e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2232e4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2232e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2232e8: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2232E8u;
    {
        const bool branch_taken_0x2232e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2232e8) {
            ctx->pc = 0x2232ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2232E8u;
            // 0x2232ec: 0x962301ec  lhu         $v1, 0x1EC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22333Cu;
            goto label_22333c;
        }
    }
    ctx->pc = 0x2232F0u;
    // 0x2232f0: 0x962301e6  lhu         $v1, 0x1E6($s1)
    ctx->pc = 0x2232f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 486)));
    // 0x2232f4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2232f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2232f8: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2232F8u;
    {
        const bool branch_taken_0x2232f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2232f8) {
            ctx->pc = 0x2232FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2232F8u;
            // 0x2232fc: 0xae2001e0  sw          $zero, 0x1E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223324u;
            goto label_223324;
        }
    }
    ctx->pc = 0x223300u;
    // 0x223300: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x223300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x223304: 0x962301e6  lhu         $v1, 0x1E6($s1)
    ctx->pc = 0x223304u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 486)));
    // 0x223308: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x223308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x22330c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22330cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x223310: 0x8e2501e0  lw          $a1, 0x1E0($s1)
    ctx->pc = 0x223310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x223314: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x223314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x223318: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x223318u;
    SET_GPR_U32(ctx, 31, 0x223320u);
    ctx->pc = 0x22331Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223318u;
            // 0x22331c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223320u; }
        if (ctx->pc != 0x223320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223320u; }
        if (ctx->pc != 0x223320u) { return; }
    }
    ctx->pc = 0x223320u;
label_223320:
    // 0x223320: 0xae2001e0  sw          $zero, 0x1E0($s1)
    ctx->pc = 0x223320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 0));
label_223324:
    // 0x223324: 0xa62001e4  sh          $zero, 0x1E4($s1)
    ctx->pc = 0x223324u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 484), (uint16_t)GPR_U32(ctx, 0));
    // 0x223328: 0x962301e6  lhu         $v1, 0x1E6($s1)
    ctx->pc = 0x223328u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 486)));
    // 0x22332c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x22332cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x223330: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x223330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x223334: 0xa62301e6  sh          $v1, 0x1E6($s1)
    ctx->pc = 0x223334u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 486), (uint16_t)GPR_U32(ctx, 3));
    // 0x223338: 0x962301ec  lhu         $v1, 0x1EC($s1)
    ctx->pc = 0x223338u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 492)));
label_22333c:
    // 0x22333c: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x22333cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x223340: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x223340u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x223344: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x223344u;
    {
        const bool branch_taken_0x223344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223344) {
            ctx->pc = 0x223348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223344u;
            // 0x223348: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223398u;
            goto label_223398;
        }
    }
    ctx->pc = 0x22334Cu;
    // 0x22334c: 0x962301ee  lhu         $v1, 0x1EE($s1)
    ctx->pc = 0x22334cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 494)));
    // 0x223350: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x223350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x223354: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x223354u;
    {
        const bool branch_taken_0x223354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223354) {
            ctx->pc = 0x223358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223354u;
            // 0x223358: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223380u;
            goto label_223380;
        }
    }
    ctx->pc = 0x22335Cu;
    // 0x22335c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22335cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x223360: 0x962301ee  lhu         $v1, 0x1EE($s1)
    ctx->pc = 0x223360u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 494)));
    // 0x223364: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x223364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x223368: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x223368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x22336c: 0x8e2501e8  lw          $a1, 0x1E8($s1)
    ctx->pc = 0x22336cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x223370: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x223370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x223374: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x223374u;
    SET_GPR_U32(ctx, 31, 0x22337Cu);
    ctx->pc = 0x223378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223374u;
            // 0x223378: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22337Cu; }
        if (ctx->pc != 0x22337Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22337Cu; }
        if (ctx->pc != 0x22337Cu) { return; }
    }
    ctx->pc = 0x22337Cu;
label_22337c:
    // 0x22337c: 0xae2001e8  sw          $zero, 0x1E8($s1)
    ctx->pc = 0x22337cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
label_223380:
    // 0x223380: 0xa62001ec  sh          $zero, 0x1EC($s1)
    ctx->pc = 0x223380u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 492), (uint16_t)GPR_U32(ctx, 0));
    // 0x223384: 0x962301ee  lhu         $v1, 0x1EE($s1)
    ctx->pc = 0x223384u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 494)));
    // 0x223388: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x223388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x22338c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x22338cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x223390: 0xa62301ee  sh          $v1, 0x1EE($s1)
    ctx->pc = 0x223390u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 494), (uint16_t)GPR_U32(ctx, 3));
    // 0x223394: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x223394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_223398:
    // 0x223398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22339c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22339cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2233a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2233A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2233A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2233A0u;
            // 0x2233a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2233A8u;
    // 0x2233a8: 0x0  nop
    ctx->pc = 0x2233a8u;
    // NOP
    // 0x2233ac: 0x0  nop
    ctx->pc = 0x2233acu;
    // NOP
    // 0x2233b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2233B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2233B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2233B0u;
            // 0x2233b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2233B8u;
    // 0x2233b8: 0x0  nop
    ctx->pc = 0x2233b8u;
    // NOP
    // 0x2233bc: 0x0  nop
    ctx->pc = 0x2233bcu;
    // NOP
    // 0x2233c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2233c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2233c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2233c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2233c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2233c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2233cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2233ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233d0: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2233D0u;
    {
        const bool branch_taken_0x2233d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2233d0) {
            ctx->pc = 0x2233D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2233D0u;
            // 0x2233d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223450u;
            goto label_223450;
        }
    }
    ctx->pc = 0x2233D8u;
    // 0x2233d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2233d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2233dc: 0x2442e9d0  addiu       $v0, $v0, -0x1630
    ctx->pc = 0x2233dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961616));
    // 0x2233e0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2233E0u;
    {
        const bool branch_taken_0x2233e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2233E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2233E0u;
            // 0x2233e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2233e0) {
            ctx->pc = 0x223424u;
            goto label_223424;
        }
    }
    ctx->pc = 0x2233E8u;
    // 0x2233e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2233e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2233ec: 0x2442eca0  addiu       $v0, $v0, -0x1360
    ctx->pc = 0x2233ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962336));
    // 0x2233f0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2233F0u;
    {
        const bool branch_taken_0x2233f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2233F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2233F0u;
            // 0x2233f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2233f0) {
            ctx->pc = 0x223424u;
            goto label_223424;
        }
    }
    ctx->pc = 0x2233F8u;
    // 0x2233f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2233f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2233fc: 0x2442ec30  addiu       $v0, $v0, -0x13D0
    ctx->pc = 0x2233fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962224));
    // 0x223400: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x223400u;
    {
        const bool branch_taken_0x223400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223400u;
            // 0x223404: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223400) {
            ctx->pc = 0x223424u;
            goto label_223424;
        }
    }
    ctx->pc = 0x223408u;
    // 0x223408: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22340c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x22340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x223410: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x223410u;
    {
        const bool branch_taken_0x223410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223410u;
            // 0x223414: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223410) {
            ctx->pc = 0x223424u;
            goto label_223424;
        }
    }
    ctx->pc = 0x223418u;
    // 0x223418: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22341c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x22341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x223420: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x223420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_223424:
    // 0x223424: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x223424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x223428: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x223428u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22342c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22342Cu;
    {
        const bool branch_taken_0x22342c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22342c) {
            ctx->pc = 0x22344Cu;
            goto label_22344c;
        }
    }
    ctx->pc = 0x223434u;
    // 0x223434: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x223434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x223438: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x223438u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22343c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22343cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x223440: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x223440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223444: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x223444u;
    SET_GPR_U32(ctx, 31, 0x22344Cu);
    ctx->pc = 0x223448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223444u;
            // 0x223448: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22344Cu; }
        if (ctx->pc != 0x22344Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22344Cu; }
        if (ctx->pc != 0x22344Cu) { return; }
    }
    ctx->pc = 0x22344Cu;
label_22344c:
    // 0x22344c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22344cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223450:
    // 0x223450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223458: 0x3e00008  jr          $ra
    ctx->pc = 0x223458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22345Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223458u;
            // 0x22345c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223460u;
    // 0x223460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223464: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22346c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22346cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223470: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x223470u;
    {
        const bool branch_taken_0x223470 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223470) {
            ctx->pc = 0x223474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223470u;
            // 0x223474: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2234F0u;
            goto label_2234f0;
        }
    }
    ctx->pc = 0x223478u;
    // 0x223478: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22347c: 0x2442ea40  addiu       $v0, $v0, -0x15C0
    ctx->pc = 0x22347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961728));
    // 0x223480: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x223480u;
    {
        const bool branch_taken_0x223480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223480u;
            // 0x223484: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223480) {
            ctx->pc = 0x2234C4u;
            goto label_2234c4;
        }
    }
    ctx->pc = 0x223488u;
    // 0x223488: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22348c: 0x2442eca0  addiu       $v0, $v0, -0x1360
    ctx->pc = 0x22348cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962336));
    // 0x223490: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x223490u;
    {
        const bool branch_taken_0x223490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223490u;
            // 0x223494: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223490) {
            ctx->pc = 0x2234C4u;
            goto label_2234c4;
        }
    }
    ctx->pc = 0x223498u;
    // 0x223498: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22349c: 0x2442ec30  addiu       $v0, $v0, -0x13D0
    ctx->pc = 0x22349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962224));
    // 0x2234a0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2234A0u;
    {
        const bool branch_taken_0x2234a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2234A0u;
            // 0x2234a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234a0) {
            ctx->pc = 0x2234C4u;
            goto label_2234c4;
        }
    }
    ctx->pc = 0x2234A8u;
    // 0x2234a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2234a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2234ac: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2234acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x2234b0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2234B0u;
    {
        const bool branch_taken_0x2234b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2234B0u;
            // 0x2234b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234b0) {
            ctx->pc = 0x2234C4u;
            goto label_2234c4;
        }
    }
    ctx->pc = 0x2234B8u;
    // 0x2234b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2234b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2234bc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2234bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x2234c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2234c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2234c4:
    // 0x2234c4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2234c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2234c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2234c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2234cc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2234CCu;
    {
        const bool branch_taken_0x2234cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2234cc) {
            ctx->pc = 0x2234ECu;
            goto label_2234ec;
        }
    }
    ctx->pc = 0x2234D4u;
    // 0x2234d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2234d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2234d8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x2234d8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2234dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2234dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2234e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2234e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2234e4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2234E4u;
    SET_GPR_U32(ctx, 31, 0x2234ECu);
    ctx->pc = 0x2234E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2234E4u;
            // 0x2234e8: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234ECu; }
        if (ctx->pc != 0x2234ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234ECu; }
        if (ctx->pc != 0x2234ECu) { return; }
    }
    ctx->pc = 0x2234ECu;
label_2234ec:
    // 0x2234ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2234ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2234f0:
    // 0x2234f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2234f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2234f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2234f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2234f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2234F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2234FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2234F8u;
            // 0x2234fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223500u;
    // 0x223500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22350c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22350cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223510: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x223510u;
    {
        const bool branch_taken_0x223510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223510) {
            ctx->pc = 0x223514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223510u;
            // 0x223514: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x223518u;
    // 0x223518: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22351c: 0x2442eab0  addiu       $v0, $v0, -0x1550
    ctx->pc = 0x22351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961840));
    // 0x223520: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x223520u;
    {
        const bool branch_taken_0x223520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223520u;
            // 0x223524: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223520) {
            ctx->pc = 0x223564u;
            goto label_223564;
        }
    }
    ctx->pc = 0x223528u;
    // 0x223528: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22352c: 0x2442ee00  addiu       $v0, $v0, -0x1200
    ctx->pc = 0x22352cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x223530: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x223530u;
    {
        const bool branch_taken_0x223530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223530u;
            // 0x223534: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223530) {
            ctx->pc = 0x223564u;
            goto label_223564;
        }
    }
    ctx->pc = 0x223538u;
    // 0x223538: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22353c: 0x2442ec30  addiu       $v0, $v0, -0x13D0
    ctx->pc = 0x22353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962224));
    // 0x223540: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x223540u;
    {
        const bool branch_taken_0x223540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223540u;
            // 0x223544: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223540) {
            ctx->pc = 0x223564u;
            goto label_223564;
        }
    }
    ctx->pc = 0x223548u;
    // 0x223548: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22354c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x22354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x223550: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x223550u;
    {
        const bool branch_taken_0x223550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223550u;
            // 0x223554: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223550) {
            ctx->pc = 0x223564u;
            goto label_223564;
        }
    }
    ctx->pc = 0x223558u;
    // 0x223558: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22355c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x22355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x223560: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x223560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_223564:
    // 0x223564: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x223564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x223568: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x223568u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22356c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22356Cu;
    {
        const bool branch_taken_0x22356c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22356c) {
            ctx->pc = 0x22358Cu;
            goto label_22358c;
        }
    }
    ctx->pc = 0x223574u;
    // 0x223574: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x223574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x223578: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x223578u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22357c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22357cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x223580: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x223580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223584: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x223584u;
    SET_GPR_U32(ctx, 31, 0x22358Cu);
    ctx->pc = 0x223588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223584u;
            // 0x223588: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22358Cu; }
        if (ctx->pc != 0x22358Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22358Cu; }
        if (ctx->pc != 0x22358Cu) { return; }
    }
    ctx->pc = 0x22358Cu;
label_22358c:
    // 0x22358c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22358cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223590:
    // 0x223590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223594: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223598: 0x3e00008  jr          $ra
    ctx->pc = 0x223598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22359Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223598u;
            // 0x22359c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2235A0u;
    // 0x2235a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2235A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2235A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2235A0u;
            // 0x2235a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2235A8u;
    // 0x2235a8: 0x0  nop
    ctx->pc = 0x2235a8u;
    // NOP
    // 0x2235ac: 0x0  nop
    ctx->pc = 0x2235acu;
    // NOP
    // 0x2235b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2235B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2235B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2235B0u;
            // 0x2235b4: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2235B8u;
    // 0x2235b8: 0x0  nop
    ctx->pc = 0x2235b8u;
    // NOP
    // 0x2235bc: 0x0  nop
    ctx->pc = 0x2235bcu;
    // NOP
    // 0x2235c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2235C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2235C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2235C0u;
            // 0x2235c4: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2235C8u;
    // 0x2235c8: 0x0  nop
    ctx->pc = 0x2235c8u;
    // NOP
    // 0x2235cc: 0x0  nop
    ctx->pc = 0x2235ccu;
    // NOP
    // 0x2235d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2235d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2235d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2235d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2235d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2235d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2235dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2235dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2235e0: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2235E0u;
    {
        const bool branch_taken_0x2235e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2235e0) {
            ctx->pc = 0x2235E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2235E0u;
            // 0x2235e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223660u;
            goto label_223660;
        }
    }
    ctx->pc = 0x2235E8u;
    // 0x2235e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2235e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2235ec: 0x2442eb90  addiu       $v0, $v0, -0x1470
    ctx->pc = 0x2235ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962064));
    // 0x2235f0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2235F0u;
    {
        const bool branch_taken_0x2235f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2235F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2235F0u;
            // 0x2235f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235f0) {
            ctx->pc = 0x223634u;
            goto label_223634;
        }
    }
    ctx->pc = 0x2235F8u;
    // 0x2235f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2235f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2235fc: 0x2442ebd0  addiu       $v0, $v0, -0x1430
    ctx->pc = 0x2235fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962128));
    // 0x223600: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x223600u;
    {
        const bool branch_taken_0x223600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223600u;
            // 0x223604: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223600) {
            ctx->pc = 0x223634u;
            goto label_223634;
        }
    }
    ctx->pc = 0x223608u;
    // 0x223608: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22360c: 0x2442ebb0  addiu       $v0, $v0, -0x1450
    ctx->pc = 0x22360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962096));
    // 0x223610: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x223610u;
    {
        const bool branch_taken_0x223610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223610u;
            // 0x223614: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223610) {
            ctx->pc = 0x223634u;
            goto label_223634;
        }
    }
    ctx->pc = 0x223618u;
    // 0x223618: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22361c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x22361cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x223620: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x223620u;
    {
        const bool branch_taken_0x223620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223620u;
            // 0x223624: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223620) {
            ctx->pc = 0x223634u;
            goto label_223634;
        }
    }
    ctx->pc = 0x223628u;
    // 0x223628: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22362c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x22362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x223630: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x223630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_223634:
    // 0x223634: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x223634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x223638: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x223638u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22363c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22363Cu;
    {
        const bool branch_taken_0x22363c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22363c) {
            ctx->pc = 0x22365Cu;
            goto label_22365c;
        }
    }
    ctx->pc = 0x223644u;
    // 0x223644: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x223644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x223648: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x223648u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22364c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22364cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x223650: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x223650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223654: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x223654u;
    SET_GPR_U32(ctx, 31, 0x22365Cu);
    ctx->pc = 0x223658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223654u;
            // 0x223658: 0x24070029  addiu       $a3, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22365Cu; }
        if (ctx->pc != 0x22365Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22365Cu; }
        if (ctx->pc != 0x22365Cu) { return; }
    }
    ctx->pc = 0x22365Cu;
label_22365c:
    // 0x22365c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22365cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223660:
    // 0x223660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223668: 0x3e00008  jr          $ra
    ctx->pc = 0x223668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22366Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223668u;
            // 0x22366c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223670u;
    // 0x223670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22367c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22367cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223680: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x223680u;
    {
        const bool branch_taken_0x223680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223680) {
            ctx->pc = 0x223684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223680u;
            // 0x223684: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2236E0u;
            goto label_2236e0;
        }
    }
    ctx->pc = 0x223688u;
    // 0x223688: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22368c: 0x2442ebb0  addiu       $v0, $v0, -0x1450
    ctx->pc = 0x22368cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962096));
    // 0x223690: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x223690u;
    {
        const bool branch_taken_0x223690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223690u;
            // 0x223694: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223690) {
            ctx->pc = 0x2236B4u;
            goto label_2236b4;
        }
    }
    ctx->pc = 0x223698u;
    // 0x223698: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22369c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x22369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x2236a0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2236A0u;
    {
        const bool branch_taken_0x2236a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2236A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2236A0u;
            // 0x2236a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2236a0) {
            ctx->pc = 0x2236B4u;
            goto label_2236b4;
        }
    }
    ctx->pc = 0x2236A8u;
    // 0x2236a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2236a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2236ac: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2236acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x2236b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2236b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2236b4:
    // 0x2236b4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2236b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2236b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2236b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2236bc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2236BCu;
    {
        const bool branch_taken_0x2236bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2236bc) {
            ctx->pc = 0x2236DCu;
            goto label_2236dc;
        }
    }
    ctx->pc = 0x2236C4u;
    // 0x2236c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2236c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2236c8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x2236c8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2236cc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2236ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2236d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2236d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2236d4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2236D4u;
    SET_GPR_U32(ctx, 31, 0x2236DCu);
    ctx->pc = 0x2236D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2236D4u;
            // 0x2236d8: 0x24070029  addiu       $a3, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236DCu; }
        if (ctx->pc != 0x2236DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236DCu; }
        if (ctx->pc != 0x2236DCu) { return; }
    }
    ctx->pc = 0x2236DCu;
label_2236dc:
    // 0x2236dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2236dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2236e0:
    // 0x2236e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2236e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2236e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2236e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2236e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2236E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2236ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2236E8u;
            // 0x2236ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2236F0u;
    // 0x2236f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2236f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2236f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2236f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2236f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2236f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2236fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2236fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223700: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x223700u;
    {
        const bool branch_taken_0x223700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223700) {
            ctx->pc = 0x223704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223700u;
            // 0x223704: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223770u;
            goto label_223770;
        }
    }
    ctx->pc = 0x223708u;
    // 0x223708: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22370c: 0x2442ebd0  addiu       $v0, $v0, -0x1430
    ctx->pc = 0x22370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962128));
    // 0x223710: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x223710u;
    {
        const bool branch_taken_0x223710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223710u;
            // 0x223714: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223710) {
            ctx->pc = 0x223744u;
            goto label_223744;
        }
    }
    ctx->pc = 0x223718u;
    // 0x223718: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22371c: 0x2442ebb0  addiu       $v0, $v0, -0x1450
    ctx->pc = 0x22371cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962096));
    // 0x223720: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x223720u;
    {
        const bool branch_taken_0x223720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223720u;
            // 0x223724: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223720) {
            ctx->pc = 0x223744u;
            goto label_223744;
        }
    }
    ctx->pc = 0x223728u;
    // 0x223728: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22372c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x22372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x223730: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x223730u;
    {
        const bool branch_taken_0x223730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223730u;
            // 0x223734: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223730) {
            ctx->pc = 0x223744u;
            goto label_223744;
        }
    }
    ctx->pc = 0x223738u;
    // 0x223738: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22373c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x22373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x223740: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x223740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_223744:
    // 0x223744: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x223744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x223748: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x223748u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22374c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22374Cu;
    {
        const bool branch_taken_0x22374c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22374c) {
            ctx->pc = 0x22376Cu;
            goto label_22376c;
        }
    }
    ctx->pc = 0x223754u;
    // 0x223754: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x223754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x223758: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x223758u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22375c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22375cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x223760: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x223760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223764: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x223764u;
    SET_GPR_U32(ctx, 31, 0x22376Cu);
    ctx->pc = 0x223768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223764u;
            // 0x223768: 0x24070029  addiu       $a3, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22376Cu; }
        if (ctx->pc != 0x22376Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22376Cu; }
        if (ctx->pc != 0x22376Cu) { return; }
    }
    ctx->pc = 0x22376Cu;
label_22376c:
    // 0x22376c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22376cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223770:
    // 0x223770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223778: 0x3e00008  jr          $ra
    ctx->pc = 0x223778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22377Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223778u;
            // 0x22377c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223780u;
}
