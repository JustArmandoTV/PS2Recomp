#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162D00
// Address: 0x162d00 - 0x162de0
void sub_00162D00_0x162d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162D00_0x162d00");
#endif

    switch (ctx->pc) {
        case 0x162d00u: goto label_162d00;
        case 0x162d04u: goto label_162d04;
        case 0x162d08u: goto label_162d08;
        case 0x162d0cu: goto label_162d0c;
        case 0x162d10u: goto label_162d10;
        case 0x162d14u: goto label_162d14;
        case 0x162d18u: goto label_162d18;
        case 0x162d1cu: goto label_162d1c;
        case 0x162d20u: goto label_162d20;
        case 0x162d24u: goto label_162d24;
        case 0x162d28u: goto label_162d28;
        case 0x162d2cu: goto label_162d2c;
        case 0x162d30u: goto label_162d30;
        case 0x162d34u: goto label_162d34;
        case 0x162d38u: goto label_162d38;
        case 0x162d3cu: goto label_162d3c;
        case 0x162d40u: goto label_162d40;
        case 0x162d44u: goto label_162d44;
        case 0x162d48u: goto label_162d48;
        case 0x162d4cu: goto label_162d4c;
        case 0x162d50u: goto label_162d50;
        case 0x162d54u: goto label_162d54;
        case 0x162d58u: goto label_162d58;
        case 0x162d5cu: goto label_162d5c;
        case 0x162d60u: goto label_162d60;
        case 0x162d64u: goto label_162d64;
        case 0x162d68u: goto label_162d68;
        case 0x162d6cu: goto label_162d6c;
        case 0x162d70u: goto label_162d70;
        case 0x162d74u: goto label_162d74;
        case 0x162d78u: goto label_162d78;
        case 0x162d7cu: goto label_162d7c;
        case 0x162d80u: goto label_162d80;
        case 0x162d84u: goto label_162d84;
        case 0x162d88u: goto label_162d88;
        case 0x162d8cu: goto label_162d8c;
        case 0x162d90u: goto label_162d90;
        case 0x162d94u: goto label_162d94;
        case 0x162d98u: goto label_162d98;
        case 0x162d9cu: goto label_162d9c;
        case 0x162da0u: goto label_162da0;
        case 0x162da4u: goto label_162da4;
        case 0x162da8u: goto label_162da8;
        case 0x162dacu: goto label_162dac;
        case 0x162db0u: goto label_162db0;
        case 0x162db4u: goto label_162db4;
        case 0x162db8u: goto label_162db8;
        case 0x162dbcu: goto label_162dbc;
        case 0x162dc0u: goto label_162dc0;
        case 0x162dc4u: goto label_162dc4;
        case 0x162dc8u: goto label_162dc8;
        case 0x162dccu: goto label_162dcc;
        case 0x162dd0u: goto label_162dd0;
        case 0x162dd4u: goto label_162dd4;
        case 0x162dd8u: goto label_162dd8;
        case 0x162ddcu: goto label_162ddc;
        default: break;
    }

    ctx->pc = 0x162d00u;

label_162d00:
    // 0x162d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_162d04:
    // 0x162d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_162d08:
    // 0x162d08: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x162d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_162d0c:
    // 0x162d0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_162d10:
    if (ctx->pc == 0x162D10u) {
        ctx->pc = 0x162D10u;
            // 0x162d10: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->pc = 0x162D14u;
        goto label_162d14;
    }
    ctx->pc = 0x162D0Cu;
    {
        const bool branch_taken_0x162d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162D0Cu;
            // 0x162d10: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d0c) {
            ctx->pc = 0x162D20u;
            goto label_162d20;
        }
    }
    ctx->pc = 0x162D14u;
label_162d14:
    // 0x162d14: 0x8c435fc0  lw          $v1, 0x5FC0($v0)
    ctx->pc = 0x162d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24512)));
label_162d18:
    // 0x162d18: 0x60f809  jalr        $v1
label_162d1c:
    if (ctx->pc == 0x162D1Cu) {
        ctx->pc = 0x162D20u;
        goto label_162d20;
    }
    ctx->pc = 0x162D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x162D20u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x162D20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162D20u; }
            if (ctx->pc != 0x162D20u) { return; }
        }
        }
    }
    ctx->pc = 0x162D20u;
label_162d20:
    // 0x162d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162d24:
    // 0x162d24: 0x3e00008  jr          $ra
label_162d28:
    if (ctx->pc == 0x162D28u) {
        ctx->pc = 0x162D28u;
            // 0x162d28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x162D2Cu;
        goto label_162d2c;
    }
    ctx->pc = 0x162D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162D24u;
            // 0x162d28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162D2Cu;
label_162d2c:
    // 0x162d2c: 0x0  nop
    ctx->pc = 0x162d2cu;
    // NOP
label_162d30:
    // 0x162d30: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x162d30u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162d34:
    // 0x162d34: 0x8dc300c0  lw          $v1, 0xC0($t6)
    ctx->pc = 0x162d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 192)));
label_162d38:
    // 0x162d38: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_162d3c:
    if (ctx->pc == 0x162D3Cu) {
        ctx->pc = 0x162D3Cu;
            // 0x162d3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162D40u;
        goto label_162d40;
    }
    ctx->pc = 0x162D38u;
    {
        const bool branch_taken_0x162d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162D38u;
            // 0x162d3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d38) {
            ctx->pc = 0x162DD8u;
            goto label_162dd8;
        }
    }
    ctx->pc = 0x162D40u;
label_162d40:
    // 0x162d40: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x162d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_162d44:
    // 0x162d44: 0x8dcc003c  lw          $t4, 0x3C($t6)
    ctx->pc = 0x162d44u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 60)));
label_162d48:
    // 0x162d48: 0x8dcd0040  lw          $t5, 0x40($t6)
    ctx->pc = 0x162d48u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 64)));
label_162d4c:
    // 0x162d4c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x162d4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162d50:
    // 0x162d50: 0x8dcb0044  lw          $t3, 0x44($t6)
    ctx->pc = 0x162d50u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 68)));
label_162d54:
    // 0x162d54: 0x24090600  addiu       $t1, $zero, 0x600
    ctx->pc = 0x162d54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_162d58:
    // 0x162d58: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x162d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_162d5c:
    // 0x162d5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x162d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_162d60:
    // 0x162d60: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x162d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_162d64:
    // 0x162d64: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x162d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_162d68:
    // 0x162d68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x162d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162d6c:
    // 0x162d6c: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x162d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_162d70:
    // 0x162d70: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x162d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
label_162d74:
    // 0x162d74: 0xa1ca000e  sb          $t2, 0xE($t6)
    ctx->pc = 0x162d74u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 14), (uint8_t)GPR_U32(ctx, 10));
label_162d78:
    // 0x162d78: 0xa1c4000d  sb          $a0, 0xD($t6)
    ctx->pc = 0x162d78u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 13), (uint8_t)GPR_U32(ctx, 4));
label_162d7c:
    // 0x162d7c: 0xadc30018  sw          $v1, 0x18($t6)
    ctx->pc = 0x162d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 24), GPR_U32(ctx, 3));
label_162d80:
    // 0x162d80: 0xa1c5000f  sb          $a1, 0xF($t6)
    ctx->pc = 0x162d80u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 15), (uint8_t)GPR_U32(ctx, 5));
label_162d84:
    // 0x162d84: 0xa5c60098  sh          $a2, 0x98($t6)
    ctx->pc = 0x162d84u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 152), (uint16_t)GPR_U32(ctx, 6));
label_162d88:
    // 0x162d88: 0xadc70050  sw          $a3, 0x50($t6)
    ctx->pc = 0x162d88u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 80), GPR_U32(ctx, 7));
label_162d8c:
    // 0x162d8c: 0xadc80054  sw          $t0, 0x54($t6)
    ctx->pc = 0x162d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 84), GPR_U32(ctx, 8));
label_162d90:
    // 0x162d90: 0xadc90058  sw          $t1, 0x58($t6)
    ctx->pc = 0x162d90u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 88), GPR_U32(ctx, 9));
label_162d94:
    // 0x162d94: 0xadcc005c  sw          $t4, 0x5C($t6)
    ctx->pc = 0x162d94u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 92), GPR_U32(ctx, 12));
label_162d98:
    // 0x162d98: 0xadcd0060  sw          $t5, 0x60($t6)
    ctx->pc = 0x162d98u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 96), GPR_U32(ctx, 13));
label_162d9c:
    // 0x162d9c: 0xadcb0064  sw          $t3, 0x64($t6)
    ctx->pc = 0x162d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 100), GPR_U32(ctx, 11));
label_162da0:
    // 0x162da0: 0xadc00088  sw          $zero, 0x88($t6)
    ctx->pc = 0x162da0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 136), GPR_U32(ctx, 0));
label_162da4:
    // 0x162da4: 0xa5ca0002  sh          $t2, 0x2($t6)
    ctx->pc = 0x162da4u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 10));
label_162da8:
    // 0x162da8: 0xadc90010  sw          $t1, 0x10($t6)
    ctx->pc = 0x162da8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 9));
label_162dac:
    // 0x162dac: 0xadc0008c  sw          $zero, 0x8C($t6)
    ctx->pc = 0x162dacu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 140), GPR_U32(ctx, 0));
label_162db0:
    // 0x162db0: 0xa5c0001c  sh          $zero, 0x1C($t6)
    ctx->pc = 0x162db0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 28), (uint16_t)GPR_U32(ctx, 0));
label_162db4:
    // 0x162db4: 0xa5c00024  sh          $zero, 0x24($t6)
    ctx->pc = 0x162db4u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 36), (uint16_t)GPR_U32(ctx, 0));
label_162db8:
    // 0x162db8: 0xa5c00026  sh          $zero, 0x26($t6)
    ctx->pc = 0x162db8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 38), (uint16_t)GPR_U32(ctx, 0));
label_162dbc:
    // 0x162dbc: 0xadc00020  sw          $zero, 0x20($t6)
    ctx->pc = 0x162dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 32), GPR_U32(ctx, 0));
label_162dc0:
    // 0x162dc0: 0xadc00028  sw          $zero, 0x28($t6)
    ctx->pc = 0x162dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 40), GPR_U32(ctx, 0));
label_162dc4:
    // 0x162dc4: 0xadc0002c  sw          $zero, 0x2C($t6)
    ctx->pc = 0x162dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 44), GPR_U32(ctx, 0));
label_162dc8:
    // 0x162dc8: 0xadc00030  sw          $zero, 0x30($t6)
    ctx->pc = 0x162dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 48), GPR_U32(ctx, 0));
label_162dcc:
    // 0x162dcc: 0xadc00034  sw          $zero, 0x34($t6)
    ctx->pc = 0x162dccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 52), GPR_U32(ctx, 0));
label_162dd0:
    // 0x162dd0: 0xadc20014  sw          $v0, 0x14($t6)
    ctx->pc = 0x162dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 20), GPR_U32(ctx, 2));
label_162dd4:
    // 0x162dd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162dd8:
    // 0x162dd8: 0x3e00008  jr          $ra
label_162ddc:
    if (ctx->pc == 0x162DDCu) {
        ctx->pc = 0x162DE0u;
        goto label_fallthrough_0x162dd8;
    }
    ctx->pc = 0x162DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x162dd8:
    ctx->pc = 0x162DE0u;
}
