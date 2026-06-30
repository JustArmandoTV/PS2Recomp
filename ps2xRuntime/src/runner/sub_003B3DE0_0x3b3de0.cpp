#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B3DE0
// Address: 0x3b3de0 - 0x3b3f70
void sub_003B3DE0_0x3b3de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3DE0_0x3b3de0");
#endif

    switch (ctx->pc) {
        case 0x3b3e18u: goto label_3b3e18;
        case 0x3b3ea0u: goto label_3b3ea0;
        case 0x3b3f00u: goto label_3b3f00;
        case 0x3b3f0cu: goto label_3b3f0c;
        case 0x3b3f18u: goto label_3b3f18;
        case 0x3b3f24u: goto label_3b3f24;
        case 0x3b3f30u: goto label_3b3f30;
        case 0x3b3f3cu: goto label_3b3f3c;
        case 0x3b3f54u: goto label_3b3f54;
        default: break;
    }

    ctx->pc = 0x3b3de0u;

    // 0x3b3de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b3de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b3de4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b3de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3b3de8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b3de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b3dec: 0x24638968  addiu       $v1, $v1, -0x7698
    ctx->pc = 0x3b3decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936936));
    // 0x3b3df0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b3df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b3df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b3df8: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x3b3df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x3b3dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b3dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3e00: 0xa0820014  sb          $v0, 0x14($a0)
    ctx->pc = 0x3b3e00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b3e04: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3b3e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3b3e08: 0xa0820015  sb          $v0, 0x15($a0)
    ctx->pc = 0x3b3e08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b3e0c: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x3b3e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x3b3e10: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3B3E10u;
    SET_GPR_U32(ctx, 31, 0x3B3E18u);
    ctx->pc = 0x3B3E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3E10u;
            // 0x3b3e14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3E18u; }
        if (ctx->pc != 0x3B3E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3E18u; }
        if (ctx->pc != 0x3B3E18u) { return; }
    }
    ctx->pc = 0x3B3E18u;
label_3b3e18:
    // 0x3b3e18: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3b3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b3e1c: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x3b3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x3b3e20: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x3b3e20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b3e24: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3b3e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b3e28: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x3b3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x3b3e2c: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x3b3e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b3e30: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3b3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b3e34: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x3b3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x3b3e38: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3b3e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3b3e3c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B3E3Cu;
    {
        const bool branch_taken_0x3b3e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3e3c) {
            ctx->pc = 0x3B3E6Cu;
            goto label_3b3e6c;
        }
    }
    ctx->pc = 0x3B3E44u;
    // 0x3b3e44: 0x8604000a  lh          $a0, 0xA($s0)
    ctx->pc = 0x3b3e44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3b3e48: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3b3e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3b3e4c: 0x24638070  addiu       $v1, $v1, -0x7F90
    ctx->pc = 0x3b3e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934640));
    // 0x3b3e50: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3b3e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b3e54: 0x2484fff2  addiu       $a0, $a0, -0xE
    ctx->pc = 0x3b3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967282));
    // 0x3b3e58: 0xa604000a  sh          $a0, 0xA($s0)
    ctx->pc = 0x3b3e58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b3e5c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3b3e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x3b3e60: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x3b3e60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b3e64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B3E64u;
    {
        const bool branch_taken_0x3b3e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3E64u;
            // 0x3b3e68: 0xa2000015  sb          $zero, 0x15($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3e64) {
            ctx->pc = 0x3B3E80u;
            goto label_3b3e80;
        }
    }
    ctx->pc = 0x3B3E6Cu;
label_3b3e6c:
    // 0x3b3e6c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3b3e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3b3e70: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3b3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3b3e74: 0x24638050  addiu       $v1, $v1, -0x7FB0
    ctx->pc = 0x3b3e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934608));
    // 0x3b3e78: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3b3e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x3b3e7c: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x3b3e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
label_3b3e80:
    // 0x3b3e80: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3b3e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3b3e84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b3e84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3e88: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3b3e88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b3e8c: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x3b3e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b3e90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b3e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3e94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b3e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3e98: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3E98u;
            // 0x3b3e9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B3EA0u;
label_3b3ea0:
    // 0x3b3ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b3ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b3ea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b3ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b3ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b3ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b3eac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b3eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b3eb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b3eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3eb4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3B3EB4u;
    {
        const bool branch_taken_0x3b3eb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3EB4u;
            // 0x3b3eb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3eb4) {
            ctx->pc = 0x3B3F54u;
            goto label_3b3f54;
        }
    }
    ctx->pc = 0x3B3EBCu;
    // 0x3b3ebc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b3ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3b3ec0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b3ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3b3ec4: 0x24638980  addiu       $v1, $v1, -0x7680
    ctx->pc = 0x3b3ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936960));
    // 0x3b3ec8: 0x244289b8  addiu       $v0, $v0, -0x7648
    ctx->pc = 0x3b3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937016));
    // 0x3b3ecc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3b3eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3b3ed0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3B3ED0u;
    {
        const bool branch_taken_0x3b3ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3ED0u;
            // 0x3b3ed4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3ed0) {
            ctx->pc = 0x3B3F3Cu;
            goto label_3b3f3c;
        }
    }
    ctx->pc = 0x3B3ED8u;
    // 0x3b3ed8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b3ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3b3edc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3b3ee0: 0x246389e0  addiu       $v1, $v1, -0x7620
    ctx->pc = 0x3b3ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937056));
    // 0x3b3ee4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b3ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3b3ee8: 0x24428a18  addiu       $v0, $v0, -0x75E8
    ctx->pc = 0x3b3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937112));
    // 0x3b3eec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3b3eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3b3ef0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3b3ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3b3ef4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3b3ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3b3ef8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x3B3EF8u;
    SET_GPR_U32(ctx, 31, 0x3B3F00u);
    ctx->pc = 0x3B3EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3EF8u;
            // 0x3b3efc: 0x24a54040  addiu       $a1, $a1, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3F00u; }
        if (ctx->pc != 0x3B3F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3F00u; }
        if (ctx->pc != 0x3B3F00u) { return; }
    }
    ctx->pc = 0x3B3F00u;
label_3b3f00:
    // 0x3b3f00: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3b3f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x3b3f04: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x3B3F04u;
    SET_GPR_U32(ctx, 31, 0x3B3F0Cu);
    ctx->pc = 0x3B3F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3F04u;
            // 0x3b3f08: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3F0Cu; }
        if (ctx->pc != 0x3B3F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3F0Cu; }
        if (ctx->pc != 0x3B3F0Cu) { return; }
    }
    ctx->pc = 0x3B3F0Cu;
label_3b3f0c:
    // 0x3b3f0c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x3b3f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x3b3f10: 0xc0ecff4  jal         func_3B3FD0
    ctx->pc = 0x3B3F10u;
    SET_GPR_U32(ctx, 31, 0x3B3F18u);
    ctx->pc = 0x3B3F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3F10u;
            // 0x3b3f14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B3FD0u;
    if (runtime->hasFunction(0x3B3FD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B3FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3F18u; }
        if (ctx->pc != 0x3B3F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B3FD0_0x3b3fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3F18u; }
        if (ctx->pc != 0x3B3F18u) { return; }
    }
    ctx->pc = 0x3B3F18u;
label_3b3f18:
    // 0x3b3f18: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3b3f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x3b3f1c: 0xc0ecff4  jal         func_3B3FD0
    ctx->pc = 0x3B3F1Cu;
    SET_GPR_U32(ctx, 31, 0x3B3F24u);
    ctx->pc = 0x3B3F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3F1Cu;
            // 0x3b3f20: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B3FD0u;
    if (runtime->hasFunction(0x3B3FD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B3FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3F24u; }
        if (ctx->pc != 0x3B3F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B3FD0_0x3b3fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3F24u; }
        if (ctx->pc != 0x3B3F24u) { return; }
    }
    ctx->pc = 0x3B3F24u;
label_3b3f24:
    // 0x3b3f24: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x3b3f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x3b3f28: 0xc0ecfdc  jal         func_3B3F70
    ctx->pc = 0x3B3F28u;
    SET_GPR_U32(ctx, 31, 0x3B3F30u);
    ctx->pc = 0x3B3F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3F28u;
            // 0x3b3f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B3F70u;
    if (runtime->hasFunction(0x3B3F70u)) {
        auto targetFn = runtime->lookupFunction(0x3B3F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3F30u; }
        if (ctx->pc != 0x3B3F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B3F70_0x3b3f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3F30u; }
        if (ctx->pc != 0x3B3F30u) { return; }
    }
    ctx->pc = 0x3B3F30u;
label_3b3f30:
    // 0x3b3f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b3f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3f34: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x3B3F34u;
    SET_GPR_U32(ctx, 31, 0x3B3F3Cu);
    ctx->pc = 0x3B3F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3F34u;
            // 0x3b3f38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3F3Cu; }
        if (ctx->pc != 0x3B3F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3F3Cu; }
        if (ctx->pc != 0x3B3F3Cu) { return; }
    }
    ctx->pc = 0x3B3F3Cu;
label_3b3f3c:
    // 0x3b3f3c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3b3f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3b3f40: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b3f40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b3f44: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3F44u;
    {
        const bool branch_taken_0x3b3f44 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b3f44) {
            ctx->pc = 0x3B3F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3F44u;
            // 0x3b3f48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B3F58u;
            goto label_3b3f58;
        }
    }
    ctx->pc = 0x3B3F4Cu;
    // 0x3b3f4c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3B3F4Cu;
    SET_GPR_U32(ctx, 31, 0x3B3F54u);
    ctx->pc = 0x3B3F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3F4Cu;
            // 0x3b3f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3F54u; }
        if (ctx->pc != 0x3B3F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3F54u; }
        if (ctx->pc != 0x3B3F54u) { return; }
    }
    ctx->pc = 0x3B3F54u;
label_3b3f54:
    // 0x3b3f54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b3f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3f58:
    // 0x3b3f58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b3f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b3f5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b3f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3f60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b3f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3f64: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3F64u;
            // 0x3b3f68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B3F6Cu;
    // 0x3b3f6c: 0x0  nop
    ctx->pc = 0x3b3f6cu;
    // NOP
}
