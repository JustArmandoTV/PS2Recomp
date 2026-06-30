#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234D00
// Address: 0x234d00 - 0x234df0
void sub_00234D00_0x234d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234D00_0x234d00");
#endif

    ctx->pc = 0x234d00u;

    // 0x234d00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x234d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x234d04: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x234d04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x234d08: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x234d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x234d0c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x234d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x234d10: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x234d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x234d14: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x234d14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x234d18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x234d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x234d1c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x234d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x234d20: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x234d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x234d24: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x234d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x234d28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234d2c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x234d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x234d30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x234d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x234d34: 0x2442f0e0  addiu       $v0, $v0, -0xF20
    ctx->pc = 0x234d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963424));
    // 0x234d38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x234d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x234d3c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x234d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x234d40: 0x24620014  addiu       $v0, $v1, 0x14
    ctx->pc = 0x234d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x234d44: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x234d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x234d48: 0x624023  subu        $t0, $v1, $v0
    ctx->pc = 0x234d48u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234d4c: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x234d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x234d50: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x234d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x234d54: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x234d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x234d58: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x234d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x234d5c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x234d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x234d60: 0xac8a0014  sw          $t2, 0x14($a0)
    ctx->pc = 0x234d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 10));
    // 0x234d64: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x234d64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x234d68: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x234d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x234d6c: 0xa0860028  sb          $a2, 0x28($a0)
    ctx->pc = 0x234d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 6));
    // 0x234d70: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x234d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x234d74: 0xa0890029  sb          $t1, 0x29($a0)
    ctx->pc = 0x234d74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 9));
    // 0x234d78: 0xa0880029  sb          $t0, 0x29($a0)
    ctx->pc = 0x234d78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 8));
    // 0x234d7c: 0xa0800021  sb          $zero, 0x21($a0)
    ctx->pc = 0x234d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x234d80: 0xa4800022  sh          $zero, 0x22($a0)
    ctx->pc = 0x234d80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x234d84: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x234d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x234d88: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x234d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x234d8c: 0xac87003c  sw          $a3, 0x3C($a0)
    ctx->pc = 0x234d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 7));
    // 0x234d90: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x234d90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x234d94: 0xa4800044  sh          $zero, 0x44($a0)
    ctx->pc = 0x234d94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x234d98: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x234d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x234d9c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x234d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x234da0: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x234da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x234da4: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x234da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x234da8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x234DA8u;
    {
        const bool branch_taken_0x234da8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x234DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234DA8u;
            // 0x234dac: 0xa0820020  sb          $v0, 0x20($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234da8) {
            ctx->pc = 0x234DC8u;
            goto label_234dc8;
        }
    }
    ctx->pc = 0x234DB0u;
    // 0x234db0: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x234db0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x234db4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x234DB4u;
    {
        const bool branch_taken_0x234db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234db4) {
            ctx->pc = 0x234DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234DB4u;
            // 0x234db8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234DCCu;
            goto label_234dcc;
        }
    }
    ctx->pc = 0x234DBCu;
    // 0x234dbc: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x234dbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x234dc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x234dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x234dc4: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x234dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_234dc8:
    // 0x234dc8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x234dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234dcc:
    // 0x234dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x234DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234DD4u;
    // 0x234dd4: 0x0  nop
    ctx->pc = 0x234dd4u;
    // NOP
    // 0x234dd8: 0x0  nop
    ctx->pc = 0x234dd8u;
    // NOP
    // 0x234ddc: 0x0  nop
    ctx->pc = 0x234ddcu;
    // NOP
    // 0x234de0: 0x3e00008  jr          $ra
    ctx->pc = 0x234DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234DE0u;
            // 0x234de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234DE8u;
    // 0x234de8: 0x0  nop
    ctx->pc = 0x234de8u;
    // NOP
    // 0x234dec: 0x0  nop
    ctx->pc = 0x234decu;
    // NOP
}
