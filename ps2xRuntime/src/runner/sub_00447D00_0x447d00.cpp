#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00447D00
// Address: 0x447d00 - 0x447ea0
void sub_00447D00_0x447d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00447D00_0x447d00");
#endif

    switch (ctx->pc) {
        case 0x447d60u: goto label_447d60;
        case 0x447d68u: goto label_447d68;
        case 0x447e4cu: goto label_447e4c;
        case 0x447e84u: goto label_447e84;
        default: break;
    }

    ctx->pc = 0x447d00u;

    // 0x447d00: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x447D00u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x447D08u;
    // 0x447d08: 0x0  nop
    ctx->pc = 0x447d08u;
    // NOP
    // 0x447d0c: 0x0  nop
    ctx->pc = 0x447d0cu;
    // NOP
    // 0x447d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x447d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x447d14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x447d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x447d18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x447d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x447d1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x447d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x447d20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x447d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x447d24: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x447d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x447d28: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x447d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x447d2c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x447d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x447d30: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x447d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x447d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x447d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x447d38: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x447d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x447d3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x447d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447d40: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x447d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x447d44: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x447d44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x447d48: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x447d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x447d4c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x447d4cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x447d50: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x447d50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x447d54: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x447d54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x447d58: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x447D58u;
    SET_GPR_U32(ctx, 31, 0x447D60u);
    ctx->pc = 0x447D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447D58u;
            // 0x447d5c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447D60u; }
        if (ctx->pc != 0x447D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447D60u; }
        if (ctx->pc != 0x447D60u) { return; }
    }
    ctx->pc = 0x447D60u;
label_447d60:
    // 0x447d60: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x447D60u;
    SET_GPR_U32(ctx, 31, 0x447D68u);
    ctx->pc = 0x447D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447D60u;
            // 0x447d64: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447D68u; }
        if (ctx->pc != 0x447D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447D68u; }
        if (ctx->pc != 0x447D68u) { return; }
    }
    ctx->pc = 0x447D68u;
label_447d68:
    // 0x447d68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x447d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x447d6c: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x447d6cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
    // 0x447d70: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x447d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x447d74: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x447d74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
    // 0x447d78: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x447d78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
    // 0x447d7c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x447d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x447d80: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x447d80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x447d84: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x447d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x447d88: 0x8c4b0788  lw          $t3, 0x788($v0)
    ctx->pc = 0x447d88u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x447d8c: 0x254ac560  addiu       $t2, $t2, -0x3AA0
    ctx->pc = 0x447d8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952288));
    // 0x447d90: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x447d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x447d94: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x447d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x447d98: 0x25292660  addiu       $t1, $t1, 0x2660
    ctx->pc = 0x447d98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9824));
    // 0x447d9c: 0x25082670  addiu       $t0, $t0, 0x2670
    ctx->pc = 0x447d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9840));
    // 0x447da0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x447da0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x447da4: 0x24e726b0  addiu       $a3, $a3, 0x26B0
    ctx->pc = 0x447da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9904));
    // 0x447da8: 0x914a0000  lbu         $t2, 0x0($t2)
    ctx->pc = 0x447da8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x447dac: 0x24c6d630  addiu       $a2, $a2, -0x29D0
    ctx->pc = 0x447dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956592));
    // 0x447db0: 0x24a5d670  addiu       $a1, $a1, -0x2990
    ctx->pc = 0x447db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956656));
    // 0x447db4: 0x24842428  addiu       $a0, $a0, 0x2428
    ctx->pc = 0x447db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9256));
    // 0x447db8: 0x2463d5b8  addiu       $v1, $v1, -0x2A48
    ctx->pc = 0x447db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956472));
    // 0x447dbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x447dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447dc0: 0xa20a004d  sb          $t2, 0x4D($s0)
    ctx->pc = 0x447dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 10));
    // 0x447dc4: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x447dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x447dc8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x447dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x447dcc: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x447dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x447dd0: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x447dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
    // 0x447dd4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x447dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x447dd8: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x447dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
    // 0x447ddc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x447ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x447de0: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x447de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
    // 0x447de4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x447de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x447de8: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x447de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x447dec: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x447decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x447df0: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x447df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x447df4: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x447df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x447df8: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x447df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x447dfc: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x447dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x447e00: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x447e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x447e04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x447e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x447e08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x447e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x447e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x447E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447E0Cu;
            // 0x447e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x447E14u;
    // 0x447e14: 0x0  nop
    ctx->pc = 0x447e14u;
    // NOP
    // 0x447e18: 0x0  nop
    ctx->pc = 0x447e18u;
    // NOP
    // 0x447e1c: 0x0  nop
    ctx->pc = 0x447e1cu;
    // NOP
    // 0x447e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x447e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x447e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x447e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x447e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x447e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x447e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x447e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x447e30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x447e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447e34: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x447E34u;
    {
        const bool branch_taken_0x447e34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x447E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447E34u;
            // 0x447e38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447e34) {
            ctx->pc = 0x447E84u;
            goto label_447e84;
        }
    }
    ctx->pc = 0x447E3Cu;
    // 0x447e3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x447e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x447e40: 0x2442d5b8  addiu       $v0, $v0, -0x2A48
    ctx->pc = 0x447e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956472));
    // 0x447e44: 0xc1123d4  jal         func_448F50
    ctx->pc = 0x447E44u;
    SET_GPR_U32(ctx, 31, 0x447E4Cu);
    ctx->pc = 0x447E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447E44u;
            // 0x447e48: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x448F50u;
    if (runtime->hasFunction(0x448F50u)) {
        auto targetFn = runtime->lookupFunction(0x448F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447E4Cu; }
        if (ctx->pc != 0x447E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00448F50_0x448f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447E4Cu; }
        if (ctx->pc != 0x447E4Cu) { return; }
    }
    ctx->pc = 0x447E4Cu;
label_447e4c:
    // 0x447e4c: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x447E4Cu;
    {
        const bool branch_taken_0x447e4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x447e4c) {
            ctx->pc = 0x447E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447E4Cu;
            // 0x447e50: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x447E70u;
            goto label_447e70;
        }
    }
    ctx->pc = 0x447E54u;
    // 0x447e54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x447e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x447e58: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x447e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
    // 0x447e5c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x447e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x447e60: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x447e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x447e64: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x447e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x447e68: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x447e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x447e6c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x447e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_447e70:
    // 0x447e70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x447e70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x447e74: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x447E74u;
    {
        const bool branch_taken_0x447e74 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x447e74) {
            ctx->pc = 0x447E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447E74u;
            // 0x447e78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x447E88u;
            goto label_447e88;
        }
    }
    ctx->pc = 0x447E7Cu;
    // 0x447e7c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x447E7Cu;
    SET_GPR_U32(ctx, 31, 0x447E84u);
    ctx->pc = 0x447E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447E7Cu;
            // 0x447e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447E84u; }
        if (ctx->pc != 0x447E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447E84u; }
        if (ctx->pc != 0x447E84u) { return; }
    }
    ctx->pc = 0x447E84u;
label_447e84:
    // 0x447e84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x447e84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_447e88:
    // 0x447e88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x447e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x447e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x447e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x447e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x447e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x447e94: 0x3e00008  jr          $ra
    ctx->pc = 0x447E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447E94u;
            // 0x447e98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x447E9Cu;
    // 0x447e9c: 0x0  nop
    ctx->pc = 0x447e9cu;
    // NOP
}
