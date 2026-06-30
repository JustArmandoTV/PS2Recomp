#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234940
// Address: 0x234940 - 0x234ac0
void sub_00234940_0x234940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234940_0x234940");
#endif

    ctx->pc = 0x234940u;

    // 0x234940: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x234940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x234944: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x234944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234948: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x234948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x23494c: 0x3c06c3fa  lui         $a2, 0xC3FA
    ctx->pc = 0x23494cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50170 << 16));
    // 0x234950: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x234950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x234954: 0x3c0743fa  lui         $a3, 0x43FA
    ctx->pc = 0x234954u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17402 << 16));
    // 0x234958: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x234958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x23495c: 0x240b00fa  addiu       $t3, $zero, 0xFA
    ctx->pc = 0x23495cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x234960: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x234960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x234964: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x234964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x234968: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x234968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x23496c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x23496cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x234970: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x234970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x234974: 0xa4850006  sh          $a1, 0x6($a0)
    ctx->pc = 0x234974u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x234978: 0x2442d370  addiu       $v0, $v0, -0x2C90
    ctx->pc = 0x234978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955888));
    // 0x23497c: 0x3c0c4348  lui         $t4, 0x4348
    ctx->pc = 0x23497cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)17224 << 16));
    // 0x234980: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x234980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x234984: 0x3c02c11c  lui         $v0, 0xC11C
    ctx->pc = 0x234984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49436 << 16));
    // 0x234988: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x234988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x23498c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23498cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x234990: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x234990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x234994: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x234994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x234998: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x234998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x23499c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x23499cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2349a0: 0xa08500b6  sb          $a1, 0xB6($a0)
    ctx->pc = 0x2349a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 182), (uint8_t)GPR_U32(ctx, 5));
    // 0x2349a4: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x2349a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x2349a8: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x2349a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
    // 0x2349ac: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2349acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x2349b0: 0xac860034  sw          $a2, 0x34($a0)
    ctx->pc = 0x2349b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x2349b4: 0x344a999a  ori         $t2, $v0, 0x999A
    ctx->pc = 0x2349b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2349b8: 0xac860038  sw          $a2, 0x38($a0)
    ctx->pc = 0x2349b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 6));
    // 0x2349bc: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2349bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x2349c0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2349c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2349c4: 0x3446ffee  ori         $a2, $v0, 0xFFEE
    ctx->pc = 0x2349c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x2349c8: 0xac870040  sw          $a3, 0x40($a0)
    ctx->pc = 0x2349c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 7));
    // 0x2349cc: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x2349ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x2349d0: 0xac870044  sw          $a3, 0x44($a0)
    ctx->pc = 0x2349d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 7));
    // 0x2349d4: 0x344824dd  ori         $t0, $v0, 0x24DD
    ctx->pc = 0x2349d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9437);
    // 0x2349d8: 0xac870048  sw          $a3, 0x48($a0)
    ctx->pc = 0x2349d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 7));
    // 0x2349dc: 0x3c023f32  lui         $v0, 0x3F32
    ctx->pc = 0x2349dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16178 << 16));
    // 0x2349e0: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2349e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x2349e4: 0x3447b021  ori         $a3, $v0, 0xB021
    ctx->pc = 0x2349e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45089);
    // 0x2349e8: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x2349e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x2349ec: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2349ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2349f0: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x2349f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x2349f4: 0x344ecccd  ori         $t6, $v0, 0xCCCD
    ctx->pc = 0x2349f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2349f8: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x2349f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x2349fc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2349fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x234a00: 0xac8b0060  sw          $t3, 0x60($a0)
    ctx->pc = 0x234a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 11));
    // 0x234a04: 0x344dcccd  ori         $t5, $v0, 0xCCCD
    ctx->pc = 0x234a04u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x234a08: 0xac8a0074  sw          $t2, 0x74($a0)
    ctx->pc = 0x234a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 10));
    // 0x234a0c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x234a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x234a10: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x234a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
    // 0x234a14: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x234a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x234a18: 0xac89007c  sw          $t1, 0x7C($a0)
    ctx->pc = 0x234a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 9));
    // 0x234a1c: 0x3446d70a  ori         $a2, $v0, 0xD70A
    ctx->pc = 0x234a1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x234a20: 0xac850080  sw          $a1, 0x80($a0)
    ctx->pc = 0x234a20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
    // 0x234a24: 0x3c023d08  lui         $v0, 0x3D08
    ctx->pc = 0x234a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15624 << 16));
    // 0x234a28: 0xa0800084  sb          $zero, 0x84($a0)
    ctx->pc = 0x234a28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x234a2c: 0x344b8889  ori         $t3, $v0, 0x8889
    ctx->pc = 0x234a2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x234a30: 0xac880088  sw          $t0, 0x88($a0)
    ctx->pc = 0x234a30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 8));
    // 0x234a34: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x234a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x234a38: 0xac87008c  sw          $a3, 0x8C($a0)
    ctx->pc = 0x234a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 7));
    // 0x234a3c: 0x344ad70a  ori         $t2, $v0, 0xD70A
    ctx->pc = 0x234a3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x234a40: 0xa0800090  sb          $zero, 0x90($a0)
    ctx->pc = 0x234a40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x234a44: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x234a44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x234a48: 0xac8e0050  sw          $t6, 0x50($a0)
    ctx->pc = 0x234a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 14));
    // 0x234a4c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x234a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x234a50: 0xa0800028  sb          $zero, 0x28($a0)
    ctx->pc = 0x234a50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x234a54: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x234a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234a58: 0xac8d00b0  sw          $t5, 0xB0($a0)
    ctx->pc = 0x234a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 13));
    // 0x234a5c: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x234a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x234a60: 0xac8600ac  sw          $a2, 0xAC($a0)
    ctx->pc = 0x234a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 6));
    // 0x234a64: 0xac8c005c  sw          $t4, 0x5C($a0)
    ctx->pc = 0x234a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 12));
    // 0x234a68: 0x3446b717  ori         $a2, $v0, 0xB717
    ctx->pc = 0x234a68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x234a6c: 0xac8b0064  sw          $t3, 0x64($a0)
    ctx->pc = 0x234a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 11));
    // 0x234a70: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x234a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234a74: 0xac8a0094  sw          $t2, 0x94($a0)
    ctx->pc = 0x234a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 10));
    // 0x234a78: 0xa0800091  sb          $zero, 0x91($a0)
    ctx->pc = 0x234a78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 145), (uint8_t)GPR_U32(ctx, 0));
    // 0x234a7c: 0xac890098  sw          $t1, 0x98($a0)
    ctx->pc = 0x234a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 9));
    // 0x234a80: 0xa08500b4  sb          $a1, 0xB4($a0)
    ctx->pc = 0x234a80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 180), (uint8_t)GPR_U32(ctx, 5));
    // 0x234a84: 0xa08500a7  sb          $a1, 0xA7($a0)
    ctx->pc = 0x234a84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 167), (uint8_t)GPR_U32(ctx, 5));
    // 0x234a88: 0xa08000a8  sb          $zero, 0xA8($a0)
    ctx->pc = 0x234a88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 168), (uint8_t)GPR_U32(ctx, 0));
    // 0x234a8c: 0xac8800b8  sw          $t0, 0xB8($a0)
    ctx->pc = 0x234a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 8));
    // 0x234a90: 0xac8e009c  sw          $t6, 0x9C($a0)
    ctx->pc = 0x234a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 14));
    // 0x234a94: 0xac8300a0  sw          $v1, 0xA0($a0)
    ctx->pc = 0x234a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 3));
    // 0x234a98: 0xa08000a4  sb          $zero, 0xA4($a0)
    ctx->pc = 0x234a98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 164), (uint8_t)GPR_U32(ctx, 0));
    // 0x234a9c: 0xa08000a5  sb          $zero, 0xA5($a0)
    ctx->pc = 0x234a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 165), (uint8_t)GPR_U32(ctx, 0));
    // 0x234aa0: 0xa08000a6  sb          $zero, 0xA6($a0)
    ctx->pc = 0x234aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 166), (uint8_t)GPR_U32(ctx, 0));
    // 0x234aa4: 0xa0870070  sb          $a3, 0x70($a0)
    ctx->pc = 0x234aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 7));
    // 0x234aa8: 0xa08700b5  sb          $a3, 0xB5($a0)
    ctx->pc = 0x234aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 181), (uint8_t)GPR_U32(ctx, 7));
    // 0x234aac: 0xac8600c0  sw          $a2, 0xC0($a0)
    ctx->pc = 0x234aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 6));
    // 0x234ab0: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x234ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x234ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x234AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234AB4u;
            // 0x234ab8: 0xa08500bc  sb          $a1, 0xBC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 188), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234ABCu;
    // 0x234abc: 0x0  nop
    ctx->pc = 0x234abcu;
    // NOP
}
