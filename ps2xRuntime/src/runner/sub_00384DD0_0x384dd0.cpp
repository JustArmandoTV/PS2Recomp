#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384DD0
// Address: 0x384dd0 - 0x384f60
void sub_00384DD0_0x384dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384DD0_0x384dd0");
#endif

    switch (ctx->pc) {
        case 0x384e30u: goto label_384e30;
        case 0x384e38u: goto label_384e38;
        case 0x384f0cu: goto label_384f0c;
        case 0x384f48u: goto label_384f48;
        default: break;
    }

    ctx->pc = 0x384dd0u;

    // 0x384dd0: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x384DD0u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x384DD8u;
    // 0x384dd8: 0x0  nop
    ctx->pc = 0x384dd8u;
    // NOP
    // 0x384ddc: 0x0  nop
    ctx->pc = 0x384ddcu;
    // NOP
    // 0x384de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x384de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x384de4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x384de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x384de8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x384de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x384dec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x384decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x384df0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x384df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x384df4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x384df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x384df8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x384df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x384dfc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x384dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x384e00: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x384e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x384e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x384e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x384e08: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x384e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x384e0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x384e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384e10: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x384e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x384e14: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x384e14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x384e18: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x384e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x384e1c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x384e1cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x384e20: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x384e20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x384e24: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x384e24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x384e28: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x384E28u;
    SET_GPR_U32(ctx, 31, 0x384E30u);
    ctx->pc = 0x384E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384E28u;
            // 0x384e2c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384E30u; }
        if (ctx->pc != 0x384E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384E30u; }
        if (ctx->pc != 0x384E30u) { return; }
    }
    ctx->pc = 0x384E30u;
label_384e30:
    // 0x384e30: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x384E30u;
    SET_GPR_U32(ctx, 31, 0x384E38u);
    ctx->pc = 0x384E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384E30u;
            // 0x384e34: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384E38u; }
        if (ctx->pc != 0x384E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384E38u; }
        if (ctx->pc != 0x384E38u) { return; }
    }
    ctx->pc = 0x384E38u;
label_384e38:
    // 0x384e38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x384e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x384e3c: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x384e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
    // 0x384e40: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x384e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x384e44: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x384e44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x384e48: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x384e48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x384e4c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x384e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x384e50: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x384e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x384e54: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x384e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x384e58: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x384e58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x384e5c: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x384e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
    // 0x384e60: 0x24e77940  addiu       $a3, $a3, 0x7940
    ctx->pc = 0x384e60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31040));
    // 0x384e64: 0x24c6cfe0  addiu       $a2, $a2, -0x3020
    ctx->pc = 0x384e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954976));
    // 0x384e68: 0x24a524a0  addiu       $a1, $a1, 0x24A0
    ctx->pc = 0x384e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
    // 0x384e6c: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x384e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
    // 0x384e70: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x384e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x384e74: 0x24637980  addiu       $v1, $v1, 0x7980
    ctx->pc = 0x384e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31104));
    // 0x384e78: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x384e78u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x384e7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x384e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384e80: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x384e80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
    // 0x384e84: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x384e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x384e88: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x384e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x384e8c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x384e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x384e90: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x384e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x384e94: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x384e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x384e98: 0xae060074  sw          $a2, 0x74($s0)
    ctx->pc = 0x384e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 6));
    // 0x384e9c: 0xae050074  sw          $a1, 0x74($s0)
    ctx->pc = 0x384e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 5));
    // 0x384ea0: 0xae040074  sw          $a0, 0x74($s0)
    ctx->pc = 0x384ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 4));
    // 0x384ea4: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x384ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x384ea8: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x384ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x384eac: 0xae10007c  sw          $s0, 0x7C($s0)
    ctx->pc = 0x384eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 16));
    // 0x384eb0: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x384eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x384eb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x384eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384eb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x384eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x384EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384EBCu;
            // 0x384ec0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384EC4u;
    // 0x384ec4: 0x0  nop
    ctx->pc = 0x384ec4u;
    // NOP
    // 0x384ec8: 0x0  nop
    ctx->pc = 0x384ec8u;
    // NOP
    // 0x384ecc: 0x0  nop
    ctx->pc = 0x384eccu;
    // NOP
    // 0x384ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x384ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x384ed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x384ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x384ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x384ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x384edc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x384edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x384ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x384ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384ee4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x384EE4u;
    {
        const bool branch_taken_0x384ee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x384EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384EE4u;
            // 0x384ee8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384ee4) {
            ctx->pc = 0x384F48u;
            goto label_384f48;
        }
    }
    ctx->pc = 0x384EECu;
    // 0x384eec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x384eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x384ef0: 0x24427980  addiu       $v0, $v0, 0x7980
    ctx->pc = 0x384ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31104));
    // 0x384ef4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x384EF4u;
    {
        const bool branch_taken_0x384ef4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x384EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384EF4u;
            // 0x384ef8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384ef4) {
            ctx->pc = 0x384F30u;
            goto label_384f30;
        }
    }
    ctx->pc = 0x384EFCu;
    // 0x384efc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x384efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x384f00: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x384f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x384f04: 0xc0d37dc  jal         func_34DF70
    ctx->pc = 0x384F04u;
    SET_GPR_U32(ctx, 31, 0x384F0Cu);
    ctx->pc = 0x384F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384F04u;
            // 0x384f08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384F0Cu; }
        if (ctx->pc != 0x384F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384F0Cu; }
        if (ctx->pc != 0x384F0Cu) { return; }
    }
    ctx->pc = 0x384F0Cu;
label_384f0c:
    // 0x384f0c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x384F0Cu;
    {
        const bool branch_taken_0x384f0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x384f0c) {
            ctx->pc = 0x384F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x384F0Cu;
            // 0x384f10: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x384F34u;
            goto label_384f34;
        }
    }
    ctx->pc = 0x384F14u;
    // 0x384f14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x384f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x384f18: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x384f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x384f1c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x384F1Cu;
    {
        const bool branch_taken_0x384f1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x384F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384F1Cu;
            // 0x384f20: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384f1c) {
            ctx->pc = 0x384F30u;
            goto label_384f30;
        }
    }
    ctx->pc = 0x384F24u;
    // 0x384f24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x384f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x384f28: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x384f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x384f2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x384f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_384f30:
    // 0x384f30: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x384f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_384f34:
    // 0x384f34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x384f34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x384f38: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x384F38u;
    {
        const bool branch_taken_0x384f38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x384f38) {
            ctx->pc = 0x384F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x384F38u;
            // 0x384f3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x384F4Cu;
            goto label_384f4c;
        }
    }
    ctx->pc = 0x384F40u;
    // 0x384f40: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x384F40u;
    SET_GPR_U32(ctx, 31, 0x384F48u);
    ctx->pc = 0x384F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384F40u;
            // 0x384f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384F48u; }
        if (ctx->pc != 0x384F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384F48u; }
        if (ctx->pc != 0x384F48u) { return; }
    }
    ctx->pc = 0x384F48u;
label_384f48:
    // 0x384f48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x384f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_384f4c:
    // 0x384f4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x384f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384f50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x384f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384f54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x384f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384f58: 0x3e00008  jr          $ra
    ctx->pc = 0x384F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384F58u;
            // 0x384f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384F60u;
}
