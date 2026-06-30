#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224C50
// Address: 0x224c50 - 0x224ff0
void sub_00224C50_0x224c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224C50_0x224c50");
#endif

    switch (ctx->pc) {
        case 0x224fdcu: goto label_224fdc;
        default: break;
    }

    ctx->pc = 0x224c50u;

    // 0x224c50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x224c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x224c54: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x224c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x224c58: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x224c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x224c5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x224c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x224c60: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x224c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x224c64: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x224c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x224c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224c6c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x224c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x224c70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x224c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x224c74: 0x2442ebb0  addiu       $v0, $v0, -0x1450
    ctx->pc = 0x224c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962096));
    // 0x224c78: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x224c78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x224c7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x224c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x224c80: 0x2442ebd0  addiu       $v0, $v0, -0x1430
    ctx->pc = 0x224c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962128));
    // 0x224c84: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x224c84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x224c88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x224c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x224c8c: 0x2442ec10  addiu       $v0, $v0, -0x13F0
    ctx->pc = 0x224c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962192));
    // 0x224c90: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x224c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x224c94: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x224c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x224c98: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x224c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x224c9c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x224c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x224ca0: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x224ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x224ca4: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x224ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x224ca8: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x224ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
    // 0x224cac: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x224cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x224cb0: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x224cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x224cb4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x224cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x224cb8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x224cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x224cbc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x224cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x224cc0: 0xac83005c  sw          $v1, 0x5C($a0)
    ctx->pc = 0x224cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
    // 0x224cc4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x224cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x224cc8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x224cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x224ccc: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x224cccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x224cd0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x224cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x224cd4: 0x3445ffee  ori         $a1, $v0, 0xFFEE
    ctx->pc = 0x224cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x224cd8: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x224cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x224cdc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x224cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ce0: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x224ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x224ce4: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x224ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x224ce8: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x224ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x224cec: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x224cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x224cf0: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x224cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x224cf4: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x224cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x224cf8: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x224cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x224cfc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x224cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x224d00: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x224d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x224d04: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x224d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x224d08: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x224d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x224d0c: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x224d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x224d10: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x224d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x224d14: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x224d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x224d18: 0x3e00008  jr          $ra
    ctx->pc = 0x224D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224D18u;
            // 0x224d1c: 0xac83004c  sw          $v1, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224D20u;
    // 0x224d20: 0x3e00008  jr          $ra
    ctx->pc = 0x224D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224D20u;
            // 0x224d24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224D28u;
    // 0x224d28: 0x0  nop
    ctx->pc = 0x224d28u;
    // NOP
    // 0x224d2c: 0x0  nop
    ctx->pc = 0x224d2cu;
    // NOP
    // 0x224d30: 0xc4c90100  lwc1        $f9, 0x100($a2)
    ctx->pc = 0x224d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x224d34: 0x24c300b0  addiu       $v1, $a2, 0xB0
    ctx->pc = 0x224d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
    // 0x224d38: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x224d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224d3c: 0x24670040  addiu       $a3, $v1, 0x40
    ctx->pc = 0x224d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x224d40: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x224d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224d44: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x224d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x224d48: 0xc4c00104  lwc1        $f0, 0x104($a2)
    ctx->pc = 0x224d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224d4c: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x224d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x224d50: 0x460911c1  sub.s       $f7, $f2, $f9
    ctx->pc = 0x224d50u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
    // 0x224d54: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x224d54u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x224d58: 0xc4a30018  lwc1        $f3, 0x18($a1)
    ctx->pc = 0x224d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x224d5c: 0xc4c20108  lwc1        $f2, 0x108($a2)
    ctx->pc = 0x224d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224d60: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x224d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224d64: 0xc4c00120  lwc1        $f0, 0x120($a2)
    ctx->pc = 0x224d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224d68: 0x46021941  sub.s       $f5, $f3, $f2
    ctx->pc = 0x224d68u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x224d6c: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x224d6cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x224d70: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x224d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x224d74: 0xc4c20124  lwc1        $f2, 0x124($a2)
    ctx->pc = 0x224d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224d78: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x224d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224d7c: 0xc4c00128  lwc1        $f0, 0x128($a2)
    ctx->pc = 0x224d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224d80: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x224d80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x224d84: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x224d84u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x224d88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x224d88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x224d8c: 0x4604201e  madda.s     $f4, $f4
    ctx->pc = 0x224d8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x224d90: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x224d90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x224d94: 0xc4a00054  lwc1        $f0, 0x54($a1)
    ctx->pc = 0x224d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224d98: 0xc4c1012c  lwc1        $f1, 0x12C($a2)
    ctx->pc = 0x224d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224d9c: 0xc4a2002c  lwc1        $f2, 0x2C($a1)
    ctx->pc = 0x224d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224da0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x224da0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x224da4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x224da4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x224da8: 0x4601089c  madd.s      $f2, $f1, $f1
    ctx->pc = 0x224da8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x224dac: 0x4606301a  mula.s      $f6, $f6
    ctx->pc = 0x224dacu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x224db0: 0x4607381e  madda.s     $f7, $f7
    ctx->pc = 0x224db0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[7]));
    // 0x224db4: 0x4605285c  madd.s      $f1, $f5, $f5
    ctx->pc = 0x224db4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x224db8: 0xc4c80150  lwc1        $f8, 0x150($a2)
    ctx->pc = 0x224db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x224dbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224dc0: 0x46024002  mul.s       $f0, $f8, $f2
    ctx->pc = 0x224dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x224dc4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x224DC4u;
    {
        const bool branch_taken_0x224dc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224DC4u;
            // 0x224dc8: 0x46004042  mul.s       $f1, $f8, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224dc4) {
            ctx->pc = 0x224DECu;
            goto label_224dec;
        }
    }
    ctx->pc = 0x224DCCu;
    // 0x224dcc: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x224dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224dd0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x224dd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x224dd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224dd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224dd8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x224DD8u;
    {
        const bool branch_taken_0x224dd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224dd8) {
            ctx->pc = 0x224DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224DD8u;
            // 0x224ddc: 0xe4a90010  swc1        $f9, 0x10($a1) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x224DF0u;
            goto label_224df0;
        }
    }
    ctx->pc = 0x224DE0u;
    // 0x224de0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x224de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224de4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x224DE4u;
    {
        const bool branch_taken_0x224de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224DE4u;
            // 0x224de8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224de4) {
            ctx->pc = 0x224E2Cu;
            goto label_224e2c;
        }
    }
    ctx->pc = 0x224DECu;
label_224dec:
    // 0x224dec: 0xe4a90010  swc1        $f9, 0x10($a1)
    ctx->pc = 0x224decu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_224df0:
    // 0x224df0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x224df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224df4: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x224df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x224df8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x224df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224dfc: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x224dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x224e00: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x224e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224e04: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x224e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x224e08: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x224e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224e0c: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x224e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x224e10: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x224e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224e14: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x224e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x224e18: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x224e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224e1c: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x224e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x224e20: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x224e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224e24: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x224e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x224e28: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x224e28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_224e2c:
    // 0x224e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x224E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224E34u;
    // 0x224e34: 0x0  nop
    ctx->pc = 0x224e34u;
    // NOP
    // 0x224e38: 0x0  nop
    ctx->pc = 0x224e38u;
    // NOP
    // 0x224e3c: 0x0  nop
    ctx->pc = 0x224e3cu;
    // NOP
    // 0x224e40: 0xc4c90100  lwc1        $f9, 0x100($a2)
    ctx->pc = 0x224e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x224e44: 0x24c300b0  addiu       $v1, $a2, 0xB0
    ctx->pc = 0x224e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
    // 0x224e48: 0xc4a20030  lwc1        $f2, 0x30($a1)
    ctx->pc = 0x224e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224e4c: 0x24670040  addiu       $a3, $v1, 0x40
    ctx->pc = 0x224e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x224e50: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x224e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224e54: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x224e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x224e58: 0xc4c00104  lwc1        $f0, 0x104($a2)
    ctx->pc = 0x224e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224e5c: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x224e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x224e60: 0x460911c1  sub.s       $f7, $f2, $f9
    ctx->pc = 0x224e60u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
    // 0x224e64: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x224e64u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x224e68: 0xc4a30038  lwc1        $f3, 0x38($a1)
    ctx->pc = 0x224e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x224e6c: 0xc4c20108  lwc1        $f2, 0x108($a2)
    ctx->pc = 0x224e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224e70: 0xc4a10040  lwc1        $f1, 0x40($a1)
    ctx->pc = 0x224e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224e74: 0xc4c00120  lwc1        $f0, 0x120($a2)
    ctx->pc = 0x224e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224e78: 0x46021941  sub.s       $f5, $f3, $f2
    ctx->pc = 0x224e78u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x224e7c: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x224e7cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x224e80: 0xc4a30044  lwc1        $f3, 0x44($a1)
    ctx->pc = 0x224e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x224e84: 0xc4c20124  lwc1        $f2, 0x124($a2)
    ctx->pc = 0x224e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224e88: 0xc4a10048  lwc1        $f1, 0x48($a1)
    ctx->pc = 0x224e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224e8c: 0xc4c00128  lwc1        $f0, 0x128($a2)
    ctx->pc = 0x224e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224e90: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x224e90u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x224e94: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x224e94u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x224e98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x224e98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x224e9c: 0x4604201e  madda.s     $f4, $f4
    ctx->pc = 0x224e9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x224ea0: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x224ea0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x224ea4: 0xc4a0005c  lwc1        $f0, 0x5C($a1)
    ctx->pc = 0x224ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224ea8: 0xc4c1012c  lwc1        $f1, 0x12C($a2)
    ctx->pc = 0x224ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224eac: 0xc4a2004c  lwc1        $f2, 0x4C($a1)
    ctx->pc = 0x224eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224eb0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x224eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x224eb4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x224eb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x224eb8: 0x4601089c  madd.s      $f2, $f1, $f1
    ctx->pc = 0x224eb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x224ebc: 0x4606301a  mula.s      $f6, $f6
    ctx->pc = 0x224ebcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x224ec0: 0x4607381e  madda.s     $f7, $f7
    ctx->pc = 0x224ec0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[7]));
    // 0x224ec4: 0x4605285c  madd.s      $f1, $f5, $f5
    ctx->pc = 0x224ec4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x224ec8: 0xc4c80150  lwc1        $f8, 0x150($a2)
    ctx->pc = 0x224ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x224ecc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224eccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224ed0: 0x46024002  mul.s       $f0, $f8, $f2
    ctx->pc = 0x224ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x224ed4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x224ED4u;
    {
        const bool branch_taken_0x224ed4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224ED4u;
            // 0x224ed8: 0x46004042  mul.s       $f1, $f8, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ed4) {
            ctx->pc = 0x224EFCu;
            goto label_224efc;
        }
    }
    ctx->pc = 0x224EDCu;
    // 0x224edc: 0xc4a00060  lwc1        $f0, 0x60($a1)
    ctx->pc = 0x224edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224ee0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x224ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x224ee4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224ee8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x224EE8u;
    {
        const bool branch_taken_0x224ee8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224ee8) {
            ctx->pc = 0x224EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224EE8u;
            // 0x224eec: 0xe4a90030  swc1        $f9, 0x30($a1) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x224F00u;
            goto label_224f00;
        }
    }
    ctx->pc = 0x224EF0u;
    // 0x224ef0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x224ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224ef4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x224EF4u;
    {
        const bool branch_taken_0x224ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224EF4u;
            // 0x224ef8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ef4) {
            ctx->pc = 0x224F3Cu;
            goto label_224f3c;
        }
    }
    ctx->pc = 0x224EFCu;
label_224efc:
    // 0x224efc: 0xe4a90030  swc1        $f9, 0x30($a1)
    ctx->pc = 0x224efcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_224f00:
    // 0x224f00: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x224f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224f04: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x224f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x224f08: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x224f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224f0c: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x224f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x224f10: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x224f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224f14: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x224f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x224f18: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x224f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224f1c: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x224f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x224f20: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x224f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224f24: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x224f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x224f28: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x224f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224f2c: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x224f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x224f30: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x224f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224f34: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x224f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x224f38: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x224f38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_224f3c:
    // 0x224f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x224F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224F44u;
    // 0x224f44: 0x0  nop
    ctx->pc = 0x224f44u;
    // NOP
    // 0x224f48: 0x0  nop
    ctx->pc = 0x224f48u;
    // NOP
    // 0x224f4c: 0x0  nop
    ctx->pc = 0x224f4cu;
    // NOP
    // 0x224f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x224f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x224f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x224f5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f60: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x224F60u;
    {
        const bool branch_taken_0x224f60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x224f60) {
            ctx->pc = 0x224F64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224F60u;
            // 0x224f64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224FE0u;
            goto label_224fe0;
        }
    }
    ctx->pc = 0x224F68u;
    // 0x224f68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x224f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x224f6c: 0x2442ec10  addiu       $v0, $v0, -0x13F0
    ctx->pc = 0x224f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962192));
    // 0x224f70: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x224F70u;
    {
        const bool branch_taken_0x224f70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224F70u;
            // 0x224f74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f70) {
            ctx->pc = 0x224FB4u;
            goto label_224fb4;
        }
    }
    ctx->pc = 0x224F78u;
    // 0x224f78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x224f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x224f7c: 0x2442ebd0  addiu       $v0, $v0, -0x1430
    ctx->pc = 0x224f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962128));
    // 0x224f80: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x224F80u;
    {
        const bool branch_taken_0x224f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224F80u;
            // 0x224f84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f80) {
            ctx->pc = 0x224FB4u;
            goto label_224fb4;
        }
    }
    ctx->pc = 0x224F88u;
    // 0x224f88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x224f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x224f8c: 0x2442ebb0  addiu       $v0, $v0, -0x1450
    ctx->pc = 0x224f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962096));
    // 0x224f90: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x224F90u;
    {
        const bool branch_taken_0x224f90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224F90u;
            // 0x224f94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f90) {
            ctx->pc = 0x224FB4u;
            goto label_224fb4;
        }
    }
    ctx->pc = 0x224F98u;
    // 0x224f98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x224f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x224f9c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x224f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x224fa0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x224FA0u;
    {
        const bool branch_taken_0x224fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x224FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224FA0u;
            // 0x224fa4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224fa0) {
            ctx->pc = 0x224FB4u;
            goto label_224fb4;
        }
    }
    ctx->pc = 0x224FA8u;
    // 0x224fa8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x224fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x224fac: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x224facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x224fb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x224fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_224fb4:
    // 0x224fb4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x224fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x224fb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x224fb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x224fbc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x224FBCu;
    {
        const bool branch_taken_0x224fbc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x224fbc) {
            ctx->pc = 0x224FDCu;
            goto label_224fdc;
        }
    }
    ctx->pc = 0x224FC4u;
    // 0x224fc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x224fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x224fc8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x224fc8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224fcc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x224fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x224fd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x224fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224fd4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x224FD4u;
    SET_GPR_U32(ctx, 31, 0x224FDCu);
    ctx->pc = 0x224FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224FD4u;
            // 0x224fd8: 0x24070029  addiu       $a3, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224FDCu; }
        if (ctx->pc != 0x224FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224FDCu; }
        if (ctx->pc != 0x224FDCu) { return; }
    }
    ctx->pc = 0x224FDCu;
label_224fdc:
    // 0x224fdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x224fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224fe0:
    // 0x224fe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224fe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x224FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224FE8u;
            // 0x224fec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224FF0u;
}
