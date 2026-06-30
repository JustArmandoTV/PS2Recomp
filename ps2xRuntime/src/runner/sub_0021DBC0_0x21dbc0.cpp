#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021DBC0
// Address: 0x21dbc0 - 0x21dcc0
void sub_0021DBC0_0x21dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DBC0_0x21dbc0");
#endif

    ctx->pc = 0x21dbc0u;

    // 0x21dbc0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21dbc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21dbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21dbc8: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x21dbcc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21dbd0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21dbd4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x21dbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x21dbd8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21dbdc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x21dbe0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21dbe4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21dbe8: 0xa4850006  sh          $a1, 0x6($a0)
    ctx->pc = 0x21dbe8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x21dbec: 0x2442e950  addiu       $v0, $v0, -0x16B0
    ctx->pc = 0x21dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961488));
    // 0x21dbf0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21dbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21dbf4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21dbf8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x21dbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x21dbfc: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x21dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x21dc00: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21dc00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21dc04: 0xa4830010  sh          $v1, 0x10($a0)
    ctx->pc = 0x21dc04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x21dc08: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x21dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x21dc0c: 0xa4820080  sh          $v0, 0x80($a0)
    ctx->pc = 0x21dc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x21dc10: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x21dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21dc14: 0xa0850082  sb          $a1, 0x82($a0)
    ctx->pc = 0x21dc14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 130), (uint8_t)GPR_U32(ctx, 5));
    // 0x21dc18: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x21dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x21dc1c: 0xa4830090  sh          $v1, 0x90($a0)
    ctx->pc = 0x21dc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x21dc20: 0x34450fdb  ori         $a1, $v0, 0xFDB
    ctx->pc = 0x21dc20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x21dc24: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x21dc24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x21dc28: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x21dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x21dc2c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x21dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x21dc30: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x21dc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x21dc34: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x21dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x21dc38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21dc38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc3c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x21dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x21dc40: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x21dc40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x21dc44: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x21dc44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x21dc48: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x21dc48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x21dc4c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x21dc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x21dc50: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x21dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x21dc54: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x21dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x21dc58: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x21dc58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x21dc5c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x21dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x21dc60: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x21dc60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x21dc64: 0xac860034  sw          $a2, 0x34($a0)
    ctx->pc = 0x21dc64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x21dc68: 0xac860048  sw          $a2, 0x48($a0)
    ctx->pc = 0x21dc68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 6));
    // 0x21dc6c: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x21dc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x21dc70: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x21dc70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x21dc74: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x21dc74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x21dc78: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x21dc78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x21dc7c: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x21dc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x21dc80: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x21dc80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x21dc84: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x21dc84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x21dc88: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x21dc88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x21dc8c: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x21dc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x21dc90: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x21dc90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x21dc94: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x21dc94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x21dc98: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x21dc98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x21dc9c: 0xac860050  sw          $a2, 0x50($a0)
    ctx->pc = 0x21dc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 6));
    // 0x21dca0: 0xac860064  sw          $a2, 0x64($a0)
    ctx->pc = 0x21dca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 6));
    // 0x21dca4: 0xac860078  sw          $a2, 0x78($a0)
    ctx->pc = 0x21dca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 6));
    // 0x21dca8: 0xa0800092  sb          $zero, 0x92($a0)
    ctx->pc = 0x21dca8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 146), (uint8_t)GPR_U32(ctx, 0));
    // 0x21dcac: 0xa0800083  sb          $zero, 0x83($a0)
    ctx->pc = 0x21dcacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 131), (uint8_t)GPR_U32(ctx, 0));
    // 0x21dcb0: 0xac850084  sw          $a1, 0x84($a0)
    ctx->pc = 0x21dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 5));
    // 0x21dcb4: 0xac830088  sw          $v1, 0x88($a0)
    ctx->pc = 0x21dcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
    // 0x21dcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x21DCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DCB8u;
            // 0x21dcbc: 0xac86008c  sw          $a2, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DCC0u;
}
