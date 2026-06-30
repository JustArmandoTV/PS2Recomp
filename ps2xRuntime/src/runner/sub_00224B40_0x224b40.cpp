#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224B40
// Address: 0x224b40 - 0x224c50
void sub_00224B40_0x224b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224B40_0x224b40");
#endif

    ctx->pc = 0x224b40u;

    // 0x224b40: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x224b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x224b44: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x224b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x224b48: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x224b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x224b4c: 0x344bcccd  ori         $t3, $v0, 0xCCCD
    ctx->pc = 0x224b4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x224b50: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x224b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x224b54: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x224b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x224b58: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x224b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x224b5c: 0x3449cccd  ori         $t1, $v0, 0xCCCD
    ctx->pc = 0x224b5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x224b60: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x224b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x224b64: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x224b64u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
    // 0x224b68: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x224b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x224b6c: 0x3c0a3f00  lui         $t2, 0x3F00
    ctx->pc = 0x224b6cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16128 << 16));
    // 0x224b70: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x224b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x224b74: 0x3c084348  lui         $t0, 0x4348
    ctx->pc = 0x224b74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17224 << 16));
    // 0x224b78: 0xac8c002c  sw          $t4, 0x2C($a0)
    ctx->pc = 0x224b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 12));
    // 0x224b7c: 0x3c07bf80  lui         $a3, 0xBF80
    ctx->pc = 0x224b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49024 << 16));
    // 0x224b80: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x224b80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x224b84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x224b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224b88: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x224b88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x224b8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x224b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x224b90: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x224b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x224b94: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x224b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x224b98: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x224b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x224b9c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x224b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ba0: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x224ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x224ba4: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x224ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x224ba8: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x224ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x224bac: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x224bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x224bb0: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x224bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x224bb4: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x224bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x224bb8: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x224bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x224bbc: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x224bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x224bc0: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x224bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x224bc4: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x224bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x224bc8: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x224bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x224bcc: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x224bccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x224bd0: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x224bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x224bd4: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x224bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x224bd8: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x224bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x224bdc: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x224bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x224be0: 0xac8c0050  sw          $t4, 0x50($a0)
    ctx->pc = 0x224be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 12));
    // 0x224be4: 0xac8c0064  sw          $t4, 0x64($a0)
    ctx->pc = 0x224be4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 12));
    // 0x224be8: 0xac8c0078  sw          $t4, 0x78($a0)
    ctx->pc = 0x224be8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 12));
    // 0x224bec: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x224becu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x224bf0: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x224bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x224bf4: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x224bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x224bf8: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x224bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x224bfc: 0xac8c0090  sw          $t4, 0x90($a0)
    ctx->pc = 0x224bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 12));
    // 0x224c00: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x224c00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x224c04: 0xac8b0098  sw          $t3, 0x98($a0)
    ctx->pc = 0x224c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 11));
    // 0x224c08: 0xac8a009c  sw          $t2, 0x9C($a0)
    ctx->pc = 0x224c08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 10));
    // 0x224c0c: 0xac8900a0  sw          $t1, 0xA0($a0)
    ctx->pc = 0x224c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 9));
    // 0x224c10: 0xac8800a4  sw          $t0, 0xA4($a0)
    ctx->pc = 0x224c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 8));
    // 0x224c14: 0xac8800a8  sw          $t0, 0xA8($a0)
    ctx->pc = 0x224c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 8));
    // 0x224c18: 0xac8700ac  sw          $a3, 0xAC($a0)
    ctx->pc = 0x224c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 7));
    // 0x224c1c: 0xa08600b0  sb          $a2, 0xB0($a0)
    ctx->pc = 0x224c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 176), (uint8_t)GPR_U32(ctx, 6));
    // 0x224c20: 0xa08500b1  sb          $a1, 0xB1($a0)
    ctx->pc = 0x224c20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 177), (uint8_t)GPR_U32(ctx, 5));
    // 0x224c24: 0xa08500b2  sb          $a1, 0xB2($a0)
    ctx->pc = 0x224c24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 178), (uint8_t)GPR_U32(ctx, 5));
    // 0x224c28: 0xa08000b3  sb          $zero, 0xB3($a0)
    ctx->pc = 0x224c28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 179), (uint8_t)GPR_U32(ctx, 0));
    // 0x224c2c: 0xa0860008  sb          $a2, 0x8($a0)
    ctx->pc = 0x224c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x224c30: 0xa483000a  sh          $v1, 0xA($a0)
    ctx->pc = 0x224c30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x224c34: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x224c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x224c38: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x224c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x224c3c: 0xa08000b4  sb          $zero, 0xB4($a0)
    ctx->pc = 0x224c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 180), (uint8_t)GPR_U32(ctx, 0));
    // 0x224c40: 0x3e00008  jr          $ra
    ctx->pc = 0x224C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224C40u;
            // 0x224c44: 0xa08000b5  sb          $zero, 0xB5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 181), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224C48u;
    // 0x224c48: 0x0  nop
    ctx->pc = 0x224c48u;
    // NOP
    // 0x224c4c: 0x0  nop
    ctx->pc = 0x224c4cu;
    // NOP
}
