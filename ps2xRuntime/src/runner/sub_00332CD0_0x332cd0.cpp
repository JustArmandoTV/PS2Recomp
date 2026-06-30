#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00332CD0
// Address: 0x332cd0 - 0x333000
void sub_00332CD0_0x332cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332CD0_0x332cd0");
#endif

    switch (ctx->pc) {
        case 0x332cd0u: goto label_332cd0;
        case 0x332cd4u: goto label_332cd4;
        case 0x332cd8u: goto label_332cd8;
        case 0x332cdcu: goto label_332cdc;
        case 0x332ce0u: goto label_332ce0;
        case 0x332ce4u: goto label_332ce4;
        case 0x332ce8u: goto label_332ce8;
        case 0x332cecu: goto label_332cec;
        case 0x332cf0u: goto label_332cf0;
        case 0x332cf4u: goto label_332cf4;
        case 0x332cf8u: goto label_332cf8;
        case 0x332cfcu: goto label_332cfc;
        case 0x332d00u: goto label_332d00;
        case 0x332d04u: goto label_332d04;
        case 0x332d08u: goto label_332d08;
        case 0x332d0cu: goto label_332d0c;
        case 0x332d10u: goto label_332d10;
        case 0x332d14u: goto label_332d14;
        case 0x332d18u: goto label_332d18;
        case 0x332d1cu: goto label_332d1c;
        case 0x332d20u: goto label_332d20;
        case 0x332d24u: goto label_332d24;
        case 0x332d28u: goto label_332d28;
        case 0x332d2cu: goto label_332d2c;
        case 0x332d30u: goto label_332d30;
        case 0x332d34u: goto label_332d34;
        case 0x332d38u: goto label_332d38;
        case 0x332d3cu: goto label_332d3c;
        case 0x332d40u: goto label_332d40;
        case 0x332d44u: goto label_332d44;
        case 0x332d48u: goto label_332d48;
        case 0x332d4cu: goto label_332d4c;
        case 0x332d50u: goto label_332d50;
        case 0x332d54u: goto label_332d54;
        case 0x332d58u: goto label_332d58;
        case 0x332d5cu: goto label_332d5c;
        case 0x332d60u: goto label_332d60;
        case 0x332d64u: goto label_332d64;
        case 0x332d68u: goto label_332d68;
        case 0x332d6cu: goto label_332d6c;
        case 0x332d70u: goto label_332d70;
        case 0x332d74u: goto label_332d74;
        case 0x332d78u: goto label_332d78;
        case 0x332d7cu: goto label_332d7c;
        case 0x332d80u: goto label_332d80;
        case 0x332d84u: goto label_332d84;
        case 0x332d88u: goto label_332d88;
        case 0x332d8cu: goto label_332d8c;
        case 0x332d90u: goto label_332d90;
        case 0x332d94u: goto label_332d94;
        case 0x332d98u: goto label_332d98;
        case 0x332d9cu: goto label_332d9c;
        case 0x332da0u: goto label_332da0;
        case 0x332da4u: goto label_332da4;
        case 0x332da8u: goto label_332da8;
        case 0x332dacu: goto label_332dac;
        case 0x332db0u: goto label_332db0;
        case 0x332db4u: goto label_332db4;
        case 0x332db8u: goto label_332db8;
        case 0x332dbcu: goto label_332dbc;
        case 0x332dc0u: goto label_332dc0;
        case 0x332dc4u: goto label_332dc4;
        case 0x332dc8u: goto label_332dc8;
        case 0x332dccu: goto label_332dcc;
        case 0x332dd0u: goto label_332dd0;
        case 0x332dd4u: goto label_332dd4;
        case 0x332dd8u: goto label_332dd8;
        case 0x332ddcu: goto label_332ddc;
        case 0x332de0u: goto label_332de0;
        case 0x332de4u: goto label_332de4;
        case 0x332de8u: goto label_332de8;
        case 0x332decu: goto label_332dec;
        case 0x332df0u: goto label_332df0;
        case 0x332df4u: goto label_332df4;
        case 0x332df8u: goto label_332df8;
        case 0x332dfcu: goto label_332dfc;
        case 0x332e00u: goto label_332e00;
        case 0x332e04u: goto label_332e04;
        case 0x332e08u: goto label_332e08;
        case 0x332e0cu: goto label_332e0c;
        case 0x332e10u: goto label_332e10;
        case 0x332e14u: goto label_332e14;
        case 0x332e18u: goto label_332e18;
        case 0x332e1cu: goto label_332e1c;
        case 0x332e20u: goto label_332e20;
        case 0x332e24u: goto label_332e24;
        case 0x332e28u: goto label_332e28;
        case 0x332e2cu: goto label_332e2c;
        case 0x332e30u: goto label_332e30;
        case 0x332e34u: goto label_332e34;
        case 0x332e38u: goto label_332e38;
        case 0x332e3cu: goto label_332e3c;
        case 0x332e40u: goto label_332e40;
        case 0x332e44u: goto label_332e44;
        case 0x332e48u: goto label_332e48;
        case 0x332e4cu: goto label_332e4c;
        case 0x332e50u: goto label_332e50;
        case 0x332e54u: goto label_332e54;
        case 0x332e58u: goto label_332e58;
        case 0x332e5cu: goto label_332e5c;
        case 0x332e60u: goto label_332e60;
        case 0x332e64u: goto label_332e64;
        case 0x332e68u: goto label_332e68;
        case 0x332e6cu: goto label_332e6c;
        case 0x332e70u: goto label_332e70;
        case 0x332e74u: goto label_332e74;
        case 0x332e78u: goto label_332e78;
        case 0x332e7cu: goto label_332e7c;
        case 0x332e80u: goto label_332e80;
        case 0x332e84u: goto label_332e84;
        case 0x332e88u: goto label_332e88;
        case 0x332e8cu: goto label_332e8c;
        case 0x332e90u: goto label_332e90;
        case 0x332e94u: goto label_332e94;
        case 0x332e98u: goto label_332e98;
        case 0x332e9cu: goto label_332e9c;
        case 0x332ea0u: goto label_332ea0;
        case 0x332ea4u: goto label_332ea4;
        case 0x332ea8u: goto label_332ea8;
        case 0x332eacu: goto label_332eac;
        case 0x332eb0u: goto label_332eb0;
        case 0x332eb4u: goto label_332eb4;
        case 0x332eb8u: goto label_332eb8;
        case 0x332ebcu: goto label_332ebc;
        case 0x332ec0u: goto label_332ec0;
        case 0x332ec4u: goto label_332ec4;
        case 0x332ec8u: goto label_332ec8;
        case 0x332eccu: goto label_332ecc;
        case 0x332ed0u: goto label_332ed0;
        case 0x332ed4u: goto label_332ed4;
        case 0x332ed8u: goto label_332ed8;
        case 0x332edcu: goto label_332edc;
        case 0x332ee0u: goto label_332ee0;
        case 0x332ee4u: goto label_332ee4;
        case 0x332ee8u: goto label_332ee8;
        case 0x332eecu: goto label_332eec;
        case 0x332ef0u: goto label_332ef0;
        case 0x332ef4u: goto label_332ef4;
        case 0x332ef8u: goto label_332ef8;
        case 0x332efcu: goto label_332efc;
        case 0x332f00u: goto label_332f00;
        case 0x332f04u: goto label_332f04;
        case 0x332f08u: goto label_332f08;
        case 0x332f0cu: goto label_332f0c;
        case 0x332f10u: goto label_332f10;
        case 0x332f14u: goto label_332f14;
        case 0x332f18u: goto label_332f18;
        case 0x332f1cu: goto label_332f1c;
        case 0x332f20u: goto label_332f20;
        case 0x332f24u: goto label_332f24;
        case 0x332f28u: goto label_332f28;
        case 0x332f2cu: goto label_332f2c;
        case 0x332f30u: goto label_332f30;
        case 0x332f34u: goto label_332f34;
        case 0x332f38u: goto label_332f38;
        case 0x332f3cu: goto label_332f3c;
        case 0x332f40u: goto label_332f40;
        case 0x332f44u: goto label_332f44;
        case 0x332f48u: goto label_332f48;
        case 0x332f4cu: goto label_332f4c;
        case 0x332f50u: goto label_332f50;
        case 0x332f54u: goto label_332f54;
        case 0x332f58u: goto label_332f58;
        case 0x332f5cu: goto label_332f5c;
        case 0x332f60u: goto label_332f60;
        case 0x332f64u: goto label_332f64;
        case 0x332f68u: goto label_332f68;
        case 0x332f6cu: goto label_332f6c;
        case 0x332f70u: goto label_332f70;
        case 0x332f74u: goto label_332f74;
        case 0x332f78u: goto label_332f78;
        case 0x332f7cu: goto label_332f7c;
        case 0x332f80u: goto label_332f80;
        case 0x332f84u: goto label_332f84;
        case 0x332f88u: goto label_332f88;
        case 0x332f8cu: goto label_332f8c;
        case 0x332f90u: goto label_332f90;
        case 0x332f94u: goto label_332f94;
        case 0x332f98u: goto label_332f98;
        case 0x332f9cu: goto label_332f9c;
        case 0x332fa0u: goto label_332fa0;
        case 0x332fa4u: goto label_332fa4;
        case 0x332fa8u: goto label_332fa8;
        case 0x332facu: goto label_332fac;
        case 0x332fb0u: goto label_332fb0;
        case 0x332fb4u: goto label_332fb4;
        case 0x332fb8u: goto label_332fb8;
        case 0x332fbcu: goto label_332fbc;
        case 0x332fc0u: goto label_332fc0;
        case 0x332fc4u: goto label_332fc4;
        case 0x332fc8u: goto label_332fc8;
        case 0x332fccu: goto label_332fcc;
        case 0x332fd0u: goto label_332fd0;
        case 0x332fd4u: goto label_332fd4;
        case 0x332fd8u: goto label_332fd8;
        case 0x332fdcu: goto label_332fdc;
        case 0x332fe0u: goto label_332fe0;
        case 0x332fe4u: goto label_332fe4;
        case 0x332fe8u: goto label_332fe8;
        case 0x332fecu: goto label_332fec;
        case 0x332ff0u: goto label_332ff0;
        case 0x332ff4u: goto label_332ff4;
        case 0x332ff8u: goto label_332ff8;
        case 0x332ffcu: goto label_332ffc;
        default: break;
    }

    ctx->pc = 0x332cd0u;

label_332cd0:
    // 0x332cd0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x332cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_332cd4:
    // 0x332cd4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x332cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_332cd8:
    // 0x332cd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x332cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_332cdc:
    // 0x332cdc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x332cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_332ce0:
    // 0x332ce0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x332ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_332ce4:
    // 0x332ce4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x332ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_332ce8:
    // 0x332ce8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x332ce8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_332cec:
    // 0x332cec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x332cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_332cf0:
    // 0x332cf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x332cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_332cf4:
    // 0x332cf4: 0x8c860968  lw          $a2, 0x968($a0)
    ctx->pc = 0x332cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_332cf8:
    // 0x332cf8: 0x90830c78  lbu         $v1, 0xC78($a0)
    ctx->pc = 0x332cf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3192)));
label_332cfc:
    // 0x332cfc: 0x8c5289e8  lw          $s2, -0x7618($v0)
    ctx->pc = 0x332cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_332d00:
    // 0x332d00: 0x10650099  beq         $v1, $a1, . + 4 + (0x99 << 2)
label_332d04:
    if (ctx->pc == 0x332D04u) {
        ctx->pc = 0x332D04u;
            // 0x332d04: 0x24c4ffff  addiu       $a0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->pc = 0x332D08u;
        goto label_332d08;
    }
    ctx->pc = 0x332D00u;
    {
        const bool branch_taken_0x332d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x332D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332D00u;
            // 0x332d04: 0x24c4ffff  addiu       $a0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332d00) {
            ctx->pc = 0x332F68u;
            goto label_332f68;
        }
    }
    ctx->pc = 0x332D08u;
label_332d08:
    // 0x332d08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x332d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_332d0c:
    // 0x332d0c: 0x5062004b  beql        $v1, $v0, . + 4 + (0x4B << 2)
label_332d10:
    if (ctx->pc == 0x332D10u) {
        ctx->pc = 0x332D10u;
            // 0x332d10: 0x82620c7a  lb          $v0, 0xC7A($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3194)));
        ctx->pc = 0x332D14u;
        goto label_332d14;
    }
    ctx->pc = 0x332D0Cu;
    {
        const bool branch_taken_0x332d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x332d0c) {
            ctx->pc = 0x332D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332D0Cu;
            // 0x332d10: 0x82620c7a  lb          $v0, 0xC7A($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3194)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x332E3Cu;
            goto label_332e3c;
        }
    }
    ctx->pc = 0x332D14u;
label_332d14:
    // 0x332d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x332d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_332d18:
    // 0x332d18: 0x50620040  beql        $v1, $v0, . + 4 + (0x40 << 2)
label_332d1c:
    if (ctx->pc == 0x332D1Cu) {
        ctx->pc = 0x332D1Cu;
            // 0x332d1c: 0x8e590004  lw          $t9, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x332D20u;
        goto label_332d20;
    }
    ctx->pc = 0x332D18u;
    {
        const bool branch_taken_0x332d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x332d18) {
            ctx->pc = 0x332D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332D18u;
            // 0x332d1c: 0x8e590004  lw          $t9, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x332E1Cu;
            goto label_332e1c;
        }
    }
    ctx->pc = 0x332D20u;
label_332d20:
    // 0x332d20: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_332d24:
    if (ctx->pc == 0x332D24u) {
        ctx->pc = 0x332D24u;
            // 0x332d24: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x332D28u;
        goto label_332d28;
    }
    ctx->pc = 0x332D20u;
    {
        const bool branch_taken_0x332d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x332d20) {
            ctx->pc = 0x332D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332D20u;
            // 0x332d24: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x332D30u;
            goto label_332d30;
        }
    }
    ctx->pc = 0x332D28u;
label_332d28:
    // 0x332d28: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_332d2c:
    if (ctx->pc == 0x332D2Cu) {
        ctx->pc = 0x332D2Cu;
            // 0x332d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332D30u;
        goto label_332d30;
    }
    ctx->pc = 0x332D28u;
    {
        const bool branch_taken_0x332d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332D28u;
            // 0x332d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332d28) {
            ctx->pc = 0x332FCCu;
            goto label_332fcc;
        }
    }
    ctx->pc = 0x332D30u;
label_332d30:
    // 0x332d30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x332d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_332d34:
    // 0x332d34: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x332d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_332d38:
    // 0x332d38: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x332d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_332d3c:
    // 0x332d3c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x332d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_332d40:
    // 0x332d40: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_332d44:
    if (ctx->pc == 0x332D44u) {
        ctx->pc = 0x332D48u;
        goto label_332d48;
    }
    ctx->pc = 0x332D40u;
    {
        const bool branch_taken_0x332d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x332d40) {
            ctx->pc = 0x332D58u;
            goto label_332d58;
        }
    }
    ctx->pc = 0x332D48u;
label_332d48:
    // 0x332d48: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x332d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_332d4c:
    // 0x332d4c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_332d50:
    if (ctx->pc == 0x332D50u) {
        ctx->pc = 0x332D54u;
        goto label_332d54;
    }
    ctx->pc = 0x332D4Cu;
    {
        const bool branch_taken_0x332d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x332d4c) {
            ctx->pc = 0x332D58u;
            goto label_332d58;
        }
    }
    ctx->pc = 0x332D54u;
label_332d54:
    // 0x332d54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x332d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_332d58:
    // 0x332d58: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x332d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_332d5c:
    // 0x332d5c: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x332d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_332d60:
    // 0x332d60: 0x24425180  addiu       $v0, $v0, 0x5180
    ctx->pc = 0x332d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20864));
label_332d64:
    // 0x332d64: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x332d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_332d68:
    // 0x332d68: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x332d68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_332d6c:
    // 0x332d6c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_332d70:
    if (ctx->pc == 0x332D70u) {
        ctx->pc = 0x332D74u;
        goto label_332d74;
    }
    ctx->pc = 0x332D6Cu;
    {
        const bool branch_taken_0x332d6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x332d6c) {
            ctx->pc = 0x332D80u;
            goto label_332d80;
        }
    }
    ctx->pc = 0x332D74u;
label_332d74:
    // 0x332d74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x332d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_332d78:
    // 0x332d78: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_332d7c:
    if (ctx->pc == 0x332D7Cu) {
        ctx->pc = 0x332D80u;
        goto label_332d80;
    }
    ctx->pc = 0x332D78u;
    {
        const bool branch_taken_0x332d78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x332d78) {
            ctx->pc = 0x332D94u;
            goto label_332d94;
        }
    }
    ctx->pc = 0x332D80u;
label_332d80:
    // 0x332d80: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_332d84:
    if (ctx->pc == 0x332D84u) {
        ctx->pc = 0x332D88u;
        goto label_332d88;
    }
    ctx->pc = 0x332D80u;
    {
        const bool branch_taken_0x332d80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x332d80) {
            ctx->pc = 0x332D94u;
            goto label_332d94;
        }
    }
    ctx->pc = 0x332D88u;
label_332d88:
    // 0x332d88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x332d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_332d8c:
    // 0x332d8c: 0x1000008e  b           . + 4 + (0x8E << 2)
label_332d90:
    if (ctx->pc == 0x332D90u) {
        ctx->pc = 0x332D90u;
            // 0x332d90: 0xa2620c78  sb          $v0, 0xC78($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 3192), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x332D94u;
        goto label_332d94;
    }
    ctx->pc = 0x332D8Cu;
    {
        const bool branch_taken_0x332d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332D8Cu;
            // 0x332d90: 0xa2620c78  sb          $v0, 0xC78($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 3192), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332d8c) {
            ctx->pc = 0x332FC8u;
            goto label_332fc8;
        }
    }
    ctx->pc = 0x332D94u;
label_332d94:
    // 0x332d94: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_332d98:
    if (ctx->pc == 0x332D98u) {
        ctx->pc = 0x332D98u;
            // 0x332d98: 0x2488000a  addiu       $t0, $a0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
        ctx->pc = 0x332D9Cu;
        goto label_332d9c;
    }
    ctx->pc = 0x332D94u;
    {
        const bool branch_taken_0x332d94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x332d94) {
            ctx->pc = 0x332D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332D94u;
            // 0x332d98: 0x2488000a  addiu       $t0, $a0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x332DC8u;
            goto label_332dc8;
        }
    }
    ctx->pc = 0x332D9Cu;
label_332d9c:
    // 0x332d9c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x332d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_332da0:
    // 0x332da0: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x332da0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
label_332da4:
    // 0x332da4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x332da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_332da8:
    // 0x332da8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x332da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_332dac:
    // 0x332dac: 0x24c6d2e0  addiu       $a2, $a2, -0x2D20
    ctx->pc = 0x332dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955744));
label_332db0:
    // 0x332db0: 0xc043be4  jal         func_10EF90
label_332db4:
    if (ctx->pc == 0x332DB4u) {
        ctx->pc = 0x332DB4u;
            // 0x332db4: 0x24e7d2f0  addiu       $a3, $a3, -0x2D10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955760));
        ctx->pc = 0x332DB8u;
        goto label_332db8;
    }
    ctx->pc = 0x332DB0u;
    SET_GPR_U32(ctx, 31, 0x332DB8u);
    ctx->pc = 0x332DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332DB0u;
            // 0x332db4: 0x24e7d2f0  addiu       $a3, $a3, -0x2D10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332DB8u; }
        if (ctx->pc != 0x332DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332DB8u; }
        if (ctx->pc != 0x332DB8u) { return; }
    }
    ctx->pc = 0x332DB8u;
label_332db8:
    // 0x332db8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x332db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_332dbc:
    // 0x332dbc: 0x24110660  addiu       $s1, $zero, 0x660
    ctx->pc = 0x332dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_332dc0:
    // 0x332dc0: 0x1000000c  b           . + 4 + (0xC << 2)
label_332dc4:
    if (ctx->pc == 0x332DC4u) {
        ctx->pc = 0x332DC4u;
            // 0x332dc4: 0x3447ef00  ori         $a3, $v0, 0xEF00 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61184);
        ctx->pc = 0x332DC8u;
        goto label_332dc8;
    }
    ctx->pc = 0x332DC0u;
    {
        const bool branch_taken_0x332dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332DC0u;
            // 0x332dc4: 0x3447ef00  ori         $a3, $v0, 0xEF00 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61184);
        ctx->in_delay_slot = false;
        if (branch_taken_0x332dc0) {
            ctx->pc = 0x332DF4u;
            goto label_332df4;
        }
    }
    ctx->pc = 0x332DC8u;
label_332dc8:
    // 0x332dc8: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x332dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_332dcc:
    // 0x332dcc: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x332dccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
label_332dd0:
    // 0x332dd0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x332dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_332dd4:
    // 0x332dd4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x332dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_332dd8:
    // 0x332dd8: 0x24c6d2f8  addiu       $a2, $a2, -0x2D08
    ctx->pc = 0x332dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955768));
label_332ddc:
    // 0x332ddc: 0xc043be4  jal         func_10EF90
label_332de0:
    if (ctx->pc == 0x332DE0u) {
        ctx->pc = 0x332DE0u;
            // 0x332de0: 0x24e7d2f0  addiu       $a3, $a3, -0x2D10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955760));
        ctx->pc = 0x332DE4u;
        goto label_332de4;
    }
    ctx->pc = 0x332DDCu;
    SET_GPR_U32(ctx, 31, 0x332DE4u);
    ctx->pc = 0x332DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332DDCu;
            // 0x332de0: 0x24e7d2f0  addiu       $a3, $a3, -0x2D10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332DE4u; }
        if (ctx->pc != 0x332DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332DE4u; }
        if (ctx->pc != 0x332DE4u) { return; }
    }
    ctx->pc = 0x332DE4u;
label_332de4:
    // 0x332de4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x332de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_332de8:
    // 0x332de8: 0x244251c0  addiu       $v0, $v0, 0x51C0
    ctx->pc = 0x332de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20928));
label_332dec:
    // 0x332dec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x332decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_332df0:
    // 0x332df0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x332df0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_332df4:
    // 0x332df4: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x332df4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_332df8:
    // 0x332df8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x332df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_332dfc:
    // 0x332dfc: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x332dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_332e00:
    // 0x332e00: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x332e00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_332e04:
    // 0x332e04: 0x320f809  jalr        $t9
label_332e08:
    if (ctx->pc == 0x332E08u) {
        ctx->pc = 0x332E08u;
            // 0x332e08: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x332E0Cu;
        goto label_332e0c;
    }
    ctx->pc = 0x332E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x332E0Cu);
        ctx->pc = 0x332E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332E04u;
            // 0x332e08: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x332E0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x332E0Cu; }
            if (ctx->pc != 0x332E0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x332E0Cu;
label_332e0c:
    // 0x332e0c: 0xa2620c79  sb          $v0, 0xC79($s3)
    ctx->pc = 0x332e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3193), (uint8_t)GPR_U32(ctx, 2));
label_332e10:
    // 0x332e10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x332e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_332e14:
    // 0x332e14: 0x1000006c  b           . + 4 + (0x6C << 2)
label_332e18:
    if (ctx->pc == 0x332E18u) {
        ctx->pc = 0x332E18u;
            // 0x332e18: 0xa2620c78  sb          $v0, 0xC78($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 3192), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x332E1Cu;
        goto label_332e1c;
    }
    ctx->pc = 0x332E14u;
    {
        const bool branch_taken_0x332e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332E14u;
            // 0x332e18: 0xa2620c78  sb          $v0, 0xC78($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 3192), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e14) {
            ctx->pc = 0x332FC8u;
            goto label_332fc8;
        }
    }
    ctx->pc = 0x332E1Cu;
label_332e1c:
    // 0x332e1c: 0x82650c79  lb          $a1, 0xC79($s3)
    ctx->pc = 0x332e1cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3193)));
label_332e20:
    // 0x332e20: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x332e20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_332e24:
    // 0x332e24: 0x320f809  jalr        $t9
label_332e28:
    if (ctx->pc == 0x332E28u) {
        ctx->pc = 0x332E28u;
            // 0x332e28: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x332E2Cu;
        goto label_332e2c;
    }
    ctx->pc = 0x332E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x332E2Cu);
        ctx->pc = 0x332E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332E24u;
            // 0x332e28: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x332E2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x332E2Cu; }
            if (ctx->pc != 0x332E2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x332E2Cu;
label_332e2c:
    // 0x332e2c: 0x92630c78  lbu         $v1, 0xC78($s3)
    ctx->pc = 0x332e2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3192)));
label_332e30:
    // 0x332e30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x332e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_332e34:
    // 0x332e34: 0x10000064  b           . + 4 + (0x64 << 2)
label_332e38:
    if (ctx->pc == 0x332E38u) {
        ctx->pc = 0x332E38u;
            // 0x332e38: 0xa2620c78  sb          $v0, 0xC78($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 3192), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x332E3Cu;
        goto label_332e3c;
    }
    ctx->pc = 0x332E34u;
    {
        const bool branch_taken_0x332e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332E34u;
            // 0x332e38: 0xa2620c78  sb          $v0, 0xC78($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 3192), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e34) {
            ctx->pc = 0x332FC8u;
            goto label_332fc8;
        }
    }
    ctx->pc = 0x332E3Cu;
label_332e3c:
    // 0x332e3c: 0x8e63077c  lw          $v1, 0x77C($s3)
    ctx->pc = 0x332e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1916)));
label_332e40:
    // 0x332e40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x332e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_332e44:
    // 0x332e44: 0xa2620c7a  sb          $v0, 0xC7A($s3)
    ctx->pc = 0x332e44u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3194), (uint8_t)GPR_U32(ctx, 2));
label_332e48:
    // 0x332e48: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x332e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_332e4c:
    // 0x332e4c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x332e4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_332e50:
    // 0x332e50: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x332e50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_332e54:
    // 0x332e54: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_332e58:
    if (ctx->pc == 0x332E58u) {
        ctx->pc = 0x332E58u;
            // 0x332e58: 0x82640c7a  lb          $a0, 0xC7A($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3194)));
        ctx->pc = 0x332E5Cu;
        goto label_332e5c;
    }
    ctx->pc = 0x332E54u;
    {
        const bool branch_taken_0x332e54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x332e54) {
            ctx->pc = 0x332E58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332E54u;
            // 0x332e58: 0x82640c7a  lb          $a0, 0xC7A($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3194)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x332E64u;
            goto label_332e64;
        }
    }
    ctx->pc = 0x332E5Cu;
label_332e5c:
    // 0x332e5c: 0x1000005a  b           . + 4 + (0x5A << 2)
label_332e60:
    if (ctx->pc == 0x332E60u) {
        ctx->pc = 0x332E60u;
            // 0x332e60: 0xa2650c78  sb          $a1, 0xC78($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 3192), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x332E64u;
        goto label_332e64;
    }
    ctx->pc = 0x332E5Cu;
    {
        const bool branch_taken_0x332e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332E5Cu;
            // 0x332e60: 0xa2650c78  sb          $a1, 0xC78($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 3192), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e5c) {
            ctx->pc = 0x332FC8u;
            goto label_332fc8;
        }
    }
    ctx->pc = 0x332E64u;
label_332e64:
    // 0x332e64: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x332e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_332e68:
    // 0x332e68: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x332e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_332e6c:
    // 0x332e6c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x332e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_332e70:
    // 0x332e70: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x332e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_332e74:
    // 0x332e74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x332e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_332e78:
    // 0x332e78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x332e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_332e7c:
    // 0x332e7c: 0x8c830d6c  lw          $v1, 0xD6C($a0)
    ctx->pc = 0x332e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
label_332e80:
    // 0x332e80: 0x90710010  lbu         $s1, 0x10($v1)
    ctx->pc = 0x332e80u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_332e84:
    // 0x332e84: 0x12220050  beq         $s1, $v0, . + 4 + (0x50 << 2)
label_332e88:
    if (ctx->pc == 0x332E88u) {
        ctx->pc = 0x332E8Cu;
        goto label_332e8c;
    }
    ctx->pc = 0x332E84u;
    {
        const bool branch_taken_0x332e84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x332e84) {
            ctx->pc = 0x332FC8u;
            goto label_332fc8;
        }
    }
    ctx->pc = 0x332E8Cu;
label_332e8c:
    // 0x332e8c: 0x8c820e38  lw          $v0, 0xE38($a0)
    ctx->pc = 0x332e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_332e90:
    // 0x332e90: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x332e90u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_332e94:
    // 0x332e94: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_332e98:
    if (ctx->pc == 0x332E98u) {
        ctx->pc = 0x332E98u;
            // 0x332e98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332E9Cu;
        goto label_332e9c;
    }
    ctx->pc = 0x332E94u;
    {
        const bool branch_taken_0x332e94 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x332E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332E94u;
            // 0x332e98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e94) {
            ctx->pc = 0x332EACu;
            goto label_332eac;
        }
    }
    ctx->pc = 0x332E9Cu;
label_332e9c:
    // 0x332e9c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x332e9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_332ea0:
    // 0x332ea0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_332ea4:
    if (ctx->pc == 0x332EA4u) {
        ctx->pc = 0x332EA8u;
        goto label_332ea8;
    }
    ctx->pc = 0x332EA0u;
    {
        const bool branch_taken_0x332ea0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x332ea0) {
            ctx->pc = 0x332EACu;
            goto label_332eac;
        }
    }
    ctx->pc = 0x332EA8u;
label_332ea8:
    // 0x332ea8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x332ea8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_332eac:
    // 0x332eac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_332eb0:
    if (ctx->pc == 0x332EB0u) {
        ctx->pc = 0x332EB4u;
        goto label_332eb4;
    }
    ctx->pc = 0x332EACu;
    {
        const bool branch_taken_0x332eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x332eac) {
            ctx->pc = 0x332EC8u;
            goto label_332ec8;
        }
    }
    ctx->pc = 0x332EB4u;
label_332eb4:
    // 0x332eb4: 0xc075eb4  jal         func_1D7AD0
label_332eb8:
    if (ctx->pc == 0x332EB8u) {
        ctx->pc = 0x332EBCu;
        goto label_332ebc;
    }
    ctx->pc = 0x332EB4u;
    SET_GPR_U32(ctx, 31, 0x332EBCu);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332EBCu; }
        if (ctx->pc != 0x332EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332EBCu; }
        if (ctx->pc != 0x332EBCu) { return; }
    }
    ctx->pc = 0x332EBCu;
label_332ebc:
    // 0x332ebc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_332ec0:
    if (ctx->pc == 0x332EC0u) {
        ctx->pc = 0x332EC4u;
        goto label_332ec4;
    }
    ctx->pc = 0x332EBCu;
    {
        const bool branch_taken_0x332ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x332ebc) {
            ctx->pc = 0x332EC8u;
            goto label_332ec8;
        }
    }
    ctx->pc = 0x332EC4u;
label_332ec4:
    // 0x332ec4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x332ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_332ec8:
    // 0x332ec8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x332ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_332ecc:
    // 0x332ecc: 0x10182b  sltu        $v1, $zero, $s0
    ctx->pc = 0x332eccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_332ed0:
    // 0x332ed0: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x332ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_332ed4:
    // 0x332ed4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x332ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_332ed8:
    // 0x332ed8: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x332ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_332edc:
    // 0x332edc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x332edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_332ee0:
    // 0x332ee0: 0x24c6d308  addiu       $a2, $a2, -0x2CF8
    ctx->pc = 0x332ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955784));
label_332ee4:
    // 0x332ee4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x332ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_332ee8:
    // 0x332ee8: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x332ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_332eec:
    // 0x332eec: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x332eecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_332ef0:
    // 0x332ef0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x332ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_332ef4:
    // 0x332ef4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x332ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_332ef8:
    // 0x332ef8: 0x24632568  addiu       $v1, $v1, 0x2568
    ctx->pc = 0x332ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9576));
label_332efc:
    // 0x332efc: 0x24425200  addiu       $v0, $v0, 0x5200
    ctx->pc = 0x332efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
label_332f00:
    // 0x332f00: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x332f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_332f04:
    // 0x332f04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x332f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_332f08:
    // 0x332f08: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x332f08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
label_332f0c:
    // 0x332f0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x332f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_332f10:
    // 0x332f10: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x332f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_332f14:
    // 0x332f14: 0x80680000  lb          $t0, 0x0($v1)
    ctx->pc = 0x332f14u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_332f18:
    // 0x332f18: 0x24e7d2f0  addiu       $a3, $a3, -0x2D10
    ctx->pc = 0x332f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955760));
label_332f1c:
    // 0x332f1c: 0xc043be4  jal         func_10EF90
label_332f20:
    if (ctx->pc == 0x332F20u) {
        ctx->pc = 0x332F20u;
            // 0x332f20: 0x2224821  addu        $t1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x332F24u;
        goto label_332f24;
    }
    ctx->pc = 0x332F1Cu;
    SET_GPR_U32(ctx, 31, 0x332F24u);
    ctx->pc = 0x332F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332F1Cu;
            // 0x332f20: 0x2224821  addu        $t1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332F24u; }
        if (ctx->pc != 0x332F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332F24u; }
        if (ctx->pc != 0x332F24u) { return; }
    }
    ctx->pc = 0x332F24u;
label_332f24:
    // 0x332f24: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x332f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_332f28:
    // 0x332f28: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x332f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_332f2c:
    // 0x332f2c: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x332f2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_332f30:
    // 0x332f30: 0x24635204  addiu       $v1, $v1, 0x5204
    ctx->pc = 0x332f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20996));
label_332f34:
    // 0x332f34: 0x24425208  addiu       $v0, $v0, 0x5208
    ctx->pc = 0x332f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21000));
label_332f38:
    // 0x332f38: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x332f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_332f3c:
    // 0x332f3c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x332f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_332f40:
    // 0x332f40: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x332f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_332f44:
    // 0x332f44: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x332f44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_332f48:
    // 0x332f48: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x332f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_332f4c:
    // 0x332f4c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x332f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_332f50:
    // 0x332f50: 0x320f809  jalr        $t9
label_332f54:
    if (ctx->pc == 0x332F54u) {
        ctx->pc = 0x332F54u;
            // 0x332f54: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x332F58u;
        goto label_332f58;
    }
    ctx->pc = 0x332F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x332F58u);
        ctx->pc = 0x332F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332F50u;
            // 0x332f54: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x332F58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x332F58u; }
            if (ctx->pc != 0x332F58u) { return; }
        }
        }
    }
    ctx->pc = 0x332F58u;
label_332f58:
    // 0x332f58: 0xa2620c79  sb          $v0, 0xC79($s3)
    ctx->pc = 0x332f58u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3193), (uint8_t)GPR_U32(ctx, 2));
label_332f5c:
    // 0x332f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x332f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_332f60:
    // 0x332f60: 0x10000019  b           . + 4 + (0x19 << 2)
label_332f64:
    if (ctx->pc == 0x332F64u) {
        ctx->pc = 0x332F64u;
            // 0x332f64: 0xa2620c78  sb          $v0, 0xC78($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 3192), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x332F68u;
        goto label_332f68;
    }
    ctx->pc = 0x332F60u;
    {
        const bool branch_taken_0x332f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332F60u;
            // 0x332f64: 0xa2620c78  sb          $v0, 0xC78($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 3192), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332f60) {
            ctx->pc = 0x332FC8u;
            goto label_332fc8;
        }
    }
    ctx->pc = 0x332F68u;
label_332f68:
    // 0x332f68: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x332f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_332f6c:
    // 0x332f6c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x332f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_332f70:
    // 0x332f70: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x332f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_332f74:
    // 0x332f74: 0x24632568  addiu       $v1, $v1, 0x2568
    ctx->pc = 0x332f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9576));
label_332f78:
    // 0x332f78: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x332f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_332f7c:
    // 0x332f7c: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x332f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_332f80:
    // 0x332f80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x332f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_332f84:
    // 0x332f84: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x332f84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_332f88:
    // 0x332f88: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_332f8c:
    if (ctx->pc == 0x332F8Cu) {
        ctx->pc = 0x332F8Cu;
            // 0x332f8c: 0x33e3c  dsll32      $a3, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 24));
        ctx->pc = 0x332F90u;
        goto label_332f90;
    }
    ctx->pc = 0x332F88u;
    {
        const bool branch_taken_0x332f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x332f88) {
            ctx->pc = 0x332F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332F88u;
            // 0x332f8c: 0x33e3c  dsll32      $a3, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x332F98u;
            goto label_332f98;
        }
    }
    ctx->pc = 0x332F90u;
label_332f90:
    // 0x332f90: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x332f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_332f94:
    // 0x332f94: 0x33e3c  dsll32      $a3, $v1, 24
    ctx->pc = 0x332f94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 24));
label_332f98:
    // 0x332f98: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x332f98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_332f9c:
    // 0x332f9c: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x332f9cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
label_332fa0:
    // 0x332fa0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x332fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_332fa4:
    // 0x332fa4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x332fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_332fa8:
    // 0x332fa8: 0xc043be4  jal         func_10EF90
label_332fac:
    if (ctx->pc == 0x332FACu) {
        ctx->pc = 0x332FACu;
            // 0x332fac: 0x24c6d318  addiu       $a2, $a2, -0x2CE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955800));
        ctx->pc = 0x332FB0u;
        goto label_332fb0;
    }
    ctx->pc = 0x332FA8u;
    SET_GPR_U32(ctx, 31, 0x332FB0u);
    ctx->pc = 0x332FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332FA8u;
            // 0x332fac: 0x24c6d318  addiu       $a2, $a2, -0x2CE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332FB0u; }
        if (ctx->pc != 0x332FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332FB0u; }
        if (ctx->pc != 0x332FB0u) { return; }
    }
    ctx->pc = 0x332FB0u;
label_332fb0:
    // 0x332fb0: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x332fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_332fb4:
    // 0x332fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x332fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_332fb8:
    // 0x332fb8: 0xc0746a0  jal         func_1D1A80
label_332fbc:
    if (ctx->pc == 0x332FBCu) {
        ctx->pc = 0x332FBCu;
            // 0x332fbc: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x332FC0u;
        goto label_332fc0;
    }
    ctx->pc = 0x332FB8u;
    SET_GPR_U32(ctx, 31, 0x332FC0u);
    ctx->pc = 0x332FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332FB8u;
            // 0x332fbc: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1A80u;
    if (runtime->hasFunction(0x1D1A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D1A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332FC0u; }
        if (ctx->pc != 0x332FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1A80_0x1d1a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332FC0u; }
        if (ctx->pc != 0x332FC0u) { return; }
    }
    ctx->pc = 0x332FC0u;
label_332fc0:
    // 0x332fc0: 0x10000002  b           . + 4 + (0x2 << 2)
label_332fc4:
    if (ctx->pc == 0x332FC4u) {
        ctx->pc = 0x332FC4u;
            // 0x332fc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x332FC8u;
        goto label_332fc8;
    }
    ctx->pc = 0x332FC0u;
    {
        const bool branch_taken_0x332fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332FC0u;
            // 0x332fc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332fc0) {
            ctx->pc = 0x332FCCu;
            goto label_332fcc;
        }
    }
    ctx->pc = 0x332FC8u;
label_332fc8:
    // 0x332fc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x332fc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_332fcc:
    // 0x332fcc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x332fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_332fd0:
    // 0x332fd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x332fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_332fd4:
    // 0x332fd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x332fd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_332fd8:
    // 0x332fd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x332fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_332fdc:
    // 0x332fdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x332fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_332fe0:
    // 0x332fe0: 0x3e00008  jr          $ra
label_332fe4:
    if (ctx->pc == 0x332FE4u) {
        ctx->pc = 0x332FE4u;
            // 0x332fe4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x332FE8u;
        goto label_332fe8;
    }
    ctx->pc = 0x332FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332FE0u;
            // 0x332fe4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x332FE8u;
label_332fe8:
    // 0x332fe8: 0x0  nop
    ctx->pc = 0x332fe8u;
    // NOP
label_332fec:
    // 0x332fec: 0x0  nop
    ctx->pc = 0x332fecu;
    // NOP
label_332ff0:
    // 0x332ff0: 0x3e00008  jr          $ra
label_332ff4:
    if (ctx->pc == 0x332FF4u) {
        ctx->pc = 0x332FF8u;
        goto label_332ff8;
    }
    ctx->pc = 0x332FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x332FF8u;
label_332ff8:
    // 0x332ff8: 0x0  nop
    ctx->pc = 0x332ff8u;
    // NOP
label_332ffc:
    // 0x332ffc: 0x0  nop
    ctx->pc = 0x332ffcu;
    // NOP
}
