#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00430F60
// Address: 0x430f60 - 0x4310c0
void sub_00430F60_0x430f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430F60_0x430f60");
#endif

    switch (ctx->pc) {
        case 0x430f7cu: goto label_430f7c;
        case 0x430f9cu: goto label_430f9c;
        case 0x430ff0u: goto label_430ff0;
        case 0x431050u: goto label_431050;
        case 0x43105cu: goto label_43105c;
        case 0x431068u: goto label_431068;
        case 0x431074u: goto label_431074;
        case 0x431080u: goto label_431080;
        case 0x43108cu: goto label_43108c;
        case 0x4310a4u: goto label_4310a4;
        default: break;
    }

    ctx->pc = 0x430f60u;

    // 0x430f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x430f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x430f64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x430f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x430f68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x430f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x430f6c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x430f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x430f70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x430f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x430f74: 0xc10c468  jal         func_4311A0
    ctx->pc = 0x430F74u;
    SET_GPR_U32(ctx, 31, 0x430F7Cu);
    ctx->pc = 0x430F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430F74u;
            // 0x430f78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4311A0u;
    if (runtime->hasFunction(0x4311A0u)) {
        auto targetFn = runtime->lookupFunction(0x4311A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430F7Cu; }
        if (ctx->pc != 0x430F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004311A0_0x4311a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430F7Cu; }
        if (ctx->pc != 0x430F7Cu) { return; }
    }
    ctx->pc = 0x430F7Cu;
label_430f7c:
    // 0x430f7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x430f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x430f80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x430f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x430f84: 0x2463c840  addiu       $v1, $v1, -0x37C0
    ctx->pc = 0x430f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953024));
    // 0x430f88: 0x2442c878  addiu       $v0, $v0, -0x3788
    ctx->pc = 0x430f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953080));
    // 0x430f8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x430f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x430f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x430f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430f94: 0xc10c464  jal         func_431190
    ctx->pc = 0x430F94u;
    SET_GPR_U32(ctx, 31, 0x430F9Cu);
    ctx->pc = 0x430F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430F94u;
            // 0x430f98: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x431190u;
    if (runtime->hasFunction(0x431190u)) {
        auto targetFn = runtime->lookupFunction(0x431190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430F9Cu; }
        if (ctx->pc != 0x430F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00431190_0x431190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430F9Cu; }
        if (ctx->pc != 0x430F9Cu) { return; }
    }
    ctx->pc = 0x430F9Cu;
label_430f9c:
    // 0x430f9c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x430f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x430fa0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x430fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x430fa4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x430fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x430fa8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x430fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x430fac: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x430facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x430fb0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x430fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x430fb4: 0x24a5c4f0  addiu       $a1, $a1, -0x3B10
    ctx->pc = 0x430fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952176));
    // 0x430fb8: 0x2484c790  addiu       $a0, $a0, -0x3870
    ctx->pc = 0x430fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952848));
    // 0x430fbc: 0x2463c7c8  addiu       $v1, $v1, -0x3838
    ctx->pc = 0x430fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952904));
    // 0x430fc0: 0x8cc60968  lw          $a2, 0x968($a2)
    ctx->pc = 0x430fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
    // 0x430fc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x430fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430fc8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x430fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x430fcc: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x430fccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430fd0: 0xa2050098  sb          $a1, 0x98($s0)
    ctx->pc = 0x430fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 5));
    // 0x430fd4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x430fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x430fd8: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x430fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x430fdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x430fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x430fe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x430fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x430fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x430FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430FE4u;
            // 0x430fe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x430FECu;
    // 0x430fec: 0x0  nop
    ctx->pc = 0x430fecu;
    // NOP
label_430ff0:
    // 0x430ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x430ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x430ff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x430ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x430ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x430ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x430ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x430ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x431000: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x431000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431004: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x431004u;
    {
        const bool branch_taken_0x431004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x431008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431004u;
            // 0x431008: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431004) {
            ctx->pc = 0x4310A4u;
            goto label_4310a4;
        }
    }
    ctx->pc = 0x43100Cu;
    // 0x43100c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43100cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x431010: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x431010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x431014: 0x2463c840  addiu       $v1, $v1, -0x37C0
    ctx->pc = 0x431014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953024));
    // 0x431018: 0x2442c878  addiu       $v0, $v0, -0x3788
    ctx->pc = 0x431018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953080));
    // 0x43101c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43101cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x431020: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x431020u;
    {
        const bool branch_taken_0x431020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x431024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431020u;
            // 0x431024: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431020) {
            ctx->pc = 0x43108Cu;
            goto label_43108c;
        }
    }
    ctx->pc = 0x431028u;
    // 0x431028: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x431028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43102c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43102cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x431030: 0x2463c7f0  addiu       $v1, $v1, -0x3810
    ctx->pc = 0x431030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952944));
    // 0x431034: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x431034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x431038: 0x2442c828  addiu       $v0, $v0, -0x37D8
    ctx->pc = 0x431038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953000));
    // 0x43103c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43103cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x431040: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x431040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x431044: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x431044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x431048: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x431048u;
    SET_GPR_U32(ctx, 31, 0x431050u);
    ctx->pc = 0x43104Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431048u;
            // 0x43104c: 0x24a50970  addiu       $a1, $a1, 0x970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431050u; }
        if (ctx->pc != 0x431050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431050u; }
        if (ctx->pc != 0x431050u) { return; }
    }
    ctx->pc = 0x431050u;
label_431050:
    // 0x431050: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x431050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x431054: 0xc0aeacc  jal         func_2BAB30
    ctx->pc = 0x431054u;
    SET_GPR_U32(ctx, 31, 0x43105Cu);
    ctx->pc = 0x431058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431054u;
            // 0x431058: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB30u;
    if (runtime->hasFunction(0x2BAB30u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43105Cu; }
        if (ctx->pc != 0x43105Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB30_0x2bab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43105Cu; }
        if (ctx->pc != 0x43105Cu) { return; }
    }
    ctx->pc = 0x43105Cu;
label_43105c:
    // 0x43105c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x43105cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x431060: 0xc10c448  jal         func_431120
    ctx->pc = 0x431060u;
    SET_GPR_U32(ctx, 31, 0x431068u);
    ctx->pc = 0x431064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431060u;
            // 0x431064: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x431120u;
    if (runtime->hasFunction(0x431120u)) {
        auto targetFn = runtime->lookupFunction(0x431120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431068u; }
        if (ctx->pc != 0x431068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00431120_0x431120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431068u; }
        if (ctx->pc != 0x431068u) { return; }
    }
    ctx->pc = 0x431068u;
label_431068:
    // 0x431068: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x431068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x43106c: 0xc10c448  jal         func_431120
    ctx->pc = 0x43106Cu;
    SET_GPR_U32(ctx, 31, 0x431074u);
    ctx->pc = 0x431070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43106Cu;
            // 0x431070: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x431120u;
    if (runtime->hasFunction(0x431120u)) {
        auto targetFn = runtime->lookupFunction(0x431120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431074u; }
        if (ctx->pc != 0x431074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00431120_0x431120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431074u; }
        if (ctx->pc != 0x431074u) { return; }
    }
    ctx->pc = 0x431074u;
label_431074:
    // 0x431074: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x431074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x431078: 0xc10c430  jal         func_4310C0
    ctx->pc = 0x431078u;
    SET_GPR_U32(ctx, 31, 0x431080u);
    ctx->pc = 0x43107Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431078u;
            // 0x43107c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4310C0u;
    if (runtime->hasFunction(0x4310C0u)) {
        auto targetFn = runtime->lookupFunction(0x4310C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431080u; }
        if (ctx->pc != 0x431080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004310C0_0x4310c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431080u; }
        if (ctx->pc != 0x431080u) { return; }
    }
    ctx->pc = 0x431080u;
label_431080:
    // 0x431080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x431080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431084: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x431084u;
    SET_GPR_U32(ctx, 31, 0x43108Cu);
    ctx->pc = 0x431088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431084u;
            // 0x431088: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43108Cu; }
        if (ctx->pc != 0x43108Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43108Cu; }
        if (ctx->pc != 0x43108Cu) { return; }
    }
    ctx->pc = 0x43108Cu;
label_43108c:
    // 0x43108c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x43108cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x431090: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x431090u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x431094: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x431094u;
    {
        const bool branch_taken_0x431094 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x431094) {
            ctx->pc = 0x431098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x431094u;
            // 0x431098: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4310A8u;
            goto label_4310a8;
        }
    }
    ctx->pc = 0x43109Cu;
    // 0x43109c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x43109Cu;
    SET_GPR_U32(ctx, 31, 0x4310A4u);
    ctx->pc = 0x4310A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43109Cu;
            // 0x4310a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4310A4u; }
        if (ctx->pc != 0x4310A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4310A4u; }
        if (ctx->pc != 0x4310A4u) { return; }
    }
    ctx->pc = 0x4310A4u;
label_4310a4:
    // 0x4310a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4310a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4310a8:
    // 0x4310a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4310a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4310ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4310acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4310b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4310b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4310b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4310B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4310B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4310B4u;
            // 0x4310b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4310BCu;
    // 0x4310bc: 0x0  nop
    ctx->pc = 0x4310bcu;
    // NOP
}
