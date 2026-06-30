#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185D08
// Address: 0x185d08 - 0x185ef8
void sub_00185D08_0x185d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185D08_0x185d08");
#endif

    switch (ctx->pc) {
        case 0x185d08u: goto label_185d08;
        case 0x185d0cu: goto label_185d0c;
        case 0x185d10u: goto label_185d10;
        case 0x185d14u: goto label_185d14;
        case 0x185d18u: goto label_185d18;
        case 0x185d1cu: goto label_185d1c;
        case 0x185d20u: goto label_185d20;
        case 0x185d24u: goto label_185d24;
        case 0x185d28u: goto label_185d28;
        case 0x185d2cu: goto label_185d2c;
        case 0x185d30u: goto label_185d30;
        case 0x185d34u: goto label_185d34;
        case 0x185d38u: goto label_185d38;
        case 0x185d3cu: goto label_185d3c;
        case 0x185d40u: goto label_185d40;
        case 0x185d44u: goto label_185d44;
        case 0x185d48u: goto label_185d48;
        case 0x185d4cu: goto label_185d4c;
        case 0x185d50u: goto label_185d50;
        case 0x185d54u: goto label_185d54;
        case 0x185d58u: goto label_185d58;
        case 0x185d5cu: goto label_185d5c;
        case 0x185d60u: goto label_185d60;
        case 0x185d64u: goto label_185d64;
        case 0x185d68u: goto label_185d68;
        case 0x185d6cu: goto label_185d6c;
        case 0x185d70u: goto label_185d70;
        case 0x185d74u: goto label_185d74;
        case 0x185d78u: goto label_185d78;
        case 0x185d7cu: goto label_185d7c;
        case 0x185d80u: goto label_185d80;
        case 0x185d84u: goto label_185d84;
        case 0x185d88u: goto label_185d88;
        case 0x185d8cu: goto label_185d8c;
        case 0x185d90u: goto label_185d90;
        case 0x185d94u: goto label_185d94;
        case 0x185d98u: goto label_185d98;
        case 0x185d9cu: goto label_185d9c;
        case 0x185da0u: goto label_185da0;
        case 0x185da4u: goto label_185da4;
        case 0x185da8u: goto label_185da8;
        case 0x185dacu: goto label_185dac;
        case 0x185db0u: goto label_185db0;
        case 0x185db4u: goto label_185db4;
        case 0x185db8u: goto label_185db8;
        case 0x185dbcu: goto label_185dbc;
        case 0x185dc0u: goto label_185dc0;
        case 0x185dc4u: goto label_185dc4;
        case 0x185dc8u: goto label_185dc8;
        case 0x185dccu: goto label_185dcc;
        case 0x185dd0u: goto label_185dd0;
        case 0x185dd4u: goto label_185dd4;
        case 0x185dd8u: goto label_185dd8;
        case 0x185ddcu: goto label_185ddc;
        case 0x185de0u: goto label_185de0;
        case 0x185de4u: goto label_185de4;
        case 0x185de8u: goto label_185de8;
        case 0x185decu: goto label_185dec;
        case 0x185df0u: goto label_185df0;
        case 0x185df4u: goto label_185df4;
        case 0x185df8u: goto label_185df8;
        case 0x185dfcu: goto label_185dfc;
        case 0x185e00u: goto label_185e00;
        case 0x185e04u: goto label_185e04;
        case 0x185e08u: goto label_185e08;
        case 0x185e0cu: goto label_185e0c;
        case 0x185e10u: goto label_185e10;
        case 0x185e14u: goto label_185e14;
        case 0x185e18u: goto label_185e18;
        case 0x185e1cu: goto label_185e1c;
        case 0x185e20u: goto label_185e20;
        case 0x185e24u: goto label_185e24;
        case 0x185e28u: goto label_185e28;
        case 0x185e2cu: goto label_185e2c;
        case 0x185e30u: goto label_185e30;
        case 0x185e34u: goto label_185e34;
        case 0x185e38u: goto label_185e38;
        case 0x185e3cu: goto label_185e3c;
        case 0x185e40u: goto label_185e40;
        case 0x185e44u: goto label_185e44;
        case 0x185e48u: goto label_185e48;
        case 0x185e4cu: goto label_185e4c;
        case 0x185e50u: goto label_185e50;
        case 0x185e54u: goto label_185e54;
        case 0x185e58u: goto label_185e58;
        case 0x185e5cu: goto label_185e5c;
        case 0x185e60u: goto label_185e60;
        case 0x185e64u: goto label_185e64;
        case 0x185e68u: goto label_185e68;
        case 0x185e6cu: goto label_185e6c;
        case 0x185e70u: goto label_185e70;
        case 0x185e74u: goto label_185e74;
        case 0x185e78u: goto label_185e78;
        case 0x185e7cu: goto label_185e7c;
        case 0x185e80u: goto label_185e80;
        case 0x185e84u: goto label_185e84;
        case 0x185e88u: goto label_185e88;
        case 0x185e8cu: goto label_185e8c;
        case 0x185e90u: goto label_185e90;
        case 0x185e94u: goto label_185e94;
        case 0x185e98u: goto label_185e98;
        case 0x185e9cu: goto label_185e9c;
        case 0x185ea0u: goto label_185ea0;
        case 0x185ea4u: goto label_185ea4;
        case 0x185ea8u: goto label_185ea8;
        case 0x185eacu: goto label_185eac;
        case 0x185eb0u: goto label_185eb0;
        case 0x185eb4u: goto label_185eb4;
        case 0x185eb8u: goto label_185eb8;
        case 0x185ebcu: goto label_185ebc;
        case 0x185ec0u: goto label_185ec0;
        case 0x185ec4u: goto label_185ec4;
        case 0x185ec8u: goto label_185ec8;
        case 0x185eccu: goto label_185ecc;
        case 0x185ed0u: goto label_185ed0;
        case 0x185ed4u: goto label_185ed4;
        case 0x185ed8u: goto label_185ed8;
        case 0x185edcu: goto label_185edc;
        case 0x185ee0u: goto label_185ee0;
        case 0x185ee4u: goto label_185ee4;
        case 0x185ee8u: goto label_185ee8;
        case 0x185eecu: goto label_185eec;
        case 0x185ef0u: goto label_185ef0;
        case 0x185ef4u: goto label_185ef4;
        default: break;
    }

    ctx->pc = 0x185d08u;

label_185d08:
    // 0x185d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_185d0c:
    // 0x185d0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x185d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_185d10:
    // 0x185d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x185d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_185d14:
    // 0x185d14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x185d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_185d18:
    // 0x185d18: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x185d18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_185d1c:
    // 0x185d1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_185d20:
    // 0x185d20: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_185d24:
    if (ctx->pc == 0x185D24u) {
        ctx->pc = 0x185D24u;
            // 0x185d24: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185D28u;
        goto label_185d28;
    }
    ctx->pc = 0x185D20u;
    {
        const bool branch_taken_0x185d20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x185D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185D20u;
            // 0x185d24: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d20) {
            ctx->pc = 0x185D50u;
            goto label_185d50;
        }
    }
    ctx->pc = 0x185D28u;
label_185d28:
    // 0x185d28: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x185d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_185d2c:
    // 0x185d2c: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_185d30:
    // 0x185d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185d34:
    // 0x185d34: 0x24847bf0  addiu       $a0, $a0, 0x7BF0
    ctx->pc = 0x185d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31728));
label_185d38:
    // 0x185d38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x185d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_185d3c:
    // 0x185d3c: 0x24a57ae8  addiu       $a1, $a1, 0x7AE8
    ctx->pc = 0x185d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31464));
label_185d40:
    // 0x185d40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_185d44:
    // 0x185d44: 0x806151c  j           func_185470
label_185d48:
    if (ctx->pc == 0x185D48u) {
        ctx->pc = 0x185D48u;
            // 0x185d48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x185D4Cu;
        goto label_185d4c;
    }
    ctx->pc = 0x185D44u;
    ctx->pc = 0x185D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185D44u;
            // 0x185d48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185470u;
    if (runtime->hasFunction(0x185470u)) {
        auto targetFn = runtime->lookupFunction(0x185470u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00185470_0x185470(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185D4Cu;
label_185d4c:
    // 0x185d4c: 0x0  nop
    ctx->pc = 0x185d4cu;
    // NOP
label_185d50:
    // 0x185d50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x185d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_185d54:
    // 0x185d54: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_185d58:
    if (ctx->pc == 0x185D58u) {
        ctx->pc = 0x185D58u;
            // 0x185d58: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x185D5Cu;
        goto label_185d5c;
    }
    ctx->pc = 0x185D54u;
    {
        const bool branch_taken_0x185d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185d54) {
            ctx->pc = 0x185D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185D54u;
            // 0x185d58: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185D80u;
            goto label_185d80;
        }
    }
    ctx->pc = 0x185D5Cu;
label_185d5c:
    // 0x185d5c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x185d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_185d60:
    // 0x185d60: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_185d64:
    // 0x185d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185d68:
    // 0x185d68: 0x24847c00  addiu       $a0, $a0, 0x7C00
    ctx->pc = 0x185d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31744));
label_185d6c:
    // 0x185d6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x185d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_185d70:
    // 0x185d70: 0x24a57b68  addiu       $a1, $a1, 0x7B68
    ctx->pc = 0x185d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31592));
label_185d74:
    // 0x185d74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_185d78:
    // 0x185d78: 0x806151c  j           func_185470
label_185d7c:
    if (ctx->pc == 0x185D7Cu) {
        ctx->pc = 0x185D7Cu;
            // 0x185d7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x185D80u;
        goto label_185d80;
    }
    ctx->pc = 0x185D78u;
    ctx->pc = 0x185D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185D78u;
            // 0x185d7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185470u;
    if (runtime->hasFunction(0x185470u)) {
        auto targetFn = runtime->lookupFunction(0x185470u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00185470_0x185470(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185D80u;
label_185d80:
    // 0x185d80: 0x18600043  blez        $v1, . + 4 + (0x43 << 2)
label_185d84:
    if (ctx->pc == 0x185D84u) {
        ctx->pc = 0x185D84u;
            // 0x185d84: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185D88u;
        goto label_185d88;
    }
    ctx->pc = 0x185D80u;
    {
        const bool branch_taken_0x185d80 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x185D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185D80u;
            // 0x185d84: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d80) {
            ctx->pc = 0x185E90u;
            goto label_185e90;
        }
    }
    ctx->pc = 0x185D88u;
label_185d88:
    // 0x185d88: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x185d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_185d8c:
    // 0x185d8c: 0x10a00040  beqz        $a1, . + 4 + (0x40 << 2)
label_185d90:
    if (ctx->pc == 0x185D90u) {
        ctx->pc = 0x185D90u;
            // 0x185d90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x185D94u;
        goto label_185d94;
    }
    ctx->pc = 0x185D8Cu;
    {
        const bool branch_taken_0x185d8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185D8Cu;
            // 0x185d90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d8c) {
            ctx->pc = 0x185E90u;
            goto label_185e90;
        }
    }
    ctx->pc = 0x185D94u;
label_185d94:
    // 0x185d94: 0x1482002e  bne         $a0, $v0, . + 4 + (0x2E << 2)
label_185d98:
    if (ctx->pc == 0x185D98u) {
        ctx->pc = 0x185D9Cu;
        goto label_185d9c;
    }
    ctx->pc = 0x185D94u;
    {
        const bool branch_taken_0x185d94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x185d94) {
            ctx->pc = 0x185E50u;
            goto label_185e50;
        }
    }
    ctx->pc = 0x185D9Cu;
label_185d9c:
    // 0x185d9c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x185d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_185da0:
    // 0x185da0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_185da4:
    if (ctx->pc == 0x185DA4u) {
        ctx->pc = 0x185DA4u;
            // 0x185da4: 0x8e08001c  lw          $t0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x185DA8u;
        goto label_185da8;
    }
    ctx->pc = 0x185DA0u;
    {
        const bool branch_taken_0x185da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185da0) {
            ctx->pc = 0x185DA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185DA0u;
            // 0x185da4: 0x8e08001c  lw          $t0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185DC0u;
            goto label_185dc0;
        }
    }
    ctx->pc = 0x185DA8u;
label_185da8:
    // 0x185da8: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x185da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_185dac:
    // 0x185dac: 0x40f809  jalr        $v0
label_185db0:
    if (ctx->pc == 0x185DB0u) {
        ctx->pc = 0x185DB0u;
            // 0x185db0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185DB4u;
        goto label_185db4;
    }
    ctx->pc = 0x185DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185DB4u);
        ctx->pc = 0x185DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185DACu;
            // 0x185db0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185DB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185DB4u; }
            if (ctx->pc != 0x185DB4u) { return; }
        }
        }
    }
    ctx->pc = 0x185DB4u;
label_185db4:
    // 0x185db4: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x185db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_185db8:
    // 0x185db8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x185db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_185dbc:
    // 0x185dbc: 0x8e08001c  lw          $t0, 0x1C($s0)
    ctx->pc = 0x185dbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_185dc0:
    // 0x185dc0: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x185dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_185dc4:
    // 0x185dc4: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x185dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_185dc8:
    // 0x185dc8: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x185dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_185dcc:
    // 0x185dcc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_185dd0:
    if (ctx->pc == 0x185DD0u) {
        ctx->pc = 0x185DD0u;
            // 0x185dd0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x185DD4u;
        goto label_185dd4;
    }
    ctx->pc = 0x185DCCu;
    {
        const bool branch_taken_0x185dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185DCCu;
            // 0x185dd0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185dcc) {
            ctx->pc = 0x185E00u;
            goto label_185e00;
        }
    }
    ctx->pc = 0x185DD4u;
label_185dd4:
    // 0x185dd4: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x185dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_185dd8:
    // 0x185dd8: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x185dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_185ddc:
    // 0x185ddc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x185ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_185de0:
    // 0x185de0: 0xe2300b  movn        $a2, $a3, $v0
    ctx->pc = 0x185de0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
label_185de4:
    // 0x185de4: 0xc04a508  jal         func_129420
label_185de8:
    if (ctx->pc == 0x185DE8u) {
        ctx->pc = 0x185DE8u;
            // 0x185de8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->pc = 0x185DECu;
        goto label_185dec;
    }
    ctx->pc = 0x185DE4u;
    SET_GPR_U32(ctx, 31, 0x185DECu);
    ctx->pc = 0x185DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185DE4u;
            // 0x185de8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DECu; }
        if (ctx->pc != 0x185DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DECu; }
        if (ctx->pc != 0x185DECu) { return; }
    }
    ctx->pc = 0x185DECu;
label_185dec:
    // 0x185dec: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x185decu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_185df0:
    // 0x185df0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x185df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_185df4:
    // 0x185df4: 0x8e08001c  lw          $t0, 0x1C($s0)
    ctx->pc = 0x185df4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_185df8:
    // 0x185df8: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x185df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_185dfc:
    // 0x185dfc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x185dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_185e00:
    // 0x185e00: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x185e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_185e04:
    // 0x185e04: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x185e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_185e08:
    // 0x185e08: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_185e0c:
    if (ctx->pc == 0x185E0Cu) {
        ctx->pc = 0x185E0Cu;
            // 0x185e0c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x185E10u;
        goto label_185e10;
    }
    ctx->pc = 0x185E08u;
    {
        const bool branch_taken_0x185e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185e08) {
            ctx->pc = 0x185E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185E08u;
            // 0x185e0c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185E34u;
            goto label_185e34;
        }
    }
    ctx->pc = 0x185E10u;
label_185e10:
    // 0x185e10: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x185e10u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_185e14:
    // 0x185e14: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x185e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_185e18:
    // 0x185e18: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x185e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_185e1c:
    // 0x185e1c: 0xe2300b  movn        $a2, $a3, $v0
    ctx->pc = 0x185e1cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
label_185e20:
    // 0x185e20: 0x662823  subu        $a1, $v1, $a2
    ctx->pc = 0x185e20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_185e24:
    // 0x185e24: 0xc04a508  jal         func_129420
label_185e28:
    if (ctx->pc == 0x185E28u) {
        ctx->pc = 0x185E28u;
            // 0x185e28: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x185E2Cu;
        goto label_185e2c;
    }
    ctx->pc = 0x185E24u;
    SET_GPR_U32(ctx, 31, 0x185E2Cu);
    ctx->pc = 0x185E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185E24u;
            // 0x185e28: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E2Cu; }
        if (ctx->pc != 0x185E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E2Cu; }
        if (ctx->pc != 0x185E2Cu) { return; }
    }
    ctx->pc = 0x185E2Cu;
label_185e2c:
    // 0x185e2c: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x185e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_185e30:
    // 0x185e30: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x185e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_185e34:
    // 0x185e34: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x185e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_185e38:
    // 0x185e38: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x185e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_185e3c:
    // 0x185e3c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x185e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_185e40:
    // 0x185e40: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x185e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_185e44:
    // 0x185e44: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x185e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_185e48:
    // 0x185e48: 0x10000011  b           . + 4 + (0x11 << 2)
label_185e4c:
    if (ctx->pc == 0x185E4Cu) {
        ctx->pc = 0x185E4Cu;
            // 0x185e4c: 0xae040034  sw          $a0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
        ctx->pc = 0x185E50u;
        goto label_185e50;
    }
    ctx->pc = 0x185E48u;
    {
        const bool branch_taken_0x185e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185E48u;
            // 0x185e4c: 0xae040034  sw          $a0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e48) {
            ctx->pc = 0x185E90u;
            goto label_185e90;
        }
    }
    ctx->pc = 0x185E50u;
label_185e50:
    // 0x185e50: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
label_185e54:
    if (ctx->pc == 0x185E54u) {
        ctx->pc = 0x185E54u;
            // 0x185e54: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x185E58u;
        goto label_185e58;
    }
    ctx->pc = 0x185E50u;
    {
        const bool branch_taken_0x185e50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x185e50) {
            ctx->pc = 0x185E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185E50u;
            // 0x185e54: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185E78u;
            goto label_185e78;
        }
    }
    ctx->pc = 0x185E58u;
label_185e58:
    // 0x185e58: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x185e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_185e5c:
    // 0x185e5c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x185e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_185e60:
    // 0x185e60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_185e64:
    // 0x185e64: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x185e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_185e68:
    // 0x185e68: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x185e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_185e6c:
    // 0x185e6c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x185e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_185e70:
    // 0x185e70: 0x10000007  b           . + 4 + (0x7 << 2)
label_185e74:
    if (ctx->pc == 0x185E74u) {
        ctx->pc = 0x185E74u;
            // 0x185e74: 0xae04002c  sw          $a0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        ctx->pc = 0x185E78u;
        goto label_185e78;
    }
    ctx->pc = 0x185E70u;
    {
        const bool branch_taken_0x185e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185E70u;
            // 0x185e74: 0xae04002c  sw          $a0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e70) {
            ctx->pc = 0x185E90u;
            goto label_185e90;
        }
    }
    ctx->pc = 0x185E78u;
label_185e78:
    // 0x185e78: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x185e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_185e7c:
    // 0x185e7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_185e80:
    if (ctx->pc == 0x185E80u) {
        ctx->pc = 0x185E80u;
            // 0x185e80: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x185E84u;
        goto label_185e84;
    }
    ctx->pc = 0x185E7Cu;
    {
        const bool branch_taken_0x185e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185E7Cu;
            // 0x185e80: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e7c) {
            ctx->pc = 0x185E90u;
            goto label_185e90;
        }
    }
    ctx->pc = 0x185E84u;
label_185e84:
    // 0x185e84: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x185e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_185e88:
    // 0x185e88: 0x40f809  jalr        $v0
label_185e8c:
    if (ctx->pc == 0x185E8Cu) {
        ctx->pc = 0x185E8Cu;
            // 0x185e8c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x185E90u;
        goto label_185e90;
    }
    ctx->pc = 0x185E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185E90u);
        ctx->pc = 0x185E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185E88u;
            // 0x185e8c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185E90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185E90u; }
            if (ctx->pc != 0x185E90u) { return; }
        }
        }
    }
    ctx->pc = 0x185E90u;
label_185e90:
    // 0x185e90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185e90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185e94:
    // 0x185e94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x185e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_185e98:
    // 0x185e98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_185e9c:
    // 0x185e9c: 0x3e00008  jr          $ra
label_185ea0:
    if (ctx->pc == 0x185EA0u) {
        ctx->pc = 0x185EA0u;
            // 0x185ea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x185EA4u;
        goto label_185ea4;
    }
    ctx->pc = 0x185E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185E9Cu;
            // 0x185ea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185EA4u;
label_185ea4:
    // 0x185ea4: 0x0  nop
    ctx->pc = 0x185ea4u;
    // NOP
label_185ea8:
    // 0x185ea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_185eac:
    // 0x185eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x185eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_185eb0:
    // 0x185eb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x185eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_185eb4:
    // 0x185eb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x185eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_185eb8:
    // 0x185eb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x185eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_185ebc:
    // 0x185ebc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x185ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_185ec0:
    // 0x185ec0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x185ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_185ec4:
    // 0x185ec4: 0xc06127c  jal         func_1849F0
label_185ec8:
    if (ctx->pc == 0x185EC8u) {
        ctx->pc = 0x185EC8u;
            // 0x185ec8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185ECCu;
        goto label_185ecc;
    }
    ctx->pc = 0x185EC4u;
    SET_GPR_U32(ctx, 31, 0x185ECCu);
    ctx->pc = 0x185EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185EC4u;
            // 0x185ec8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185ECCu; }
        if (ctx->pc != 0x185ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185ECCu; }
        if (ctx->pc != 0x185ECCu) { return; }
    }
    ctx->pc = 0x185ECCu;
label_185ecc:
    // 0x185ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_185ed0:
    // 0x185ed0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x185ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_185ed4:
    // 0x185ed4: 0xc0617be  jal         func_185EF8
label_185ed8:
    if (ctx->pc == 0x185ED8u) {
        ctx->pc = 0x185ED8u;
            // 0x185ed8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185EDCu;
        goto label_185edc;
    }
    ctx->pc = 0x185ED4u;
    SET_GPR_U32(ctx, 31, 0x185EDCu);
    ctx->pc = 0x185ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185ED4u;
            // 0x185ed8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185EF8u;
    if (runtime->hasFunction(0x185EF8u)) {
        auto targetFn = runtime->lookupFunction(0x185EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185EDCu; }
        if (ctx->pc != 0x185EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185EF8_0x185ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185EDCu; }
        if (ctx->pc != 0x185EDCu) { return; }
    }
    ctx->pc = 0x185EDCu;
label_185edc:
    // 0x185edc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185ee0:
    // 0x185ee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x185ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_185ee4:
    // 0x185ee4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x185ee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_185ee8:
    // 0x185ee8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x185ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_185eec:
    // 0x185eec: 0x8061282  j           func_184A08
label_185ef0:
    if (ctx->pc == 0x185EF0u) {
        ctx->pc = 0x185EF0u;
            // 0x185ef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x185EF4u;
        goto label_185ef4;
    }
    ctx->pc = 0x185EECu;
    ctx->pc = 0x185EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185EECu;
            // 0x185ef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185EF4u;
label_185ef4:
    // 0x185ef4: 0x0  nop
    ctx->pc = 0x185ef4u;
    // NOP
}
