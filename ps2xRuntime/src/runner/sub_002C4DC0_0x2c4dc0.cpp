#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C4DC0
// Address: 0x2c4dc0 - 0x2c4f60
void sub_002C4DC0_0x2c4dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4DC0_0x2c4dc0");
#endif

    switch (ctx->pc) {
        case 0x2c4e14u: goto label_2c4e14;
        case 0x2c4e1cu: goto label_2c4e1c;
        default: break;
    }

    ctx->pc = 0x2c4dc0u;

    // 0x2c4dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c4dc4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c4dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c4dc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c4dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c4dcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c4dccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c4dd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c4dd4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c4dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c4dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c4ddc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c4ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2c4de0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c4de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c4de4: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2c4de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2c4de8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c4de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2c4dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4df0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c4df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2c4df4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c4df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4df8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2c4df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2c4dfc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c4dfcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c4e00: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2c4e00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4e04: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c4e04u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2c4e08: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2c4e08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c4e0c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2C4E0Cu;
    SET_GPR_U32(ctx, 31, 0x2C4E14u);
    ctx->pc = 0x2C4E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4E0Cu;
            // 0x2c4e10: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E14u; }
        if (ctx->pc != 0x2C4E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E14u; }
        if (ctx->pc != 0x2C4E14u) { return; }
    }
    ctx->pc = 0x2C4E14u;
label_2c4e14:
    // 0x2c4e14: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2C4E14u;
    SET_GPR_U32(ctx, 31, 0x2C4E1Cu);
    ctx->pc = 0x2C4E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4E14u;
            // 0x2c4e18: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E1Cu; }
        if (ctx->pc != 0x2C4E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4E1Cu; }
        if (ctx->pc != 0x2C4E1Cu) { return; }
    }
    ctx->pc = 0x2C4E1Cu;
label_2c4e1c:
    // 0x2c4e1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c4e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c4e20: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2c4e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x2c4e24: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x2c4e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2c4e28: 0x3c11006a  lui         $s1, 0x6A
    ctx->pc = 0x2c4e28u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)106 << 16));
    // 0x2c4e2c: 0x3c19006a  lui         $t9, 0x6A
    ctx->pc = 0x2c4e2cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)106 << 16));
    // 0x2c4e30: 0x2463c560  addiu       $v1, $v1, -0x3AA0
    ctx->pc = 0x2c4e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952288));
    // 0x2c4e34: 0x26312290  addiu       $s1, $s1, 0x2290
    ctx->pc = 0x2c4e34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8848));
    // 0x2c4e38: 0x273922d0  addiu       $t9, $t9, 0x22D0
    ctx->pc = 0x2c4e38u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8912));
    // 0x2c4e3c: 0x8c840788  lw          $a0, 0x788($a0)
    ctx->pc = 0x2c4e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1928)));
    // 0x2c4e40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c4e44: 0x24422280  addiu       $v0, $v0, 0x2280
    ctx->pc = 0x2c4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8832));
    // 0x2c4e48: 0x24180002  addiu       $t8, $zero, 0x2
    ctx->pc = 0x2c4e48u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4e4c: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x2c4e4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c4e50: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2c4e50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4e54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c4e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c4e58: 0x3c0dc000  lui         $t5, 0xC000
    ctx->pc = 0x2c4e58u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)49152 << 16));
    // 0x2c4e5c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2c4e5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c4e60: 0x3c0c41f0  lui         $t4, 0x41F0
    ctx->pc = 0x2c4e60u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16880 << 16));
    // 0x2c4e64: 0x3c0b4416  lui         $t3, 0x4416
    ctx->pc = 0x2c4e64u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17430 << 16));
    // 0x2c4e68: 0x3c0a4396  lui         $t2, 0x4396
    ctx->pc = 0x2c4e68u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17302 << 16));
    // 0x2c4e6c: 0x2409012c  addiu       $t1, $zero, 0x12C
    ctx->pc = 0x2c4e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2c4e70: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2c4e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c4e74: 0xa204004d  sb          $a0, 0x4D($s0)
    ctx->pc = 0x2c4e74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c4e78: 0x24070073  addiu       $a3, $zero, 0x73
    ctx->pc = 0x2c4e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x2c4e7c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2c4e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x2c4e80: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x2c4e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x2c4e84: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2c4e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2c4e88: 0x3c0642b4  lui         $a2, 0x42B4
    ctx->pc = 0x2c4e88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17076 << 16));
    // 0x2c4e8c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2c4e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2c4e90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c4e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c4e94: 0xae190054  sw          $t9, 0x54($s0)
    ctx->pc = 0x2c4e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 25));
    // 0x2c4e98: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2c4e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2c4e9c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2c4e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2c4ea0: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x2c4ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
    // 0x2c4ea4: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2c4ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2c4ea8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c4ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4eac: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2c4eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2c4eb0: 0xa2180064  sb          $t8, 0x64($s0)
    ctx->pc = 0x2c4eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 24));
    // 0x2c4eb4: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x2c4eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4eb8: 0xa20f0066  sb          $t7, 0x66($s0)
    ctx->pc = 0x2c4eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 15));
    // 0x2c4ebc: 0xa20e0067  sb          $t6, 0x67($s0)
    ctx->pc = 0x2c4ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 14));
    // 0x2c4ec0: 0xa2180068  sb          $t8, 0x68($s0)
    ctx->pc = 0x2c4ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 24));
    // 0x2c4ec4: 0xa20e0069  sb          $t6, 0x69($s0)
    ctx->pc = 0x2c4ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 14));
    // 0x2c4ec8: 0xa218006a  sb          $t8, 0x6A($s0)
    ctx->pc = 0x2c4ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 24));
    // 0x2c4ecc: 0xa20e006b  sb          $t6, 0x6B($s0)
    ctx->pc = 0x2c4eccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 14));
    // 0x2c4ed0: 0xae0d006c  sw          $t5, 0x6C($s0)
    ctx->pc = 0x2c4ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 13));
    // 0x2c4ed4: 0xae0c0070  sw          $t4, 0x70($s0)
    ctx->pc = 0x2c4ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 12));
    // 0x2c4ed8: 0xae0d0074  sw          $t5, 0x74($s0)
    ctx->pc = 0x2c4ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 13));
    // 0x2c4edc: 0xae0b0078  sw          $t3, 0x78($s0)
    ctx->pc = 0x2c4edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 11));
    // 0x2c4ee0: 0xae0d007c  sw          $t5, 0x7C($s0)
    ctx->pc = 0x2c4ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 13));
    // 0x2c4ee4: 0xae0a0080  sw          $t2, 0x80($s0)
    ctx->pc = 0x2c4ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 10));
    // 0x2c4ee8: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2c4ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x2c4eec: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2c4eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x2c4ef0: 0xae0e008c  sw          $t6, 0x8C($s0)
    ctx->pc = 0x2c4ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 14));
    // 0x2c4ef4: 0xa20e0090  sb          $t6, 0x90($s0)
    ctx->pc = 0x2c4ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 14));
    // 0x2c4ef8: 0xae090094  sw          $t1, 0x94($s0)
    ctx->pc = 0x2c4ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 9));
    // 0x2c4efc: 0xae080098  sw          $t0, 0x98($s0)
    ctx->pc = 0x2c4efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 8));
    // 0x2c4f00: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2c4f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2c4f04: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2c4f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2c4f08: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2c4f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2c4f0c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2c4f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2c4f10: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2c4f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x2c4f14: 0xae0700b0  sw          $a3, 0xB0($s0)
    ctx->pc = 0x2c4f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 7));
    // 0x2c4f18: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x2c4f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x2c4f1c: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x2c4f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x2c4f20: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x2c4f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x2c4f24: 0xae0600c4  sw          $a2, 0xC4($s0)
    ctx->pc = 0x2c4f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 6));
    // 0x2c4f28: 0xae0e00c8  sw          $t6, 0xC8($s0)
    ctx->pc = 0x2c4f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 14));
    // 0x2c4f2c: 0xa20500cc  sb          $a1, 0xCC($s0)
    ctx->pc = 0x2c4f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c4f30: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x2c4f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x2c4f34: 0x80a5007a  lb          $a1, 0x7A($a1)
    ctx->pc = 0x2c4f34u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 122)));
    // 0x2c4f38: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x2c4f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2c4f3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c4f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c4f40: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2c4f40u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c4f44: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2c4f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c4f48: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x2c4f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x2c4f4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c4f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4f50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4f54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4f58: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4F58u;
            // 0x2c4f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C4F60u;
}
