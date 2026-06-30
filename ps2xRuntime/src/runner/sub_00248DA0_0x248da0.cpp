#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00248DA0
// Address: 0x248da0 - 0x248fd0
void sub_00248DA0_0x248da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248DA0_0x248da0");
#endif

    switch (ctx->pc) {
        case 0x248f58u: goto label_248f58;
        case 0x248fb4u: goto label_248fb4;
        default: break;
    }

    ctx->pc = 0x248da0u;

    // 0x248da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x248da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x248da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x248da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x248da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x248dac: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x248dacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x248db0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248db4: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x248db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x248db8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x248db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x248dbc: 0x24e4ffff  addiu       $a0, $a3, -0x1
    ctx->pc = 0x248dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x248dc0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x248dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x248dc4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x248dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x248dc8: 0x2464ff80  addiu       $a0, $v1, -0x80
    ctx->pc = 0x248dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x248dcc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x248dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x248dd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x248dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x248dd4: 0x10a3004e  beq         $a1, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x248DD4u;
    {
        const bool branch_taken_0x248dd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x248dd4) {
            ctx->pc = 0x248F10u;
            goto label_248f10;
        }
    }
    ctx->pc = 0x248DDCu;
    // 0x248ddc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x248ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x248de0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x248de0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x248de4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x248de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x248de8: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x248de8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x248dec: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x248decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x248df0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x248df0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x248df4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x248df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x248df8: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x248df8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x248dfc: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x248dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x248e00: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x248e00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x248e04: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x248e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x248e08: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x248e08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
    // 0x248e0c: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x248e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x248e10: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x248e10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x248e14: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x248e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x248e18: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x248e18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x248e1c: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x248e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x248e20: 0xaca40020  sw          $a0, 0x20($a1)
    ctx->pc = 0x248e20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
    // 0x248e24: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x248e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x248e28: 0xaca40024  sw          $a0, 0x24($a1)
    ctx->pc = 0x248e28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 4));
    // 0x248e2c: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x248e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x248e30: 0xaca40028  sw          $a0, 0x28($a1)
    ctx->pc = 0x248e30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 4));
    // 0x248e34: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x248e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x248e38: 0xaca4002c  sw          $a0, 0x2C($a1)
    ctx->pc = 0x248e38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 4));
    // 0x248e3c: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x248e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x248e40: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x248e40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    // 0x248e44: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x248e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x248e48: 0xaca40034  sw          $a0, 0x34($a1)
    ctx->pc = 0x248e48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 4));
    // 0x248e4c: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x248e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x248e50: 0xaca40038  sw          $a0, 0x38($a1)
    ctx->pc = 0x248e50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 4));
    // 0x248e54: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x248e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x248e58: 0xaca4003c  sw          $a0, 0x3C($a1)
    ctx->pc = 0x248e58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 4));
    // 0x248e5c: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x248e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x248e60: 0xaca40040  sw          $a0, 0x40($a1)
    ctx->pc = 0x248e60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 4));
    // 0x248e64: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x248e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x248e68: 0xaca40044  sw          $a0, 0x44($a1)
    ctx->pc = 0x248e68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 4));
    // 0x248e6c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x248e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x248e70: 0xaca40048  sw          $a0, 0x48($a1)
    ctx->pc = 0x248e70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 4));
    // 0x248e74: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x248e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x248e78: 0xaca4004c  sw          $a0, 0x4C($a1)
    ctx->pc = 0x248e78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 4));
    // 0x248e7c: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x248e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x248e80: 0xaca40050  sw          $a0, 0x50($a1)
    ctx->pc = 0x248e80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 4));
    // 0x248e84: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x248e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x248e88: 0xaca40054  sw          $a0, 0x54($a1)
    ctx->pc = 0x248e88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 4));
    // 0x248e8c: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x248e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x248e90: 0xaca40058  sw          $a0, 0x58($a1)
    ctx->pc = 0x248e90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 4));
    // 0x248e94: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x248e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x248e98: 0xaca4005c  sw          $a0, 0x5C($a1)
    ctx->pc = 0x248e98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 4));
    // 0x248e9c: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x248e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x248ea0: 0xaca40060  sw          $a0, 0x60($a1)
    ctx->pc = 0x248ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 4));
    // 0x248ea4: 0x8c640064  lw          $a0, 0x64($v1)
    ctx->pc = 0x248ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x248ea8: 0xaca40064  sw          $a0, 0x64($a1)
    ctx->pc = 0x248ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 4));
    // 0x248eac: 0x8c640068  lw          $a0, 0x68($v1)
    ctx->pc = 0x248eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x248eb0: 0xaca40068  sw          $a0, 0x68($a1)
    ctx->pc = 0x248eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 4));
    // 0x248eb4: 0x8c64006c  lw          $a0, 0x6C($v1)
    ctx->pc = 0x248eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x248eb8: 0xaca4006c  sw          $a0, 0x6C($a1)
    ctx->pc = 0x248eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 4));
    // 0x248ebc: 0x8c640070  lw          $a0, 0x70($v1)
    ctx->pc = 0x248ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x248ec0: 0xaca40070  sw          $a0, 0x70($a1)
    ctx->pc = 0x248ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 4));
    // 0x248ec4: 0x8c640074  lw          $a0, 0x74($v1)
    ctx->pc = 0x248ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x248ec8: 0xaca40074  sw          $a0, 0x74($a1)
    ctx->pc = 0x248ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 4));
    // 0x248ecc: 0x8c640078  lw          $a0, 0x78($v1)
    ctx->pc = 0x248eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x248ed0: 0xaca40078  sw          $a0, 0x78($a1)
    ctx->pc = 0x248ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 4));
    // 0x248ed4: 0x8c63007c  lw          $v1, 0x7C($v1)
    ctx->pc = 0x248ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x248ed8: 0xaca3007c  sw          $v1, 0x7C($a1)
    ctx->pc = 0x248ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 3));
    // 0x248edc: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x248edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x248ee0: 0x94a60008  lhu         $a2, 0x8($a1)
    ctx->pc = 0x248ee0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x248ee4: 0x94a4000a  lhu         $a0, 0xA($a1)
    ctx->pc = 0x248ee4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x248ee8: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x248ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x248eec: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x248eecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x248ef0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x248ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x248ef4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x248ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x248ef8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x248ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x248efc: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x248efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x248f00: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x248f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x248f04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x248f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x248f08: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x248f08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x248f0c: 0x0  nop
    ctx->pc = 0x248f0cu;
    // NOP
label_248f10:
    // 0x248f10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x248f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x248f14: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x248f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x248f18: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x248f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x248f1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x248f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x248f20: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x248F20u;
    {
        const bool branch_taken_0x248f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x248f20) {
            ctx->pc = 0x248F60u;
            goto label_248f60;
        }
    }
    ctx->pc = 0x248F28u;
    // 0x248f28: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x248f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x248f2c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x248f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x248f30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x248f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x248f34: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x248f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x248f38: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x248f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x248f3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x248f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x248f40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x248f44: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x248f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248f48: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x248f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x248f4c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x248f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x248f50: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x248F50u;
    SET_GPR_U32(ctx, 31, 0x248F58u);
    ctx->pc = 0x248F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248F50u;
            // 0x248f54: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F58u; }
        if (ctx->pc != 0x248F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F58u; }
        if (ctx->pc != 0x248F58u) { return; }
    }
    ctx->pc = 0x248F58u;
label_248f58:
    // 0x248f58: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x248f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x248f5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x248f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_248f60:
    // 0x248f60: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x248f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x248f64: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x248f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x248f68: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x248f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x248f6c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x248F6Cu;
    {
        const bool branch_taken_0x248f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x248f6c) {
            ctx->pc = 0x248FB8u;
            goto label_248fb8;
        }
    }
    ctx->pc = 0x248F74u;
    // 0x248f74: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x248f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x248f78: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x248f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x248f7c: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x248F7Cu;
    {
        const bool branch_taken_0x248f7c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x248F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248F7Cu;
            // 0x248f80: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f7c) {
            ctx->pc = 0x248FA0u;
            goto label_248fa0;
        }
    }
    ctx->pc = 0x248F84u;
    // 0x248f84: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x248f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x248f88: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x248f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x248f8c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x248f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x248f90: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x248f90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x248f94: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x248F94u;
    {
        const bool branch_taken_0x248f94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x248f94) {
            ctx->pc = 0x248FB8u;
            goto label_248fb8;
        }
    }
    ctx->pc = 0x248F9Cu;
    // 0x248f9c: 0x0  nop
    ctx->pc = 0x248f9cu;
    // NOP
label_248fa0:
    // 0x248fa0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x248fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x248fa4: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x248fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x248fa8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x248fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x248fac: 0xc0a72c0  jal         func_29CB00
    ctx->pc = 0x248FACu;
    SET_GPR_U32(ctx, 31, 0x248FB4u);
    ctx->pc = 0x248FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248FACu;
            // 0x248fb0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CB00u;
    if (runtime->hasFunction(0x29CB00u)) {
        auto targetFn = runtime->lookupFunction(0x29CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248FB4u; }
        if (ctx->pc != 0x248FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CB00_0x29cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248FB4u; }
        if (ctx->pc != 0x248FB4u) { return; }
    }
    ctx->pc = 0x248FB4u;
label_248fb4:
    // 0x248fb4: 0x0  nop
    ctx->pc = 0x248fb4u;
    // NOP
label_248fb8:
    // 0x248fb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x248fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x248fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x248FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248FC0u;
            // 0x248fc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x248FC8u;
    // 0x248fc8: 0x0  nop
    ctx->pc = 0x248fc8u;
    // NOP
    // 0x248fcc: 0x0  nop
    ctx->pc = 0x248fccu;
    // NOP
}
