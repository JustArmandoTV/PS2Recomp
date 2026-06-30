#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E00B0
// Address: 0x1e00b0 - 0x1e01c0
void sub_001E00B0_0x1e00b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E00B0_0x1e00b0");
#endif

    switch (ctx->pc) {
        case 0x1e0118u: goto label_1e0118;
        case 0x1e0168u: goto label_1e0168;
        case 0x1e0170u: goto label_1e0170;
        case 0x1e0188u: goto label_1e0188;
        default: break;
    }

    ctx->pc = 0x1e00b0u;

    // 0x1e00b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e00b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e00b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e00b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e00b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e00b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e00bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e00bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e00c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e00c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e00c4: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x1e00c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
    // 0x1e00c8: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x1e00c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x1e00cc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1e00ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e00d0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E00D0u;
    {
        const bool branch_taken_0x1e00d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E00D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E00D0u;
            // 0x1e00d4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00d0) {
            ctx->pc = 0x1E0108u;
            goto label_1e0108;
        }
    }
    ctx->pc = 0x1E00D8u;
    // 0x1e00d8: 0x820311aa  lb          $v1, 0x11AA($s0)
    ctx->pc = 0x1e00d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
    // 0x1e00dc: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x1e00dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1e00e0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e00e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1e00e4: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E00E4u;
    {
        const bool branch_taken_0x1e00e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e00e4) {
            ctx->pc = 0x1E00E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E00E4u;
            // 0x1e00e8: 0x38630001  xori        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0108u;
            goto label_1e0108;
        }
    }
    ctx->pc = 0x1E00ECu;
    // 0x1e00ec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1e00ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1e00f0: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x1e00f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x1e00f4: 0x8063008d  lb          $v1, 0x8D($v1)
    ctx->pc = 0x1e00f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 141)));
    // 0x1e00f8: 0x601827  not         $v1, $v1
    ctx->pc = 0x1e00f8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1e00fc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e00fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e0100: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e0100u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e0104: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e0104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1e0108:
    // 0x1e0108: 0x54600026  bnel        $v1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E0108u;
    {
        const bool branch_taken_0x1e0108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0108) {
            ctx->pc = 0x1E010Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0108u;
            // 0x1e010c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E01A4u;
            goto label_1e01a4;
        }
    }
    ctx->pc = 0x1E0110u;
    // 0x1e0110: 0xc077fd4  jal         func_1DFF50
    ctx->pc = 0x1E0110u;
    SET_GPR_U32(ctx, 31, 0x1E0118u);
    ctx->pc = 0x1E0114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0110u;
            // 0x1e0114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF50u;
    if (runtime->hasFunction(0x1DFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0118u; }
        if (ctx->pc != 0x1E0118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF50_0x1dff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0118u; }
        if (ctx->pc != 0x1E0118u) { return; }
    }
    ctx->pc = 0x1E0118u;
label_1e0118:
    // 0x1e0118: 0xe6140e6c  swc1        $f20, 0xE6C($s0)
    ctx->pc = 0x1e0118u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3692), bits); }
    // 0x1e011c: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x1e011cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x1e0120: 0xae020e70  sw          $v0, 0xE70($s0)
    ctx->pc = 0x1e0120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3696), GPR_U32(ctx, 2));
    // 0x1e0124: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x1e0124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1e0128: 0xae000e74  sw          $zero, 0xE74($s0)
    ctx->pc = 0x1e0128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3700), GPR_U32(ctx, 0));
    // 0x1e012c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1e012cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1e0130: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x1e0130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x1e0134: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x1e0134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x1e0138: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x1e0138u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
    // 0x1e013c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e013cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0140: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1e0140u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0144: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1e0144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1e0148: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x1e0148u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x1e014c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1e014cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e0150: 0x8e030d98  lw          $v1, 0xD98($s0)
    ctx->pc = 0x1e0150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x1e0154: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e0154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e0158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e015c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e015cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0160: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x1E0160u;
    SET_GPR_U32(ctx, 31, 0x1E0168u);
    ctx->pc = 0x1E0164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0160u;
            // 0x1e0164: 0x24470200  addiu       $a3, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0168u; }
        if (ctx->pc != 0x1E0168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0168u; }
        if (ctx->pc != 0x1E0168u) { return; }
    }
    ctx->pc = 0x1E0168u;
label_1e0168:
    // 0x1e0168: 0xc040180  jal         func_100600
    ctx->pc = 0x1E0168u;
    SET_GPR_U32(ctx, 31, 0x1E0170u);
    ctx->pc = 0x1E016Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0168u;
            // 0x1e016c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0170u; }
        if (ctx->pc != 0x1E0170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0170u; }
        if (ctx->pc != 0x1E0170u) { return; }
    }
    ctx->pc = 0x1E0170u;
label_1e0170:
    // 0x1e0170: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0174: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0174u;
    {
        const bool branch_taken_0x1e0174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0174) {
            ctx->pc = 0x1E0178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0174u;
            // 0x1e0178: 0xae041230  sw          $a0, 0x1230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4656), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0190u;
            goto label_1e0190;
        }
    }
    ctx->pc = 0x1E017Cu;
    // 0x1e017c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e017cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e0180: 0xc15a7ec  jal         func_569FB0
    ctx->pc = 0x1E0180u;
    SET_GPR_U32(ctx, 31, 0x1E0188u);
    ctx->pc = 0x1E0184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0180u;
            // 0x1e0184: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x569FB0u;
    if (runtime->hasFunction(0x569FB0u)) {
        auto targetFn = runtime->lookupFunction(0x569FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0188u; }
        if (ctx->pc != 0x1E0188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00569FB0_0x569fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0188u; }
        if (ctx->pc != 0x1E0188u) { return; }
    }
    ctx->pc = 0x1E0188u;
label_1e0188:
    // 0x1e0188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e018c: 0xae041230  sw          $a0, 0x1230($s0)
    ctx->pc = 0x1e018cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4656), GPR_U32(ctx, 4));
label_1e0190:
    // 0x1e0190: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1e0190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1e0194: 0x8e040da0  lw          $a0, 0xDA0($s0)
    ctx->pc = 0x1e0194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
    // 0x1e0198: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e0198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e019c: 0xae030da0  sw          $v1, 0xDA0($s0)
    ctx->pc = 0x1e019cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 3));
    // 0x1e01a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e01a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e01a4:
    // 0x1e01a4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e01a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e01a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e01a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e01ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E01ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E01B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E01ACu;
            // 0x1e01b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E01B4u;
    // 0x1e01b4: 0x0  nop
    ctx->pc = 0x1e01b4u;
    // NOP
    // 0x1e01b8: 0x0  nop
    ctx->pc = 0x1e01b8u;
    // NOP
    // 0x1e01bc: 0x0  nop
    ctx->pc = 0x1e01bcu;
    // NOP
}
